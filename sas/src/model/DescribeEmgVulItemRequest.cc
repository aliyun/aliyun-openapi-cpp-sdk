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

#include <alibabacloud/sas/model/DescribeEmgVulItemRequest.h>

using AlibabaCloud::Sas::Model::DescribeEmgVulItemRequest;

DescribeEmgVulItemRequest::DescribeEmgVulItemRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeEmgVulItem")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeEmgVulItemRequest::~DescribeEmgVulItemRequest()
{}

std::string DescribeEmgVulItemRequest::getScanType()const
{
	return scanType_;
}

void DescribeEmgVulItemRequest::setScanType(const std::string& scanType)
{
	scanType_ = scanType;
	setParameter("ScanType", scanType);
}

std::string DescribeEmgVulItemRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeEmgVulItemRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeEmgVulItemRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeEmgVulItemRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeEmgVulItemRequest::getLang()const
{
	return lang_;
}

void DescribeEmgVulItemRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int DescribeEmgVulItemRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeEmgVulItemRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeEmgVulItemRequest::getVulName()const
{
	return vulName_;
}

void DescribeEmgVulItemRequest::setVulName(const std::string& vulName)
{
	vulName_ = vulName;
	setParameter("VulName", vulName);
}

std::string DescribeEmgVulItemRequest::getRiskStatus()const
{
	return riskStatus_;
}

void DescribeEmgVulItemRequest::setRiskStatus(const std::string& riskStatus)
{
	riskStatus_ = riskStatus;
	setParameter("RiskStatus", riskStatus);
}

