package lilymsg;

enum MsgType{
	AUTHCODE = 100;
	CS_REGISTER = 1000;
	SC_REGISTER = 1001;
}
message MsgHeader{
	required MsgType type =1;
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