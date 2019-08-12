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

#include <alibabacloud/smartag/model/DescribeFlowLogsRequest.h>

using AlibabaCloud::Smartag::Model::DescribeFlowLogsRequest;

DescribeFlowLogsRequest::DescribeFlowLogsRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeFlowLogs")
{}

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

std::string DescribeFlowLogsRequest::getDescription()const
{
	return description_;
}

void DescribeFlowLogsRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
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

std::string DescribeFlowLogsRequest::getOutputType()const
{
	return outputType_;
}

void DescribeFlowLogsRequest::setOutputType(const std::string& outputType)
{
	outputType_ = outputType;
	setCoreParameter("OutputType", outputType);
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

