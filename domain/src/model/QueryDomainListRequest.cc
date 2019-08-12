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

#include <alibabacloud/domain/model/QueryDomainListRequest.h>

using AlibabaCloud::Domain::Model::QueryDomainListRequest;

QueryDomainListRequest::QueryDomainListRequest() :
	RpcServiceRequest("domain", "2018-01-29", "QueryDomainList")
{}

QueryDomainListRequest::~QueryDomainListRequest()
{}

long QueryDomainListRequest::getEndExpirationDate()const
{
	return endExpirationDate_;
}

void QueryDomainListRequest::setEndExpirationDate(long endExpirationDate)
{
	endExpirationDate_ = endExpirationDate;
	setCoreParameter("EndExpirationDate", endExpirationDate);
}

std::string QueryDomainListRequest::getProductDomainType()const
{
	return productDomainType_;
}

void QueryDomainListRequest::setProductDomainType(const std::string& productDomainType)
{
	productDomainType_ = productDomainType;
	setCoreParameter("ProductDomainType", std::to_string(productDomainType));
}

std::string QueryDomainListRequest::getOrderKeyType()const
{
	return orderKeyType_;
}

void QueryDomainListRequest::setOrderKeyType(const std::string& orderKeyType)
{
	orderKeyType_ = orderKeyType;
	setCoreParameter("OrderKeyType", std::to_string(orderKeyType));
}

std::string QueryDomainListRequest::getDomainName()const
{
	return domainName_;
}

void QueryDomainListRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

long QueryDomainListRequest::getStartExpirationDate()const
{
	return startExpirationDate_;
}

void QueryDomainListRequest::setStartExpirationDate(long startExpirationDate)
{
	startExpirationDate_ = startExpirationDate;
	setCoreParameter("StartExpirationDate", startExpirationDate);
}

int QueryDomainListRequest::getPageNum()const
{
	return pageNum_;
}

void QueryDomainListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

std::string QueryDomainListRequest::getOrderByType()const
{
	return orderByType_;
}

void QueryDomainListRequest::setOrderByType(const std::string& orderByType)
{
	orderByType_ = orderByType;
	setCoreParameter("OrderByType", std::to_string(orderByType));
}

std::string QueryDomainListRequest::getDomainGroupId()const
{
	return domainGroupId_;
}

void QueryDomainListRequest::setDomainGroupId(const std::string& domainGroupId)
{
	domainGroupId_ = domainGroupId;
	setCoreParameter("DomainGroupId", std::to_string(domainGroupId));
}

long QueryDomainListRequest::getEndRegistrationDate()const
{
	return endRegistrationDate_;
}

void QueryDomainListRequest::setEndRegistrationDate(long endRegistrationDate)
{
	endRegistrationDate_ = endRegistrationDate;
	setCoreParameter("EndRegistrationDate", endRegistrationDate);
}

std::string QueryDomainListRequest::getUserClientIp()const
{
	return userClientIp_;
}

void QueryDomainListRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", std::to_string(userClientIp));
}

int QueryDomainListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryDomainListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string QueryDomainListRequest::getLang()const
{
	return lang_;
}

void QueryDomainListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string QueryDomainListRequest::getQueryType()const
{
	return queryType_;
}

void QueryDomainListRequest::setQueryType(const std::string& queryType)
{
	queryType_ = queryType;
	setCoreParameter("QueryType", std::to_string(queryType));
}

long QueryDomainListRequest::getStartRegistrationDate()const
{
	return startRegistrationDate_;
}

void QueryDomainListRequest::setStartRegistrationDate(long startRegistrationDate)
{
	startRegistrationDate_ = startRegistrationDate;
	setCoreParameter("StartRegistrationDate", startRegistrationDate);
}

