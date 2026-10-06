# self-study C++

C++ 自学练习代码。所有程序均为 Visual Studio 控制台应用，使用 C++20 标准编写，按练习主题分目录存放。

## 练习目录

| 目录 | 练习内容 | 主要知识点 |
| --- | --- | --- |
| [`hello world`](<hello world/FileName.cpp>) | 输出 Hello World | 基础输出流 `cout` |
| [`three pigs`](<three pigs/FileName.cpp>) | 输入三只小猪体重并判断最重者 | `if` / 嵌套分支比较 |
| [`five pigs`](<five pigs/FileName.cpp>) | 一组体重中找出最大值 | 数组遍历、求最值 |
| [`swap elements`](<swap elements/FileName.cpp>) | 将数组元素首尾对称交换 | 双指针、元素交换 |
| [`tap table`](<tap table/FileName.cpp>) | 1~100 中逢 7 的倍数或含 7 的数输出「敲桌子」 | 循环 + 多条件判断、取模与整除 |
| [`multiplication table`](<multiplication table/FileName.cpp>) | 输出九九乘法表 | 嵌套循环 |
| [`Armstrong number`](<Armstrong number/FileName.cpp>) | 找出 100~999 之间的水仙花数 | `do-while`、数位拆分 |
| [`guess number`](<guess number/FileName.cpp>) | 猜 1~100 随机数，提示偏大偏小 | 随机数 `rand` / `srand`、`while` 循环 |

## 编译与运行

每个目录都有独立的 `.slnx` 解决方案和 `.vcxproj` 工程文件。

**方式一：Visual Studio**

用 Visual Studio 打开任一目录下的 `.slnx` 文件，按 `F5` 生成并运行。

**方式二：MSBuild 命令行**

```powershell
msbuild "hello world\hello world.vcxproj" /p:Configuration=Release /p:Platform=x64
```

**方式三：直接使用编译器**

```powershell
cl /std:c++20 /EHsc "hello world\FileName.cpp"
```

## 说明

- 每个工程的源码文件统一命名为 `FileName.cpp`，这是 Visual Studio 空项目模板的默认文件名。
- 仓库已通过 `.gitignore` 排除 `x64/`、`.vs/`、`*.user` 等生成产物与本地 IDE 状态，仅保留源码与工程配置。
- 各项目使用平台工具集 `v145`（Visual Studio 2026），如需在较早版本打开，可在项目属性中调整平台工具集。
