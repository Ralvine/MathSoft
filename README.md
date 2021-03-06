# MathSoft
浙江大学数学软件短学期课程作业｜杨钧尹@Ralvine

## hw1:用 Latex 完成一篇数学文章

### 索引

位于本仓库hw1文件夹中，完成时间为2022年6月27日14时。

包含hw1.tex源文件及用于预览的hw1.pdf文件。请在clone本仓库后，在hw1文件夹中使用终端运行指令

```shell
xelatex hw1
```

以获得pdf成品。

### 编译问题说明

在MacOS/Linux下使用上述命令时，由于设备差异性可能存在下述问题，在此给出说明并提供解决方案。

#### 字体

```shell
LaTeX Font Warning: Font shape `OMX/cmex/m/n' in size <10.53937> not available
(Font)              size <10.95> substituted on input line 16.
```

因为字体通常仅以特定大小提供。此处不影响`xelatex hw1`命令的进行，当然，可以使用lmodern宏包允许任意大小的字体来消除此限制。

#### 公式编号标签

```shell
LaTeX Warning: There were undefined references.
LaTeX Warning: Label(s) may have changed. Rerun to get cross-references right.
```

由于`xelatex`命令自身的机制问题，第一次可能出现如此报错，导致pdf中的编号交叉引用出现'?'。

如老师课上所言，再次执行该命令1～2次即可解决。当然，如果使用TexPad等封装过的环境，可以规避此问题。

### 任务概要

请用 Latex 完成一篇数学文章, 主题从下面任选一：

> 叙述并证明罗必达法则；叙述并证明带皮亚诺余项的泰勒定理；给出黎曼可积和勒贝格可积的定义, 并分析二者的区别；证明实对称矩必可在实数域上相似对角化；

要求：

> 用 article 或 ctexart 模板完成；用 Latex 产生标题, 作者和日期；可以用中文或英文完成；所有公式必须自动编号, 并且互相之间用自动编号交叉引用；文章分两个 section, 分别是"问题描述" 和 "证明". 第一个 section 之前, 应该有一段导言, 描述问题的背景和意义；本次作业不要求一定有插图, 摘要和参考文献；作业的提交形式推荐采用 git 的形式, 提交一个可以 clone 的 git 目录, 这样助教就能下载批阅. 或者, 可以提交一个包含所有内容的zip文件. 不论你以何种形式提交, 必须确保助教能得到你的tex文件, 并且能够正确地用xelatex编译；你可以使用附件中的模板, 请解压获得 tex 文件.
