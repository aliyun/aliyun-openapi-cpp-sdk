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

#include <alibabacloud/vpc/model/GetVpcRouteEntrySummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

GetVpcRouteEntrySummaryResult::GetVpcRouteEntrySummaryResult() :
	ServiceResult()
{}

GetVpcRouteEntrySummaryResult::GetVpcRouteEntrySummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVpcRouteEntrySummaryResult::~GetVpcRouteEntrySummaryResult()
{}

void GetVpcRouteEntrySummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRouteEntrySummarysNode = value["RouteEntrySummarys"]["RouteEntrySummarysItem"];
	for (auto valueRouteEntrySummarysRouteEntrySummarysItem : allRouteEntrySummarysNode)
	{
		RouteEntrySummarysItem routeEntrySummarysObject;
		if(!valueRouteEntrySummarysRouteEntrySummarysItem["RouteTableId"].isNull())
			routeEntrySummarysObject.routeTableId = valueRouteEntrySummarysRouteEntrySummarysItem["RouteTableId"].asString();
		auto allEntrySummarysNode = valueRouteEntrySummarysRouteEntrySummarysItem["EntrySummarys"]["EntrySummarysItem"];
		for (auto valueRouteEntrySummarysRouteEntrySummarysItemEntrySummarysEntrySummarysItem : allEntrySummarysNode)
		{
			RouteEntrySummarysItem::EntrySummarysItem entrySummarysObject;
			if(!valueRouteEntrySummarysRouteEntrySummarysItemEntrySummarysEntrySummarysItem["RouteEntryType"].isNull())
				entrySummarysObject.routeEntryType = valueRouteEntrySummarysRouteEntrySummarysItemEntrySummarysEntrySummarysItem["RouteEntryType"].asString();
			if(!valueRouteEntrySummarysRouteEntrySummarysItemEntrySummarysEntrySummarysItem["Count"].isNull())
				entrySummarysObject.count = std::stoi(valueRouteEntrySummarysRouteEntrySummarysItemEntrySummarysEntrySummarysItem["Count"].asString());
			routeEntrySummarysObject.entrySummarys.push_back(entrySummarysObject);
		}
		routeEntrySummarys_.push_back(routeEntrySummarysObject);
	}

}

std::vector<GetVpcRouteEntrySummaryResult::RouteEntrySummarysItem> GetVpcRouteEntrySummaryResult::getRouteEntrySummarys()const
{
	return routeEntrySummarys_;
}

