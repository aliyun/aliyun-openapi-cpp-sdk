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
	domainName_ = value["DomainName"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();
	bandwidth95Bps_ = std::stof(value["Bandwidth95Bps"].asString());
	domesticBandwidth95Bps_ = std::stof(value["DomesticBandwidth95Bps"].asString());
	overseasBandwidth95Bps_ = std::stof(value["OverseasBandwidth95Bps"].asString());
	monthavgBps_ = std::stof(value["MonthavgBps"].asString());
	domesticMonthavgBps_ = std::stof(value["DomesticMonthavgBps"].asString());
	overseasMonthavgBps_ = std::stof(value["OverseasMonthavgBps"].asString());
	month4thBps_ = std::stof(value["Month4thBps"].asString());
	domesticMonth4thBps_ = std::stof(value["DomesticMonth4thBps"].asString());
	overseasMonth4thBps_ = std::stof(value["OverseasMonth4thBps"].asString());

}

float DescribeDomainMonthBillingBpsDataResult::getOverseasBandwidth95Bps()const
{
	return overseasBandwidth95Bps_;
}

void DescribeDomainMonthBillingBpsDataResult::setOverseasBandwidth95Bps(float overseasBandwidth95Bps)
{
	overseasBandwidth95Bps_ = overseasBandwidth95Bps;
}

float DescribeDomainMonthBillingBpsDataResult::getDomesticMonth4thBps()const
{
	return domesticMonth4thBps_;
}

void DescribeDomainMonthBillingBpsDataResult::setDomesticMonth4thBps(float domesticMonth4thBps)
{
	domesticMonth4thBps_ = domesticMonth4thBps;
}

std::string DescribeDomainMonthBillingBpsDataResult::getEndTime()const
{
	return endTime_;
}

void DescribeDomainMonthBillingBpsDataResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeDomainMonthBillingBpsDataResult::getDomainName()const
{
	return domainName_;
}

void DescribeDomainMonthBillingBpsDataResult::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
}

float DescribeDomainMonthBillingBpsDataResult::getOverseasMonthavgBps()const
{
	return overseasMonthavgBps_;
}

void DescribeDomainMonthBillingBpsDataResult::setOverseasMonthavgBps(float overseasMonthavgBps)
{
	overseasMonthavgBps_ = overseasMonthavgBps;
}

float DescribeDomainMonthBillingBpsDataResult::getMonth4thBps()const
{
	return month4thBps_;
}

void DescribeDomainMonthBillingBpsDataResult::setMonth4thBps(float month4thBps)
{
	month4thBps_ = month4thBps;
}

float DescribeDomainMonthBillingBpsDataResult::getDomesticMonthavgBps()const
{
	return domesticMonthavgBps_;
}

void DescribeDomainMonthBillingBpsDataResult::setDomesticMonthavgBps(float domesticMonthavgBps)
{
	domesticMonthavgBps_ = domesticMonthavgBps;
}

std::string DescribeDomainMonthBillingBpsDataResult::getStartTime()const
{
	return startTime_;
}

void DescribeDomainMonthBillingBpsDataResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

float DescribeDomainMonthBillingBpsDataResult::getBandwidth95Bps()const
{
	return bandwidth95Bps_;
}

void DescribeDomainMonthBillingBpsDataResult::setBandwidth95Bps(float bandwidth95Bps)
{
	bandwidth95Bps_ = bandwidth95Bps;
}

float DescribeDomainMonthBillingBpsDataResult::getMonthavgBps()const
{
	return monthavgBps_;
}

void DescribeDomainMonthBillingBpsDataResult::setMonthavgBps(float monthavgBps)
{
	monthavgBps_ = monthavgBps;
}

float DescribeDomainMonthBillingBpsDataResult::getOverseasMonth4thBps()const
{
	return overseasMonth4thBps_;
}

void DescribeDomainMonthBillingBpsDataResult::setOverseasMonth4thBps(float overseasMonth4thBps)
{
	overseasMonth4thBps_ = overseasMonth4thBps;
}

float DescribeDomainMonthBillingBpsDataResult::getDomesticBandwidth95Bps()const
{
	return domesticBandwidth95Bps_;
}

void DescribeDomainMonthBillingBpsDataResult::setDomesticBandwidth95Bps(float domesticBandwidth95Bps)
{
	domesticBandwidth95Bps_ = domesticBandwidth95Bps;
}

