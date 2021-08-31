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

#include <alibabacloud/edas/model/GetScalingRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetScalingRulesResult::GetScalingRulesResult() :
	ServiceResult()
{}

GetScalingRulesResult::GetScalingRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetScalingRulesResult::~GetScalingRulesResult()
{}

void GetScalingRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ClusterType"].isNull())
		data_.clusterType = std::stoi(dataNode["ClusterType"].asString());
	if(!dataNode["OversoldFactor"].isNull())
		data_.oversoldFactor = std::stoi(dataNode["OversoldFactor"].asString());
	if(!dataNode["VpcId"].isNull())
		data_.vpcId = dataNode["VpcId"].asString();
	if(!dataNode["UpdateTime"].isNull())
		data_.updateTime = std::stol(dataNode["UpdateTime"].asString());
	auto allRuleListNode = dataNode["RuleList"]["Rule"];
	for (auto dataNodeRuleListRule : allRuleListNode)
	{
		Data::Rule ruleObject;
		if(!dataNodeRuleListRule["AppId"].isNull())
			ruleObject.appId = dataNodeRuleListRule["AppId"].asString();
		if(!dataNodeRuleListRule["GroupId"].isNull())
			ruleObject.groupId = dataNodeRuleListRule["GroupId"].asString();
		if(!dataNodeRuleListRule["Enable"].isNull())
			ruleObject.enable = dataNodeRuleListRule["Enable"].asString() == "true";
		if(!dataNodeRuleListRule["Mode"].isNull())
			ruleObject.mode = dataNodeRuleListRule["Mode"].asString();
		if(!dataNodeRuleListRule["Cond"].isNull())
			ruleObject.cond = dataNodeRuleListRule["Cond"].asString();
		if(!dataNodeRuleListRule["Cpu"].isNull())
			ruleObject.cpu = std::stoi(dataNodeRuleListRule["Cpu"].asString());
		if(!dataNodeRuleListRule["Rt"].isNull())
			ruleObject.rt = std::stoi(dataNodeRuleListRule["Rt"].asString());
		if(!dataNodeRuleListRule["ResourceFrom"].isNull())
			ruleObject.resourceFrom = dataNodeRuleListRule["ResourceFrom"].asString();
		if(!dataNodeRuleListRule["Step"].isNull())
			ruleObject.step = std::stoi(dataNodeRuleListRule["Step"].asString());
		if(!dataNodeRuleListRule["InstNum"].isNull())
			ruleObject.instNum = std::stoi(dataNodeRuleListRule["InstNum"].asString());
		if(!dataNodeRuleListRule["LoadNum"].isNull())
			ruleObject.loadNum = std::stoi(dataNodeRuleListRule["LoadNum"].asString());
		if(!dataNodeRuleListRule["TemplateId"].isNull())
			ruleObject.templateId = dataNodeRuleListRule["TemplateId"].asString();
		if(!dataNodeRuleListRule["TemplateVersion"].isNull())
			ruleObject.templateVersion = std::stoi(dataNodeRuleListRule["TemplateVersion"].asString());
		if(!dataNodeRuleListRule["VpcId"].isNull())
			ruleObject.vpcId = dataNodeRuleListRule["VpcId"].asString();
		if(!dataNodeRuleListRule["MetricType"].isNull())
			ruleObject.metricType = dataNodeRuleListRule["MetricType"].asString();
		if(!dataNodeRuleListRule["VSwitchIds"].isNull())
			ruleObject.vSwitchIds = dataNodeRuleListRule["VSwitchIds"].asString();
		if(!dataNodeRuleListRule["MultiAzPolicy"].isNull())
			ruleObject.multiAzPolicy = dataNodeRuleListRule["MultiAzPolicy"].asString();
		if(!dataNodeRuleListRule["SpecId"].isNull())
			ruleObject.specId = dataNodeRuleListRule["SpecId"].asString();
		if(!dataNodeRuleListRule["Duration"].isNull())
			ruleObject.duration = std::stoi(dataNodeRuleListRule["Duration"].asString());
		if(!dataNodeRuleListRule["CreateTime"].isNull())
			ruleObject.createTime = std::stol(dataNodeRuleListRule["CreateTime"].asString());
		if(!dataNodeRuleListRule["UpdateTime"].isNull())
			ruleObject.updateTime = std::stol(dataNodeRuleListRule["UpdateTime"].asString());
		data_.ruleList.push_back(ruleObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["UpdateTime"].isNull())
		updateTime_ = std::stol(value["UpdateTime"].asString());

}

std::string GetScalingRulesResult::getMessage()const
{
	return message_;
}

long GetScalingRulesResult::getUpdateTime()const
{
	return updateTime_;
}

GetScalingRulesResult::Data GetScalingRulesResult::getData()const
{
	return data_;
}

int GetScalingRulesResult::getCode()const
{
	return code_;
}

