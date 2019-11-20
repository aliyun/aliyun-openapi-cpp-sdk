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

#include <alibabacloud/cbn/model/DescribeFlowlogsRequest.h>

using AlibabaCloud::Cbn::Model::DescribeFlowlogsRequest;

DescribeFlowlogsRequest::DescribeFlowlogsRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "DescribeFlowlogs")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeFlowlogsRequest::~DescribeFlowlogsRequest()
{}

long DescribeFlowlogsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeFlowlogsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeFlowlogsRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeFlowlogsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string DescribeFlowlogsRequest::getCenId()const
{
	return cenId_;
}

void DescribeFlowlogsRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setCoreParameter("CenId", cenId);
}

std::string DescribeFlowlogsRequest::getDescription()const
{
	return description_;
}

void DescribeFlowlogsRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

int DescribeFlowlogsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeFlowlogsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeFlowlogsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFlowlogsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeFlowlogsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeFlowlogsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeFlowlogsRequest::getProjectName()const
{
	return projectName_;
}

void DescribeFlowlogsRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setCoreParameter("ProjectName", projectName);
}

std::string DescribeFlowlogsRequest::getLogStoreName()const
{
	return logStoreName_;
}

void DescribeFlowlogsRequest::setLogStoreName(const std::string& logStoreName)
{
	logStoreName_ = logStoreName;
	setCoreParameter("LogStoreName", logStoreName);
}

std::string DescribeFlowlogsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeFlowlogsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeFlowlogsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeFlowlogsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeFlowlogsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeFlowlogsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeFlowlogsRequest::getFlowLogId()const
{
	return flowLogId_;
}

void DescribeFlowlogsRequest::setFlowLogId(const std::string& flowLogId)
{
	flowLogId_ = flowLogId;
	setCoreParameter("FlowLogId", flowLogId);
}

std::string DescribeFlowlogsRequest::getFlowLogName()const
{
	return flowLogName_;
}

void DescribeFlowlogsRequest::setFlowLogName(const std::string& flowLogName)
{
	flowLogName_ = flowLogName;
	setCoreParameter("FlowLogName", flowLogName);
}

std::string DescribeFlowlogsRequest::getStatus()const
{
	return status_;
}

void DescribeFlowlogsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

