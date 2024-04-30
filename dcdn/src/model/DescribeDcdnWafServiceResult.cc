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

#include <alibabacloud/dcdn/model/DescribeDcdnWafServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnWafServiceResult::DescribeDcdnWafServiceResult() :
	ServiceResult()
{}

DescribeDcdnWafServiceResult::DescribeDcdnWafServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnWafServiceResult::~DescribeDcdnWafServiceResult()
{}

void DescribeDcdnWafServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["RequestBillingType"].isNull())
		requestBillingType_ = value["RequestBillingType"].asString();
	if(!value["Edition"].isNull())
		edition_ = value["Edition"].asString();
	if(!value["OpeningTime"].isNull())
		openingTime_ = value["OpeningTime"].asString();
	if(!value["Enabled"].isNull())
		enabled_ = value["Enabled"].asString();
	if(!value["RuleBillingType"].isNull())
		ruleBillingType_ = value["RuleBillingType"].asString();

}

std::string DescribeDcdnWafServiceResult::getStatus()const
{
	return status_;
}

std::string DescribeDcdnWafServiceResult::getRuleBillingType()const
{
	return ruleBillingType_;
}

std::string DescribeDcdnWafServiceResult::getRequestBillingType()const
{
	return requestBillingType_;
}

std::string DescribeDcdnWafServiceResult::getOpeningTime()const
{
	return openingTime_;
}

std::string DescribeDcdnWafServiceResult::getEnabled()const
{
	return enabled_;
}

std::string DescribeDcdnWafServiceResult::getEdition()const
{
	return edition_;
}

