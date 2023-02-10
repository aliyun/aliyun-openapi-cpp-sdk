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

#include <alibabacloud/sas/model/ListInterceptionTargetPageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListInterceptionTargetPageResult::ListInterceptionTargetPageResult() :
	ServiceResult()
{}

ListInterceptionTargetPageResult::ListInterceptionTargetPageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInterceptionTargetPageResult::~ListInterceptionTargetPageResult()
{}

void ListInterceptionTargetPageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRuleTargetListNode = value["RuleTargetList"]["RuleTarget"];
	for (auto valueRuleTargetListRuleTarget : allRuleTargetListNode)
	{
		RuleTarget ruleTargetListObject;
		if(!valueRuleTargetListRuleTarget["AppName"].isNull())
			ruleTargetListObject.appName = valueRuleTargetListRuleTarget["AppName"].asString();
		if(!valueRuleTargetListRuleTarget["TargetId"].isNull())
			ruleTargetListObject.targetId = std::stol(valueRuleTargetListRuleTarget["TargetId"].asString());
		if(!valueRuleTargetListRuleTarget["TargetName"].isNull())
			ruleTargetListObject.targetName = valueRuleTargetListRuleTarget["TargetName"].asString();
		if(!valueRuleTargetListRuleTarget["Namespace"].isNull())
			ruleTargetListObject._namespace = valueRuleTargetListRuleTarget["Namespace"].asString();
		if(!valueRuleTargetListRuleTarget["TargetType"].isNull())
			ruleTargetListObject.targetType = valueRuleTargetListRuleTarget["TargetType"].asString();
		if(!valueRuleTargetListRuleTarget["ClusterId"].isNull())
			ruleTargetListObject.clusterId = valueRuleTargetListRuleTarget["ClusterId"].asString();
		if(!valueRuleTargetListRuleTarget["ClusterName"].isNull())
			ruleTargetListObject.clusterName = valueRuleTargetListRuleTarget["ClusterName"].asString();
		if(!valueRuleTargetListRuleTarget["RuleType"].isNull())
			ruleTargetListObject.ruleType = valueRuleTargetListRuleTarget["RuleType"].asString();
		auto allImageList = value["ImageList"]["imageList"];
		for (auto value : allImageList)
			ruleTargetListObject.imageList.push_back(value.asString());
		auto allTagList = value["TagList"]["tagList"];
		for (auto value : allTagList)
			ruleTargetListObject.tagList.push_back(value.asString());
		ruleTargetList_.push_back(ruleTargetListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());

}

ListInterceptionTargetPageResult::PageInfo ListInterceptionTargetPageResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<ListInterceptionTargetPageResult::RuleTarget> ListInterceptionTargetPageResult::getRuleTargetList()const
{
	return ruleTargetList_;
}

