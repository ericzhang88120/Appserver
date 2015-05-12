package lily;

enum Status{
	SUCCESS = 0;
	FAIL = 1;
}

message CSGetCode{
	required int32 phonenum=1;
}

message SCGetCode{
	required Status ret = 1;
	optional string msg = 2;
}



message CSRegister{
	required int32 phonenum=1;
	required int32 code =2;
}

message SCRegister{
	required Status status = 1;
	optional string msg = 2;
	optional string token =3;	
}


