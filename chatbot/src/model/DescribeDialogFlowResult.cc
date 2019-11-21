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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto moduleDefinitionNode = value["ModuleDefinition"];
	auto allNodesNode = moduleDefinitionNode["Nodes"]["NodesItem"];
	for (auto moduleDefinitionNodeNodesNodesItem : allNodesNode)
	{
		ModuleDefinition::NodesItem nodesItemObject;
		if(!moduleDefinitionNodeNodesNodesItem["Code"].isNull())
			nodesItemObject.code = moduleDefinitionNodeNodesNodesItem["Code"].asString();
		if(!moduleDefinitionNodeNodesNodesItem["ComponentCode"].isNull())
			nodesItemObject.componentCode = moduleDefinitionNodeNodesNodesItem["ComponentCode"].asString();
		if(!moduleDefinitionNodeNodesNodesItem["PluginDataUpdate"].isNull())
			nodesItemObject.pluginDataUpdate = moduleDefinitionNodeNodesNodesItem["PluginDataUpdate"].asString() == "true";
		if(!moduleDefinitionNodeNodesNodesItem["Xx"].isNull())
			nodesItemObject.xx = moduleDefinitionNodeNodesNodesItem["Xx"].asString();
		if(!moduleDefinitionNodeNodesNodesItem["Yy"].isNull())
			nodesItemObject.yy = moduleDefinitionNodeNodesNodesItem["Yy"].asString();
		if(!moduleDefinitionNodeNodesNodesItem["Id"].isNull())
			nodesItemObject.id = moduleDefinitionNodeNodesNodesItem["Id"].asString();
		if(!moduleDefinitionNodeNodesNodesItem["Label"].isNull())
			nodesItemObject.label = moduleDefinitionNodeNodesNodesItem["Label"].asString();
		auto pluginDataNode = value["PluginData"];
		auto entryNode = pluginDataNode["Entry"];
		auto pluginFieldDataEntryNode = entryNode["PluginFieldDataEntry"];
		if(!pluginFieldDataEntryNode["LifeSpan"].isNull())
			nodesItemObject.pluginData.entry.pluginFieldDataEntry.lifeSpan = std::stoi(pluginFieldDataEntryNode["LifeSpan"].asString());
		if(!pluginFieldDataEntryNode["Name"].isNull())
			nodesItemObject.pluginData.entry.pluginFieldDataEntry.name = pluginFieldDataEntryNode["Name"].asString();
		auto allContentEntryNode = pluginFieldDataEntryNode["ContentEntry"]["ContentEntryItem"];
		for (auto pluginFieldDataEntryNodeContentEntryContentEntryItem : allContentEntryNode)
		{
			ModuleDefinition::NodesItem::PluginData::Entry::PluginFieldDataEntry::ContentEntryItem contentEntryItemObject;
			auto allConditionEntriesNode = allContentEntryNode["ConditionEntries"]["ConditionEntriesItem"];
			for (auto allContentEntryNodeConditionEntriesConditionEntriesItem : allConditionEntriesNode)
			{
				ModuleDefinition::NodesItem::PluginData::Entry::PluginFieldDataEntry::ContentEntryItem::ConditionEntriesItem conditionEntriesObject;
				if(!allContentEntryNodeConditionEntriesConditionEntriesItem["Id"].isNull())
					conditionEntriesObject.id = allContentEntryNodeConditionEntriesConditionEntriesItem["Id"].asString();
				if(!allContentEntryNodeConditionEntriesConditionEntriesItem["Term"].isNull())
					conditionEntriesObject.term = allContentEntryNodeConditionEntriesConditionEntriesItem["Term"].asString();
				if(!allContentEntryNodeConditionEntriesConditionEntriesItem["Name"].isNull())
					conditionEntriesObject.name = allContentEntryNodeConditionEntriesConditionEntriesItem["Name"].asString();
				if(!allContentEntryNodeConditionEntriesConditionEntriesItem["Type"].isNull())
					conditionEntriesObject.type = allContentEntryNodeConditionEntriesConditionEntriesItem["Type"].asString();
				if(!allContentEntryNodeConditionEntriesConditionEntriesItem["Value"].isNull())
					conditionEntriesObject.value = allContentEntryNodeConditionEntriesConditionEntriesItem["Value"].asString();
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
		auto all_SwitchNode = pluginFieldDataFunctionNode["Switch"]["SwitchItem"];
		for (auto pluginFieldDataFunctionNodeSwitchSwitchItem : all_SwitchNode)
		{
			ModuleDefinition::NodesItem::PluginData::Function::PluginFieldDataFunction::SwitchItem switchItemObject;
			if(!pluginFieldDataFunctionNodeSwitchSwitchItem["Id"].isNull())
				switchItemObject.id = pluginFieldDataFunctionNodeSwitchSwitchItem["Id"].asString();
			if(!pluginFieldDataFunctionNodeSwitchSwitchItem["Label"].isNull())
				switchItemObject.label = pluginFieldDataFunctionNodeSwitchSwitchItem["Label"].asString();
			if(!pluginFieldDataFunctionNodeSwitchSwitchItem["Type"].isNull())
				switchItemObject.type = pluginFieldDataFunctionNodeSwitchSwitchItem["Type"].asString();
			if(!pluginFieldDataFunctionNodeSwitchSwitchItem["Value"].isNull())
				switchItemObject.value = pluginFieldDataFunctionNodeSwitchSwitchItem["Value"].asString();
			if(!pluginFieldDataFunctionNodeSwitchSwitchItem["Name"].isNull())
				switchItemObject.name = pluginFieldDataFunctionNodeSwitchSwitchItem["Name"].asString();
			nodesItemObject.pluginData.function.pluginFieldDataFunction._switch.push_back(switchItemObject);
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
		auto allButtonNode = buttonListNode["Button"]["ButtonItem"];
		for (auto buttonListNodeButtonButtonItem : allButtonNode)
		{
			ModuleDefinition::NodesItem::PluginData::Response::PluginFieldDataResponse::ContentResponse::ButtonList::ButtonItem buttonItemObject;
			if(!buttonListNodeButtonButtonItem["Name"].isNull())
				buttonItemObject.name = buttonListNodeButtonButtonItem["Name"].asString();
			if(!buttonListNodeButtonButtonItem["Type"].isNull())
				buttonItemObject.type = buttonListNodeButtonButtonItem["Type"].asString();
			if(!buttonListNodeButtonButtonItem["Text"].isNull())
				buttonItemObject.text = buttonListNodeButtonButtonItem["Text"].asString();
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
		auto allContentSlotNode = pluginFieldDataSlotNode["ContentSlot"]["ContentSlotItem"];
		for (auto pluginFieldDataSlotNodeContentSlotContentSlotItem : allContentSlotNode)
		{
			ModuleDefinition::NodesItem::PluginData::Slot::PluginFieldDataSlot::ContentSlotItem contentSlotItemObject;
			if(!pluginFieldDataSlotNodeContentSlotContentSlotItem["IsArray"].isNull())
				contentSlotItemObject.isArray = pluginFieldDataSlotNodeContentSlotContentSlotItem["IsArray"].asString() == "true";
			if(!pluginFieldDataSlotNodeContentSlotContentSlotItem["IsNecessary"].isNull())
				contentSlotItemObject.isNecessary = pluginFieldDataSlotNodeContentSlotContentSlotItem["IsNecessary"].asString() == "true";
			if(!pluginFieldDataSlotNodeContentSlotContentSlotItem["LifeSpan"].isNull())
				contentSlotItemObject.lifeSpan = std::stoi(pluginFieldDataSlotNodeContentSlotContentSlotItem["LifeSpan"].asString());
			if(!pluginFieldDataSlotNodeContentSlotContentSlotItem["Name"].isNull())
				contentSlotItemObject.name = pluginFieldDataSlotNodeContentSlotContentSlotItem["Name"].asString();
			if(!pluginFieldDataSlotNodeContentSlotContentSlotItem["Value"].isNull())
				contentSlotItemObject.value = pluginFieldDataSlotNodeContentSlotContentSlotItem["Value"].asString();
			auto allQuestion = value["Question"]["Question"];
			for (auto value : allQuestion)
				contentSlotItemObject.question.push_back(value.asString());
			nodesItemObject.pluginData.slot.pluginFieldDataSlot.contentSlot.push_back(contentSlotItemObject);
		}
		moduleDefinition_.nodes.push_back(nodesItemObject);
	}
	auto allEdgesNode = moduleDefinitionNode["Edges"]["EdgesItem"];
	for (auto moduleDefinitionNodeEdgesEdgesItem : allEdgesNode)
	{
		ModuleDefinition::EdgesItem edgesItemObject;
		if(!moduleDefinitionNodeEdgesEdgesItem["Id"].isNull())
			edgesItemObject.id = moduleDefinitionNodeEdgesEdgesItem["Id"].asString();
		if(!moduleDefinitionNodeEdgesEdgesItem["Label"].isNull())
			edgesItemObject.label = moduleDefinitionNodeEdgesEdgesItem["Label"].asString();
		if(!moduleDefinitionNodeEdgesEdgesItem["Source"].isNull())
			edgesItemObject.source = moduleDefinitionNodeEdgesEdgesItem["Source"].asString();
		if(!moduleDefinitionNodeEdgesEdgesItem["Target"].isNull())
			edgesItemObject.target = moduleDefinitionNodeEdgesEdgesItem["Target"].asString();
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

