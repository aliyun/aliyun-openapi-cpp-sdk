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
	auto allZoneRequestTopsNode = value["ZoneRequestTops"]["ZoneRequestTop"];
	for (auto valueZoneRequestTopsZoneRequestTop : allZoneRequestTopsNode)
	{
		ZoneRequestTop zoneRequestTopsObject;
		if(!valueZoneRequestTopsZoneRequestTop["ZoneName"].isNull())
			zoneRequestTopsObject.zoneName = valueZoneRequestTopsZoneRequestTop["ZoneName"].asString();
		if(!valueZoneRequestTopsZoneRequestTop["RequestCount"].isNull())
			zoneRequestTopsObject.requestCount = std::stol(valueZoneRequestTopsZoneRequestTop["RequestCount"].asString());
		if(!valueZoneRequestTopsZoneRequestTop["BizType"].isNull())
			zoneRequestTopsObject.bizType = valueZoneRequestTopsZoneRequestTop["BizType"].asString();
		zoneRequestTops_.push_back(zoneRequestTopsObject);
	}
	auto allVpcRequestTopsNode = value["VpcRequestTops"]["VpcRequestTop"];
	for (auto valueVpcRequestTopsVpcRequestTop : allVpcRequestTopsNode)
	{
		VpcRequestTop vpcRequestTopsObject;
		if(!valueVpcRequestTopsVpcRequestTop["RegionId"].isNull())
			vpcRequestTopsObject.regionId = valueVpcRequestTopsVpcRequestTop["RegionId"].asString();
		if(!valueVpcRequestTopsVpcRequestTop["VpcId"].isNull())
			vpcRequestTopsObject.vpcId = valueVpcRequestTopsVpcRequestTop["VpcId"].asString();
		if(!valueVpcRequestTopsVpcRequestTop["TunnelId"].isNull())
			vpcRequestTopsObject.tunnelId = valueVpcRequestTopsVpcRequestTop["TunnelId"].asString();
		if(!valueVpcRequestTopsVpcRequestTop["RequestCount"].isNull())
			vpcRequestTopsObject.requestCount = std::stol(valueVpcRequestTopsVpcRequestTop["RequestCount"].asString());
		if(!valueVpcRequestTopsVpcRequestTop["RegionName"].isNull())
			vpcRequestTopsObject.regionName = valueVpcRequestTopsVpcRequestTop["RegionName"].asString();
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

