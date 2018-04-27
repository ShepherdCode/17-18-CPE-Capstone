import processing.serial.*;
import java.io.*;
String [] subtext;
String moves="";
Serial MySerial;
int mySwitch=0;
int counter=0;
boolean  mouseClicked = false;
int val;
void setup()
{
 mySwitch=1;
   String portName =  "COM4";
  MySerial= new Serial(this, portName, 9600);
  MySerial.bufferUntil('(');
}

void draw() {
  if (mySwitch>0){
  readData("C:/Users/CNC/Desktop/untitled.txt");
mySwitch=0;
}

if(counter<subtext.length){
// delay(100);
  if("F'".equals(subtext[counter]))
  {
  println(subtext[counter]);
 // MySerial.write('F');
  moves=moves+"F";
  }
  if("B'".equals(subtext[counter]))
  {
  println(subtext[counter]);
  //MySerial.write('B');
  moves=moves+"B";
  }
  if("R'".equals(subtext[counter]))
  {
  println(subtext[counter]);
 // MySerial.write('R');
  moves=moves+"R";
  }
  if("L'".equals(subtext[counter]))
  {
  println(subtext[counter]);
 // MySerial.write('L');
  moves=moves+"L";
  }
  if("U'".equals(subtext[counter]))
  {
  println(subtext[counter]);
  //MySerial.write('U');
  moves=moves+"U";
  }
  if("D'".equals(subtext[counter]))
  {
  println(subtext[counter]);
 // MySerial.write('D');
  moves=moves+"D";
  }
  
   if("F".equals(subtext[counter]))
  {
  println(subtext[counter]);
 // MySerial.write('f');
  moves=moves+"f";
  }
  if("B".equals(subtext[counter]))
  {
  println(subtext[counter]);
 // MySerial.write('b');
  moves=moves+"b";
  }
  if("R".equals(subtext[counter]))
  {
  println(subtext[counter]);
 // MySerial.write('r');
  moves=moves+"r";
  }
  if("L".equals(subtext[counter]))
  {
  println(subtext[counter]);
 // MySerial.write('l');
  moves=moves+"l";
  }
  if("U".equals(subtext[counter]))
  {
  println(subtext[counter]);
 // MySerial.write('u');
  moves=moves+"u";
  }
  if("D".equals(subtext[counter]))
  {
  println(subtext[counter]);
 // MySerial.write('d');
  moves=moves+"d";
  }


 //MySerial.write('0');
 //delay(100);
 counter++;
 } else{
   if(counter==subtext.length){
     delay(2000);
    MySerial.write(moves);
    println(moves);
 counter++;  
 }
   delay(5000);
 mySwitch=1;
}
}

void readData(String myFileName){
 
 File file=new File(myFileName);
 BufferedReader br=null;
 
 try{
 br=new BufferedReader(new FileReader(file));
 String text=null;
 
 
 while((text=br.readLine())!=null){
 subtext = splitTokens(text," ");
 }
 }catch(FileNotFoundException e){
 e.printStackTrace();
 }catch(IOException e){
 e.printStackTrace();
 }finally{
 try {
 if (br != null){
 br.close();
 }
 } catch (IOException e) {
 e.printStackTrace();
 }
 }
}
