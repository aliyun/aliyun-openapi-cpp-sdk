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

#include <alibabacloud/resourcecenter/model/GetResourceCountsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceCenter;
using namespace AlibabaCloud::ResourceCenter::Model;

GetResourceCountsResult::GetResourceCountsResult() :
	ServiceResult()
{}

GetResourceCountsResult::GetResourceCountsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetResourceCountsResult::~GetResourceCountsResult()
{}

void GetResourceCountsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFiltersNode = value["Filters"]["Filter"];
	for (auto valueFiltersFilter : allFiltersNode)
	{
		Filter filtersObject;
		if(!valueFiltersFilter["Key"].isNull())
			filtersObject.key = valueFiltersFilter["Key"].asString();
		auto allValues = value["Values"]["Value"];
		for (auto value : allValues)
			filtersObject.values.push_back(value.asString());
		filters_.push_back(filtersObject);
	}
	auto allResourceCountsNode = value["ResourceCounts"]["ResourceCount"];
	for (auto valueResourceCountsResourceCount : allResourceCountsNode)
	{
		ResourceCount resourceCountsObject;
		if(!valueResourceCountsResourceCount["Count"].isNull())
			resourceCountsObject.count = std::stol(valueResourceCountsResourceCount["Count"].asString());
		if(!valueResourceCountsResourceCount["GroupName"].isNull())
			resourceCountsObject.groupName = valueResourceCountsResourceCount["GroupName"].asString();
		resourceCounts_.push_back(resourceCountsObject);
	}
	if(!value["GroupByKey"].isNull())
		groupByKey_ = value["GroupByKey"].asString();

}

std::vector<GetResourceCountsResult::Filter> GetResourceCountsResult::getFilters()const
{
	return filters_;
}

std::string GetResourceCountsResult::getGroupByKey()const
{
	return groupByKey_;
}

std::vector<GetResourceCountsResult::ResourceCount> GetResourceCountsResult::getResourceCounts()const
{
	return resourceCounts_;
}

