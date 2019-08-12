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

#include <alibabacloud/domain/model/QueryTransferInListRequest.h>

using AlibabaCloud::Domain::Model::QueryTransferInListRequest;

QueryTransferInListRequest::QueryTransferInListRequest() :
	RpcServiceRequest("domain", "2018-01-29", "QueryTransferInList")
{}

QueryTransferInListRequest::~QueryTransferInListRequest()
{}

long QueryTransferInListRequest::getSubmissionStartDate()const
{
	return submissionStartDate_;
}

void QueryTransferInListRequest::setSubmissionStartDate(long submissionStartDate)
{
	submissionStartDate_ = submissionStartDate;
	setCoreParameter("SubmissionStartDate", submissionStartDate);
}

std::string QueryTransferInListRequest::getUserClientIp()const
{
	return userClientIp_;
}

void QueryTransferInListRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", std::to_string(userClientIp));
}

long QueryTransferInListRequest::getSubmissionEndDate()const
{
	return submissionEndDate_;
}

void QueryTransferInListRequest::setSubmissionEndDate(long submissionEndDate)
{
	submissionEndDate_ = submissionEndDate;
	setCoreParameter("SubmissionEndDate", submissionEndDate);
}

std::string QueryTransferInListRequest::getDomainName()const
{
	return domainName_;
}

void QueryTransferInListRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string QueryTransferInListRequest::getSimpleTransferInStatus()const
{
	return simpleTransferInStatus_;
}

void QueryTransferInListRequest::setSimpleTransferInStatus(const std::string& simpleTransferInStatus)
{
	simpleTransferInStatus_ = simpleTransferInStatus;
	setCoreParameter("SimpleTransferInStatus", std::to_string(simpleTransferInStatus));
}

int QueryTransferInListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryTransferInListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string QueryTransferInListRequest::getLang()const
{
	return lang_;
}

void QueryTransferInListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

int QueryTransferInListRequest::getPageNum()const
{
	return pageNum_;
}

void QueryTransferInListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

