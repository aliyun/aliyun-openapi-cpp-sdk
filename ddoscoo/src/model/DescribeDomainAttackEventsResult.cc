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

#include <alibabacloud/ddoscoo/model/DescribeDomainAttackEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeDomainAttackEventsResult::DescribeDomainAttackEventsResult() :
	ServiceResult()
{}

DescribeDomainAttackEventsResult::DescribeDomainAttackEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainAttackEventsResult::~DescribeDomainAttackEventsResult()
{}

void DescribeDomainAttackEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainAttackEventsNode = value["DomainAttackEvents"]["Data"];
	for (auto valueDomainAttackEventsData : allDomainAttackEventsNode)
	{
		Data domainAttackEventsObject;
		if(!valueDomainAttackEventsData["EndTime"].isNull())
			domainAttackEventsObject.endTime = std::stol(valueDomainAttackEventsData["EndTime"].asString());
		if(!valueDomainAttackEventsData["StartTime"].isNull())
			domainAttackEventsObject.startTime = std::stol(valueDomainAttackEventsData["StartTime"].asString());
		if(!valueDomainAttackEventsData["Domain"].isNull())
			domainAttackEventsObject.domain = valueDomainAttackEventsData["Domain"].asString();
		if(!valueDomainAttackEventsData["MaxQps"].isNull())
			domainAttackEventsObject.maxQps = std::stol(valueDomainAttackEventsData["MaxQps"].asString());
		domainAttackEvents_.push_back(domainAttackEventsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

std::vector<DescribeDomainAttackEventsResult::Data> DescribeDomainAttackEventsResult::getDomainAttackEvents()const
{
	return domainAttackEvents_;
}

long DescribeDomainAttackEventsResult::getTotalCount()const
{
	return totalCount_;
}

