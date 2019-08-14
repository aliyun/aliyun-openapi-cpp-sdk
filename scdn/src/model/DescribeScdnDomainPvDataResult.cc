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

#include <alibabacloud/scdn/model/DescribeScdnDomainPvDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnDomainPvDataResult::DescribeScdnDomainPvDataResult() :
	ServiceResult()
{}

DescribeScdnDomainPvDataResult::DescribeScdnDomainPvDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnDomainPvDataResult::~DescribeScdnDomainPvDataResult()
{}

void DescribeScdnDomainPvDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allPvDataInterval = value["PvDataInterval"]["UsageData"];
	for (auto value : allPvDataInterval)
	{
		UsageData pvDataIntervalObject;
		if(!value["Value"].isNull())
			pvDataIntervalObject.value = value["Value"].asString();
		if(!value["TimeStamp"].isNull())
			pvDataIntervalObject.timeStamp = value["TimeStamp"].asString();
		pvDataInterval_.push_back(pvDataIntervalObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

std::string DescribeScdnDomainPvDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeScdnDomainPvDataResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeScdnDomainPvDataResult::UsageData> DescribeScdnDomainPvDataResult::getPvDataInterval()const
{
	return pvDataInterval_;
}

