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

#include <alibabacloud/vpc/model/DescribeFlowLogsRequest.h>

using AlibabaCloud::Vpc::Model::DescribeFlowLogsRequest;

DescribeFlowLogsRequest::DescribeFlowLogsRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeFlowLogs")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeFlowLogsRequest::~DescribeFlowLogsRequest()
{}

long DescribeFlowLogsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeFlowLogsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeFlowLogsRequest::getDescription()const
{
	return description_;
}

void DescribeFlowLogsRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

int DescribeFlowLogsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeFlowLogsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeFlowLogsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFlowLogsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeFlowLogsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeFlowLogsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeFlowLogsRequest::getResourceId()const
{
	return resourceId_;
}

void DescribeFlowLogsRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", resourceId);
}

std::string DescribeFlowLogsRequest::getProjectName()const
{
	return projectName_;
}

void DescribeFlowLogsRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setCoreParameter("ProjectName", projectName);
}

std::string DescribeFlowLogsRequest::getLogStoreName()const
{
	return logStoreName_;
}

void DescribeFlowLogsRequest::setLogStoreName(const std::string& logStoreName)
{
	logStoreName_ = logStoreName;
	setCoreParameter("LogStoreName", logStoreName);
}

std::string DescribeFlowLogsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeFlowLogsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeFlowLogsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeFlowLogsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeFlowLogsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeFlowLogsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeFlowLogsRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeFlowLogsRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

std::string DescribeFlowLogsRequest::getTrafficType()const
{
	return trafficType_;
}

void DescribeFlowLogsRequest::setTrafficType(const std::string& trafficType)
{
	trafficType_ = trafficType;
	setCoreParameter("TrafficType", trafficType);
}

std::string DescribeFlowLogsRequest::getFlowLogId()const
{
	return flowLogId_;
}

void DescribeFlowLogsRequest::setFlowLogId(const std::string& flowLogId)
{
	flowLogId_ = flowLogId;
	setCoreParameter("FlowLogId", flowLogId);
}

std::string DescribeFlowLogsRequest::getFlowLogName()const
{
	return flowLogName_;
}

void DescribeFlowLogsRequest::setFlowLogName(const std::string& flowLogName)
{
	flowLogName_ = flowLogName;
	setCoreParameter("FlowLogName", flowLogName);
}

std::string DescribeFlowLogsRequest::getStatus()const
{
	return status_;
}

void DescribeFlowLogsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

