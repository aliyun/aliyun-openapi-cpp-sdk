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

#include <alibabacloud/cdn/model/DescribeDomainsUsageByDayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainsUsageByDayResult::DescribeDomainsUsageByDayResult() :
	ServiceResult()
{}

DescribeDomainsUsageByDayResult::DescribeDomainsUsageByDayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainsUsageByDayResult::~DescribeDomainsUsageByDayResult()
{}

void DescribeDomainsUsageByDayResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allUsageByDays = value["UsageByDays"]["UsageByDay"];
	for (auto value : allUsageByDays)
	{
		UsageByDay usageByDayObject;
		usageByDayObject.timeStamp = value["TimeStamp"].asString();
		usageByDayObject.qps = value["Qps"].asString();
		usageByDayObject.bytesHitRate = value["BytesHitRate"].asString();
		usageByDayObject.requestHitRate = value["RequestHitRate"].asString();
		usageByDayObject.maxBps = value["MaxBps"].asString();
		usageByDayObject.maxBpsTime = value["MaxBpsTime"].asString();
		usageByDayObject.maxSrcBps = value["MaxSrcBps"].asString();
		usageByDayObject.maxSrcBpsTime = value["MaxSrcBpsTime"].asString();
		usageByDayObject.totalAccess = value["TotalAccess"].asString();
		usageByDayObject.totalTraffic = value["TotalTraffic"].asString();
		usageByDays_.push_back(usageByDayObject);
	}
	auto allUsageTotal = value["UsageTotal"];
	for (auto value : allUsageTotal)
	{
		UsageTotal usageTotalObject;
		usageTotalObject.bytesHitRate = value["BytesHitRate"].asString();
		usageTotalObject.requestHitRate = value["RequestHitRate"].asString();
		usageTotalObject.maxBps = value["MaxBps"].asString();
		usageTotalObject.maxBpsTime = value["MaxBpsTime"].asString();
		usageTotalObject.maxSrcBps = value["MaxSrcBps"].asString();
		usageTotalObject.maxSrcBpsTime = value["MaxSrcBpsTime"].asString();
		usageTotalObject.totalAccess = value["TotalAccess"].asString();
		usageTotalObject.totalTraffic = value["TotalTraffic"].asString();
		usageTotal_.push_back(usageTotalObject);
	}
	domainName_ = value["DomainName"].asString();
	dataInterval_ = value["DataInterval"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();

}

std::string DescribeDomainsUsageByDayResult::getEndTime()const
{
	return endTime_;
}

void DescribeDomainsUsageByDayResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeDomainsUsageByDayResult::getDomainName()const
{
	return domainName_;
}

void DescribeDomainsUsageByDayResult::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
}

std::string DescribeDomainsUsageByDayResult::getDataInterval()const
{
	return dataInterval_;
}

void DescribeDomainsUsageByDayResult::setDataInterval(const std::string& dataInterval)
{
	dataInterval_ = dataInterval;
}

std::string DescribeDomainsUsageByDayResult::getStartTime()const
{
	return startTime_;
}

void DescribeDomainsUsageByDayResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

