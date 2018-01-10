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

#include <alibabacloud/cdn/model/DescribeDomainMax95BpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainMax95BpsDataResult::DescribeDomainMax95BpsDataResult() :
	ServiceResult()
{}

DescribeDomainMax95BpsDataResult::DescribeDomainMax95BpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainMax95BpsDataResult::~DescribeDomainMax95BpsDataResult()
{}

void DescribeDomainMax95BpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	domainName_ = value["DomainName"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();
	max95Bps_ = value["Max95Bps"].asString();
	domesticMax95Bps_ = value["DomesticMax95Bps"].asString();
	overseasMax95Bps_ = value["OverseasMax95Bps"].asString();

}

std::string DescribeDomainMax95BpsDataResult::getEndTime()const
{
	return endTime_;
}

void DescribeDomainMax95BpsDataResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeDomainMax95BpsDataResult::getDomainName()const
{
	return domainName_;
}

void DescribeDomainMax95BpsDataResult::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
}

std::string DescribeDomainMax95BpsDataResult::getStartTime()const
{
	return startTime_;
}

void DescribeDomainMax95BpsDataResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

std::string DescribeDomainMax95BpsDataResult::getDomesticMax95Bps()const
{
	return domesticMax95Bps_;
}

void DescribeDomainMax95BpsDataResult::setDomesticMax95Bps(const std::string& domesticMax95Bps)
{
	domesticMax95Bps_ = domesticMax95Bps;
}

std::string DescribeDomainMax95BpsDataResult::getMax95Bps()const
{
	return max95Bps_;
}

void DescribeDomainMax95BpsDataResult::setMax95Bps(const std::string& max95Bps)
{
	max95Bps_ = max95Bps;
}

std::string DescribeDomainMax95BpsDataResult::getOverseasMax95Bps()const
{
	return overseasMax95Bps_;
}

void DescribeDomainMax95BpsDataResult::setOverseasMax95Bps(const std::string& overseasMax95Bps)
{
	overseasMax95Bps_ = overseasMax95Bps;
}

