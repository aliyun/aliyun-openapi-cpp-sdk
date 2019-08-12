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

#include <alibabacloud/aegis/model/DescribeVulListRequest.h>

using AlibabaCloud::Aegis::Model::DescribeVulListRequest;

DescribeVulListRequest::DescribeVulListRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeVulList")
{}

DescribeVulListRequest::~DescribeVulListRequest()
{}

std::string DescribeVulListRequest::getStatusList()const
{
	return statusList_;
}

void DescribeVulListRequest::setStatusList(const std::string& statusList)
{
	statusList_ = statusList;
	setCoreParameter("StatusList", std::to_string(statusList));
}

std::string DescribeVulListRequest::getLevel()const
{
	return level_;
}

void DescribeVulListRequest::setLevel(const std::string& level)
{
	level_ = level;
	setCoreParameter("Level", std::to_string(level));
}

std::string DescribeVulListRequest::getResource()const
{
	return resource_;
}

void DescribeVulListRequest::setResource(const std::string& resource)
{
	resource_ = resource;
	setCoreParameter("Resource", std::to_string(resource));
}

std::string DescribeVulListRequest::getCveId()const
{
	return cveId_;
}

void DescribeVulListRequest::setCveId(const std::string& cveId)
{
	cveId_ = cveId;
	setCoreParameter("CveId", std::to_string(cveId));
}

std::string DescribeVulListRequest::getGroupId()const
{
	return groupId_;
}

void DescribeVulListRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string DescribeVulListRequest::getRemark()const
{
	return remark_;
}

void DescribeVulListRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", std::to_string(remark));
}

std::string DescribeVulListRequest::getDealed()const
{
	return dealed_;
}

void DescribeVulListRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setCoreParameter("Dealed", std::to_string(dealed));
}

int DescribeVulListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeVulListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string DescribeVulListRequest::getType()const
{
	return type_;
}

void DescribeVulListRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

long DescribeVulListRequest::getCreateTsStart()const
{
	return createTsStart_;
}

void DescribeVulListRequest::setCreateTsStart(long createTsStart)
{
	createTsStart_ = createTsStart;
	setCoreParameter("CreateTsStart", createTsStart);
}

std::string DescribeVulListRequest::getBatchName()const
{
	return batchName_;
}

void DescribeVulListRequest::setBatchName(const std::string& batchName)
{
	batchName_ = batchName;
	setCoreParameter("BatchName", std::to_string(batchName));
}

std::string DescribeVulListRequest::getAliasName()const
{
	return aliasName_;
}

void DescribeVulListRequest::setAliasName(const std::string& aliasName)
{
	aliasName_ = aliasName;
	setCoreParameter("AliasName", std::to_string(aliasName));
}

std::string DescribeVulListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeVulListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string DescribeVulListRequest::getName()const
{
	return name_;
}

void DescribeVulListRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

int DescribeVulListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVulListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeVulListRequest::getIds()const
{
	return ids_;
}

void DescribeVulListRequest::setIds(const std::string& ids)
{
	ids_ = ids;
	setCoreParameter("Ids", std::to_string(ids));
}

std::string DescribeVulListRequest::getLang()const
{
	return lang_;
}

void DescribeVulListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

long DescribeVulListRequest::getCreateTsEnd()const
{
	return createTsEnd_;
}

void DescribeVulListRequest::setCreateTsEnd(long createTsEnd)
{
	createTsEnd_ = createTsEnd;
	setCoreParameter("CreateTsEnd", createTsEnd);
}

std::string DescribeVulListRequest::getNecessity()const
{
	return necessity_;
}

void DescribeVulListRequest::setNecessity(const std::string& necessity)
{
	necessity_ = necessity;
	setCoreParameter("Necessity", std::to_string(necessity));
}

std::string DescribeVulListRequest::getUuids()const
{
	return uuids_;
}

void DescribeVulListRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setCoreParameter("Uuids", std::to_string(uuids));
}

