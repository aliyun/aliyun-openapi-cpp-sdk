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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDnatEntries = value["DnatEntries"]["DnatEntry"];
	for (auto value : allDnatEntries)
	{
		DnatEntry dnatEntriesObject;
		if(!value["DnatEntryId"].isNull())
			dnatEntriesObject.dnatEntryId = value["DnatEntryId"].asString();
		if(!value["Type"].isNull())
			dnatEntriesObject.type = value["Type"].asString();
		if(!value["SagId"].isNull())
			dnatEntriesObject.sagId = value["SagId"].asString();
		if(!value["ExternalIp"].isNull())
			dnatEntriesObject.externalIp = value["ExternalIp"].asString();
		if(!value["ExternalPort"].isNull())
			dnatEntriesObject.externalPort = value["ExternalPort"].asString();
		if(!value["InternalIp"].isNull())
			dnatEntriesObject.internalIp = value["InternalIp"].asString();
		if(!value["IpProtocol"].isNull())
			dnatEntriesObject.ipProtocol = value["IpProtocol"].asString();
		if(!value["InternalPort"].isNull())
			dnatEntriesObject.internalPort = value["InternalPort"].asString();
		dnatEntries_.push_back(dnatEntriesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

