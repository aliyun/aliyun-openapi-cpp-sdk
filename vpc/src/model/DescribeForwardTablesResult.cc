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

#include <alibabacloud/vpc/model/DescribeForwardTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeForwardTablesResult::DescribeForwardTablesResult() :
	ServiceResult()
{}

DescribeForwardTablesResult::DescribeForwardTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeForwardTablesResult::~DescribeForwardTablesResult()
{}

void DescribeForwardTablesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allForwardTables = value["ForwardTables"]["ForwardTable"];
	for (auto value : allForwardTables)
	{
		ForwardTable forwardTablesObject;
		if(!value["NatGatewayId"].isNull())
			forwardTablesObject.natGatewayId = value["NatGatewayId"].asString();
		if(!value["ForwardTableId"].isNull())
			forwardTablesObject.forwardTableId = value["ForwardTableId"].asString();
		if(!value["CreationTime"].isNull())
			forwardTablesObject.creationTime = value["CreationTime"].asString();
		auto allForwardEntrys = value["ForwardEntrys"]["ForwardEntry"];
		for (auto value : allForwardEntrys)
		{
			ForwardTable::ForwardEntry forwardEntrysObject;
			if(!value["ForwardTableId"].isNull())
				forwardEntrysObject.forwardTableId = value["ForwardTableId"].asString();
			if(!value["ForwardEntryId"].isNull())
				forwardEntrysObject.forwardEntryId = value["ForwardEntryId"].asString();
			if(!value["ExternalIp"].isNull())
				forwardEntrysObject.externalIp = value["ExternalIp"].asString();
			if(!value["ExternalPort"].isNull())
				forwardEntrysObject.externalPort = value["ExternalPort"].asString();
			if(!value["IpProtocol"].isNull())
				forwardEntrysObject.ipProtocol = value["IpProtocol"].asString();
			if(!value["InternalIp"].isNull())
				forwardEntrysObject.internalIp = value["InternalIp"].asString();
			if(!value["InternalPort"].isNull())
				forwardEntrysObject.internalPort = value["InternalPort"].asString();
			if(!value["Status"].isNull())
				forwardEntrysObject.status = value["Status"].asString();
			forwardTablesObject.forwardEntrys.push_back(forwardEntrysObject);
		}
		forwardTables_.push_back(forwardTablesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeForwardTablesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeForwardTablesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeForwardTablesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeForwardTablesResult::ForwardTable> DescribeForwardTablesResult::getForwardTables()const
{
	return forwardTables_;
}

