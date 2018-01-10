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

#include <alibabacloud/vpc/model/DescribeSnatTableEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeSnatTableEntriesResult::DescribeSnatTableEntriesResult() :
	ServiceResult()
{}

DescribeSnatTableEntriesResult::DescribeSnatTableEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSnatTableEntriesResult::~DescribeSnatTableEntriesResult()
{}

void DescribeSnatTableEntriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allSnatTableEntries = value["SnatTableEntries"]["SnatTableEntry"];
	for (auto value : allSnatTableEntries)
	{
		SnatTableEntry snatTableEntryObject;
		snatTableEntryObject.snatTableId = value["SnatTableId"].asString();
		snatTableEntryObject.snatEntryId = value["SnatEntryId"].asString();
		snatTableEntryObject.sourceVSwitchId = value["SourceVSwitchId"].asString();
		snatTableEntryObject.sourceCIDR = value["SourceCIDR"].asString();
		snatTableEntryObject.snatIp = value["SnatIp"].asString();
		snatTableEntryObject.status = value["Status"].asString();
		snatTableEntries_.push_back(snatTableEntryObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeSnatTableEntriesResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeSnatTableEntriesResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeSnatTableEntriesResult::getPageSize()const
{
	return pageSize_;
}

void DescribeSnatTableEntriesResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeSnatTableEntriesResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSnatTableEntriesResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

