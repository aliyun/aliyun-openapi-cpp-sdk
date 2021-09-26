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

#include <alibabacloud/sddp/model/DescribeDataLimitsRequest.h>

using AlibabaCloud::Sddp::Model::DescribeDataLimitsRequest;

DescribeDataLimitsRequest::DescribeDataLimitsRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DescribeDataLimits")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDataLimitsRequest::~DescribeDataLimitsRequest()
{}

long DescribeDataLimitsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDataLimitsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string DescribeDataLimitsRequest::getParentId()const
{
	return parentId_;
}

void DescribeDataLimitsRequest::setParentId(const std::string& parentId)
{
	parentId_ = parentId;
	setParameter("ParentId", parentId);
}

std::string DescribeDataLimitsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDataLimitsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeDataLimitsRequest::getEnable()const
{
	return enable_;
}

void DescribeDataLimitsRequest::setEnable(int enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

int DescribeDataLimitsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDataLimitsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int DescribeDataLimitsRequest::getCheckStatus()const
{
	return checkStatus_;
}

void DescribeDataLimitsRequest::setCheckStatus(int checkStatus)
{
	checkStatus_ = checkStatus;
	setParameter("CheckStatus", std::to_string(checkStatus));
}

int DescribeDataLimitsRequest::getDatamaskStatus()const
{
	return datamaskStatus_;
}

void DescribeDataLimitsRequest::setDatamaskStatus(int datamaskStatus)
{
	datamaskStatus_ = datamaskStatus;
	setParameter("DatamaskStatus", std::to_string(datamaskStatus));
}

std::string DescribeDataLimitsRequest::getLang()const
{
	return lang_;
}

void DescribeDataLimitsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeDataLimitsRequest::getServiceRegionId()const
{
	return serviceRegionId_;
}

void DescribeDataLimitsRequest::setServiceRegionId(const std::string& serviceRegionId)
{
	serviceRegionId_ = serviceRegionId;
	setParameter("ServiceRegionId", serviceRegionId);
}

std::string DescribeDataLimitsRequest::getEngineType()const
{
	return engineType_;
}

void DescribeDataLimitsRequest::setEngineType(const std::string& engineType)
{
	engineType_ = engineType;
	setParameter("EngineType", engineType);
}

int DescribeDataLimitsRequest::getAuditStatus()const
{
	return auditStatus_;
}

void DescribeDataLimitsRequest::setAuditStatus(int auditStatus)
{
	auditStatus_ = auditStatus;
	setParameter("AuditStatus", std::to_string(auditStatus));
}

long DescribeDataLimitsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDataLimitsRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

int DescribeDataLimitsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeDataLimitsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

int DescribeDataLimitsRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeDataLimitsRequest::setResourceType(int resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", std::to_string(resourceType));
}

