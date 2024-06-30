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

#include <alibabacloud/quotas/model/ListProductDimensionGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quotas;
using namespace AlibabaCloud::Quotas::Model;

ListProductDimensionGroupsResult::ListProductDimensionGroupsResult() :
	ServiceResult()
{}

ListProductDimensionGroupsResult::ListProductDimensionGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProductDimensionGroupsResult::~ListProductDimensionGroupsResult()
{}

void ListProductDimensionGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDimensionGroupsNode = value["DimensionGroups"]["DimensionGroupsItem"];
	for (auto valueDimensionGroupsDimensionGroupsItem : allDimensionGroupsNode)
	{
		DimensionGroupsItem dimensionGroupsObject;
		if(!valueDimensionGroupsDimensionGroupsItem["ProductCode"].isNull())
			dimensionGroupsObject.productCode = valueDimensionGroupsDimensionGroupsItem["ProductCode"].asString();
		if(!valueDimensionGroupsDimensionGroupsItem["GroupCode"].isNull())
			dimensionGroupsObject.groupCode = valueDimensionGroupsDimensionGroupsItem["GroupCode"].asString();
		if(!valueDimensionGroupsDimensionGroupsItem["GroupName"].isNull())
			dimensionGroupsObject.groupName = valueDimensionGroupsDimensionGroupsItem["GroupName"].asString();
		auto allDimensionKeys = value["DimensionKeys"]["DimensionKeys"];
		for (auto value : allDimensionKeys)
			dimensionGroupsObject.dimensionKeys.push_back(value.asString());
		dimensionGroups_.push_back(dimensionGroupsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListProductDimensionGroupsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListProductDimensionGroupsResult::getNextToken()const
{
	return nextToken_;
}

int ListProductDimensionGroupsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListProductDimensionGroupsResult::DimensionGroupsItem> ListProductDimensionGroupsResult::getDimensionGroups()const
{
	return dimensionGroups_;
}

