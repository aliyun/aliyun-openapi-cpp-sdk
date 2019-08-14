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

#include <alibabacloud/smartag/model/DescribeSnatEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSnatEntriesResult::DescribeSnatEntriesResult() :
	ServiceResult()
{}

DescribeSnatEntriesResult::DescribeSnatEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSnatEntriesResult::~DescribeSnatEntriesResult()
{}

void DescribeSnatEntriesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSnatEntries = value["SnatEntries"]["SnatEntry"];
	for (auto value : allSnatEntries)
	{
		SnatEntry snatEntriesObject;
		if(!value["InstanceId"].isNull())
			snatEntriesObject.instanceId = value["InstanceId"].asString();
		if(!value["CidrBlock"].isNull())
			snatEntriesObject.cidrBlock = value["CidrBlock"].asString();
		if(!value["SnatIp"].isNull())
			snatEntriesObject.snatIp = value["SnatIp"].asString();
		if(!value["CreateTime"].isNull())
			snatEntriesObject.createTime = std::stol(value["CreateTime"].asString());
		snatEntries_.push_back(snatEntriesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeSnatEntriesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeSnatEntriesResult::SnatEntry> DescribeSnatEntriesResult::getSnatEntries()const
{
	return snatEntries_;
}

int DescribeSnatEntriesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSnatEntriesResult::getPageNumber()const
{
	return pageNumber_;
}

