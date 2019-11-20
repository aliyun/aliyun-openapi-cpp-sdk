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
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCacheAnalysisReportRequest::~DescribeCacheAnalysisReportRequest()
{}

std::string DescribeCacheAnalysisReportRequest::getDate()const
{
	return date_;
}

void DescribeCacheAnalysisReportRequest::setDate(const std::string& date)
{
	date_ = date;
	setCoreParameter("Date", date);
}

long DescribeCacheAnalysisReportRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCacheAnalysisReportRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeCacheAnalysisReportRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCacheAnalysisReportRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeCacheAnalysisReportRequest::getAnalysisType()const
{
	return analysisType_;
}

void DescribeCacheAnalysisReportRequest::setAnalysisType(const std::string& analysisType)
{
	analysisType_ = analysisType;
	setCoreParameter("AnalysisType", analysisType);
}

std::string DescribeCacheAnalysisReportRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeCacheAnalysisReportRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

int DescribeCacheAnalysisReportRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCacheAnalysisReportRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int DescribeCacheAnalysisReportRequest::getPageNumbers()const
{
	return pageNumbers_;
}

void DescribeCacheAnalysisReportRequest::setPageNumbers(int pageNumbers)
{
	pageNumbers_ = pageNumbers;
	setCoreParameter("PageNumbers", std::to_string(pageNumbers));
}

std::string DescribeCacheAnalysisReportRequest::getNodeId()const
{
	return nodeId_;
}

void DescribeCacheAnalysisReportRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", nodeId);
}

std::string DescribeCacheAnalysisReportRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCacheAnalysisReportRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeCacheAnalysisReportRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCacheAnalysisReportRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeCacheAnalysisReportRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCacheAnalysisReportRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeCacheAnalysisReportRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeCacheAnalysisReportRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

