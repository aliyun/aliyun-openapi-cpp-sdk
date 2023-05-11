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

#include <alibabacloud/alidns/model/DescribeDomainLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDomainLogsResult::DescribeDomainLogsResult() :
	ServiceResult()
{}

DescribeDomainLogsResult::DescribeDomainLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainLogsResult::~DescribeDomainLogsResult()
{}

void DescribeDomainLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainLogsNode = value["DomainLogs"]["DomainLog"];
	for (auto valueDomainLogsDomainLog : allDomainLogsNode)
	{
		DomainLog domainLogsObject;
		if(!valueDomainLogsDomainLog["Action"].isNull())
			domainLogsObject.action = valueDomainLogsDomainLog["Action"].asString();
		if(!valueDomainLogsDomainLog["ActionTimestamp"].isNull())
			domainLogsObject.actionTimestamp = std::stol(valueDomainLogsDomainLog["ActionTimestamp"].asString());
		if(!valueDomainLogsDomainLog["ZoneId"].isNull())
			domainLogsObject.zoneId = valueDomainLogsDomainLog["ZoneId"].asString();
		if(!valueDomainLogsDomainLog["ClientIp"].isNull())
			domainLogsObject.clientIp = valueDomainLogsDomainLog["ClientIp"].asString();
		if(!valueDomainLogsDomainLog["Message"].isNull())
			domainLogsObject.message = valueDomainLogsDomainLog["Message"].asString();
		if(!valueDomainLogsDomainLog["ActionTime"].isNull())
			domainLogsObject.actionTime = valueDomainLogsDomainLog["ActionTime"].asString();
		if(!valueDomainLogsDomainLog["DomainName"].isNull())
			domainLogsObject.domainName = valueDomainLogsDomainLog["DomainName"].asString();
		domainLogs_.push_back(domainLogsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());

}

long DescribeDomainLogsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeDomainLogsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeDomainLogsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDomainLogsResult::DomainLog> DescribeDomainLogsResult::getDomainLogs()const
{
	return domainLogs_;
}

