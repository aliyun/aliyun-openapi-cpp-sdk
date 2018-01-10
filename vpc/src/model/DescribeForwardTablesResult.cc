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
		ForwardTable forwardTableObject;
		forwardTableObject.natGatewayId = value["NatGatewayId"].asString();
		forwardTableObject.forwardTableId = value["ForwardTableId"].asString();
		forwardTableObject.creationTime = value["CreationTime"].asString();
		auto allForwardEntrys = value["ForwardEntrys"]["ForwardEntry"];
		for (auto value : allForwardEntrys)
		{
			ForwardTable::ForwardEntry forwardEntryObject;
			forwardEntryObject.forwardTableId = value["ForwardTableId"].asString();
			forwardEntryObject.forwardEntryId = value["ForwardEntryId"].asString();
			forwardEntryObject.externalIp = value["ExternalIp"].asString();
			forwardEntryObject.externalPort = value["ExternalPort"].asString();
			forwardEntryObject.ipProtocol = value["IpProtocol"].asString();
			forwardEntryObject.internalIp = value["InternalIp"].asString();
			forwardEntryObject.internalPort = value["InternalPort"].asString();
			forwardEntryObject.status = value["Status"].asString();
			forwardTableObject.forwardEntrys.push_back(forwardEntryObject);
		}
		forwardTables_.push_back(forwardTableObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeForwardTablesResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeForwardTablesResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeForwardTablesResult::getPageSize()const
{
	return pageSize_;
}

void DescribeForwardTablesResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeForwardTablesResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeForwardTablesResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

