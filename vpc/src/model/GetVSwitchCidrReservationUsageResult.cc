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

#include <alibabacloud/vpc/model/GetVSwitchCidrReservationUsageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

GetVSwitchCidrReservationUsageResult::GetVSwitchCidrReservationUsageResult() :
	ServiceResult()
{}

GetVSwitchCidrReservationUsageResult::GetVSwitchCidrReservationUsageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVSwitchCidrReservationUsageResult::~GetVSwitchCidrReservationUsageResult()
{}

void GetVSwitchCidrReservationUsageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCidrReservationUsagesNode = value["CidrReservationUsages"]["VSwitchCidrReservationUsage"];
	for (auto valueCidrReservationUsagesVSwitchCidrReservationUsage : allCidrReservationUsagesNode)
	{
		VSwitchCidrReservationUsage cidrReservationUsagesObject;
		if(!valueCidrReservationUsagesVSwitchCidrReservationUsage["VSwitchCidrReservationId"].isNull())
			cidrReservationUsagesObject.vSwitchCidrReservationId = valueCidrReservationUsagesVSwitchCidrReservationUsage["VSwitchCidrReservationId"].asString();
		if(!valueCidrReservationUsagesVSwitchCidrReservationUsage["VSwitchId"].isNull())
			cidrReservationUsagesObject.vSwitchId = valueCidrReservationUsagesVSwitchCidrReservationUsage["VSwitchId"].asString();
		if(!valueCidrReservationUsagesVSwitchCidrReservationUsage["ResourceId"].isNull())
			cidrReservationUsagesObject.resourceId = valueCidrReservationUsagesVSwitchCidrReservationUsage["ResourceId"].asString();
		if(!valueCidrReservationUsagesVSwitchCidrReservationUsage["ResourceType"].isNull())
			cidrReservationUsagesObject.resourceType = valueCidrReservationUsagesVSwitchCidrReservationUsage["ResourceType"].asString();
		if(!valueCidrReservationUsagesVSwitchCidrReservationUsage["IpPrefixId"].isNull())
			cidrReservationUsagesObject.ipPrefixId = valueCidrReservationUsagesVSwitchCidrReservationUsage["IpPrefixId"].asString();
		if(!valueCidrReservationUsagesVSwitchCidrReservationUsage["IpPrefixCidr"].isNull())
			cidrReservationUsagesObject.ipPrefixCidr = valueCidrReservationUsagesVSwitchCidrReservationUsage["IpPrefixCidr"].asString();
		cidrReservationUsages_.push_back(cidrReservationUsagesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stol(value["MaxResults"].asString());

}

long GetVSwitchCidrReservationUsageResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<GetVSwitchCidrReservationUsageResult::VSwitchCidrReservationUsage> GetVSwitchCidrReservationUsageResult::getCidrReservationUsages()const
{
	return cidrReservationUsages_;
}

std::string GetVSwitchCidrReservationUsageResult::getNextToken()const
{
	return nextToken_;
}

long GetVSwitchCidrReservationUsageResult::getMaxResults()const
{
	return maxResults_;
}

