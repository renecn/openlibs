#pragma once
#include <Windows.h>
#using <..\..\..\release\Plugin.dll>

namespace PluginTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Form1 摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  lv_;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::Button^  btnSuspend;
	private: System::Windows::Forms::Button^  btnResume;
	private: System::Windows::Forms::Button^  btnKill;
	private: System::Windows::Forms::Button^  btnKill2;
	private: System::Windows::Forms::Button^  btnKill3;
	private: System::Windows::Forms::Button^  btnRefresh;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ContextMenuStrip^  cms_;
	private: System::Windows::Forms::ToolStripMenuItem^  cms_refresh;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  cms_sigverif;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  cms_explorer;
	private: System::Windows::Forms::ToolStripMenuItem^  cms_showFileProperty;


	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^  cms_export;

	private: System::ComponentModel::IContainer^  components;






	protected: 

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->lv_ = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->btnSuspend = (gcnew System::Windows::Forms::Button());
			this->btnResume = (gcnew System::Windows::Forms::Button());
			this->btnKill = (gcnew System::Windows::Forms::Button());
			this->btnKill2 = (gcnew System::Windows::Forms::Button());
			this->btnKill3 = (gcnew System::Windows::Forms::Button());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->cms_ = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->cms_refresh = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cms_sigverif = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cms_explorer = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cms_showFileProperty = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cms_export = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cms_->SuspendLayout();
			this->SuspendLayout();
			// 
			// lv_
			// 
			this->lv_->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4, this->columnHeader5});
			this->lv_->ContextMenuStrip = this->cms_;
			this->lv_->FullRowSelect = true;
			this->lv_->Location = System::Drawing::Point(12, 21);
			this->lv_->MultiSelect = false;
			this->lv_->Name = L"lv_";
			this->lv_->Size = System::Drawing::Size(724, 327);
			this->lv_->TabIndex = 0;
			this->lv_->UseCompatibleStateImageBehavior = false;
			this->lv_->View = System::Windows::Forms::View::Details;
			this->lv_->ColumnClick += gcnew System::Windows::Forms::ColumnClickEventHandler(this, &Form1::lv__ColumnClick);
			this->lv_->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::lv__MouseUp);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"进程ID";
			this->columnHeader1->Width = 81;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"进程名称";
			this->columnHeader2->Width = 162;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"父进程ID";
			this->columnHeader3->Width = 80;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"映像路径";
			this->columnHeader4->Width = 221;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"文件厂商";
			this->columnHeader5->Width = 152;
			// 
			// btnSuspend
			// 
			this->btnSuspend->Location = System::Drawing::Point(742, 66);
			this->btnSuspend->Name = L"btnSuspend";
			this->btnSuspend->Size = System::Drawing::Size(75, 23);
			this->btnSuspend->TabIndex = 1;
			this->btnSuspend->Text = L"挂起";
			this->btnSuspend->UseVisualStyleBackColor = true;
			this->btnSuspend->Click += gcnew System::EventHandler(this, &Form1::btnSuspend_Click);
			// 
			// btnResume
			// 
			this->btnResume->Location = System::Drawing::Point(742, 95);
			this->btnResume->Name = L"btnResume";
			this->btnResume->Size = System::Drawing::Size(75, 23);
			this->btnResume->TabIndex = 2;
			this->btnResume->Text = L"恢复";
			this->btnResume->UseVisualStyleBackColor = true;
			this->btnResume->Click += gcnew System::EventHandler(this, &Form1::btnResume_Click);
			// 
			// btnKill
			// 
			this->btnKill->Location = System::Drawing::Point(742, 165);
			this->btnKill->Name = L"btnKill";
			this->btnKill->Size = System::Drawing::Size(75, 23);
			this->btnKill->TabIndex = 3;
			this->btnKill->Text = L"结束";
			this->btnKill->UseVisualStyleBackColor = true;
			this->btnKill->Click += gcnew System::EventHandler(this, &Form1::btnKill_Click);
			// 
			// btnKill2
			// 
			this->btnKill2->Location = System::Drawing::Point(742, 194);
			this->btnKill2->Name = L"btnKill2";
			this->btnKill2->Size = System::Drawing::Size(75, 23);
			this->btnKill2->TabIndex = 3;
			this->btnKill2->Text = L"强制结束";
			this->btnKill2->UseVisualStyleBackColor = true;
			this->btnKill2->Click += gcnew System::EventHandler(this, &Form1::btnKill2_Click);
			// 
			// btnKill3
			// 
			this->btnKill3->Location = System::Drawing::Point(742, 223);
			this->btnKill3->Name = L"btnKill3";
			this->btnKill3->Size = System::Drawing::Size(75, 23);
			this->btnKill3->TabIndex = 4;
			this->btnKill3->Text = L"暴力结束";
			this->btnKill3->UseVisualStyleBackColor = true;
			this->btnKill3->Click += gcnew System::EventHandler(this, &Form1::btnKill3_Click);
			// 
			// btnRefresh
			// 
			this->btnRefresh->Location = System::Drawing::Point(742, 21);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(75, 23);
			this->btnRefresh->TabIndex = 5;
			this->btnRefresh->Text = L"刷新";
			this->btnRefresh->UseVisualStyleBackColor = true;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &Form1::btnRefresh_Click);
			// 
			// cms_
			// 
			this->cms_->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {this->cms_refresh, this->toolStripSeparator1, 
				this->cms_sigverif, this->toolStripSeparator2, this->cms_explorer, this->cms_showFileProperty, this->toolStripSeparator3, this->cms_export});
			this->cms_->Name = L"cms_";
			this->cms_->Size = System::Drawing::Size(167, 154);
			// 
			// cms_refresh
			// 
			this->cms_refresh->Name = L"cms_refresh";
			this->cms_refresh->Size = System::Drawing::Size(166, 22);
			this->cms_refresh->Text = L"刷新";
			this->cms_refresh->Click += gcnew System::EventHandler(this, &Form1::cms_refresh_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(163, 6);
			// 
			// cms_sigverif
			// 
			this->cms_sigverif->Name = L"cms_sigverif";
			this->cms_sigverif->Size = System::Drawing::Size(166, 22);
			this->cms_sigverif->Text = L"校验数字签名";
			this->cms_sigverif->Click += gcnew System::EventHandler(this, &Form1::cms_sigverif_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(163, 6);
			// 
			// cms_explorer
			// 
			this->cms_explorer->Name = L"cms_explorer";
			this->cms_explorer->Size = System::Drawing::Size(166, 22);
			this->cms_explorer->Text = L"定位映像文件";
			this->cms_explorer->Click += gcnew System::EventHandler(this, &Form1::cms_explorer_Click);
			// 
			// cms_showFileProperty
			// 
			this->cms_showFileProperty->Name = L"cms_showFileProperty";
			this->cms_showFileProperty->Size = System::Drawing::Size(166, 22);
			this->cms_showFileProperty->Text = L"查看映像文件路径";
			this->cms_showFileProperty->Click += gcnew System::EventHandler(this, &Form1::cms_showFileProperty_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(163, 6);
			// 
			// cms_export
			// 
			this->cms_export->Name = L"cms_export";
			this->cms_export->Size = System::Drawing::Size(166, 22);
			this->cms_export->Text = L"导出";
			this->cms_export->Click += gcnew System::EventHandler(this, &Form1::cms_export_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(829, 360);
			this->Controls->Add(this->btnRefresh);
			this->Controls->Add(this->btnKill3);
			this->Controls->Add(this->btnKill2);
			this->Controls->Add(this->btnKill);
			this->Controls->Add(this->btnResume);
			this->Controls->Add(this->btnSuspend);
			this->Controls->Add(this->lv_);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"测试插件";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->cms_->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		 
		 
		//ListViewItem排序所需，记录当前列
		static int lv_item_curColumn = -1; 
		//表示降序还是升序
		static bool lv_item_bAsc = false; 

		 //窗体加载事件
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 try
			 {
				 array<Process^>^ ps = Process::GetProcesses(Environment::MachineName);
				 for each (Process^ p in ps)
				 {				 
					 try
					 {
						 ListViewItem^ item = gcnew ListViewItem(p->Id.ToString());
						 item->SubItems->AddRange(gcnew array<String^>{
							 Plugin::plugin::plugin_common_net_getProcessName(p->Id),
							 Plugin::plugin::plugin_process_getProcessParentPID(p->Id).ToString(),
							 Plugin::plugin::plugin_common_net_formatString(Plugin::plugin::plugin_common_net_getProcessPath(p->Id)),
							 Plugin::plugin::plugin_common_net_getProcessCompanyName(p->Id)
						 });
						 lv_->Items->Add(item);			

						 if (!Plugin::plugin::plugin_common_net_checkFileCompanyName(Plugin::plugin::plugin_common_net_getProcessCompanyName(p->Id)))
						 {
							 item->ForeColor = Color::Blue;
						 }
					 }
					 catch(Exception^ ex){ }
				 }
			 }
			 catch(Exception^ ex){ }
		 }

		 //刷新
private: System::Void btnRefresh_Click(System::Object^  sender, System::EventArgs^  e) {
			 lv_->Items->Clear();
			 Form1_Load(sender,e);
		 }

		 //挂起
private: System::Void btnSuspend_Click(System::Object^  sender, System::EventArgs^  e) {
			 ListViewItem^ item_ = lv_->SelectedItems[0];
			 int ulPID = int::Parse(item_->SubItems[0]->Text);

			 if (!Plugin::plugin::plugin_process_suspendProcess(ulPID))
			 {
				 MessageBox::Show("挂起失败！");
				 return;
			 }
		 }

		 //恢复
private: System::Void btnResume_Click(System::Object^  sender, System::EventArgs^  e) {
			 ListViewItem^ item_ = lv_->SelectedItems[0];
			 int ulPID = int::Parse(item_->SubItems[0]->Text);

			 if (!Plugin::plugin::plugin_process_resumeProcess(ulPID))
			 {
				 MessageBox::Show("恢复失败！");
				 return;
			 }
		 }

		 //普通删除
private: System::Void btnKill_Click(System::Object^  sender, System::EventArgs^  e) {
			 try
			 {
				 ListViewItem^ item_ = lv_->SelectedItems[0];
				 Process^ p = Process::GetProcessById(int::Parse(item_->SubItems[0]->Text));

				 p->Kill();

				 item_->Remove();
			 }
			 catch(Exception^ ex){ MessageBox::Show(ex->Message); }
		 }

		 //强制删除
private: System::Void btnKill2_Click(System::Object^  sender, System::EventArgs^  e) {

			 ListViewItem^ item_ = lv_->SelectedItems[0];
			 int ulPID = int::Parse(item_->SubItems[0]->Text);

			 if (!Plugin::plugin::plugin_process_killPrcess(ulPID))
			 {
				 MessageBox::Show("强制删除失败！");
				 return;
			 }

			 item_->Remove();
		 }

		 //暴力删除
private: System::Void btnKill3_Click(System::Object^  sender, System::EventArgs^  e) {
			 ListViewItem^ item_ = lv_->SelectedItems[0];
			 int ulPID = int::Parse(item_->SubItems[0]->Text);

			 if (!Plugin::plugin::plugin_process_forceKillProcess(ulPID))
			 {
				 MessageBox::Show("强制删除失败！");
				 return;
			 }

			 item_->Remove();
		 }

		 //控制右键菜单显示
private: System::Void lv__MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if (lv_->Items->Count == 0)
			 {
				 cms_sigverif->Enabled = false;
				 cms_explorer->Enabled = false;
				 cms_showFileProperty->Enabled = false;
			 }
			 else if(lv_->SelectedItems->Count == 0)
			 {
				 cms_sigverif->Enabled = false;
				 cms_explorer->Enabled = false;
				 cms_showFileProperty->Enabled = false;
			 }
			 else
			 {
				 ListViewItem^ item_ = lv_->SelectedItems[0];
				 int ulPID = int::Parse(item_->SubItems[0]->Text);

				 //判断进程状态
				 switch (Plugin::plugin::plugin_process_getProcessState(ulPID))
				 {
				 case 0:
					 break;
					 //处于挂起状态
				 case 1:
					 {
						 btnSuspend->Enabled=false;
						 btnResume->Enabled=true;
					 }
					 break;
					 //没有挂起
				 case 2:
					 {
						 btnSuspend->Enabled=true;
						 btnResume->Enabled=false;
					 }
					 break;
				 }
			 }
		 }

		 //排序
private: System::Void lv__ColumnClick(System::Object^  sender, System::Windows::Forms::ColumnClickEventArgs^  e) {
			 if(e->Column == lv_item_curColumn)
			 {		 
				 if (lv_item_bAsc)
				 {
					 lv_item_bAsc = false;
				 }
				 else
				 {
					 lv_item_bAsc = true;
				 }

				 if (e->Column == 0 || e->Column == 2)
				 {
					 //数字排序
					 lv_->ListViewItemSorter = Plugin::plugin::plugin_common_net_sortLV(e->Column,lv_item_bAsc,0,10);
				 }
				 else
				 {
					 //字符串排序
					 lv_->ListViewItemSorter = Plugin::plugin::plugin_common_net_sortLV(e->Column,lv_item_bAsc,1,0);
				 }		 
			 }
			 else
			 {		
				 lv_item_bAsc = false;

				 if (e->Column == 0 || e->Column == 2)
				 {
					 //数字排序
					 lv_->ListViewItemSorter = Plugin::plugin::plugin_common_net_sortLV(e->Column,lv_item_bAsc,0,10);
				 }
				 else
				 {
					 //字符串排序
					 lv_->ListViewItemSorter = Plugin::plugin::plugin_common_net_sortLV(e->Column,lv_item_bAsc,1,0);
				 }	

				 //记录当前
				 lv_item_curColumn = e->Column;
			 }
		 }

		 //刷新
private: System::Void cms_refresh_Click(System::Object^  sender, System::EventArgs^  e) {
			 btnRefresh_Click(sender,e);
		 }

		 //校验数字签名
private: System::Void cms_sigverif_Click(System::Object^  sender, System::EventArgs^  e) {
			 ListViewItem^ item_ = lv_->SelectedItems[0];

			 LPTSTR lpFilePath = Plugin::plugin::plugin_common_net_stringToHGlobalUni(item_->SubItems[3]->Text);

			 if (Plugin::plugin::plugin_sigverif_check(lpFilePath))
			 {
				 MessageBox::Show("此文件已签名！");
				 return;
			 }

			 MessageBox::Show("此文件没有签名！");;
		 }

		 //定位文件
private: System::Void cms_explorer_Click(System::Object^  sender, System::EventArgs^  e) {
			 ListViewItem^ item_ = lv_->SelectedItems[0];

			 LPSTR lpFilePath = Plugin::plugin::plugin_common_net_stringToHGlobalAnsi(item_->SubItems[3]->Text);

			 Plugin::plugin::plugin_common_explorerFile(lpFilePath);
		 }

		 //查看文件属性
private: System::Void cms_showFileProperty_Click(System::Object^  sender, System::EventArgs^  e) {
			 ListViewItem^ item_ = lv_->SelectedItems[0];

			 LPTSTR lpFilePath = Plugin::plugin::plugin_common_net_stringToHGlobalUni(item_->SubItems[3]->Text);

			 Plugin::plugin::plugin_common_showFileProperty(lpFilePath);
		 }

		 //导出
private: System::Void cms_export_Click(System::Object^  sender, System::EventArgs^  e) {
			 Plugin::plugin::plugin_common_net_getListViewData(lv_);
		 }

};
}
