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

#include <alibabacloud/vpc/model/DescribeIPv6TranslatorEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeIPv6TranslatorEntriesResult::DescribeIPv6TranslatorEntriesResult() :
	ServiceResult()
{}

DescribeIPv6TranslatorEntriesResult::DescribeIPv6TranslatorEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIPv6TranslatorEntriesResult::~DescribeIPv6TranslatorEntriesResult()
{}

void DescribeIPv6TranslatorEntriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIpv6TranslatorEntriesNode = value["Ipv6TranslatorEntries"]["Ipv6TranslatorEntry"];
	for (auto valueIpv6TranslatorEntriesIpv6TranslatorEntry : allIpv6TranslatorEntriesNode)
	{
		Ipv6TranslatorEntry ipv6TranslatorEntriesObject;
		if(!valueIpv6TranslatorEntriesIpv6TranslatorEntry["AclType"].isNull())
			ipv6TranslatorEntriesObject.aclType = valueIpv6TranslatorEntriesIpv6TranslatorEntry["AclType"].asString();
		if(!valueIpv6TranslatorEntriesIpv6TranslatorEntry["EntryStatus"].isNull())
			ipv6TranslatorEntriesObject.entryStatus = valueIpv6TranslatorEntriesIpv6TranslatorEntry["EntryStatus"].asString();
		if(!valueIpv6TranslatorEntriesIpv6TranslatorEntry["TransProtocol"].isNull())
			ipv6TranslatorEntriesObject.transProtocol = valueIpv6TranslatorEntriesIpv6TranslatorEntry["TransProtocol"].asString();
		if(!valueIpv6TranslatorEntriesIpv6TranslatorEntry["Ipv6TranslatorId"].isNull())
			ipv6TranslatorEntriesObject.ipv6TranslatorId = valueIpv6TranslatorEntriesIpv6TranslatorEntry["Ipv6TranslatorId"].asString();
		if(!valueIpv6TranslatorEntriesIpv6TranslatorEntry["EntryDescription"].isNull())
			ipv6TranslatorEntriesObject.entryDescription = valueIpv6TranslatorEntriesIpv6TranslatorEntry["EntryDescription"].asString();
		if(!valueIpv6TranslatorEntriesIpv6TranslatorEntry["Ipv6TranslatorEntryId"].isNull())
			ipv6TranslatorEntriesObject.ipv6TranslatorEntryId = valueIpv6TranslatorEntriesIpv6TranslatorEntry["Ipv6TranslatorEntryId"].asString();
		if(!valueIpv6TranslatorEntriesIpv6TranslatorEntry["AllocateIpv6Port"].isNull())
			ipv6TranslatorEntriesObject.allocateIpv6Port = std::stoi(valueIpv6TranslatorEntriesIpv6TranslatorEntry["AllocateIpv6Port"].asString());
		if(!valueIpv6TranslatorEntriesIpv6TranslatorEntry["BackendIpv4Addr"].isNull())
			ipv6TranslatorEntriesObject.backendIpv4Addr = valueIpv6TranslatorEntriesIpv6TranslatorEntry["BackendIpv4Addr"].asString();
		if(!valueIpv6TranslatorEntriesIpv6TranslatorEntry["BackendIpv4Port"].isNull())
			ipv6TranslatorEntriesObject.backendIpv4Port = valueIpv6TranslatorEntriesIpv6TranslatorEntry["BackendIpv4Port"].asString();
		if(!valueIpv6TranslatorEntriesIpv6TranslatorEntry["RegionId"].isNull())
			ipv6TranslatorEntriesObject.regionId = valueIpv6TranslatorEntriesIpv6TranslatorEntry["RegionId"].asString();
		if(!valueIpv6TranslatorEntriesIpv6TranslatorEntry["EntryBandwidth"].isNull())
			ipv6TranslatorEntriesObject.entryBandwidth = valueIpv6TranslatorEntriesIpv6TranslatorEntry["EntryBandwidth"].asString();
		if(!valueIpv6TranslatorEntriesIpv6TranslatorEntry["AclId"].isNull())
			ipv6TranslatorEntriesObject.aclId = valueIpv6TranslatorEntriesIpv6TranslatorEntry["AclId"].asString();
		if(!valueIpv6TranslatorEntriesIpv6TranslatorEntry["EntryName"].isNull())
			ipv6TranslatorEntriesObject.entryName = valueIpv6TranslatorEntriesIpv6TranslatorEntry["EntryName"].asString();
		if(!valueIpv6TranslatorEntriesIpv6TranslatorEntry["AclStatus"].isNull())
			ipv6TranslatorEntriesObject.aclStatus = valueIpv6TranslatorEntriesIpv6TranslatorEntry["AclStatus"].asString();
		if(!valueIpv6TranslatorEntriesIpv6TranslatorEntry["AllocateIpv6Addr"].isNull())
			ipv6TranslatorEntriesObject.allocateIpv6Addr = valueIpv6TranslatorEntriesIpv6TranslatorEntry["AllocateIpv6Addr"].asString();
		ipv6TranslatorEntries_.push_back(ipv6TranslatorEntriesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeIPv6TranslatorEntriesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeIPv6TranslatorEntriesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeIPv6TranslatorEntriesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeIPv6TranslatorEntriesResult::Ipv6TranslatorEntry> DescribeIPv6TranslatorEntriesResult::getIpv6TranslatorEntries()const
{
	return ipv6TranslatorEntries_;
}

