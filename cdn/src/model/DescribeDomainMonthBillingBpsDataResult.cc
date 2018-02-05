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

#include <alibabacloud/cdn/model/DescribeDomainMonthBillingBpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainMonthBillingBpsDataResult::DescribeDomainMonthBillingBpsDataResult() :
	ServiceResult()
{}

DescribeDomainMonthBillingBpsDataResult::DescribeDomainMonthBillingBpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainMonthBillingBpsDataResult::~DescribeDomainMonthBillingBpsDataResult()
{}

void DescribeDomainMonthBillingBpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["Bandwidth95Bps"].isNull())
		bandwidth95Bps_ = std::stof(value["Bandwidth95Bps"].asString());
	if(!value["DomesticBandwidth95Bps"].isNull())
		domesticBandwidth95Bps_ = std::stof(value["DomesticBandwidth95Bps"].asString());
	if(!value["OverseasBandwidth95Bps"].isNull())
		overseasBandwidth95Bps_ = std::stof(value["OverseasBandwidth95Bps"].asString());
	if(!value["MonthavgBps"].isNull())
		monthavgBps_ = std::stof(value["MonthavgBps"].asString());
	if(!value["DomesticMonthavgBps"].isNull())
		domesticMonthavgBps_ = std::stof(value["DomesticMonthavgBps"].asString());
	if(!value["OverseasMonthavgBps"].isNull())
		overseasMonthavgBps_ = std::stof(value["OverseasMonthavgBps"].asString());
	if(!value["Month4thBps"].isNull())
		month4thBps_ = std::stof(value["Month4thBps"].asString());
	if(!value["DomesticMonth4thBps"].isNull())
		domesticMonth4thBps_ = std::stof(value["DomesticMonth4thBps"].asString());
	if(!value["OverseasMonth4thBps"].isNull())
		overseasMonth4thBps_ = std::stof(value["OverseasMonth4thBps"].asString());

}

float DescribeDomainMonthBillingBpsDataResult::getOverseasBandwidth95Bps()const
{
	return overseasBandwidth95Bps_;
}

float DescribeDomainMonthBillingBpsDataResult::getDomesticMonth4thBps()const
{
	return domesticMonth4thBps_;
}

std::string DescribeDomainMonthBillingBpsDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainMonthBillingBpsDataResult::getDomainName()const
{
	return domainName_;
}

float DescribeDomainMonthBillingBpsDataResult::getOverseasMonthavgBps()const
{
	return overseasMonthavgBps_;
}

float DescribeDomainMonthBillingBpsDataResult::getMonth4thBps()const
{
	return month4thBps_;
}

float DescribeDomainMonthBillingBpsDataResult::getDomesticMonthavgBps()const
{
	return domesticMonthavgBps_;
}

std::string DescribeDomainMonthBillingBpsDataResult::getStartTime()const
{
	return startTime_;
}

float DescribeDomainMonthBillingBpsDataResult::getBandwidth95Bps()const
{
	return bandwidth95Bps_;
}

float DescribeDomainMonthBillingBpsDataResult::getMonthavgBps()const
{
	return monthavgBps_;
}

float DescribeDomainMonthBillingBpsDataResult::getOverseasMonth4thBps()const
{
	return overseasMonth4thBps_;
}

float DescribeDomainMonthBillingBpsDataResult::getDomesticBandwidth95Bps()const
{
	return domesticBandwidth95Bps_;
}

