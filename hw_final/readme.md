# 数学软件 项目大作业

## 简介
- Julia 集的分析和探索
  - Julia 集的介绍
    - 背景
    - 数学理论
    - 算法
    - 算例及分析
  - Julia 集与 Mandelbrot 集比较

## 作者
姓名｜杨钧尹
组织｜浙江大学,数学科学学院,信息与计算科学2001班
学号｜3200103573
邮箱｜ralvine@163.com,yangjunyin@zju.edu.cn
Github｜Ralvine

## 文件树
├── docs tex                        文档及其依赖项
│ 	├── beamerthemeAnnArbor.sty
│   ├── chapters
│   │   ├── abstract.tex
│   │   ├── chapter1.tex
│   │   ├── chapter2.tex
│   │   ├── chapter3.tex
│   │   ├── chapter4.tex
│   │   └── chapter5.tex
│ 	├── ref.bib
│ 	├── report.tex
│ 	├── slide.tex
│ 	└── images                      图像素材
├── makefile                        编译Report,Slide并在本目录产生对应pdf
├── readme.md                       说明文档
├── report.pdf(output)
├── slide.pdf(output)
└── src
    ├── codes                       实现MandelBrot,Julia集合绘图的所有源代码
    │ 	├── Fractal.h
    │ 	├── Window.h
    │ 	├── bitmap.cpp
    │ 	├── bitmap.h
    │ 	├── julia.cpp
    │ 	├── makefile                编译产生MandelBrot,Julia可执行程序
    │ 	└── mandelbrot.cpp
    ├── images                      存放测试时生成的图像
    ├── julia(output)
    ├── mandelbrot(output)
    └── run                         测试脚本,基于给定的参数进行测试,输出图像