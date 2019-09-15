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

#include <alibabacloud/aegis/model/DescribeSuspiciousEventsRequest.h>

using AlibabaCloud::Aegis::Model::DescribeSuspiciousEventsRequest;

DescribeSuspiciousEventsRequest::DescribeSuspiciousEventsRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeSuspiciousEvents")
{}

DescribeSuspiciousEventsRequest::~DescribeSuspiciousEventsRequest()
{}

std::string DescribeSuspiciousEventsRequest::getRemark()const
{
	return remark_;
}

void DescribeSuspiciousEventsRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string DescribeSuspiciousEventsRequest::getUuid()const
{
	return uuid_;
}

void DescribeSuspiciousEventsRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setCoreParameter("Uuid", uuid);
}

std::string DescribeSuspiciousEventsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeSuspiciousEventsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeSuspiciousEventsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSuspiciousEventsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeSuspiciousEventsRequest::getLevel()const
{
	return level_;
}

void DescribeSuspiciousEventsRequest::setLevel(const std::string& level)
{
	level_ = level;
	setCoreParameter("Level", level);
}

int DescribeSuspiciousEventsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeSuspiciousEventsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeSuspiciousEventsRequest::getDealed()const
{
	return dealed_;
}

void DescribeSuspiciousEventsRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setCoreParameter("Dealed", dealed);
}

std::string DescribeSuspiciousEventsRequest::getEventType()const
{
	return eventType_;
}

void DescribeSuspiciousEventsRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setCoreParameter("EventType", eventType);
}

