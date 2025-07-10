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

#include <alibabacloud/vpc/model/DescribeVpnGatewayAvailableZonesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeVpnGatewayAvailableZonesResult::DescribeVpnGatewayAvailableZonesResult() :
	ServiceResult()
{}

DescribeVpnGatewayAvailableZonesResult::DescribeVpnGatewayAvailableZonesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVpnGatewayAvailableZonesResult::~DescribeVpnGatewayAvailableZonesResult()
{}

void DescribeVpnGatewayAvailableZonesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAvailableZoneIdListNode = value["AvailableZoneIdList"]["AvailableZoneId"];
	for (auto valueAvailableZoneIdListAvailableZoneId : allAvailableZoneIdListNode)
	{
		AvailableZoneId availableZoneIdListObject;
		if(!valueAvailableZoneIdListAvailableZoneId["ZoneId"].isNull())
			availableZoneIdListObject.zoneId = valueAvailableZoneIdListAvailableZoneId["ZoneId"].asString();
		if(!valueAvailableZoneIdListAvailableZoneId["ZoneName"].isNull())
			availableZoneIdListObject.zoneName = valueAvailableZoneIdListAvailableZoneId["ZoneName"].asString();
		availableZoneIdList_.push_back(availableZoneIdListObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

std::vector<DescribeVpnGatewayAvailableZonesResult::AvailableZoneId> DescribeVpnGatewayAvailableZonesResult::getAvailableZoneIdList()const
{
	return availableZoneIdList_;
}

std::string DescribeVpnGatewayAvailableZonesResult::getRegionId()const
{
	return regionId_;
}

