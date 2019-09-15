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

#include <alibabacloud/aegis/model/DescribeGroupedVulRequest.h>

using AlibabaCloud::Aegis::Model::DescribeGroupedVulRequest;

DescribeGroupedVulRequest::DescribeGroupedVulRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeGroupedVul")
{}

DescribeGroupedVulRequest::~DescribeGroupedVulRequest()
{}

std::string DescribeGroupedVulRequest::getStatusList()const
{
	return statusList_;
}

void DescribeGroupedVulRequest::setStatusList(const std::string& statusList)
{
	statusList_ = statusList;
	setCoreParameter("StatusList", statusList);
}

std::string DescribeGroupedVulRequest::getCveId()const
{
	return cveId_;
}

void DescribeGroupedVulRequest::setCveId(const std::string& cveId)
{
	cveId_ = cveId;
	setCoreParameter("CveId", cveId);
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

long DescribeGroupedVulRequest::getLastTsEnd()const
{
	return lastTsEnd_;
}

void DescribeGroupedVulRequest::setLastTsEnd(long lastTsEnd)
{
	lastTsEnd_ = lastTsEnd;
	setCoreParameter("LastTsEnd", std::to_string(lastTsEnd));
}

long DescribeGroupedVulRequest::getCreateTsStart()const
{
	return createTsStart_;
}

void DescribeGroupedVulRequest::setCreateTsStart(long createTsStart)
{
	createTsStart_ = createTsStart;
	setCoreParameter("CreateTsStart", std::to_string(createTsStart));
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
	setCoreParameter("PageSize", std::to_string(pageSize));
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

long DescribeGroupedVulRequest::getLastTsStart()const
{
	return lastTsStart_;
}

void DescribeGroupedVulRequest::setLastTsStart(long lastTsStart)
{
	lastTsStart_ = lastTsStart;
	setCoreParameter("LastTsStart", std::to_string(lastTsStart));
}

std::string DescribeGroupedVulRequest::getDirection()const
{
	return direction_;
}

void DescribeGroupedVulRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setCoreParameter("Direction", direction);
}

std::string DescribeGroupedVulRequest::getLevel()const
{
	return level_;
}

void DescribeGroupedVulRequest::setLevel(const std::string& level)
{
	level_ = level;
	setCoreParameter("Level", level);
}

std::string DescribeGroupedVulRequest::getGroupId()const
{
	return groupId_;
}

void DescribeGroupedVulRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string DescribeGroupedVulRequest::getOrderBy()const
{
	return orderBy_;
}

void DescribeGroupedVulRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setCoreParameter("OrderBy", orderBy);
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
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeGroupedVulRequest::getAliasName()const
{
	return aliasName_;
}

void DescribeGroupedVulRequest::setAliasName(const std::string& aliasName)
{
	aliasName_ = aliasName;
	setCoreParameter("AliasName", aliasName);
}

long DescribeGroupedVulRequest::getPatchId()const
{
	return patchId_;
}

void DescribeGroupedVulRequest::setPatchId(long patchId)
{
	patchId_ = patchId;
	setCoreParameter("PatchId", std::to_string(patchId));
}

std::string DescribeGroupedVulRequest::getName()const
{
	return name_;
}

void DescribeGroupedVulRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

long DescribeGroupedVulRequest::getCreateTsEnd()const
{
	return createTsEnd_;
}

void DescribeGroupedVulRequest::setCreateTsEnd(long createTsEnd)
{
	createTsEnd_ = createTsEnd;
	setCoreParameter("CreateTsEnd", std::to_string(createTsEnd));
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

