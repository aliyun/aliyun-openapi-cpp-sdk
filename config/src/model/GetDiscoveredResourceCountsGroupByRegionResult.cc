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

#include <alibabacloud/config/model/GetDiscoveredResourceCountsGroupByRegionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

GetDiscoveredResourceCountsGroupByRegionResult::GetDiscoveredResourceCountsGroupByRegionResult() :
	ServiceResult()
{}

GetDiscoveredResourceCountsGroupByRegionResult::GetDiscoveredResourceCountsGroupByRegionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDiscoveredResourceCountsGroupByRegionResult::~GetDiscoveredResourceCountsGroupByRegionResult()
{}

void GetDiscoveredResourceCountsGroupByRegionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDiscoveredResourceCountsSummaryNode = value["DiscoveredResourceCountsSummary"]["GroupedResourceCount"];
	for (auto valueDiscoveredResourceCountsSummaryGroupedResourceCount : allDiscoveredResourceCountsSummaryNode)
	{
		GroupedResourceCount discoveredResourceCountsSummaryObject;
		if(!valueDiscoveredResourceCountsSummaryGroupedResourceCount["ResourceCount"].isNull())
			discoveredResourceCountsSummaryObject.resourceCount = std::stol(valueDiscoveredResourceCountsSummaryGroupedResourceCount["ResourceCount"].asString());
		if(!valueDiscoveredResourceCountsSummaryGroupedResourceCount["GroupName"].isNull())
			discoveredResourceCountsSummaryObject.groupName = valueDiscoveredResourceCountsSummaryGroupedResourceCount["GroupName"].asString();
		if(!valueDiscoveredResourceCountsSummaryGroupedResourceCount["Region"].isNull())
			discoveredResourceCountsSummaryObject.region = valueDiscoveredResourceCountsSummaryGroupedResourceCount["Region"].asString();
		discoveredResourceCountsSummary_.push_back(discoveredResourceCountsSummaryObject);
	}

}

std::vector<GetDiscoveredResourceCountsGroupByRegionResult::GroupedResourceCount> GetDiscoveredResourceCountsGroupByRegionResult::getDiscoveredResourceCountsSummary()const
{
	return discoveredResourceCountsSummary_;
}

