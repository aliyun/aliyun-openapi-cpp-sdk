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

#include <alibabacloud/sas/model/DescribeCheckWarningsRequest.h>

using AlibabaCloud::Sas::Model::DescribeCheckWarningsRequest;

DescribeCheckWarningsRequest::DescribeCheckWarningsRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeCheckWarnings")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCheckWarningsRequest::~DescribeCheckWarningsRequest()
{}

int DescribeCheckWarningsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeCheckWarningsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

long DescribeCheckWarningsRequest::getRiskId()const
{
	return riskId_;
}

void DescribeCheckWarningsRequest::setRiskId(long riskId)
{
	riskId_ = riskId;
	setParameter("RiskId", std::to_string(riskId));
}

std::string DescribeCheckWarningsRequest::getUuid()const
{
	return uuid_;
}

void DescribeCheckWarningsRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setParameter("Uuid", uuid);
}

std::string DescribeCheckWarningsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCheckWarningsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeCheckWarningsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCheckWarningsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeCheckWarningsRequest::getLang()const
{
	return lang_;
}

void DescribeCheckWarningsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

