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

#include <alibabacloud/vpc/model/ListFullNatEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ListFullNatEntriesResult::ListFullNatEntriesResult() :
	ServiceResult()
{}

ListFullNatEntriesResult::ListFullNatEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFullNatEntriesResult::~ListFullNatEntriesResult()
{}

void ListFullNatEntriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFullNatEntriesNode = value["FullNatEntries"]["FullNatEntry"];
	for (auto valueFullNatEntriesFullNatEntry : allFullNatEntriesNode)
	{
		FullNatEntry fullNatEntriesObject;
		if(!valueFullNatEntriesFullNatEntry["NatIp"].isNull())
			fullNatEntriesObject.natIp = valueFullNatEntriesFullNatEntry["NatIp"].asString();
		if(!valueFullNatEntriesFullNatEntry["NatIpPort"].isNull())
			fullNatEntriesObject.natIpPort = valueFullNatEntriesFullNatEntry["NatIpPort"].asString();
		if(!valueFullNatEntriesFullNatEntry["AccessIp"].isNull())
			fullNatEntriesObject.accessIp = valueFullNatEntriesFullNatEntry["AccessIp"].asString();
		if(!valueFullNatEntriesFullNatEntry["AccessPort"].isNull())
			fullNatEntriesObject.accessPort = valueFullNatEntriesFullNatEntry["AccessPort"].asString();
		if(!valueFullNatEntriesFullNatEntry["IpProtocol"].isNull())
			fullNatEntriesObject.ipProtocol = valueFullNatEntriesFullNatEntry["IpProtocol"].asString();
		if(!valueFullNatEntriesFullNatEntry["NetworkInterfaceId"].isNull())
			fullNatEntriesObject.networkInterfaceId = valueFullNatEntriesFullNatEntry["NetworkInterfaceId"].asString();
		if(!valueFullNatEntriesFullNatEntry["NetworkInterfaceType"].isNull())
			fullNatEntriesObject.networkInterfaceType = valueFullNatEntriesFullNatEntry["NetworkInterfaceType"].asString();
		if(!valueFullNatEntriesFullNatEntry["FullNatEntryName"].isNull())
			fullNatEntriesObject.fullNatEntryName = valueFullNatEntriesFullNatEntry["FullNatEntryName"].asString();
		if(!valueFullNatEntriesFullNatEntry["FullNatEntryDescription"].isNull())
			fullNatEntriesObject.fullNatEntryDescription = valueFullNatEntriesFullNatEntry["FullNatEntryDescription"].asString();
		if(!valueFullNatEntriesFullNatEntry["CreationTime"].isNull())
			fullNatEntriesObject.creationTime = valueFullNatEntriesFullNatEntry["CreationTime"].asString();
		if(!valueFullNatEntriesFullNatEntry["FullNatEntryId"].isNull())
			fullNatEntriesObject.fullNatEntryId = valueFullNatEntriesFullNatEntry["FullNatEntryId"].asString();
		if(!valueFullNatEntriesFullNatEntry["FullNatEntryStatus"].isNull())
			fullNatEntriesObject.fullNatEntryStatus = valueFullNatEntriesFullNatEntry["FullNatEntryStatus"].asString();
		if(!valueFullNatEntriesFullNatEntry["FullNatTableId"].isNull())
			fullNatEntriesObject.fullNatTableId = valueFullNatEntriesFullNatEntry["FullNatTableId"].asString();
		fullNatEntries_.push_back(fullNatEntriesObject);
	}
	if(!value["NatGatewayId"].isNull())
		natGatewayId_ = value["NatGatewayId"].asString();
	if(!value["FullNatTableId"].isNull())
		fullNatTableId_ = value["FullNatTableId"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stol(value["MaxResults"].asString());

}

long ListFullNatEntriesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListFullNatEntriesResult::getFullNatTableId()const
{
	return fullNatTableId_;
}

std::string ListFullNatEntriesResult::getNextToken()const
{
	return nextToken_;
}

long ListFullNatEntriesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListFullNatEntriesResult::FullNatEntry> ListFullNatEntriesResult::getFullNatEntries()const
{
	return fullNatEntries_;
}

std::string ListFullNatEntriesResult::getNatGatewayId()const
{
	return natGatewayId_;
}

