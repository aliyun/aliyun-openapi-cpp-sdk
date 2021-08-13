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

#include <alibabacloud/smartag/model/DescribeDnatEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeDnatEntriesResult::DescribeDnatEntriesResult() :
	ServiceResult()
{}

DescribeDnatEntriesResult::DescribeDnatEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDnatEntriesResult::~DescribeDnatEntriesResult()
{}

void DescribeDnatEntriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDnatEntriesNode = value["DnatEntries"]["DnatEntry"];
	for (auto valueDnatEntriesDnatEntry : allDnatEntriesNode)
	{
		DnatEntry dnatEntriesObject;
		if(!valueDnatEntriesDnatEntry["Type"].isNull())
			dnatEntriesObject.type = valueDnatEntriesDnatEntry["Type"].asString();
		if(!valueDnatEntriesDnatEntry["SagId"].isNull())
			dnatEntriesObject.sagId = valueDnatEntriesDnatEntry["SagId"].asString();
		if(!valueDnatEntriesDnatEntry["InternalIp"].isNull())
			dnatEntriesObject.internalIp = valueDnatEntriesDnatEntry["InternalIp"].asString();
		if(!valueDnatEntriesDnatEntry["InternalPort"].isNull())
			dnatEntriesObject.internalPort = valueDnatEntriesDnatEntry["InternalPort"].asString();
		if(!valueDnatEntriesDnatEntry["IpProtocol"].isNull())
			dnatEntriesObject.ipProtocol = valueDnatEntriesDnatEntry["IpProtocol"].asString();
		if(!valueDnatEntriesDnatEntry["ExternalPort"].isNull())
			dnatEntriesObject.externalPort = valueDnatEntriesDnatEntry["ExternalPort"].asString();
		if(!valueDnatEntriesDnatEntry["DnatEntryId"].isNull())
			dnatEntriesObject.dnatEntryId = valueDnatEntriesDnatEntry["DnatEntryId"].asString();
		if(!valueDnatEntriesDnatEntry["ExternalIp"].isNull())
			dnatEntriesObject.externalIp = valueDnatEntriesDnatEntry["ExternalIp"].asString();
		dnatEntries_.push_back(dnatEntriesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeDnatEntriesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDnatEntriesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDnatEntriesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDnatEntriesResult::DnatEntry> DescribeDnatEntriesResult::getDnatEntries()const
{
	return dnatEntries_;
}

