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

#include <alibabacloud/vpc/model/DescribeForwardTableEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

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
	auto allForwardTableEntries = value["ForwardTableEntries"]["ForwardTableEntry"];
	for (auto value : allForwardTableEntries)
	{
		ForwardTableEntry forwardTableEntryObject;
		forwardTableEntryObject.forwardTableId = value["ForwardTableId"].asString();
		forwardTableEntryObject.forwardEntryId = value["ForwardEntryId"].asString();
		forwardTableEntryObject.externalIp = value["ExternalIp"].asString();
		forwardTableEntryObject.externalPort = value["ExternalPort"].asString();
		forwardTableEntryObject.ipProtocol = value["IpProtocol"].asString();
		forwardTableEntryObject.internalIp = value["InternalIp"].asString();
		forwardTableEntryObject.internalPort = value["InternalPort"].asString();
		forwardTableEntryObject.status = value["Status"].asString();
		forwardTableEntries_.push_back(forwardTableEntryObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeForwardTableEntriesResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeForwardTableEntriesResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeForwardTableEntriesResult::getPageSize()const
{
	return pageSize_;
}

void DescribeForwardTableEntriesResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeForwardTableEntriesResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeForwardTableEntriesResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

