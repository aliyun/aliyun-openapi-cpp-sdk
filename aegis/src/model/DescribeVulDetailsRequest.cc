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

#include <alibabacloud/aegis/model/DescribeVulDetailsRequest.h>

using AlibabaCloud::Aegis::Model::DescribeVulDetailsRequest;

DescribeVulDetailsRequest::DescribeVulDetailsRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeVulDetails")
{}

DescribeVulDetailsRequest::~DescribeVulDetailsRequest()
{}

long DescribeVulDetailsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVulDetailsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeVulDetailsRequest::getProduct()const
{
	return product_;
}

void DescribeVulDetailsRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeVulDetailsRequest::getStatusList()const
{
	return statusList_;
}

void DescribeVulDetailsRequest::setStatusList(const std::string& statusList)
{
	statusList_ = statusList;
	setParameter("StatusList", statusList);
}

std::string DescribeVulDetailsRequest::getLevel()const
{
	return level_;
}

void DescribeVulDetailsRequest::setLevel(const std::string& level)
{
	level_ = level;
	setParameter("Level", level);
}

std::string DescribeVulDetailsRequest::getResource()const
{
	return resource_;
}

void DescribeVulDetailsRequest::setResource(const std::string& resource)
{
	resource_ = resource;
	setParameter("Resource", resource);
}

std::string DescribeVulDetailsRequest::getOrderBy()const
{
	return orderBy_;
}

void DescribeVulDetailsRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setParameter("OrderBy", orderBy);
}

std::string DescribeVulDetailsRequest::getDealed()const
{
	return dealed_;
}

void DescribeVulDetailsRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setParameter("Dealed", dealed);
}

int DescribeVulDetailsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeVulDetailsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeVulDetailsRequest::getType()const
{
	return type_;
}

void DescribeVulDetailsRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

long DescribeVulDetailsRequest::getLastTsEnd()const
{
	return lastTsEnd_;
}

void DescribeVulDetailsRequest::setLastTsEnd(long lastTsEnd)
{
	lastTsEnd_ = lastTsEnd;
	setParameter("LastTsEnd", std::to_string(lastTsEnd));
}

std::string DescribeVulDetailsRequest::getBatchName()const
{
	return batchName_;
}

void DescribeVulDetailsRequest::setBatchName(const std::string& batchName)
{
	batchName_ = batchName;
	setParameter("BatchName", batchName);
}

long DescribeVulDetailsRequest::getPatchId()const
{
	return patchId_;
}

void DescribeVulDetailsRequest::setPatchId(long patchId)
{
	patchId_ = patchId;
	setParameter("PatchId", std::to_string(patchId));
}

std::string DescribeVulDetailsRequest::getAliasName()const
{
	return aliasName_;
}

void DescribeVulDetailsRequest::setAliasName(const std::string& aliasName)
{
	aliasName_ = aliasName;
	setParameter("AliasName", aliasName);
}

std::string DescribeVulDetailsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeVulDetailsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeVulDetailsRequest::getName()const
{
	return name_;
}

void DescribeVulDetailsRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int DescribeVulDetailsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVulDetailsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeVulDetailsRequest::getLang()const
{
	return lang_;
}

void DescribeVulDetailsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

long DescribeVulDetailsRequest::getLastTsStart()const
{
	return lastTsStart_;
}

void DescribeVulDetailsRequest::setLastTsStart(long lastTsStart)
{
	lastTsStart_ = lastTsStart;
	setParameter("LastTsStart", std::to_string(lastTsStart));
}

std::string DescribeVulDetailsRequest::getNecessity()const
{
	return necessity_;
}

void DescribeVulDetailsRequest::setNecessity(const std::string& necessity)
{
	necessity_ = necessity;
	setParameter("Necessity", necessity);
}

std::string DescribeVulDetailsRequest::getUuids()const
{
	return uuids_;
}

void DescribeVulDetailsRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setParameter("Uuids", uuids);
}

std::string DescribeVulDetailsRequest::getDirection()const
{
	return direction_;
}

void DescribeVulDetailsRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setParameter("Direction", direction);
}

