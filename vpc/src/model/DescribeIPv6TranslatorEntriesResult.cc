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
	auto allIpv6TranslatorEntries = value["Ipv6TranslatorEntries"]["Ipv6TranslatorEntry"];
	for (auto value : allIpv6TranslatorEntries)
	{
		Ipv6TranslatorEntry ipv6TranslatorEntriesObject;
		if(!value["Ipv6TranslatorId"].isNull())
			ipv6TranslatorEntriesObject.ipv6TranslatorId = value["Ipv6TranslatorId"].asString();
		if(!value["Ipv6TranslatorEntryId"].isNull())
			ipv6TranslatorEntriesObject.ipv6TranslatorEntryId = value["Ipv6TranslatorEntryId"].asString();
		if(!value["AllocateIpv6Addr"].isNull())
			ipv6TranslatorEntriesObject.allocateIpv6Addr = value["AllocateIpv6Addr"].asString();
		if(!value["AllocateIpv6Port"].isNull())
			ipv6TranslatorEntriesObject.allocateIpv6Port = std::stoi(value["AllocateIpv6Port"].asString());
		if(!value["BackendIpv4Addr"].isNull())
			ipv6TranslatorEntriesObject.backendIpv4Addr = value["BackendIpv4Addr"].asString();
		if(!value["BackendIpv4Port"].isNull())
			ipv6TranslatorEntriesObject.backendIpv4Port = value["BackendIpv4Port"].asString();
		if(!value["TransProtocol"].isNull())
			ipv6TranslatorEntriesObject.transProtocol = value["TransProtocol"].asString();
		if(!value["EntryBandwidth"].isNull())
			ipv6TranslatorEntriesObject.entryBandwidth = value["EntryBandwidth"].asString();
		if(!value["EntryDescription"].isNull())
			ipv6TranslatorEntriesObject.entryDescription = value["EntryDescription"].asString();
		if(!value["EntryName"].isNull())
			ipv6TranslatorEntriesObject.entryName = value["EntryName"].asString();
		if(!value["EntryStatus"].isNull())
			ipv6TranslatorEntriesObject.entryStatus = value["EntryStatus"].asString();
		if(!value["AclStatus"].isNull())
			ipv6TranslatorEntriesObject.aclStatus = value["AclStatus"].asString();
		if(!value["AclType"].isNull())
			ipv6TranslatorEntriesObject.aclType = value["AclType"].asString();
		if(!value["AclId"].isNull())
			ipv6TranslatorEntriesObject.aclId = value["AclId"].asString();
		if(!value["RegionId"].isNull())
			ipv6TranslatorEntriesObject.regionId = value["RegionId"].asString();
		ipv6TranslatorEntries_.push_back(ipv6TranslatorEntriesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

