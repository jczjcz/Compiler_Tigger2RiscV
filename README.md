# 3、第三部分 Tigger -> RiscV

这部分基本是对文档内容的逐字翻译

## 1）INT12和INT10的处理

以INT12为例，如果超出范围，则需要`li`，例如处理语句`Expression->REG LBRAC NUM RBRAC ASSIGN REG`

```c
REG LBRAC NUM RBRAC ASSIGN REG
{     // reg1[int12] = reg2
  int ass_num = (*(ToInt($3))) ;     ///得到int12
  if(ass_num > 2047 || ass_num < -2048){       
    other_out = " li s0 " + to_string(ass_num);
    Func_Other.push_back(other_out);  
    other_out = " add s0, " + (*ToStr($1)) + ", s0";
    Func_Other.push_back(other_out);  
    other_out = " sw " + (*ToStr($6)) + ", 0(s0)";
    Func_Other.push_back(other_out);  
  }
  else{
    other_out = " sw " + (*ToStr($6)) + ", " + to_string(ass_num) + "(" + (*ToStr($1)) + ")";
    Func_Other.push_back(other_out);
  }
}
```

