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

#include <alibabacloud/chatbot/model/DescribeDialogFlowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Chatbot;
using namespace AlibabaCloud::Chatbot::Model;

DescribeDialogFlowResult::DescribeDialogFlowResult() :
	ServiceResult()
{}

DescribeDialogFlowResult::DescribeDialogFlowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDialogFlowResult::~DescribeDialogFlowResult()
{}

void DescribeDialogFlowResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto moduleDefinitionNode = value["ModuleDefinition"];
	auto allNodes = value["Nodes"]["NodesItem"];
	for (auto value : allNodes)
	{
		ModuleDefinition::NodesItem nodesItemObject;
		if(!value["Code"].isNull())
			nodesItemObject.code = value["Code"].asString();
		if(!value["ComponentCode"].isNull())
			nodesItemObject.componentCode = value["ComponentCode"].asString();
		if(!value["PluginDataUpdate"].isNull())
			nodesItemObject.pluginDataUpdate = value["PluginDataUpdate"].asString() == "true";
		if(!value["Xx"].isNull())
			nodesItemObject.xx = value["Xx"].asString();
		if(!value["Yy"].isNull())
			nodesItemObject.yy = value["Yy"].asString();
		if(!value["Id"].isNull())
			nodesItemObject.id = value["Id"].asString();
		if(!value["Label"].isNull())
			nodesItemObject.label = value["Label"].asString();
		auto pluginDataNode = value["PluginData"];
		auto entryNode = pluginDataNode["Entry"];
		auto pluginFieldDataEntryNode = entryNode["PluginFieldDataEntry"];
		if(!pluginFieldDataEntryNode["LifeSpan"].isNull())
			nodesItemObject.pluginData.entry.pluginFieldDataEntry.lifeSpan = std::stoi(pluginFieldDataEntryNode["LifeSpan"].asString());
		if(!pluginFieldDataEntryNode["Name"].isNull())
			nodesItemObject.pluginData.entry.pluginFieldDataEntry.name = pluginFieldDataEntryNode["Name"].asString();
		auto allContentEntry = value["ContentEntry"]["ContentEntryItem"];
		for (auto value : allContentEntry)
		{
			ModuleDefinition::NodesItem::PluginData::Entry::PluginFieldDataEntry::ContentEntryItem contentEntryItemObject;
			auto allConditionEntries = value["ConditionEntries"]["ConditionEntriesItem"];
			for (auto value : allConditionEntries)
			{
				ModuleDefinition::NodesItem::PluginData::Entry::PluginFieldDataEntry::ContentEntryItem::ConditionEntriesItem conditionEntriesObject;
				if(!value["Id"].isNull())
					conditionEntriesObject.id = value["Id"].asString();
				if(!value["Term"].isNull())
					conditionEntriesObject.term = value["Term"].asString();
				if(!value["Name"].isNull())
					conditionEntriesObject.name = value["Name"].asString();
				if(!value["Type"].isNull())
					conditionEntriesObject.type = value["Type"].asString();
				if(!value["Value"].isNull())
					conditionEntriesObject.value = value["Value"].asString();
				contentEntryItemObject.conditionEntries.push_back(conditionEntriesObject);
			}
			nodesItemObject.pluginData.entry.pluginFieldDataEntry.contentEntry.push_back(contentEntryItemObject);
		}
		auto functionNode = pluginDataNode["Function"];
		auto pluginFieldDataFunctionNode = functionNode["PluginFieldDataFunction"];
		if(!pluginFieldDataFunctionNode["Code"].isNull())
			nodesItemObject.pluginData.function.pluginFieldDataFunction.code = pluginFieldDataFunctionNode["Code"].asString();
		if(!pluginFieldDataFunctionNode["Description"].isNull())
			nodesItemObject.pluginData.function.pluginFieldDataFunction.description = pluginFieldDataFunctionNode["Description"].asString();
		if(!pluginFieldDataFunctionNode["Function"].isNull())
			nodesItemObject.pluginData.function.pluginFieldDataFunction.function = pluginFieldDataFunctionNode["Function"].asString();
		if(!pluginFieldDataFunctionNode["Name"].isNull())
			nodesItemObject.pluginData.function.pluginFieldDataFunction.name = pluginFieldDataFunctionNode["Name"].asString();
		if(!pluginFieldDataFunctionNode["AliyunService"].isNull())
			nodesItemObject.pluginData.function.pluginFieldDataFunction.aliyunService = pluginFieldDataFunctionNode["AliyunService"].asString();
		if(!pluginFieldDataFunctionNode["AliyunFunction"].isNull())
			nodesItemObject.pluginData.function.pluginFieldDataFunction.aliyunFunction = pluginFieldDataFunctionNode["AliyunFunction"].asString();
		if(!pluginFieldDataFunctionNode["EndPoint"].isNull())
			nodesItemObject.pluginData.function.pluginFieldDataFunction.endPoint = pluginFieldDataFunctionNode["EndPoint"].asString();
		if(!pluginFieldDataFunctionNode["Type"].isNull())
			nodesItemObject.pluginData.function.pluginFieldDataFunction.type = pluginFieldDataFunctionNode["Type"].asString();
		if(!pluginFieldDataFunctionNode["Params"].isNull())
			nodesItemObject.pluginData.function.pluginFieldDataFunction.params = pluginFieldDataFunctionNode["Params"].asString();
		auto allSwitch = value["Switch"]["SwitchItem"];
		for (auto value : allSwitch)
		{
			ModuleDefinition::NodesItem::PluginData::Function::PluginFieldDataFunction::SwitchItem switchItemObject;
			if(!value["Id"].isNull())
				switchItemObject.id = value["Id"].asString();
			if(!value["Label"].isNull())
				switchItemObject.label = value["Label"].asString();
			if(!value["Type"].isNull())
				switchItemObject.type = value["Type"].asString();
			if(!value["Value"].isNull())
				switchItemObject.value = value["Value"].asString();
			if(!value["Name"].isNull())
				switchItemObject.name = value["Name"].asString();
			nodesItemObject.pluginData.function.pluginFieldDataFunction.switch.push_back(switchItemObject);
		}
		auto responseNode = pluginDataNode["Response"];
		auto pluginFieldDataResponseNode = responseNode["PluginFieldDataResponse"];
		if(!pluginFieldDataResponseNode["Name"].isNull())
			nodesItemObject.pluginData.response.pluginFieldDataResponse.name = pluginFieldDataResponseNode["Name"].asString();
		auto contentResponseNode = pluginFieldDataResponseNode["ContentResponse"];
		if(!contentResponseNode["Text"].isNull())
			nodesItemObject.pluginData.response.pluginFieldDataResponse.contentResponse.text = contentResponseNode["Text"].asString();
		if(!contentResponseNode["Type"].isNull())
			nodesItemObject.pluginData.response.pluginFieldDataResponse.contentResponse.type = contentResponseNode["Type"].asString();
		if(!contentResponseNode["Image"].isNull())
			nodesItemObject.pluginData.response.pluginFieldDataResponse.contentResponse.image = contentResponseNode["Image"].asString();
		auto buttonListNode = contentResponseNode["ButtonList"];
		if(!buttonListNode["Intro"].isNull())
			nodesItemObject.pluginData.response.pluginFieldDataResponse.contentResponse.buttonList.intro = buttonListNode["Intro"].asString();
		auto allButton = value["Button"]["ButtonItem"];
		for (auto value : allButton)
		{
			ModuleDefinition::NodesItem::PluginData::Response::PluginFieldDataResponse::ContentResponse::ButtonList::ButtonItem buttonItemObject;
			if(!value["Name"].isNull())
				buttonItemObject.name = value["Name"].asString();
			if(!value["Type"].isNull())
				buttonItemObject.type = value["Type"].asString();
			if(!value["Text"].isNull())
				buttonItemObject.text = value["Text"].asString();
			nodesItemObject.pluginData.response.pluginFieldDataResponse.contentResponse.buttonList.button.push_back(buttonItemObject);
		}
		auto slotNode = pluginDataNode["Slot"];
		auto pluginFieldDataSlotNode = slotNode["PluginFieldDataSlot"];
		if(!pluginFieldDataSlotNode["IntentId"].isNull())
			nodesItemObject.pluginData.slot.pluginFieldDataSlot.intentId = pluginFieldDataSlotNode["IntentId"].asString();
		if(!pluginFieldDataSlotNode["IntentName"].isNull())
			nodesItemObject.pluginData.slot.pluginFieldDataSlot.intentName = pluginFieldDataSlotNode["IntentName"].asString();
		if(!pluginFieldDataSlotNode["IsSysIntent"].isNull())
			nodesItemObject.pluginData.slot.pluginFieldDataSlot.isSysIntent = pluginFieldDataSlotNode["IsSysIntent"].asString() == "true";
		if(!pluginFieldDataSlotNode["Name"].isNull())
			nodesItemObject.pluginData.slot.pluginFieldDataSlot.name = pluginFieldDataSlotNode["Name"].asString();
		auto allContentSlot = value["ContentSlot"]["ContentSlotItem"];
		for (auto value : allContentSlot)
		{
			ModuleDefinition::NodesItem::PluginData::Slot::PluginFieldDataSlot::ContentSlotItem contentSlotItemObject;
			if(!value["IsArray"].isNull())
				contentSlotItemObject.isArray = value["IsArray"].asString() == "true";
			if(!value["IsNecessary"].isNull())
				contentSlotItemObject.isNecessary = value["IsNecessary"].asString() == "true";
			if(!value["LifeSpan"].isNull())
				contentSlotItemObject.lifeSpan = std::stoi(value["LifeSpan"].asString());
			if(!value["Name"].isNull())
				contentSlotItemObject.name = value["Name"].asString();
			if(!value["Value"].isNull())
				contentSlotItemObject.value = value["Value"].asString();
			auto allQuestion = value["Question"]["Question"];
			for (auto value : allQuestion)
				contentSlotItemObject.question.push_back(value.asString());
			nodesItemObject.pluginData.slot.pluginFieldDataSlot.contentSlot.push_back(contentSlotItemObject);
		}
		moduleDefinition_.nodes.push_back(nodesItemObject);
	}
	auto allEdges = value["Edges"]["EdgesItem"];
	for (auto value : allEdges)
	{
		ModuleDefinition::EdgesItem edgesItemObject;
		if(!value["Id"].isNull())
			edgesItemObject.id = value["Id"].asString();
		if(!value["Label"].isNull())
			edgesItemObject.label = value["Label"].asString();
		if(!value["Source"].isNull())
			edgesItemObject.source = value["Source"].asString();
		if(!value["Target"].isNull())
			edgesItemObject.target = value["Target"].asString();
		moduleDefinition_.edges.push_back(edgesItemObject);
	}
	if(!value["DialogId"].isNull())
		dialogId_ = std::stol(value["DialogId"].asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["DialogName"].isNull())
		dialogName_ = value["DialogName"].asString();
	if(!value["ModuleId"].isNull())
		moduleId_ = std::stol(value["ModuleId"].asString());
	if(!value["ModuleName"].isNull())
		moduleName_ = value["ModuleName"].asString();
	if(!value["Templates"].isNull())
		templates_ = value["Templates"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["ModifyTime"].isNull())
		modifyTime_ = value["ModifyTime"].asString();
	if(!value["CreateUserId"].isNull())
		createUserId_ = value["CreateUserId"].asString();
	if(!value["CreateUserName"].isNull())
		createUserName_ = value["CreateUserName"].asString();
	if(!value["ModifyUserId"].isNull())
		modifyUserId_ = value["ModifyUserId"].asString();
	if(!value["ModifyUserName"].isNull())
		modifyUserName_ = value["ModifyUserName"].asString();
	if(!value["AccountId"].isNull())
		accountId_ = value["AccountId"].asString();
	if(!value["Tags"].isNull())
		tags_ = value["Tags"].asString();
	if(!value["Status"].isNull())
		status_ = std::stoi(value["Status"].asString());
	if(!value["GlobalVars"].isNull())
		globalVars_ = value["GlobalVars"].asString();

}

