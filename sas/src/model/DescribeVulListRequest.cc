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

#include <alibabacloud/sas/model/DescribeVulListRequest.h>

using AlibabaCloud::Sas::Model::DescribeVulListRequest;

DescribeVulListRequest::DescribeVulListRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeVulList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVulListRequest::~DescribeVulListRequest()
{}

std::string DescribeVulListRequest::getRemark()const
{
	return remark_;
}

void DescribeVulListRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string DescribeVulListRequest::getType()const
{
	return type_;
}

void DescribeVulListRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string DescribeVulListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeVulListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeVulListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVulListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeVulListRequest::getLang()const
{
	return lang_;
}

void DescribeVulListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeVulListRequest::getDealed()const
{
	return dealed_;
}

void DescribeVulListRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setCoreParameter("Dealed", dealed);
}

int DescribeVulListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeVulListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeVulListRequest::getAliasName()const
{
	return aliasName_;
}

void DescribeVulListRequest::setAliasName(const std::string& aliasName)
{
	aliasName_ = aliasName;
	setCoreParameter("AliasName", aliasName);
}

std::string DescribeVulListRequest::getNecessity()const
{
	return necessity_;
}

void DescribeVulListRequest::setNecessity(const std::string& necessity)
{
	necessity_ = necessity;
	setCoreParameter("Necessity", necessity);
}

std::string DescribeVulListRequest::getUuids()const
{
	return uuids_;
}

void DescribeVulListRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setCoreParameter("Uuids", uuids);
}

