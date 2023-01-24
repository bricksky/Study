# Chapter 1

---

<aside>
💡 git init

</aside>

→ 내가 만든 파일을 git에게 관리해달라고 보내는 명령어이다.

mac의 경우

<aside>
💡 command + shift + .(마침표)

</aside>

→ 위의 명령어를 입력함으로써 파일 내의 숨김 파일을 찾을 수 있다.

![](https://velog.velcdn.com/images/bricksky/post/3edef387-d82d-4040-a181-2ad38431d28c/image.png)

\*해당 .git 파일을 삭제하게 되면 git이 관리하던 파일들은 모두 삭제되는 것이다.

- 실습

![](https://velog.velcdn.com/images/bricksky/post/c38b0654-d896-4269-9832-4c6c3eedec8f/image.png)

내용을 입력한 후 저장을 했지만, 이게 Git에 저장된 것은 아니다.

### Git의 관리에서 특정 파일/폴더를 배제해야 할 경우

- 포함할 필요가 없을 때
  - 자동으로 생성 혹은 다운로드 되는 파일들 (빌드 결과물, 라이브러리)
- 포함하지 말아야 할 때
  - 보안상 민감한 정보를 담은 파일

<aside>
💡 .gitignore 파일을 사용해 배제할 요소들을 지정하면 된다.

</aside>

- 실습

![](https://velog.velcdn.com/images/bricksky/post/19659c8c-996f-4313-9453-0e8644c1496d/image.png)

.gitignore 파일을 생성한 후, 보여주고 싶지 않은 파일인 secrets.yaml을

![](https://velog.velcdn.com/images/bricksky/post/303b5485-7662-46aa-9a71-ad9a3be3c355/image.png)

위의 사진처럼 입력한 후 저장하면 된다.

![스크린샷 2023-01-22 오후 11.59.59.png]![](https://velog.velcdn.com/images/bricksky/post/f207fc93-75c0-41c8-b5ed-b049fd4ad2bf/image.png)

secrets.yaml 파일은 보이지 않고, git status에 .gitignore 파일이 생성된 것을 알 수 있다.

- .gitignore에 secret.yaml을 입력해 저장한 후 secret.yaml 파일이 사라진 것과 같이,
  .gitignore에 secret.yaml을 지운 후 저장하면 터미널에는 원래대로 secret.yaml 파일이 나타난다.
  ![](https://velog.velcdn.com/images/bricksky/post/391ad328-31d0-43f3-aba9-7b828d382029/image.png)
  [Git - gitignore Documentation](https://git-scm.com/docs/gitignore)
  위의 사진과 같이 다양한 양식이 존재하며 해당 사이트에 접속하여 .gitignore와 관련한 추가 정보를 얻을 수 있다.
