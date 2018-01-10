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

#include <alibabacloud/cdn/model/DescribeDomainQoSRtResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainQoSRtResult::DescribeDomainQoSRtResult() :
	ServiceResult()
{}

DescribeDomainQoSRtResult::DescribeDomainQoSRtResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainQoSRtResult::~DescribeDomainQoSRtResult()
{}

void DescribeDomainQoSRtResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allContent = value["Content"]["Data"];
	for (auto value : allContent)
	{
		Data dataObject;
		dataObject.more5s = value["More5s"].asString();
		dataObject.time = value["Time"].asString();
		dataObject.more3s = value["More3s"].asString();
		content_.push_back(dataObject);
	}
	domainName_ = value["DomainName"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();
	ip_ = value["Ip"].asString();

}

std::string DescribeDomainQoSRtResult::getEndTime()const
{
	return endTime_;
}

void DescribeDomainQoSRtResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeDomainQoSRtResult::getDomainName()const
{
	return domainName_;
}

void DescribeDomainQoSRtResult::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
}

std::string DescribeDomainQoSRtResult::getIp()const
{
	return ip_;
}

void DescribeDomainQoSRtResult::setIp(const std::string& ip)
{
	ip_ = ip;
}

std::string DescribeDomainQoSRtResult::getStartTime()const
{
	return startTime_;
}

void DescribeDomainQoSRtResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

