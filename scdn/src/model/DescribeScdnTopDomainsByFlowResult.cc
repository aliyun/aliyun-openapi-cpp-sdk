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

#include <alibabacloud/scdn/model/DescribeScdnTopDomainsByFlowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnTopDomainsByFlowResult::DescribeScdnTopDomainsByFlowResult() :
	ServiceResult()
{}

DescribeScdnTopDomainsByFlowResult::DescribeScdnTopDomainsByFlowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnTopDomainsByFlowResult::~DescribeScdnTopDomainsByFlowResult()
{}

void DescribeScdnTopDomainsByFlowResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTopDomains = value["TopDomains"]["TopDomain"];
	for (auto value : allTopDomains)
	{
		TopDomain topDomainsObject;
		if(!value["DomainName"].isNull())
			topDomainsObject.domainName = value["DomainName"].asString();
		if(!value["Rank"].isNull())
			topDomainsObject.rank = std::stol(value["Rank"].asString());
		if(!value["TotalTraffic"].isNull())
			topDomainsObject.totalTraffic = value["TotalTraffic"].asString();
		if(!value["TrafficPercent"].isNull())
			topDomainsObject.trafficPercent = value["TrafficPercent"].asString();
		if(!value["MaxBps"].isNull())
			topDomainsObject.maxBps = std::stol(value["MaxBps"].asString());
		if(!value["MaxBpsTime"].isNull())
			topDomainsObject.maxBpsTime = value["MaxBpsTime"].asString();
		if(!value["TotalAccess"].isNull())
			topDomainsObject.totalAccess = std::stol(value["TotalAccess"].asString());
		topDomains_.push_back(topDomainsObject);
	}
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["DomainCount"].isNull())
		domainCount_ = std::stol(value["DomainCount"].asString());
	if(!value["DomainOnlineCount"].isNull())
		domainOnlineCount_ = std::stol(value["DomainOnlineCount"].asString());

}

std::vector<DescribeScdnTopDomainsByFlowResult::TopDomain> DescribeScdnTopDomainsByFlowResult::getTopDomains()const
{
	return topDomains_;
}

std::string DescribeScdnTopDomainsByFlowResult::getEndTime()const
{
	return endTime_;
}

long DescribeScdnTopDomainsByFlowResult::getDomainOnlineCount()const
{
	return domainOnlineCount_;
}

std::string DescribeScdnTopDomainsByFlowResult::getStartTime()const
{
	return startTime_;
}

long DescribeScdnTopDomainsByFlowResult::getDomainCount()const
{
	return domainCount_;
}

