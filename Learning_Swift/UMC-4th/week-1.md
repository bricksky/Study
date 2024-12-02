- iOS
  - iOS를 생각했을 때 떠오르는 것들은 무엇이 있을까요?
  - MVC/MVVM 패턴
- Platform
  - 사전에서 플랫폼은 어떤 의미라고 나와있나요?
    - 플랫폼(Platform)은 다양한 사용자들이 상호 작용하고, 서비스를 제공하고, 애플리케이션을 실행할 수 있는 하드웨어나 소프트웨어 기술의 집합을 말합니다.
  - 컴퓨터에서 플랫폼이라고 부르는 것들은 어떤 것일까요?
    - 운영 체제 플랫폼: Windows, Mac OS, Linux
  - 플랫폼의 특징은 무엇이 있을까요?
    - 1. 중개자 역할: 플랫폼은 사용자와 서비스 제공자 사이에서 중개자 역할을 수행합니다. 이를 통해, 서로 다른 사용자 간의 상호 작용이 가능하게 되며, 이를 통해 새로운 비즈니스 기회가 탄생할 수 있습니다.
      2. 확장성: 플랫폼은 다양한 비즈니스 모델을 지원할 수 있도록 설계되어 있습니다. 이를 통해, 기업들은 플랫폼을 이용해 새로운 시장을 개척하고, 새로운 수익 모델을 창출할 수 있습니다.
- API (Application Programming Interface)
  - API의 정의가 무엇일까요?
    - API란 "Application Programming Interface"의 약어로, 응용 프로그램에서 다른 소프트웨어나 서비스와 상호 작용할 수 있도록 하는 인터페이스를 말합니다.
  - 일반적으로 개발에서 API는 어떤 곳에 쓰일까요?
    - 시스템간의 통신을 위해
    - 데이터를 공유하고 처리하기 위해
  - iOS에서 API는 어떤 곳에 쓰일까요?
    - Cocoa Touch API
      - Cocoa Touch API는 iOS 애플리케이션의 사용자 인터페이스와 상호 작용하는 데 사용됩니다. 이 API는 UIKit 프레임워크에 포함되어 있으며, 버튼, 텍스트 필드, 테이블 뷰 등과 같은 인터페이스 요소를 생성하고 관리하는 데 사용됩니다.
