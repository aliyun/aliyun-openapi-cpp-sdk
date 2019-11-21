/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_CHATBOT_MODEL_DESCRIBEDIALOGFLOWRESULT_H_
#define ALIBABACLOUD_CHATBOT_MODEL_DESCRIBEDIALOGFLOWRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/chatbot/ChatbotExport.h>

namespace AlibabaCloud
{
	namespace Chatbot
	{
		namespace Model
		{
			class ALIBABACLOUD_CHATBOT_EXPORT DescribeDialogFlowResult : public ServiceResult
			{
			public:
				struct ModuleDefinition
				{
					struct NodesItem
					{
						struct PluginData
						{
							struct Entry
							{
								struct PluginFieldDataEntry
								{
									struct ContentEntryItem
									{
										struct ConditionEntriesItem
										{
											std::string type;
											std::string value;
											std::string id;
											std::string term;
											std::string name;
										};
										std::vector<ContentEntryItem::ConditionEntriesItem> conditionEntries;
									};
									std::vector<ContentEntryItem> contentEntry;
									int lifeSpan;
									std::string name;
								};
								PluginFieldDataEntry pluginFieldDataEntry;
							};
							struct Function
							{
								struct PluginFieldDataFunction
								{
									struct SwitchItem
									{
										std::string type;
										std::string label;
										std::string value;
										std::string id;
										std::string name;
									};
									std::string function;
									std::string aliyunFunction;
									std::string type;
									std::vector<SwitchItem> _switch;
									std::string description;
									std::string params;
									std::string endPoint;
									std::string code;
									std::string name;
									std::string aliyunService;
								};
								PluginFieldDataFunction pluginFieldDataFunction;
							};
							struct Response
							{
								struct PluginFieldDataResponse
								{
									struct ContentResponse
									{
										struct ButtonList
										{
											struct ButtonItem
											{
												std::string type;
												std::string text;
												std::string name;
											};
											std::string intro;
											std::vector<ButtonItem> button;
										};
										std::string type;
										std::string text;
										std::string image;
										ButtonList buttonList;
									};
									ContentResponse contentResponse;
									std::string name;
								};
								PluginFieldDataResponse pluginFieldDataResponse;
							};
							struct Slot
							{
								struct PluginFieldDataSlot
								{
									struct ContentSlotItem
									{
										bool isArray;
										bool isNecessary;
										std::string value;
										int lifeSpan;
										std::vector<std::string> question;
										std::string name;
									};
									std::vector<ContentSlotItem> contentSlot;
									std::string intentName;
									bool isSysIntent;
									std::string intentId;
									std::string name;
								};
								PluginFieldDataSlot pluginFieldDataSlot;
							};
							Response response;
							Function function;
							Entry entry;
							Slot slot;
						};
						bool pluginDataUpdate;
						std::string xx;
						std::string yy;
						PluginData pluginData;
						std::string componentCode;
						std::string label;
						std::string id;
						std::string code;
					};
					struct EdgesItem
					{
						std::string target;
						std::string label;
						std::string id;
						std::string source;
					};
					std::vector<EdgesItem> edges;
					std::vector<NodesItem> nodes;
				};


				DescribeDialogFlowResult();
				explicit DescribeDialogFlowResult(const std::string &payload);
				~DescribeDialogFlowResult();
				int getStatus()const;
				std::string getModifyTime()const;
				std::string getAccountId()const;
				std::string getInstanceId()const;
				std::string getModuleName()const;
				std::string getCreateTime()const;
				long getDialogId()const;
				std::string getTemplates()const;
				std::string getCreateUserId()const;
				std::string getCreateUserName()const;
				std::string getGlobalVars()const;
				ModuleDefinition getModuleDefinition()const;
				long getModuleId()const;
				std::string getDialogName()const;
				std::string getModifyUserId()const;
				std::string getModifyUserName()const;
				std::string getTags()const;

			protected:
				void parse(const std::string &payload);
			private:
				int status_;
				std::string modifyTime_;
				std::string accountId_;
				std::string instanceId_;
				std::string moduleName_;
				std::string createTime_;
				long dialogId_;
				std::string templates_;
				std::string createUserId_;
				std::string createUserName_;
				std::string globalVars_;
				ModuleDefinition moduleDefinition_;
				long moduleId_;
				std::string dialogName_;
				std::string modifyUserId_;
				std::string modifyUserName_;
				std::string tags_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CHATBOT_MODEL_DESCRIBEDIALOGFLOWRESULT_H_