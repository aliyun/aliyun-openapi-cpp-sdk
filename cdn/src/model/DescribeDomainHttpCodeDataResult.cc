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

#include <alibabacloud/cdn/model/DescribeDomainHttpCodeDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainHttpCodeDataResult::DescribeDomainHttpCodeDataResult() :
	ServiceResult()
{}

DescribeDomainHttpCodeDataResult::DescribeDomainHttpCodeDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainHttpCodeDataResult::~DescribeDomainHttpCodeDataResult()
{}

void DescribeDomainHttpCodeDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allHttpCodeData = value["HttpCodeData"]["UsageData"];
	for (auto value : allHttpCodeData)
	{
		UsageData httpCodeDataObject;
		if(!value["TimeStamp"].isNull())
			httpCodeDataObject.timeStamp = value["TimeStamp"].asString();
		auto allValue = value["Value"]["CodeProportionData"];
		for (auto value : allValue)
		{
			UsageData::CodeProportionData valueObject;
			if(!value["Code"].isNull())
				valueObject.code = value["Code"].asString();
			if(!value["Proportion"].isNull())
				valueObject.proportion = value["Proportion"].asString();
			if(!value["Count"].isNull())
				valueObject.count = value["Count"].asString();
			httpCodeDataObject.value.push_back(valueObject);
		}
		httpCodeData_.push_back(httpCodeDataObject);
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

std::string DescribeDomainHttpCodeDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainHttpCodeDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainHttpCodeDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDomainHttpCodeDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeDomainHttpCodeDataResult::UsageData> DescribeDomainHttpCodeDataResult::getHttpCodeData()const
{
	return httpCodeData_;
}

