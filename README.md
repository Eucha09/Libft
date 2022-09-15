# **Libft**

C 라이브러리 만들기   
흔히 쓰이는 함수들을 재구성하여 이후의 프로젝트에 사용될 C 라이브러리를 만드는 것이다.

## **Functions**

### **Libc functions**

<details>
<summary>ft_isalpha</summary>
<div markdown="1">       

|**함수 이름**|ft_isalpha|
|-|-|
|**프로토타입**|int ft_isalpha(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|알파벳이면 1 아니면 0 반환|
|**설명**|해당 문자가 알파벳인지 확인하는 함수|

</div>
</details>

<details>
<summary>ft_isdigit</summary>
<div markdown="1">       

|**함수 이름**|ft_isdigit|
|-|-|
|**프로토타입**|int ft_isdigit(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|아스키코드 값으로 숫자이면 1 아니면 0 반환|
|**설명**|해당 문자가 숫자인지 확인하는 함수|

</div>
</details>

<details>
<summary>ft_isalnum</summary>
<div markdown="1">       

|**함수 이름**|ft_isalnum|
|-|-|
|**프로토타입**|int ft_isalnum(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|알파벳이거나 숫자이면 1 아니면 0 반환|
|**설명**|해당 문자가 알파벳이거나 숫자인지 확인하는 함수|

</div>
</details>

<details>
<summary>ft_isascii</summary>
<div markdown="1">       

|**함수 이름**|ft_isascii|
|-|-|
|**프로토타입**|int ft_isascii(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|아스키값(0~127)이면 1 아니면 0 반환|
|**설명**|해당 문자가 아스키값인지 확인하는 함수|

</div>
</details>

<details>
<summary>ft_isprint</summary>
<div markdown="1">       

|**함수 이름**|ft_isprint|
|-|-|
|**프로토타입**|int ft_isprint(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|출력가능한 문자이면 1 아니면 0 반환|
|**설명**|해당 문자가 출력가능한 문자인지 확인하는 함수|

</div>
</details>

<details>
<summary>ft_strlen</summary>
<div markdown="1">       

|**함수 이름**|ft_strlen|
|-|-|
|**프로토타입**|size_t ft_strlen(const char *s);|
|**매개변수**|#1. 문자열|
|**반환값**|문자열 길이를 반환|
|**설명**|문자열 길이를 반환해주는 함수|

</div>
</details>

<details>
<summary>ft_memset</summary>
<div markdown="1">       

|**함수 이름**|ft_memset|
|-|-|
|**프로토타입**|void *ft_memset(void *b, int c, size_t len);|
|**매개변수**|#1. 메모리 주소<br>#2. 초기화할 값<br>#3. 메모리 사이즈|
|**반환값**|없음.|
|**설명**|메모리 주소 b를 받아 len사이즈 만큼 c로 초기화해주는 함수|

</div>
</details>

<details>
<summary>ft_bzero</summary>
<div markdown="1">       

|**함수 이름**|ft_bzero|
|-|-|
|**프로토타입**|void ft_bzero(void *s, size_t n);|
|**매개변수**|#1. 메모리 주소<br>#2. 메모리 사이즈|
|**반환값**|없음.|
|**설명**|메모리 주소 s를 받아 n사이즈 만큼 0으로 초기화해주는 함수|

</div>
</details>

<details>
<summary>ft_memcpy</summary>
<div markdown="1">       

|**함수 이름**|ft_memcpy|
|-|-|
|**프로토타입**|void *ft_memcpy(void *dst, const void *src, size_t n);|
|**매개변수**|#1. 복사될 메모리 주소<br>#2. 복사할 메모리 주소<br>#3. 복사할 사이즈|
|**반환값**|없음.|
|**설명**|src에서 n만큼 복사해 dst에 붙여넣는 함수|

</div>
</details>

<details>
<summary>ft_memmove</summary>
<div markdown="1">       

|**함수 이름**|ft_memmove|
|-|-|
|**프로토타입**|void *ft_memmove(void *dst, const void *src, size_t len);|
|**매개변수**|#1. 복사될 메모리 주소<br>#2. 복사할 메모리 주소<br>#3. 복사할 사이즈|
|**반환값**|없음.|
|**설명**|src에서 len만큼을 dst로 옮기는 함수|

</div>
</details>
----------------
<details>
<summary>ft_strlcpy</summary>
<div markdown="1">       

|**함수 이름**|ft_strlcpy|
|-|-|
|**프로토타입**|int ft_isalpha(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|알파벳이면 1 아니면 0 반환|
|**설명**|해당 문자가 알파벳인지 확인하는 함수|

</div>
</details>

<details>
<summary>ft_strlcat</summary>
<div markdown="1">       

|**함수 이름**|ft_strlcat|
|-|-|
|**프로토타입**|int ft_isalpha(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|알파벳이면 1 아니면 0 반환|
|**설명**|해당 문자가 알파벳인지 확인하는 함수|

</div>
</details>

<details>
<summary>ft_strncmp</summary>
<div markdown="1">       

|**함수 이름**|ft_strncmp|
|-|-|
|**프로토타입**|int ft_isalpha(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|알파벳이면 1 아니면 0 반환|
|**설명**|해당 문자가 알파벳인지 확인하는 함수|

</div>
</details>

<details>
<summary>ft_toupper</summary>
<div markdown="1">       

|**함수 이름**|ft_toupper|
|-|-|
|**프로토타입**|int ft_isalpha(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|알파벳이면 1 아니면 0 반환|
|**설명**|해당 문자가 알파벳인지 확인하는 함수|

</div>
</details>

<details>
<summary>ft_tolower</summary>
<div markdown="1">       

|**함수 이름**|ft_tolower|
|-|-|
|**프로토타입**|int ft_isalpha(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|알파벳이면 1 아니면 0 반환|
|**설명**|해당 문자가 알파벳인지 확인하는 함수|

</div>
</details>

<details>
<summary>ft_strchr</summary>
<div markdown="1">       

|**함수 이름**|ft_strchr|
|-|-|
|**프로토타입**|int ft_isalpha(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|알파벳이면 1 아니면 0 반환|
|**설명**|해당 문자가 알파벳인지 확인하는 함수|

</div>
</details>

<details>
<summary>ft_strrchr</summary>
<div markdown="1">       

|**함수 이름**|ft_strrchr|
|-|-|
|**프로토타입**|int ft_isalpha(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|알파벳이면 1 아니면 0 반환|
|**설명**|해당 문자가 알파벳인지 확인하는 함수|

</div>
</details>

<details>
<summary>ft_memchr</summary>
<div markdown="1">       

|**함수 이름**|ft_memchr|
|-|-|
|**프로토타입**|int ft_isalpha(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|알파벳이면 1 아니면 0 반환|
|**설명**|해당 문자가 알파벳인지 확인하는 함수|

</div>
</details>

<details>
<summary>ft_memcmp</summary>
<div markdown="1">       

|**함수 이름**|ft_memcmp|
|-|-|
|**프로토타입**|int ft_isalpha(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|알파벳이면 1 아니면 0 반환|
|**설명**|해당 문자가 알파벳인지 확인하는 함수|

</div>
</details>

<details>
<summary>ft_strnstr</summary>
<div markdown="1">       

|**함수 이름**|ft_strnstr|
|-|-|
|**프로토타입**|int ft_isalpha(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|알파벳이면 1 아니면 0 반환|
|**설명**|해당 문자가 알파벳인지 확인하는 함수|

</div>
</details>

<details>
<summary>ft_atoi</summary>
<div markdown="1">       

|**함수 이름**|ft_atoi|
|-|-|
|**프로토타입**|int ft_isalpha(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|알파벳이면 1 아니면 0 반환|
|**설명**|해당 문자가 알파벳인지 확인하는 함수|

</div>
</details>

<details>
<summary>ft_calloc</summary>
<div markdown="1">       

|**함수 이름**|ft_calloc|
|-|-|
|**프로토타입**|int ft_isalpha(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|알파벳이면 1 아니면 0 반환|
|**설명**|해당 문자가 알파벳인지 확인하는 함수|

</div>
</details>

<details>
<summary>ft_strdup</summary>
<div markdown="1">       

|**함수 이름**|ft_strdup|
|-|-|
|**프로토타입**|int ft_isalpha(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|알파벳이면 1 아니면 0 반환|
|**설명**|해당 문자가 알파벳인지 확인하는 함수|

</div>
</details>
