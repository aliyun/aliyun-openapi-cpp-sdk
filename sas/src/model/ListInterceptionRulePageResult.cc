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

#include <alibabacloud/sas/model/ListInterceptionRulePageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListInterceptionRulePageResult::ListInterceptionRulePageResult() :
	ServiceResult()
{}

ListInterceptionRulePageResult::ListInterceptionRulePageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInterceptionRulePageResult::~ListInterceptionRulePageResult()
{}

void ListInterceptionRulePageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInterceptionRuleListNode = value["InterceptionRuleList"]["Rule"];
	for (auto valueInterceptionRuleListRule : allInterceptionRuleListNode)
	{
		Rule interceptionRuleListObject;
		if(!valueInterceptionRuleListRule["RuleType"].isNull())
			interceptionRuleListObject.ruleType = valueInterceptionRuleListRule["RuleType"].asString();
		if(!valueInterceptionRuleListRule["RuleSwitch"].isNull())
			interceptionRuleListObject.ruleSwitch = std::stoi(valueInterceptionRuleListRule["RuleSwitch"].asString());
		if(!valueInterceptionRuleListRule["RuleId"].isNull())
			interceptionRuleListObject.ruleId = std::stol(valueInterceptionRuleListRule["RuleId"].asString());
		if(!valueInterceptionRuleListRule["RuleName"].isNull())
			interceptionRuleListObject.ruleName = valueInterceptionRuleListRule["RuleName"].asString();
		if(!valueInterceptionRuleListRule["OrderIndex"].isNull())
			interceptionRuleListObject.orderIndex = std::stol(valueInterceptionRuleListRule["OrderIndex"].asString());
		if(!valueInterceptionRuleListRule["InterceptType"].isNull())
			interceptionRuleListObject.interceptType = std::stol(valueInterceptionRuleListRule["InterceptType"].asString());
		auto srcTargetNode = value["SrcTarget"];
		if(!srcTargetNode["AppName"].isNull())
			interceptionRuleListObject.srcTarget.appName = srcTargetNode["AppName"].asString();
		if(!srcTargetNode["RuleType"].isNull())
			interceptionRuleListObject.srcTarget.ruleType = srcTargetNode["RuleType"].asString();
		if(!srcTargetNode["TargetId"].isNull())
			interceptionRuleListObject.srcTarget.targetId = std::stoi(srcTargetNode["TargetId"].asString());
		if(!srcTargetNode["TargetName"].isNull())
			interceptionRuleListObject.srcTarget.targetName = srcTargetNode["TargetName"].asString();
		if(!srcTargetNode["Namespace"].isNull())
			interceptionRuleListObject.srcTarget._namespace = srcTargetNode["Namespace"].asString();
		if(!srcTargetNode["TargetType"].isNull())
			interceptionRuleListObject.srcTarget.targetType = srcTargetNode["TargetType"].asString();
			auto allImageList = srcTargetNode["ImageList"]["image"];
			for (auto value : allImageList)
				interceptionRuleListObject.srcTarget.imageList.push_back(value.asString());
			auto allTagList = srcTargetNode["TagList"]["tag"];
			for (auto value : allTagList)
				interceptionRuleListObject.srcTarget.tagList.push_back(value.asString());
		auto dstTargetNode = value["DstTarget"];
		if(!dstTargetNode["AppName"].isNull())
			interceptionRuleListObject.dstTarget.appName = dstTargetNode["AppName"].asString();
		if(!dstTargetNode["RuleType"].isNull())
			interceptionRuleListObject.dstTarget.ruleType = dstTargetNode["RuleType"].asString();
		if(!dstTargetNode["TargetId"].isNull())
			interceptionRuleListObject.dstTarget.targetId = std::stoi(dstTargetNode["TargetId"].asString());
		if(!dstTargetNode["TargetName"].isNull())
			interceptionRuleListObject.dstTarget.targetName = dstTargetNode["TargetName"].asString();
		if(!dstTargetNode["Namespace"].isNull())
			interceptionRuleListObject.dstTarget._namespace = dstTargetNode["Namespace"].asString();
		if(!dstTargetNode["TargetType"].isNull())
			interceptionRuleListObject.dstTarget.targetType = dstTargetNode["TargetType"].asString();
			auto allPorts = dstTargetNode["Ports"]["port"];
			for (auto value : allPorts)
				interceptionRuleListObject.dstTarget.ports.push_back(value.asString());
			auto allImageList1 = dstTargetNode["ImageList"]["image"];
			for (auto value : allImageList1)
				interceptionRuleListObject.dstTarget.imageList1.push_back(value.asString());
			auto allTagList2 = dstTargetNode["TagList"]["tag"];
			for (auto value : allTagList2)
				interceptionRuleListObject.dstTarget.tagList2.push_back(value.asString());
		interceptionRuleList_.push_back(interceptionRuleListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

std::vector<ListInterceptionRulePageResult::Rule> ListInterceptionRulePageResult::getInterceptionRuleList()const
{
	return interceptionRuleList_;
}

ListInterceptionRulePageResult::PageInfo ListInterceptionRulePageResult::getPageInfo()const
{
	return pageInfo_;
}

