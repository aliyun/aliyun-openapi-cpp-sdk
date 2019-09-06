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
		SnatTableEntry snatTableEntriesObject;
		if(!value["SnatTableId"].isNull())
			snatTableEntriesObject.snatTableId = value["SnatTableId"].asString();
		if(!value["SnatEntryId"].isNull())
			snatTableEntriesObject.snatEntryId = value["SnatEntryId"].asString();
		if(!value["SourceVSwitchId"].isNull())
			snatTableEntriesObject.sourceVSwitchId = value["SourceVSwitchId"].asString();
		if(!value["SourceCIDR"].isNull())
			snatTableEntriesObject.sourceCIDR = value["SourceCIDR"].asString();
		if(!value["SnatIp"].isNull())
			snatTableEntriesObject.snatIp = value["SnatIp"].asString();
		if(!value["Status"].isNull())
			snatTableEntriesObject.status = value["Status"].asString();
		if(!value["SnatEntryName"].isNull())
			snatTableEntriesObject.snatEntryName = value["SnatEntryName"].asString();
		snatTableEntries_.push_back(snatTableEntriesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeSnatTableEntriesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSnatTableEntriesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSnatTableEntriesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeSnatTableEntriesResult::SnatTableEntry> DescribeSnatTableEntriesResult::getSnatTableEntries()const
{
	return snatTableEntries_;
}

