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

#include <alibabacloud/sas/model/ListSystemAggregationRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListSystemAggregationRulesResult::ListSystemAggregationRulesResult() :
	ServiceResult()
{}

ListSystemAggregationRulesResult::ListSystemAggregationRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSystemAggregationRulesResult::~ListSystemAggregationRulesResult()
{}

void ListSystemAggregationRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAggregationListNode = value["AggregationList"]["AggregationListItem"];
	for (auto valueAggregationListAggregationListItem : allAggregationListNode)
	{
		AggregationListItem aggregationListObject;
		if(!valueAggregationListAggregationListItem["Id"].isNull())
			aggregationListObject.id = std::stoi(valueAggregationListAggregationListItem["Id"].asString());
		if(!valueAggregationListAggregationListItem["RuleCount"].isNull())
			aggregationListObject.ruleCount = std::stoi(valueAggregationListAggregationListItem["RuleCount"].asString());
		if(!valueAggregationListAggregationListItem["Name"].isNull())
			aggregationListObject.name = valueAggregationListAggregationListItem["Name"].asString();
		aggregationList_.push_back(aggregationListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());

}

ListSystemAggregationRulesResult::PageInfo ListSystemAggregationRulesResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<ListSystemAggregationRulesResult::AggregationListItem> ListSystemAggregationRulesResult::getAggregationList()const
{
	return aggregationList_;
}

