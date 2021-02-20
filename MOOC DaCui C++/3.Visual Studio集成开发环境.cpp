//1.简介：微软开发工具的通称。VS包含的C++集成开发环境叫做Visual C++

//2.Project & Solution
/*
	1)使用VS编译C++时，须对每个项目单独指定所使用的C++标准

	2)可以在Project属性中修改C++标准版本等设置
		//#include <iostream>
		//int main() {
		//	if (__cplusplus == 201703L)std::cout << "C++17\n";
		//	else if (__cplusplus == 201402L)std::cout << "C++14\n";
		//	else if (__cplusplus == 201103L)std::cout << "C++11\n";
		//	else if (__cplusplus == 199711L)std::cout << "C++98\n";
		//	else std::cout << "pre-standard C++\n";
		//	std::getc;
		//}
	
	3)可以在Solution属性中修改启动项目等设置
	{
	命名空间
	}
*/


//3.推荐扩展
/*
		一、首先要安装微软自己开发的扩展：Productivity Power Tools 2017/2019。这是一个扩展套装，其
	中包含12个扩展(截至2019年6月）。只要安装这一个扩展套装，也就安装了其中包含的12个扩展。这12个扩展
	是：
	Align Assignments
	Copy As Html
	Double-Click Maximize
	Fix Mixed Tabs
	Match Margin
	Middle Click Scroll
	Peek Help
	Power Commands for Visual Studio
	Quick Launch Tasks
	Solution Error Visualizer
	Shrink Empty Lines
	Time Stamp Margin

	二、安装CodeMaid
		CodeMaid能够帮助我们在保存代码的时候，清理代码中无用的空格和空行

	三、Open In Explorer
		该扩展在解决方案管理器中添加了一些类似文件资源管理器的功能。只要在解决方案管理器中单击鼠标右键
		，在弹出菜单中就能看到“在资源管理器中打开文件夹”、“拷贝文件”等功能

	四、Trailing Whitespace Visualizer
		该扩展能够显示行尾无用的空格。当然，如果安装了CodeMaid扩展的话，在保存代码时，CodeMaid会自动将行尾五用空格删除

	五、Viasfora
		该扩展可以使程序中的成对匹配的大中小括号以不同的颜色显示，便于我们将括号的左右半边匹配

	六、Visual Studio IntelliCode
		基于机器学习的代码编写辅助工具。目前功能还比较弱。感兴趣可以尝尝鲜

	七、PowerMode
		敲键盘写代码的时候，字符会出现烟花效果。本课程中相当一部分示例都有该效果。

	八、Snippetica
		代码片段工具。按下特定的字符或者字符组合，然后按TAB键，Snippetica就会将该扩展中存储的一些代码
	片段直接粘贴到你的编辑器中。
		该工具能比较有效地提升编码的速度。你可以尝试输入 forr 然后按tab键，它会自动将基于范围的for循
	环的框架代码贴到你的编辑器中。

	九、VSColorOutput
		该扩展与Output enhancer扩展的功能类似，但是比Output enhancer好用，所以如果同时安装了Output
	enhancer扩展的话，将其禁用即可

	十、Smooth Scroll
		让代码编辑器窗口的滚动更平滑。

	十一、Word Highlight With Margin
		当你用鼠标选中某个单词/标识符后，该扩展可以将所有的单词/标识符同时加亮显示。
		这是一个非常有用的扩展
*/