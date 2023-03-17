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

#include <alibabacloud/cbn/model/DescribeTransitRouteTableAggregationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribeTransitRouteTableAggregationResult::DescribeTransitRouteTableAggregationResult() :
	ServiceResult()
{}

DescribeTransitRouteTableAggregationResult::DescribeTransitRouteTableAggregationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTransitRouteTableAggregationResult::~DescribeTransitRouteTableAggregationResult()
{}

void DescribeTransitRouteTableAggregationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Name"].isNull())
			dataObject.name = valueDataDataItem["Name"].asString();
		if(!valueDataDataItem["TransitRouteTableAggregationCidr"].isNull())
			dataObject.transitRouteTableAggregationCidr = valueDataDataItem["TransitRouteTableAggregationCidr"].asString();
		if(!valueDataDataItem["Scope"].isNull())
			dataObject.scope = valueDataDataItem["Scope"].asString();
		if(!valueDataDataItem["Nexthop"].isNull())
			dataObject.nexthop = valueDataDataItem["Nexthop"].asString();
		if(!valueDataDataItem["RouteType"].isNull())
			dataObject.routeType = valueDataDataItem["RouteType"].asString();
		if(!valueDataDataItem["Description"].isNull())
			dataObject.description = valueDataDataItem["Description"].asString();
		if(!valueDataDataItem["TrRouteTableId"].isNull())
			dataObject.trRouteTableId = valueDataDataItem["TrRouteTableId"].asString();
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = valueDataDataItem["Status"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::string DescribeTransitRouteTableAggregationResult::getNextToken()const
{
	return nextToken_;
}

int DescribeTransitRouteTableAggregationResult::getTotal()const
{
	return total_;
}

std::vector<DescribeTransitRouteTableAggregationResult::DataItem> DescribeTransitRouteTableAggregationResult::getData()const
{
	return data_;
}

int DescribeTransitRouteTableAggregationResult::getCount()const
{
	return count_;
}

