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

#include <alibabacloud/cdn/model/DescribeTopDomainsByFlowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeTopDomainsByFlowResult::DescribeTopDomainsByFlowResult() :
	ServiceResult()
{}

DescribeTopDomainsByFlowResult::DescribeTopDomainsByFlowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTopDomainsByFlowResult::~DescribeTopDomainsByFlowResult()
{}

void DescribeTopDomainsByFlowResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allTopDomains = value["TopDomains"]["TopDomain"];
	for (auto value : allTopDomains)
	{
		TopDomain topDomainObject;
		topDomainObject.domainName = value["DomainName"].asString();
		topDomainObject.rank = std::stol(value["Rank"].asString());
		topDomainObject.totalTraffic = value["TotalTraffic"].asString();
		topDomainObject.trafficPercent = value["TrafficPercent"].asString();
		topDomainObject.maxBps = std::stol(value["MaxBps"].asString());
		topDomainObject.maxBpsTime = value["MaxBpsTime"].asString();
		topDomainObject.totalAccess = std::stol(value["TotalAccess"].asString());
		topDomains_.push_back(topDomainObject);
	}
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();
	domainCount_ = std::stol(value["DomainCount"].asString());
	domainOnlineCount_ = std::stol(value["DomainOnlineCount"].asString());

}

std::string DescribeTopDomainsByFlowResult::getEndTime()const
{
	return endTime_;
}

void DescribeTopDomainsByFlowResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

long DescribeTopDomainsByFlowResult::getDomainOnlineCount()const
{
	return domainOnlineCount_;
}

void DescribeTopDomainsByFlowResult::setDomainOnlineCount(long domainOnlineCount)
{
	domainOnlineCount_ = domainOnlineCount;
}

std::string DescribeTopDomainsByFlowResult::getStartTime()const
{
	return startTime_;
}

void DescribeTopDomainsByFlowResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

long DescribeTopDomainsByFlowResult::getDomainCount()const
{
	return domainCount_;
}

void DescribeTopDomainsByFlowResult::setDomainCount(long domainCount)
{
	domainCount_ = domainCount;
}

