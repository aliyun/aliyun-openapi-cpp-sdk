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

#include <alibabacloud/ens/model/DescribeForwardTableEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeForwardTableEntriesResult::DescribeForwardTableEntriesResult() :
	ServiceResult()
{}

DescribeForwardTableEntriesResult::DescribeForwardTableEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeForwardTableEntriesResult::~DescribeForwardTableEntriesResult()
{}

void DescribeForwardTableEntriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allForwardTableEntriesNode = value["ForwardTableEntries"]["ForwardTableEntry"];
	for (auto valueForwardTableEntriesForwardTableEntry : allForwardTableEntriesNode)
	{
		ForwardTableEntry forwardTableEntriesObject;
		if(!valueForwardTableEntriesForwardTableEntry["NatGatewayId"].isNull())
			forwardTableEntriesObject.natGatewayId = valueForwardTableEntriesForwardTableEntry["NatGatewayId"].asString();
		if(!valueForwardTableEntriesForwardTableEntry["ForwardEntryId"].isNull())
			forwardTableEntriesObject.forwardEntryId = valueForwardTableEntriesForwardTableEntry["ForwardEntryId"].asString();
		if(!valueForwardTableEntriesForwardTableEntry["ExternalIp"].isNull())
			forwardTableEntriesObject.externalIp = valueForwardTableEntriesForwardTableEntry["ExternalIp"].asString();
		if(!valueForwardTableEntriesForwardTableEntry["ExternalPort"].isNull())
			forwardTableEntriesObject.externalPort = valueForwardTableEntriesForwardTableEntry["ExternalPort"].asString();
		if(!valueForwardTableEntriesForwardTableEntry["InternalIp"].isNull())
			forwardTableEntriesObject.internalIp = valueForwardTableEntriesForwardTableEntry["InternalIp"].asString();
		if(!valueForwardTableEntriesForwardTableEntry["InternalPort"].isNull())
			forwardTableEntriesObject.internalPort = valueForwardTableEntriesForwardTableEntry["InternalPort"].asString();
		if(!valueForwardTableEntriesForwardTableEntry["ForwardEntryName"].isNull())
			forwardTableEntriesObject.forwardEntryName = valueForwardTableEntriesForwardTableEntry["ForwardEntryName"].asString();
		if(!valueForwardTableEntriesForwardTableEntry["Status"].isNull())
			forwardTableEntriesObject.status = valueForwardTableEntriesForwardTableEntry["Status"].asString();
		if(!valueForwardTableEntriesForwardTableEntry["IpProtocol"].isNull())
			forwardTableEntriesObject.ipProtocol = valueForwardTableEntriesForwardTableEntry["IpProtocol"].asString();
		if(!valueForwardTableEntriesForwardTableEntry["HealthCheckPort"].isNull())
			forwardTableEntriesObject.healthCheckPort = valueForwardTableEntriesForwardTableEntry["HealthCheckPort"].asString();
		if(!valueForwardTableEntriesForwardTableEntry["StandbyExternalIp"].isNull())
			forwardTableEntriesObject.standbyExternalIp = valueForwardTableEntriesForwardTableEntry["StandbyExternalIp"].asString();
		if(!valueForwardTableEntriesForwardTableEntry["StandbyStatus"].isNull())
			forwardTableEntriesObject.standbyStatus = valueForwardTableEntriesForwardTableEntry["StandbyStatus"].asString();
		if(!valueForwardTableEntriesForwardTableEntry["ExternalIpIsp"].isNull())
			forwardTableEntriesObject.externalIpIsp = valueForwardTableEntriesForwardTableEntry["ExternalIpIsp"].asString();
		if(!valueForwardTableEntriesForwardTableEntry["StandbyExternalIpIsp"].isNull())
			forwardTableEntriesObject.standbyExternalIpIsp = valueForwardTableEntriesForwardTableEntry["StandbyExternalIpIsp"].asString();
		if(!valueForwardTableEntriesForwardTableEntry["StandbyEnsRegionId"].isNull())
			forwardTableEntriesObject.standbyEnsRegionId = valueForwardTableEntriesForwardTableEntry["StandbyEnsRegionId"].asString();
		forwardTableEntries_.push_back(forwardTableEntriesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();

}

std::string DescribeForwardTableEntriesResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeForwardTableEntriesResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeForwardTableEntriesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeForwardTableEntriesResult::ForwardTableEntry> DescribeForwardTableEntriesResult::getForwardTableEntries()const
{
	return forwardTableEntries_;
}

