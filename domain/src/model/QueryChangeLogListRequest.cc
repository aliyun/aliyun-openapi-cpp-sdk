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

#include <alibabacloud/domain/model/QueryChangeLogListRequest.h>

using AlibabaCloud::Domain::Model::QueryChangeLogListRequest;

QueryChangeLogListRequest::QueryChangeLogListRequest() :
	RpcServiceRequest("domain", "2018-01-29", "QueryChangeLogList")
{}

QueryChangeLogListRequest::~QueryChangeLogListRequest()
{}

long QueryChangeLogListRequest::getEndDate()const
{
	return endDate_;
}

void QueryChangeLogListRequest::setEndDate(long endDate)
{
	endDate_ = endDate;
	setCoreParameter("EndDate", endDate);
}

std::string QueryChangeLogListRequest::getUserClientIp()const
{
	return userClientIp_;
}

void QueryChangeLogListRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", std::to_string(userClientIp));
}

std::string QueryChangeLogListRequest::getDomainName()const
{
	return domainName_;
}

void QueryChangeLogListRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

int QueryChangeLogListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryChangeLogListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string QueryChangeLogListRequest::getLang()const
{
	return lang_;
}

void QueryChangeLogListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

int QueryChangeLogListRequest::getPageNum()const
{
	return pageNum_;
}

void QueryChangeLogListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

long QueryChangeLogListRequest::getStartDate()const
{
	return startDate_;
}

void QueryChangeLogListRequest::setStartDate(long startDate)
{
	startDate_ = startDate;
	setCoreParameter("StartDate", startDate);
}

