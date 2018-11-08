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

#include <alibabacloud/pvtz/model/DescribeStatisticSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Pvtz;
using namespace AlibabaCloud::Pvtz::Model;

DescribeStatisticSummaryResult::DescribeStatisticSummaryResult() :
	ServiceResult()
{}

DescribeStatisticSummaryResult::DescribeStatisticSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStatisticSummaryResult::~DescribeStatisticSummaryResult()
{}

void DescribeStatisticSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allZoneRequestTops = value["ZoneRequestTops"]["ZoneRequestTop"];
	for (auto value : allZoneRequestTops)
	{
		ZoneRequestTop zoneRequestTopsObject;
		if(!value["ZoneName"].isNull())
			zoneRequestTopsObject.zoneName = value["ZoneName"].asString();
		if(!value["RequestCount"].isNull())
			zoneRequestTopsObject.requestCount = std::stol(value["RequestCount"].asString());
		zoneRequestTops_.push_back(zoneRequestTopsObject);
	}
	auto allVpcRequestTops = value["VpcRequestTops"]["VpcRequestTop"];
	for (auto value : allVpcRequestTops)
	{
		VpcRequestTop vpcRequestTopsObject;
		if(!value["RegionId"].isNull())
			vpcRequestTopsObject.regionId = value["RegionId"].asString();
		if(!value["VpcId"].isNull())
			vpcRequestTopsObject.vpcId = value["VpcId"].asString();
		if(!value["TunnelId"].isNull())
			vpcRequestTopsObject.tunnelId = value["TunnelId"].asString();
		if(!value["RequestCount"].isNull())
			vpcRequestTopsObject.requestCount = std::stol(value["RequestCount"].asString());
		if(!value["RegionName"].isNull())
			vpcRequestTopsObject.regionName = value["RegionName"].asString();
		vpcRequestTops_.push_back(vpcRequestTopsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeStatisticSummaryResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeStatisticSummaryResult::ZoneRequestTop> DescribeStatisticSummaryResult::getZoneRequestTops()const
{
	return zoneRequestTops_;
}

std::vector<DescribeStatisticSummaryResult::VpcRequestTop> DescribeStatisticSummaryResult::getVpcRequestTops()const
{
	return vpcRequestTops_;
}