- Xcode Project
  - ## AppProject에서 설정할 수 있는 것은 어떤 것이 있을까요?
    1. General: 애플리케이션의 기본 정보와 설정을 제공합니다. 애플리케이션의 이름, 아이콘, 버전, 빌드 번호 등의 정보를 설정할 수 있습니다.
    2. Signing & Capabilities: 애플리케이션의 보안과 권한 설정을 관리합니다. 애플리케이션에 필요한 권한, 예를 들면 카메라, 마이크, 위치 등에 대한 설정을 관리합니다.
    3. Info: 애플리케이션에 대한 메타데이터와 기본 정보를 제공합니다. 애플리케이션의 번들 ID, URL Scheme, URL Types 등의 정보를 설정할 수 있습니다.
    4. Build Settings: 애플리케이션의 빌드 설정을 제어합니다. 빌드 환경, 컴파일러 설정, 링커 설정 등을 변경할 수 있습니다.
    5. Debugging: 디버깅 및 오류 처리 설정을 제어합니다. 애플리케이션 실행 중에 오류를 처리하고 디버깅할 수 있는 옵션을 제공합니다.
    6. Deployment: 애플리케이션의 배포 설정을 관리합니다. 타겟 디바이스, 배포 버전 등을 설정할 수 있습니다.
    7. Assets: 애플리케이션에 사용되는 이미지, 아이콘, 음원 등의 자원 파일을 관리합니다.
    8. Localization: 애플리케이션의 다국어 지원을 관리합니다. 지원되는 언어, 번역 파일 등을 설정할 수 있습니다.
    9. Entitlements: 애플리케이션의 권한 설정과 관련된 옵션을 제공합니다. iCloud, 푸시 알림 등의 기능을 사용하기 위한 권한을 설정할 수 있습니다.
  - Bundle ID란 무엇일까요?
    - Xcode에서 Bundle ID(Bundle Identifier)는 애플리케이션을 식별하는 고유한 문자열입니다. Bundle ID는 iOS 애플리케이션, macOS 애플리케이션, watchOS 애플리케이션, tvOS 애플리케이션 등 모든 애플리케이션에서 사용됩니다.
  - Info.plist란 무엇일까요?
    - Info.plist는 Xcode 프로젝트에서 애플리케이션에 대한 정보를 포함하는 파일입니다. 이 파일은 애플리케이션의 설정 정보를 XML 형식으로 저장합니다. Info.plist 파일에는 애플리케이션 이름, 버전, 아이콘, 개발자 정보 등의 메타데이터가 포함됩니다.
      Info.plist 파일은 애플리케이션의 생명 주기 동안 많은 역할을 수행합니다. 예를 들어, iOS에서는 애플리케이션을 실행하기 전에 Info.plist 파일을 로드하여 애플리케이션의 정보를 확인하고 필요한 리소스를 로드합니다. 또한, Info.plist 파일은 애플리케이션에 필요한 권한, 예를 들면 카메라, 위치, 마이크 등에 대한 권한도 설정할 수 있습니다.
      Xcode에서 Info.plist 파일을 수정하려면, App Project의 타겟을 선택하고, Info 탭에서 해당 파일을 찾아 수정할 수 있습니다. 이 파일은 애플리케이션의 설정 정보를 포함하기 때문에, 적절한 설정을 해주어야만 애플리케이션이 정상적으로 동작할 수 있습니다.
  - Info.plist에는 어떤 구성 요소가 있을까요? (주요 속성 5가지 이상을 조사해보세요.)
    - 1. Bundle identifier: 애플리케이션의 고유 식별자로, 애플리케이션을 식별하기 위해 사용됩니다. 이 속성은 일반적으로 "com.companyname.appname"과 같은 형식으로 구성됩니다.
      2. Bundle name: 애플리케이션의 이름을 지정합니다. 이 속성은 애플리케이션 아이콘 아래에 표시되는 이름으로 사용됩니다.
      3. Version: 애플리케이션의 버전을 지정합니다. 이 속성은 애플리케이션을 업데이트할 때 사용됩니다.
      4. MinimumOSVersion: 애플리케이션이 실행되기 위해 필요한 최소 iOS 버전을 지정합니다. 이 속성은 애플리케이션을 개발할 때, 지원되는 iOS 버전을 결정하는 데 사용됩니다.
      5. Device orientations: 애플리케이션이 지원하는 디바이스의 방향을 지정합니다. 이 속성은 애플리케이션이 회전되었을 때 어떻게 동작할지 결정하는 데 사용됩니다.
- Storyboard
  - Storyboard란 무엇일까요?
    - Storyboard는 iOS 애플리케이션의 UI를 구성하는 데 사용되는 그래픽 인터페이스 (GUI) 디자인 도구입니다. Xcode에서 제공되며, iOS 애플리케이션 개발을 위한 기본 도구 중 하나입니다.
  - Scene과 Segue는 무엇이고, 어떤 역할을 할까요?
    - Scene은 iOS 애플리케이션의 화면을 나타내는 개념입니다. 하나의 Scene은 사용자 인터페이스의 한 부분을 나타내며, 예를 들어 애플리케이션의 로그인 화면, 설정 화면 등이 Scene이 될 수 있습니다. Scene은 ViewController와 관련되어 있으며, ViewController는 Scene의 뷰를 관리하고, 사용자 입력에 따라 이벤트를 처리합니다.
      Segue는 iOS 애플리케이션에서 Scene 간의 전환을 가능하게 하는 연결을 의미합니다. 쉽게 말해, 사용자가 버튼을 탭하거나 다른 이벤트를 발생시키면, Segue가 실행되어 새로운 Scene으로 전환됩니다. Segue는 두 개의 Scene을 연결하고, 전환 애니메이션을 적용하고, 전환 시에 데이터를 전달하는 등의 역할을 수행합니다.
  - ViewController가 무엇이고, 어떤 역할을 할까요?
    - ViewController는 iOS 애플리케이션에서 화면을 관리하는 객체입니다. 각각의 ViewController는 하나의 Scene에 대응하며, Scene의 뷰를 관리하고, 사용자 입력에 따라 이벤트를 처리하며, 데이터를 관리하고, 다른 ViewController와의 상호작용을 수행합니다.
