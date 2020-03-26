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
{
	setMethod(HttpRequest::Method::Post);
}

DescribeGroupedVulRequest::~DescribeGroupedVulRequest()
{}

std::string DescribeGroupedVulRequest::getStatusList()const
{
	return statusList_;
}

void DescribeGroupedVulRequest::setStatusList(const std::string& statusList)
{
	statusList_ = statusList;
	setParameter("StatusList", statusList);
}

std::string DescribeGroupedVulRequest::getType()const
{
	return type_;
}

void DescribeGroupedVulRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string DescribeGroupedVulRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeGroupedVulRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeGroupedVulRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeGroupedVulRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeGroupedVulRequest::getLang()const
{
	return lang_;
}

void DescribeGroupedVulRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeGroupedVulRequest::getGroupId()const
{
	return groupId_;
}

void DescribeGroupedVulRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string DescribeGroupedVulRequest::getDealed()const
{
	return dealed_;
}

void DescribeGroupedVulRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setParameter("Dealed", dealed);
}

int DescribeGroupedVulRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeGroupedVulRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeGroupedVulRequest::getAliasName()const
{
	return aliasName_;
}

void DescribeGroupedVulRequest::setAliasName(const std::string& aliasName)
{
	aliasName_ = aliasName;
	setParameter("AliasName", aliasName);
}

std::string DescribeGroupedVulRequest::getNecessity()const
{
	return necessity_;
}

void DescribeGroupedVulRequest::setNecessity(const std::string& necessity)
{
	necessity_ = necessity;
	setParameter("Necessity", necessity);
}

std::string DescribeGroupedVulRequest::getUuids()const
{
	return uuids_;
}

void DescribeGroupedVulRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setParameter("Uuids", uuids);
}

