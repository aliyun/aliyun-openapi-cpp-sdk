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

#include <alibabacloud/scdn/model/DescribeScdnDomainRealTimeHttpCodeDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnDomainRealTimeHttpCodeDataResult::DescribeScdnDomainRealTimeHttpCodeDataResult() :
	ServiceResult()
{}

DescribeScdnDomainRealTimeHttpCodeDataResult::DescribeScdnDomainRealTimeHttpCodeDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnDomainRealTimeHttpCodeDataResult::~DescribeScdnDomainRealTimeHttpCodeDataResult()
{}

void DescribeScdnDomainRealTimeHttpCodeDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allRealTimeHttpCodeData = value["RealTimeHttpCodeData"]["UsageData"];
	for (auto value : allRealTimeHttpCodeData)
	{
		UsageData realTimeHttpCodeDataObject;
		if(!value["TimeStamp"].isNull())
			realTimeHttpCodeDataObject.timeStamp = value["TimeStamp"].asString();
		auto allValue = value["Value"]["RealTimeCodeProportionData"];
		for (auto value : allValue)
		{
			UsageData::RealTimeCodeProportionData valueObject;
			if(!value["Code"].isNull())
				valueObject.code = value["Code"].asString();
			if(!value["Proportion"].isNull())
				valueObject.proportion = value["Proportion"].asString();
			if(!value["Count"].isNull())
				valueObject.count = value["Count"].asString();
			realTimeHttpCodeDataObject.value.push_back(valueObject);
		}
		realTimeHttpCodeData_.push_back(realTimeHttpCodeDataObject);
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

std::string DescribeScdnDomainRealTimeHttpCodeDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeScdnDomainRealTimeHttpCodeDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeScdnDomainRealTimeHttpCodeDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeScdnDomainRealTimeHttpCodeDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeScdnDomainRealTimeHttpCodeDataResult::UsageData> DescribeScdnDomainRealTimeHttpCodeDataResult::getRealTimeHttpCodeData()const
{
	return realTimeHttpCodeData_;
}