int DescribeDialogFlowResult::getStatus()const
{
	return status_;
}

std::string DescribeDialogFlowResult::getModifyTime()const
{
	return modifyTime_;
}

std::string DescribeDialogFlowResult::getAccountId()const
{
	return accountId_;
}

std::string DescribeDialogFlowResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeDialogFlowResult::getModuleName()const
{
	return moduleName_;
}

std::string DescribeDialogFlowResult::getCreateTime()const
{
	return createTime_;
}

long DescribeDialogFlowResult::getDialogId()const
{
	return dialogId_;
}

std::string DescribeDialogFlowResult::getTemplates()const
{
	return templates_;
}

std::string DescribeDialogFlowResult::getCreateUserId()const
{
	return createUserId_;
}

std::string DescribeDialogFlowResult::getCreateUserName()const
{
	return createUserName_;
}

std::string DescribeDialogFlowResult::getGlobalVars()const
{
	return globalVars_;
}

DescribeDialogFlowResult::ModuleDefinition DescribeDialogFlowResult::getModuleDefinition()const
{
	return moduleDefinition_;
}

long DescribeDialogFlowResult::getModuleId()const
{
	return moduleId_;
}

std::string DescribeDialogFlowResult::getDialogName()const
{
	return dialogName_;
}

std::string DescribeDialogFlowResult::getModifyUserId()const
{
	return modifyUserId_;
}

std::string DescribeDialogFlowResult::getModifyUserName()const
{
	return modifyUserName_;
}

std::string DescribeDialogFlowResult::getTags()const
{
	return tags_;
}

