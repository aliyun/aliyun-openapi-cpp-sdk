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

#include <alibabacloud/sddp/model/DescribeDataLimitsInstanceDimRequest.h>

using AlibabaCloud::Sddp::Model::DescribeDataLimitsInstanceDimRequest;

DescribeDataLimitsInstanceDimRequest::DescribeDataLimitsInstanceDimRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DescribeDataLimitsInstanceDim")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDataLimitsInstanceDimRequest::~DescribeDataLimitsInstanceDimRequest()
{}

long DescribeDataLimitsInstanceDimRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDataLimitsInstanceDimRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string DescribeDataLimitsInstanceDimRequest::getParentId()const
{
	return parentId_;
}

void DescribeDataLimitsInstanceDimRequest::setParentId(const std::string& parentId)
{
	parentId_ = parentId;
	setParameter("ParentId", parentId);
}

std::string DescribeDataLimitsInstanceDimRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDataLimitsInstanceDimRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeDataLimitsInstanceDimRequest::getEnable()const
{
	return enable_;
}

void DescribeDataLimitsInstanceDimRequest::setEnable(int enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

int DescribeDataLimitsInstanceDimRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDataLimitsInstanceDimRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int DescribeDataLimitsInstanceDimRequest::getCheckStatus()const
{
	return checkStatus_;
}

void DescribeDataLimitsInstanceDimRequest::setCheckStatus(int checkStatus)
{
	checkStatus_ = checkStatus;
	setParameter("CheckStatus", std::to_string(checkStatus));
}

int DescribeDataLimitsInstanceDimRequest::getDatamaskStatus()const
{
	return datamaskStatus_;
}

void DescribeDataLimitsInstanceDimRequest::setDatamaskStatus(int datamaskStatus)
{
	datamaskStatus_ = datamaskStatus;
	setParameter("DatamaskStatus", std::to_string(datamaskStatus));
}

std::string DescribeDataLimitsInstanceDimRequest::getLang()const
{
	return lang_;
}

void DescribeDataLimitsInstanceDimRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeDataLimitsInstanceDimRequest::getServiceRegionId()const
{
	return serviceRegionId_;
}

void DescribeDataLimitsInstanceDimRequest::setServiceRegionId(const std::string& serviceRegionId)
{
	serviceRegionId_ = serviceRegionId;
	setParameter("ServiceRegionId", serviceRegionId);
}

std::string DescribeDataLimitsInstanceDimRequest::getEngineType()const
{
	return engineType_;
}

void DescribeDataLimitsInstanceDimRequest::setEngineType(const std::string& engineType)
{
	engineType_ = engineType;
	setParameter("EngineType", engineType);
}

int DescribeDataLimitsInstanceDimRequest::getAuditStatus()const
{
	return auditStatus_;
}

void DescribeDataLimitsInstanceDimRequest::setAuditStatus(int auditStatus)
{
	auditStatus_ = auditStatus;
	setParameter("AuditStatus", std::to_string(auditStatus));
}

long DescribeDataLimitsInstanceDimRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDataLimitsInstanceDimRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

int DescribeDataLimitsInstanceDimRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeDataLimitsInstanceDimRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

int DescribeDataLimitsInstanceDimRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeDataLimitsInstanceDimRequest::setResourceType(int resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", std::to_string(resourceType));
}

