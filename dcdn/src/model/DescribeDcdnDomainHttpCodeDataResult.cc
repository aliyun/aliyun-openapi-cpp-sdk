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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainHttpCodeDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDomainHttpCodeDataResult::DescribeDcdnDomainHttpCodeDataResult() :
	ServiceResult()
{}

DescribeDcdnDomainHttpCodeDataResult::DescribeDcdnDomainHttpCodeDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDomainHttpCodeDataResult::~DescribeDcdnDomainHttpCodeDataResult()
{}

void DescribeDcdnDomainHttpCodeDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allDataPerInterval = value["DataPerInterval"]["DataModule"];
	for (auto value : allDataPerInterval)
	{
		DataModule dataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			dataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		auto allHttpCodeDataPerInterval = value["HttpCodeDataPerInterval"]["HttpCodeDataModule"];
		for (auto value : allHttpCodeDataPerInterval)
		{
			DataModule::HttpCodeDataModule httpCodeDataPerIntervalObject;
			if(!value["Code"].isNull())
				httpCodeDataPerIntervalObject.code = std::stoi(value["Code"].asString());
			if(!value["Proportion"].isNull())
				httpCodeDataPerIntervalObject.proportion = std::stof(value["Proportion"].asString());
			if(!value["Count"].isNull())
				httpCodeDataPerIntervalObject.count = std::stof(value["Count"].asString());
			dataPerIntervalObject.httpCodeDataPerInterval.push_back(httpCodeDataPerIntervalObject);
		}
		dataPerInterval_.push_back(dataPerIntervalObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

std::string DescribeDcdnDomainHttpCodeDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDcdnDomainHttpCodeDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDcdnDomainHttpCodeDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDcdnDomainHttpCodeDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeDcdnDomainHttpCodeDataResult::DataModule> DescribeDcdnDomainHttpCodeDataResult::getDataPerInterval()const
{
	return dataPerInterval_;
}

