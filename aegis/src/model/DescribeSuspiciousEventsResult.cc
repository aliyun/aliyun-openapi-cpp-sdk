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

#include <alibabacloud/aegis/model/DescribeSuspiciousEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeSuspiciousEventsResult::DescribeSuspiciousEventsResult() :
	ServiceResult()
{}

DescribeSuspiciousEventsResult::DescribeSuspiciousEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSuspiciousEventsResult::~DescribeSuspiciousEventsResult()
{}

void DescribeSuspiciousEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allSuspiciousEvents = value["SuspiciousEvents"]["StringItem"];
	for (const auto &item : allSuspiciousEvents)
		suspiciousEvents_.push_back(item.asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

int DescribeSuspiciousEventsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSuspiciousEventsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<std::string> DescribeSuspiciousEventsResult::getSuspiciousEvents()const
{
	return suspiciousEvents_;
}

int DescribeSuspiciousEventsResult::getCurrentPage()const
{
	return currentPage_;
}

int DescribeSuspiciousEventsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

