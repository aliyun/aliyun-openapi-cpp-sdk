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

#include <alibabacloud/sas/model/DescribeGroupedVulRequest.h>

using AlibabaCloud::Sas::Model::DescribeGroupedVulRequest;

DescribeGroupedVulRequest::DescribeGroupedVulRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeGroupedVul")
{}

DescribeGroupedVulRequest::~DescribeGroupedVulRequest()
{}

std::string DescribeGroupedVulRequest::getAliasName()const
{
	return aliasName_;
}

void DescribeGroupedVulRequest::setAliasName(const std::string& aliasName)
{
	aliasName_ = aliasName;
	setCoreParameter("AliasName", aliasName);
}

std::string DescribeGroupedVulRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeGroupedVulRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeGroupedVulRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeGroupedVulRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeGroupedVulRequest::getDealed()const
{
	return dealed_;
}

void DescribeGroupedVulRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setCoreParameter("Dealed", dealed);
}

int DescribeGroupedVulRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeGroupedVulRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string DescribeGroupedVulRequest::getLang()const
{
	return lang_;
}

void DescribeGroupedVulRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeGroupedVulRequest::getType()const
{
	return type_;
}

void DescribeGroupedVulRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string DescribeGroupedVulRequest::getNecessity()const
{
	return necessity_;
}

void DescribeGroupedVulRequest::setNecessity(const std::string& necessity)
{
	necessity_ = necessity;
	setCoreParameter("Necessity", necessity);
}

std::string DescribeGroupedVulRequest::getUuids()const
{
	return uuids_;
}

void DescribeGroupedVulRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setCoreParameter("Uuids", uuids);
}

