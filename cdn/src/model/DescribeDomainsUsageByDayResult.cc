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
	auto allUsageByDaysNode = value["UsageByDays"]["UsageByDay"];
	for (auto valueUsageByDaysUsageByDay : allUsageByDaysNode)
	{
		UsageByDay usageByDaysObject;
		if(!valueUsageByDaysUsageByDay["MaxSrcBpsTime"].isNull())
			usageByDaysObject.maxSrcBpsTime = valueUsageByDaysUsageByDay["MaxSrcBpsTime"].asString();
		if(!valueUsageByDaysUsageByDay["Qps"].isNull())
			usageByDaysObject.qps = valueUsageByDaysUsageByDay["Qps"].asString();
		if(!valueUsageByDaysUsageByDay["RequestHitRate"].isNull())
			usageByDaysObject.requestHitRate = valueUsageByDaysUsageByDay["RequestHitRate"].asString();
		if(!valueUsageByDaysUsageByDay["MaxBps"].isNull())
			usageByDaysObject.maxBps = valueUsageByDaysUsageByDay["MaxBps"].asString();
		if(!valueUsageByDaysUsageByDay["TotalAccess"].isNull())
			usageByDaysObject.totalAccess = valueUsageByDaysUsageByDay["TotalAccess"].asString();
		if(!valueUsageByDaysUsageByDay["TimeStamp"].isNull())
			usageByDaysObject.timeStamp = valueUsageByDaysUsageByDay["TimeStamp"].asString();
		if(!valueUsageByDaysUsageByDay["BytesHitRate"].isNull())
			usageByDaysObject.bytesHitRate = valueUsageByDaysUsageByDay["BytesHitRate"].asString();
		if(!valueUsageByDaysUsageByDay["TotalTraffic"].isNull())
			usageByDaysObject.totalTraffic = valueUsageByDaysUsageByDay["TotalTraffic"].asString();
		if(!valueUsageByDaysUsageByDay["MaxSrcBps"].isNull())
			usageByDaysObject.maxSrcBps = valueUsageByDaysUsageByDay["MaxSrcBps"].asString();
		if(!valueUsageByDaysUsageByDay["MaxBpsTime"].isNull())
			usageByDaysObject.maxBpsTime = valueUsageByDaysUsageByDay["MaxBpsTime"].asString();
		usageByDays_.push_back(usageByDaysObject);
	}
	auto usageTotalNode = value["UsageTotal"];
	if(!usageTotalNode["MaxSrcBpsTime"].isNull())
		usageTotal_.maxSrcBpsTime = usageTotalNode["MaxSrcBpsTime"].asString();
	if(!usageTotalNode["RequestHitRate"].isNull())
		usageTotal_.requestHitRate = usageTotalNode["RequestHitRate"].asString();
	if(!usageTotalNode["MaxBps"].isNull())
		usageTotal_.maxBps = usageTotalNode["MaxBps"].asString();
	if(!usageTotalNode["TotalAccess"].isNull())
		usageTotal_.totalAccess = usageTotalNode["TotalAccess"].asString();
	if(!usageTotalNode["BytesHitRate"].isNull())
		usageTotal_.bytesHitRate = usageTotalNode["BytesHitRate"].asString();
	if(!usageTotalNode["TotalTraffic"].isNull())
		usageTotal_.totalTraffic = usageTotalNode["TotalTraffic"].asString();
	if(!usageTotalNode["MaxBpsTime"].isNull())
		usageTotal_.maxBpsTime = usageTotalNode["MaxBpsTime"].asString();
	if(!usageTotalNode["MaxSrcBps"].isNull())
		usageTotal_.maxSrcBps = usageTotalNode["MaxSrcBps"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

DescribeDomainsUsageByDayResult::UsageTotal DescribeDomainsUsageByDayResult::getUsageTotal()const
{
	return usageTotal_;
}

std::string DescribeDomainsUsageByDayResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainsUsageByDayResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainsUsageByDayResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDomainsUsageByDayResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeDomainsUsageByDayResult::UsageByDay> DescribeDomainsUsageByDayResult::getUsageByDays()const
{
	return usageByDays_;
}

