# Chapter 3

---

## 여러 명이 함께 Git으로 협업하기.

### 1. 원격저장소에서 협업하기 : 브랜치(Branch)

- 새로 만든 커밋은 기존 커밋 다음에 시간 순으로 쌓이게 된다.
- 한 명이 작업한다면 한 줄로 계속 커밋을 쌓을 수 있지만, 여러명이 작업한다면 다양한 갈래로 나뉠 수 있다. → 이렇게 특정 기준에서 줄기를 나누어 작업할 수 있는 기능을 브랜치라고 한다.
- 브랜치 이동하기: 체크아웃(checkout)

### 2. 브랜치와 브랜치를 합치기 : 병합(merge, 머지)

- master 브랜치를 기준으로 병합한다는 것은 합친 결과물을 (master)브랜치에 반영한다는 것을 의미한다. A브랜치와 B브랜치 두 개를 합쳤을 때 만들어진 AB브랜치를 A브랜치에 올릴건지 B브랜치에 올릴건지 정하는 것이다. 만약 A브랜치에 올린다면 AB브랜치에만 반영되는 문제가 발생할 수 있다.

### 3. 둘이 같은 코드를 고친경우 : 충동(conflict) 해결하기

- 두 커밋이 같은 코드를 수정했다면 머지를 하다 충돌이 발생할 수 있다. 따라서 나만 쓰는 브랜치에서 머지를 해보고 문제가 있는지 확인하는 것이 좋다.

### 4. 브랜치를 합치는 예의바른 방법 : 풀 리퀘스트

- 풀 리퀘스트란 협업하는 사람에게 브랜치 병합을 요청하는 메시지를 보내는 것이다.

### 5. 개발이 완료되었습니다. 출시하자! : 릴리즈(release)

- 프로그램의 버전이란? 출시할 때, 혹은 업데이트를 할 때 특정 시점을 의미한다.