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

#include <alibabacloud/sas/model/DescribeSimilarSecurityEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeSimilarSecurityEventsResult::DescribeSimilarSecurityEventsResult() :
	ServiceResult()
{}

DescribeSimilarSecurityEventsResult::DescribeSimilarSecurityEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSimilarSecurityEventsResult::~DescribeSimilarSecurityEventsResult()
{}

void DescribeSimilarSecurityEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecurityEventsResponseNode = value["SecurityEventsResponse"]["SimpleSecurityEvent"];
	for (auto valueSecurityEventsResponseSimpleSecurityEvent : allSecurityEventsResponseNode)
	{
		SimpleSecurityEvent securityEventsResponseObject;
		if(!valueSecurityEventsResponseSimpleSecurityEvent["LastTime"].isNull())
			securityEventsResponseObject.lastTime = std::stol(valueSecurityEventsResponseSimpleSecurityEvent["LastTime"].asString());
		if(!valueSecurityEventsResponseSimpleSecurityEvent["Uuid"].isNull())
			securityEventsResponseObject.uuid = valueSecurityEventsResponseSimpleSecurityEvent["Uuid"].asString();
		if(!valueSecurityEventsResponseSimpleSecurityEvent["EventName"].isNull())
			securityEventsResponseObject.eventName = valueSecurityEventsResponseSimpleSecurityEvent["EventName"].asString();
		if(!valueSecurityEventsResponseSimpleSecurityEvent["EventType"].isNull())
			securityEventsResponseObject.eventType = valueSecurityEventsResponseSimpleSecurityEvent["EventType"].asString();
		if(!valueSecurityEventsResponseSimpleSecurityEvent["SecurityEventId"].isNull())
			securityEventsResponseObject.securityEventId = std::stol(valueSecurityEventsResponseSimpleSecurityEvent["SecurityEventId"].asString());
		if(!valueSecurityEventsResponseSimpleSecurityEvent["OccurrenceTime"].isNull())
			securityEventsResponseObject.occurrenceTime = std::stol(valueSecurityEventsResponseSimpleSecurityEvent["OccurrenceTime"].asString());
		securityEventsResponse_.push_back(securityEventsResponseObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

DescribeSimilarSecurityEventsResult::PageInfo DescribeSimilarSecurityEventsResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeSimilarSecurityEventsResult::SimpleSecurityEvent> DescribeSimilarSecurityEventsResult::getSecurityEventsResponse()const
{
	return securityEventsResponse_;
}

