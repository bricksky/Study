[확인문제]

    1. 키보드로 데이터를 입력할 때 버퍼에 남아 있는 데이터를 모두 지우는 방법으로 적당한 것을 고르세요.

    (1)fflush(stdout)(2) while (getchar() != '\n');
(3) fgetc(stdin);
(4) scanf("%c", &ch);

(1 - 해설) 출력버퍼의 내용을 지울 때 사용한다.(3 - 해설) 버퍼에서 하나의 문자만을 가져와서 변환한다.(4 - 해설) 버퍼에서 하나의 문자만을 가져와서 ch에 저장한다.

    *fgetc함수 : 문자를 파일로부터 하나 읽어오는 함수이다.
                     ->읽기에 성공하면 하나의 읽은 문자를 변환하고 파일 끝에 도달하면 EOF(-1) 을 반환한다.
                         *fputc함수 : 문자를 파일에 쓰는 함수이다.
                     ->저장에 성공하면 저장한 문자를 변환하고 파일 끝에 도달하면 EOF(-1) 을 반환한다.