- AutoLayout
  - AutoLayout이란 무엇이고, 어떤 역할을 할까요?
    - AutoLayout은 iOS 애플리케이션에서 사용되는 인터페이스 요소들의 배치와 크기를 관리하는 시스템입니다. AutoLayout을 사용하면, 다양한 디바이스에서 애플리케이션의 인터페이스 요소들이 일관되게 배치되고 크기가 조정될 수 있습니다.
  - AutoLayout을 적용해야 하는 이유는 무엇일까요?
    - AutoLayout을 사용하면, 인터페이스 요소들의 배치와 크기를 코드로 관리할 필요가 없으므로, 시간과 비용을 절약할 수 있습니다. 또한, AutoLayout은 사용자 인터페이스의 일관성과 호환성을 유지할 수 있도록 도와주며, 사용자 경험을 향상시킬 수 있습니다.
  - Constraint(제약 조건)은 어떤 것들이 있을까요?
    - 위치 제약조건
    - 간격 제약조건
    - 비율 제약조건
- UIKit
  - UIKit는 무엇이고, 어떤 역할을 할까요?
    - UIKit은 Apple의 iOS, iPadOS, tvOS, watchOS 운영 체제를 위한 UI(User Interface) 프레임워크입니다. UIKit은 iOS 애플리케이션 개발에 필요한 UI 요소를 제공하며, 애플리케이션을 만드는 데 필요한 기본적인 기능을 제공합니다.
  - UIKit을 사용하기 위해 필수로 설정해야하는 2개는 무엇일까요?
    - 1. UIKit 프레임워크 추가하기: Xcode에서 새 프로젝트를 생성할 때, 프로젝트 타입을 iOS Application으로 선택하면 자동으로 UIKit 프레임워크가 추가됩니다. 만약 UIKit 프레임워크가 추가되어 있지 않다면, 프로젝트 설정에서 프레임워크를 추가해주어야 합니다.
      2. UI 요소 추가하기: UI 요소를 추가하기 위해서는 Interface Builder를 사용합니다. Interface Builder는 Xcode의 시각적 인터페이스 디자인 도구로서, UI 요소를 드래그 앤 드롭하여 쉽게 추가할 수 있습니다. 추가한 UI 요소들은 코드와 연결하여 동작하도록 구현해야 합니다. 이를 위해 IBOutlet 및 IBAction을 사용하여 UI 요소와 코드를 연결합니다.
- UI Component
  - ## 대표적인 UI Component들은 무엇이 있을까요? (주요 Component 10개 이상을 조사해보고, 속성도 함께 찾아보세요.)
    UIButton
    - title: 버튼에 표시되는 문자열
    - setTitleColor(\_:for:): 버튼의 제목 색상 설정
    - setImage(\_:for:): 버튼에 표시되는 이미지 설정
      UILabel
    - text: 레이블에 표시되는 문자열
    - textColor: 레이블의 텍스트 색상 설정
    - font: 레이블의 폰트 설정
      UITextField
    - text: 텍스트 필드에 표시되는 문자열
    - textColor: 텍스트 필드의 텍스트 색상 설정
    - placeholder: 텍스트 필드에 입력되기 전에 표시되는 미리보기 문자열
      UITextView
    - text: 텍스트 뷰에 표시되는 문자열
    - textColor: 텍스트 뷰의 텍스트 색상 설정
    - font: 텍스트 뷰의 폰트 설정
      UIImageView
    - image: 이미지 뷰에 표시되는 이미지 설정
    - contentMode: 이미지 뷰의 콘텐츠 모드 설정
      UISlider
    - value: 슬라이더의 값을 나타내는 속성
    - minimumValue: 슬라이더의 최소 값 설정
    - maximumValue: 슬라이더의 최대 값 설정
      UISwitch
    - isOn: 스위치의 on/off 상태를 나타내는 속성
    - tintColor: 스위치의 틴트 색상 설정
      UIActivityIndicatorView
    - startAnimating(): 활동 표시기를 시작하는 메서드
    - stopAnimating(): 활동 표시기를 중지하는 메서드
      UITableView
    - numberOfRows(inSection:): 테이블 뷰 섹션의 행 수 반환하는 메서드
    - dequeueReusableCell(withIdentifier:for:): 재사용 가능한 테이블 셀 가져오는 메서드
      UICollectionView
    - numberOfItems(inSection:): 컬렉션 뷰 섹션의 아이템 수 반환하는 메서드
    - dequeueReusableCell(withReuseIdentifier:for:): 재사용 가능한 컬렉션 뷰 셀 가져오는 메서드
