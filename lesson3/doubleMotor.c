char ch=' ';
void setup()
{
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.println("ok!");
}

/*
预定
'f':表示前进
'b':表示后退
'r':表示右转
'l':表示左转
's':表示停止
我学到的：
git commit：是将本地修改过的文件提交到本地库中；
git push：是将本地库中的最新信息发送给远程库；
git pull：是从远程获取最新版本到本地，并自动merge；
git fetch：是从远程获取最新版本到本地，不会自动merge；
git merge：是用于从指定的commit(s)合并到当前分支，用来合并两个分支； 
git diff：查看工作区与暂存区的不同。
git diff –cached [<commit>]：查看暂存区与指定提交版本的不同，版本可缺省（为HEAD）。
git diff <commit>：查看工作区与指定提交版本的不同。
git diff <commit>..<commit>：查看2个指定提交版本的不同，其中任一可缺省（为HEAD）。
git diff <commit>...<commit>：查看2个不同分支指定提交版本的不同，其中任一可缺省（为HEAD），该命令相当于git diff $(git-merge-base A B) B。
*/
void loop()
{
  if(Serial.available()>0)
  {
  	ch=Serial.read();
    switch(ch)
    {
    case 'f':
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      break;
    case 'b':
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(8,LOW);
      break;
    case 'r':
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      break;
    case 'l':
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(8,LOW);
      break;
    case 's':
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      break;
    default:
      break;
    }
  }
}
