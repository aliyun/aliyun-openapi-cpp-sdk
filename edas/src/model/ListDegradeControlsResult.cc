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

#include <alibabacloud/edas/model/ListDegradeControlsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListDegradeControlsResult::ListDegradeControlsResult() :
	ServiceResult()
{}

ListDegradeControlsResult::ListDegradeControlsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDegradeControlsResult::~ListDegradeControlsResult()
{}

void ListDegradeControlsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto flowControlsMapNode = value["FlowControlsMap"];
	if(!flowControlsMapNode["AppId"].isNull())
		flowControlsMap_.appId = flowControlsMapNode["AppId"].asString();
	if(!flowControlsMapNode["AppName"].isNull())
		flowControlsMap_.appName = flowControlsMapNode["AppName"].asString();
	auto allInterfaceMethodsNode = flowControlsMapNode["InterfaceMethods"]["InterfaceMethod"];
	for (auto flowControlsMapNodeInterfaceMethodsInterfaceMethod : allInterfaceMethodsNode)
	{
		FlowControlsMap::InterfaceMethod interfaceMethodObject;
		if(!flowControlsMapNodeInterfaceMethodsInterfaceMethod["name"].isNull())
			interfaceMethodObject.name = flowControlsMapNodeInterfaceMethodsInterfaceMethod["name"].asString();
		if(!flowControlsMapNodeInterfaceMethodsInterfaceMethod["Version"].isNull())
			interfaceMethodObject.version = flowControlsMapNodeInterfaceMethodsInterfaceMethod["Version"].asString();
		auto allMethods = value["Methods"]["Method"];
		for (auto value : allMethods)
			interfaceMethodObject.methods.push_back(value.asString());
		flowControlsMap_.interfaceMethods.push_back(interfaceMethodObject);
	}
	auto ruleListNode = flowControlsMapNode["RuleList"];
	if(!ruleListNode["CurrentPage"].isNull())
		flowControlsMap_.ruleList.currentPage = std::stoi(ruleListNode["CurrentPage"].asString());
	if(!ruleListNode["pageSize"].isNull())
		flowControlsMap_.ruleList.pageSize = std::stoi(ruleListNode["pageSize"].asString());
	if(!ruleListNode["TotalSize"].isNull())
		flowControlsMap_.ruleList.totalSize = std::stoi(ruleListNode["TotalSize"].asString());
	auto allRuleResultListNode = ruleListNode["RuleResultList"]["Rule"];
	for (auto ruleListNodeRuleResultListRule : allRuleResultListNode)
	{
		FlowControlsMap::RuleList::Rule ruleObject;
		if(!ruleListNodeRuleResultListRule["AppId"].isNull())
			ruleObject.appId = ruleListNodeRuleResultListRule["AppId"].asString();
		if(!ruleListNodeRuleResultListRule["RuleId"].isNull())
			ruleObject.ruleId = ruleListNodeRuleResultListRule["RuleId"].asString();
		if(!ruleListNodeRuleResultListRule["CreateTime"].isNull())
			ruleObject.createTime = std::stol(ruleListNodeRuleResultListRule["CreateTime"].asString());
		if(!ruleListNodeRuleResultListRule["UpdateTime"].isNull())
			ruleObject.updateTime = std::stol(ruleListNodeRuleResultListRule["UpdateTime"].asString());
		if(!ruleListNodeRuleResultListRule["Resource"].isNull())
			ruleObject.resource = ruleListNodeRuleResultListRule["Resource"].asString();
		if(!ruleListNodeRuleResultListRule["RtThreshold"].isNull())
			ruleObject.rtThreshold = std::stoi(ruleListNodeRuleResultListRule["RtThreshold"].asString());
		if(!ruleListNodeRuleResultListRule["Duration"].isNull())
			ruleObject.duration = std::stoi(ruleListNodeRuleResultListRule["Duration"].asString());
		if(!ruleListNodeRuleResultListRule["State"].isNull())
			ruleObject.state = std::stoi(ruleListNodeRuleResultListRule["State"].asString());
		if(!ruleListNodeRuleResultListRule["RuleType"].isNull())
			ruleObject.ruleType = ruleListNodeRuleResultListRule["RuleType"].asString();
		flowControlsMap_.ruleList.ruleResultList.push_back(ruleObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListDegradeControlsResult::getMessage()const
{
	return message_;
}

ListDegradeControlsResult::FlowControlsMap ListDegradeControlsResult::getFlowControlsMap()const
{
	return flowControlsMap_;
}

int ListDegradeControlsResult::getCode()const
{
	return code_;
}

