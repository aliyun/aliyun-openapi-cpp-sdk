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

#include <alibabacloud/r-kvstore/model/DescribeCacheAnalysisReportRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeCacheAnalysisReportRequest;

DescribeCacheAnalysisReportRequest::DescribeCacheAnalysisReportRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeCacheAnalysisReport")
{}

DescribeCacheAnalysisReportRequest::~DescribeCacheAnalysisReportRequest()
{}

std::string DescribeCacheAnalysisReportRequest::getDate()const
{
	return date_;
}

void DescribeCacheAnalysisReportRequest::setDate(const std::string& date)
{
	date_ = date;
	setCoreParameter("Date", std::to_string(date));
}

long DescribeCacheAnalysisReportRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCacheAnalysisReportRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeCacheAnalysisReportRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCacheAnalysisReportRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeCacheAnalysisReportRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCacheAnalysisReportRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long DescribeCacheAnalysisReportRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCacheAnalysisReportRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeCacheAnalysisReportRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCacheAnalysisReportRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeCacheAnalysisReportRequest::getAnalysisType()const
{
	return analysisType_;
}

void DescribeCacheAnalysisReportRequest::setAnalysisType(const std::string& analysisType)
{
	analysisType_ = analysisType;
	setCoreParameter("AnalysisType", std::to_string(analysisType));
}

std::string DescribeCacheAnalysisReportRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeCacheAnalysisReportRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string DescribeCacheAnalysisReportRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeCacheAnalysisReportRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeCacheAnalysisReportRequest::getRegionId()const
{
	return regionId_;
}

void DescribeCacheAnalysisReportRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

int DescribeCacheAnalysisReportRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCacheAnalysisReportRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int DescribeCacheAnalysisReportRequest::getPageNumbers()const
{
	return pageNumbers_;
}

void DescribeCacheAnalysisReportRequest::setPageNumbers(int pageNumbers)
{
	pageNumbers_ = pageNumbers;
	setCoreParameter("PageNumbers", pageNumbers);
}

std::string DescribeCacheAnalysisReportRequest::getNodeId()const
{
	return nodeId_;
}

void DescribeCacheAnalysisReportRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", std::to_string(nodeId));
}

