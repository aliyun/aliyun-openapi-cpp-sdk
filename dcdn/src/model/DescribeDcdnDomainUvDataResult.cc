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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainUvDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDomainUvDataResult::DescribeDcdnDomainUvDataResult() :
	ServiceResult()
{}

DescribeDcdnDomainUvDataResult::DescribeDcdnDomainUvDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDomainUvDataResult::~DescribeDcdnDomainUvDataResult()
{}

void DescribeDcdnDomainUvDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allUvDataInterval = value["UvDataInterval"]["UsageData"];
	for (auto value : allUvDataInterval)
	{
		UsageData uvDataIntervalObject;
		if(!value["TimeStamp"].isNull())
			uvDataIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["Value"].isNull())
			uvDataIntervalObject.value = value["Value"].asString();
		uvDataInterval_.push_back(uvDataIntervalObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

}

std::vector<DescribeDcdnDomainUvDataResult::UsageData> DescribeDcdnDomainUvDataResult::getUvDataInterval()const
{
	return uvDataInterval_;
}

std::string DescribeDcdnDomainUvDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDcdnDomainUvDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDcdnDomainUvDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::string DescribeDcdnDomainUvDataResult::getStartTime()const
{
	return startTime_;
}

