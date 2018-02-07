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

long DescribeVulListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVulListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeVulListRequest::getProduct()const
{
	return product_;
}

void DescribeVulListRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeVulListRequest::getStatusList()const
{
	return statusList_;
}

void DescribeVulListRequest::setStatusList(const std::string& statusList)
{
	statusList_ = statusList;
	setParameter("StatusList", statusList);
}

std::string DescribeVulListRequest::getLevel()const
{
	return level_;
}

void DescribeVulListRequest::setLevel(const std::string& level)
{
	level_ = level;
	setParameter("Level", level);
}

std::string DescribeVulListRequest::getResource()const
{
	return resource_;
}

void DescribeVulListRequest::setResource(const std::string& resource)
{
	resource_ = resource;
	setParameter("Resource", resource);
}

std::string DescribeVulListRequest::getOrderBy()const
{
	return orderBy_;
}

void DescribeVulListRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setParameter("OrderBy", orderBy);
}

std::string DescribeVulListRequest::getDealed()const
{
	return dealed_;
}

void DescribeVulListRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setParameter("Dealed", dealed);
}

int DescribeVulListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeVulListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeVulListRequest::getType()const
{
	return type_;
}

void DescribeVulListRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

long DescribeVulListRequest::getLastTsEnd()const
{
	return lastTsEnd_;
}

void DescribeVulListRequest::setLastTsEnd(long lastTsEnd)
{
	lastTsEnd_ = lastTsEnd;
	setParameter("LastTsEnd", std::to_string(lastTsEnd));
}

std::string DescribeVulListRequest::getBatchName()const
{
	return batchName_;
}

void DescribeVulListRequest::setBatchName(const std::string& batchName)
{
	batchName_ = batchName;
	setParameter("BatchName", batchName);
}

long DescribeVulListRequest::getPatchId()const
{
	return patchId_;
}

void DescribeVulListRequest::setPatchId(long patchId)
{
	patchId_ = patchId;
	setParameter("PatchId", std::to_string(patchId));
}

std::string DescribeVulListRequest::getAliasName()const
{
	return aliasName_;
}

void DescribeVulListRequest::setAliasName(const std::string& aliasName)
{
	aliasName_ = aliasName;
	setParameter("AliasName", aliasName);
}

std::string DescribeVulListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeVulListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeVulListRequest::getName()const
{
	return name_;
}

void DescribeVulListRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int DescribeVulListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVulListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeVulListRequest::getLang()const
{
	return lang_;
}

void DescribeVulListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

long DescribeVulListRequest::getLastTsStart()const
{
	return lastTsStart_;
}

void DescribeVulListRequest::setLastTsStart(long lastTsStart)
{
	lastTsStart_ = lastTsStart;
	setParameter("LastTsStart", std::to_string(lastTsStart));
}

std::string DescribeVulListRequest::getNecessity()const
{
	return necessity_;
}

void DescribeVulListRequest::setNecessity(const std::string& necessity)
{
	necessity_ = necessity;
	setParameter("Necessity", necessity);
}

std::string DescribeVulListRequest::getUuids()const
{
	return uuids_;
}

void DescribeVulListRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setParameter("Uuids", uuids);
}

std::string DescribeVulListRequest::getDirection()const
{
	return direction_;
}

void DescribeVulListRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setParameter("Direction", direction);
}

