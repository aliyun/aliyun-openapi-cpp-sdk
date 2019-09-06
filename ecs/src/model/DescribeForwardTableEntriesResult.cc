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

#include <alibabacloud/ecs/model/DescribeForwardTableEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

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
		ForwardTableEntry forwardTableEntriesObject;
		if(!value["ForwardTableId"].isNull())
			forwardTableEntriesObject.forwardTableId = value["ForwardTableId"].asString();
		if(!value["ForwardEntryId"].isNull())
			forwardTableEntriesObject.forwardEntryId = value["ForwardEntryId"].asString();
		if(!value["ExternalIp"].isNull())
			forwardTableEntriesObject.externalIp = value["ExternalIp"].asString();
		if(!value["ExternalPort"].isNull())
			forwardTableEntriesObject.externalPort = value["ExternalPort"].asString();
		if(!value["IpProtocol"].isNull())
			forwardTableEntriesObject.ipProtocol = value["IpProtocol"].asString();
		if(!value["InternalIp"].isNull())
			forwardTableEntriesObject.internalIp = value["InternalIp"].asString();
		if(!value["InternalPort"].isNull())
			forwardTableEntriesObject.internalPort = value["InternalPort"].asString();
		if(!value["Status"].isNull())
			forwardTableEntriesObject.status = value["Status"].asString();
		forwardTableEntries_.push_back(forwardTableEntriesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeForwardTableEntriesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeForwardTableEntriesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeForwardTableEntriesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeForwardTableEntriesResult::ForwardTableEntry> DescribeForwardTableEntriesResult::getForwardTableEntries()const
{
	return forwardTableEntries_;
}

