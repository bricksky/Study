## Life cycle

### 1. \***\*Managing your app’s life cycle\*\***

application의 4가지 모드

![](https://velog.velcdn.com/images/bricksky/post/06941c1a-f8b9-4db5-afc8-57ed05f5f2f4/image.png)

1. 앱 실행

- Application은 Active 상태가 됨.
- Active는 InActive에 감싸져 있어 Active로 들어가거나 나갈 때에는 InActive 상태를 거쳐야 함.

1. Foreground / Background

- Foreground : 앱이 화면을 점유
- Background : 앱이 화면을 점유하고 있지 않음.
- 공통점 : 앱이 메모리에 올라가 있다.

1. 사용자가 full control이 불가하다면 InActive 상태

- 전화가 와서 사용자가 control 할 수 없는 상황
  !![](https://velog.velcdn.com/images/bricksky/post/de46c32e-d57c-42f4-a68f-97ab1609f9eb/image.png)

1. Background

- InActive → Background_Suspend
  - InActive상태에서 전화를 받으면 다른 앱들은 Background 모드의 Suspend상태가 된다. 언제 나를 다시 불러줄지 아무것도 안하고 기다리는 상태.
- InActive → Background_Running
  - 전화를 받고 있으면서 메일이 보내질 때. 업로드/타이머 관련 일 등.
  - 따라서 Application에서 Background Running도 허용됨
    하지만 보안 문제 때문에 기본으로 Apple에서 적용되는 앱 이외에는 거의 제한됨.

1. 앱 종료

- Time out : 앱은 Not Running 상태가 됨. 메모리에서 내려감.

!![](https://velog.velcdn.com/images/bricksky/post/26c0f824-0b54-436b-bb2e-43009e722377/image.png)

- 성공적으로 앱 종료시 → Suspend 상태 → 메모리 부족시, Not Running 상태

!![](https://velog.velcdn.com/images/bricksky/post/654b77cd-d83b-4d2c-8d99-e28e1c6e6a17/image.png)

### **뷰 컨트롤러의 생명주기**

[iOS ) View Controller의 생명주기(Life-Cycle)](https://zeddios.tistory.com/43)

*뷰*가 보이고 사라지는 변화가 있을 때, 뷰 컨트롤러는 그에 해당하*는 메소드 호출.*

_따라서 각각의 모든 뷰에는 뷰 생명주기가 적용됨._

!![](https://velog.velcdn.com/images/bricksky/post/9cf50716-440a-4e7e-b745-0920948833b5/image.png)

**viewDidLoad**

- 화면에 뷰가 나타날 때 준비하는 작업
- 화면이 처음 만들어질 때 자동으로 한 번만 실행되므로 처음 한 번만 실행해야 하는 초기화 코드(리소스를 초기화하거나 초기 화면 구성)가 있을 경우 이 메소드에 작성

**viewWillAppear**

- 뷰가 나타날 것이라는 신호를 컨트롤러에게 알리는 역할
- viewDidLoad 와의 차이
  - viewDidLoad, viewWillAppear 모두 뷰가 나타나기 직전에 호출되지만 다른뷰에서 갔다가 다시 돌아오는 상황에 해주고 싶은 처리는 viewWillAppear에서 처리

**viewDidAppear**

- 뷰가 나타났다는 것을 컨트롤러에게 알리는 역할
- 화면에 적용될 애니메이션을 그려줌
- 뷰가 화면에 나타난 직후 실행됨

**viewWillDisappear**

- 뷰가 사라지기 직전에 호출.

**viewDidDisappear**

- 해당 메소드가 호출되면 뷰 컨트롤러가 뷰가 제거되었음을 알려줌.

!![](https://velog.velcdn.com/images/bricksky/post/1b893274-2e2a-4251-a5b8-499cb43e07a8/image.png)

1st → 2nd

viewWillAppear → viewDidAppear x

!![](https://velog.velcdn.com/images/bricksky/post/535c59aa-22d9-4e64-92b5-9833e70f46d3/image.png)

2nd → 1st

viewDidLoad 호출x

!![](https://velog.velcdn.com/images/bricksky/post/49a0cfde-a70c-4136-b93d-a6635547d6a1/image.png)

**loadView**

- 컨트롤러가 관리하는 뷰를 만드는 역할
- 즉, loadView 메소드가 뷰를 만들고, 메모리에 올린 후, viewDidLoad가 호출됨.\

```swift
override func viewDidLoad(){}
override func viewWillAppear(_ animated: Bool) {}
```

### 2. \***\*Responding to the launch of your app\*\***
