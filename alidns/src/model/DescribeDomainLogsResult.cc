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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDomainLogs = value["DomainLogs"]["DomainLog"];
	for (auto value : allDomainLogs)
	{
		DomainLog domainLogsObject;
		if(!value["ActionTime"].isNull())
			domainLogsObject.actionTime = value["ActionTime"].asString();
		if(!value["ActionTimestamp"].isNull())
			domainLogsObject.actionTimestamp = std::stol(value["ActionTimestamp"].asString());
		if(!value["DomainName"].isNull())
			domainLogsObject.domainName = value["DomainName"].asString();
		if(!value["Action"].isNull())
			domainLogsObject.action = value["Action"].asString();
		if(!value["Message"].isNull())
			domainLogsObject.message = value["Message"].asString();
		if(!value["ClientIp"].isNull())
			domainLogsObject.clientIp = value["ClientIp"].asString();
		if(!value["ZoneId"].isNull())
			domainLogsObject.zoneId = value["ZoneId"].asString();
		domainLogs_.push_back(domainLogsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

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

