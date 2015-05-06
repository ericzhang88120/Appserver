package lilymsg;

enum Status{
	SUCCESS = 0;
	FAIL = 1;
}
enum MsgType{
	AUTHCODE = 100;
	CS_REGISTER = 1000;
	SC_REGISTER = 1001;
}
message MsgHeader{
	required MsgType type =1;
}

message AuthCode{
	required int32 phonenum=1;
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
message MsgBody{
	optional AuthCode authcode = 1;
	optional CSRegister csregister =2;
	optional SCRegister scregister =3;
}

message lilymsg{
	required MsgHeader header=1;
	required MsgBody body=2; 
}
