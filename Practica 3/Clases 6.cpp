const string vowels="aeiou";
string pigLatinify(conststrings){
	if(s.size()==0){
		return s;
	}
	if(s.find("qu")==0){
		return s.substr(2,s.size()-2)+"-"+s.substr(0,2)+"ay";
	}else if(vowels.find(s[0])!=string::npos){
		return s+"way";
	}else{
		return s.substr(1,s.size()-1)+"-"+s[0]+"ay";
	}
}
