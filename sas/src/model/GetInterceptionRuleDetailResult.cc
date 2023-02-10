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

#include <alibabacloud/sas/model/GetInterceptionRuleDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetInterceptionRuleDetailResult::GetInterceptionRuleDetailResult() :
	ServiceResult()
{}

GetInterceptionRuleDetailResult::GetInterceptionRuleDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInterceptionRuleDetailResult::~GetInterceptionRuleDetailResult()
{}

void GetInterceptionRuleDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto interceptionRuleDetailNode = value["InterceptionRuleDetail"];
	if(!interceptionRuleDetailNode["RuleType"].isNull())
		interceptionRuleDetail_.ruleType = interceptionRuleDetailNode["RuleType"].asString();
	if(!interceptionRuleDetailNode["RuleSwitch"].isNull())
		interceptionRuleDetail_.ruleSwitch = std::stoi(interceptionRuleDetailNode["RuleSwitch"].asString());
	if(!interceptionRuleDetailNode["RuleId"].isNull())
		interceptionRuleDetail_.ruleId = std::stol(interceptionRuleDetailNode["RuleId"].asString());
	if(!interceptionRuleDetailNode["RuleName"].isNull())
		interceptionRuleDetail_.ruleName = interceptionRuleDetailNode["RuleName"].asString();
	if(!interceptionRuleDetailNode["InterceptType"].isNull())
		interceptionRuleDetail_.interceptType = std::stol(interceptionRuleDetailNode["InterceptType"].asString());
	if(!interceptionRuleDetailNode["OrderIndex"].isNull())
		interceptionRuleDetail_.orderIndex = std::stol(interceptionRuleDetailNode["OrderIndex"].asString());
	auto srcTargetNode = interceptionRuleDetailNode["SrcTarget"];
	if(!srcTargetNode["AppName"].isNull())
		interceptionRuleDetail_.srcTarget.appName = srcTargetNode["AppName"].asString();
	if(!srcTargetNode["RuleType"].isNull())
		interceptionRuleDetail_.srcTarget.ruleType = srcTargetNode["RuleType"].asString();
	if(!srcTargetNode["TargetId"].isNull())
		interceptionRuleDetail_.srcTarget.targetId = std::stoi(srcTargetNode["TargetId"].asString());
	if(!srcTargetNode["TargetName"].isNull())
		interceptionRuleDetail_.srcTarget.targetName = srcTargetNode["TargetName"].asString();
	if(!srcTargetNode["Namespace"].isNull())
		interceptionRuleDetail_.srcTarget._namespace = srcTargetNode["Namespace"].asString();
	if(!srcTargetNode["TargetType"].isNull())
		interceptionRuleDetail_.srcTarget.targetType = srcTargetNode["TargetType"].asString();
		auto allImageList = srcTargetNode["ImageList"]["image"];
		for (auto value : allImageList)
			interceptionRuleDetail_.srcTarget.imageList.push_back(value.asString());
		auto allTagList = srcTargetNode["TagList"]["tag"];
		for (auto value : allTagList)
			interceptionRuleDetail_.srcTarget.tagList.push_back(value.asString());
	auto dstTargetNode = interceptionRuleDetailNode["DstTarget"];
	if(!dstTargetNode["AppName"].isNull())
		interceptionRuleDetail_.dstTarget.appName = dstTargetNode["AppName"].asString();
	if(!dstTargetNode["RuleType"].isNull())
		interceptionRuleDetail_.dstTarget.ruleType = dstTargetNode["RuleType"].asString();
	if(!dstTargetNode["TargetId"].isNull())
		interceptionRuleDetail_.dstTarget.targetId = std::stoi(dstTargetNode["TargetId"].asString());
	if(!dstTargetNode["TargetName"].isNull())
		interceptionRuleDetail_.dstTarget.targetName = dstTargetNode["TargetName"].asString();
	if(!dstTargetNode["Namespace"].isNull())
		interceptionRuleDetail_.dstTarget._namespace = dstTargetNode["Namespace"].asString();
	if(!dstTargetNode["TargetType"].isNull())
		interceptionRuleDetail_.dstTarget.targetType = dstTargetNode["TargetType"].asString();
		auto allPorts = dstTargetNode["Ports"]["port"];
		for (auto value : allPorts)
			interceptionRuleDetail_.dstTarget.ports.push_back(value.asString());
		auto allImageList1 = dstTargetNode["ImageList"]["image"];
		for (auto value : allImageList1)
			interceptionRuleDetail_.dstTarget.imageList1.push_back(value.asString());
		auto allTagList2 = dstTargetNode["TagList"]["tag"];
		for (auto value : allTagList2)
			interceptionRuleDetail_.dstTarget.tagList2.push_back(value.asString());

}

GetInterceptionRuleDetailResult::InterceptionRuleDetail GetInterceptionRuleDetailResult::getInterceptionRuleDetail()const
{
	return interceptionRuleDetail_;
}

