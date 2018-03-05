/*
假设字符串均由大写字母A~Z构成。把A~Z视为0~25，即把26个大写字母对应为26进制，然后再将26进制转化为十进制。
int hashFunc(char S[],int len){
	int id=0;
	for(int i=0;i<len;i++){
		id=id*26+(S[i]-'A');
	}
	return id;
}
*/


/*
假设字符串均由大写字母A~Z,小写字母a~z构成。把A~Z视为0~25，把a~z视为26~51，也就是52进制问题。
int hashFunc(char S[],int len){
	int id=0;
	for(int i=0;i<len;i++){
		if(S[i]>='A'&&s[i]<='Z'){
			id=id*52+(S[i]-'A');
		}else if(S[i]>='a'&&S[i]<='z'){
			id=id*52+(S[i]-'a')+26;
		}
	}
	return id;
}
 */