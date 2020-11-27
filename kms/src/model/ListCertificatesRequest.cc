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

#include <alibabacloud/kms/model/ListCertificatesRequest.h>

using AlibabaCloud::Kms::Model::ListCertificatesRequest;

ListCertificatesRequest::ListCertificatesRequest() :
	RpcServiceRequest("kms", "2016-01-20", "ListCertificates")
{
	setMethod(HttpRequest::Method::Post);
}

ListCertificatesRequest::~ListCertificatesRequest()
{}

std::string ListCertificatesRequest::getSubject()const
{
	return subject_;
}

void ListCertificatesRequest::setSubject(const std::string& subject)
{
	subject_ = subject;
	setParameter("Subject", subject);
}

int ListCertificatesRequest::getPageSize()const
{
	return pageSize_;
}

void ListCertificatesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListCertificatesRequest::getIssuer()const
{
	return issuer_;
}

void ListCertificatesRequest::setIssuer(const std::string& issuer)
{
	issuer_ = issuer;
	setParameter("Issuer", issuer);
}

int ListCertificatesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListCertificatesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListCertificatesRequest::getStatus()const
{
	return status_;
}

void ListCertificatesRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

