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

#include <alibabacloud/emr/model/DescribeClusterOperationHostTaskLogRequest.h>

using AlibabaCloud::Emr::Model::DescribeClusterOperationHostTaskLogRequest;

DescribeClusterOperationHostTaskLogRequest::DescribeClusterOperationHostTaskLogRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeClusterOperationHostTaskLog")
{}

DescribeClusterOperationHostTaskLogRequest::~DescribeClusterOperationHostTaskLogRequest()
{}

long DescribeClusterOperationHostTaskLogRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeClusterOperationHostTaskLogRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeClusterOperationHostTaskLogRequest::getRegionId()const
{
	return regionId_;
}

void DescribeClusterOperationHostTaskLogRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeClusterOperationHostTaskLogRequest::getOperationId()const
{
	return operationId_;
}

void DescribeClusterOperationHostTaskLogRequest::setOperationId(const std::string& operationId)
{
	operationId_ = operationId;
	setCoreParameter("OperationId", operationId);
}

std::string DescribeClusterOperationHostTaskLogRequest::getHostId()const
{
	return hostId_;
}

void DescribeClusterOperationHostTaskLogRequest::setHostId(const std::string& hostId)
{
	hostId_ = hostId;
	setCoreParameter("HostId", hostId);
}

std::string DescribeClusterOperationHostTaskLogRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeClusterOperationHostTaskLogRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string DescribeClusterOperationHostTaskLogRequest::getTaskId()const
{
	return taskId_;
}

void DescribeClusterOperationHostTaskLogRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

std::string DescribeClusterOperationHostTaskLogRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeClusterOperationHostTaskLogRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeClusterOperationHostTaskLogRequest::getStatus()const
{
	return status_;
}

void DescribeClusterOperationHostTaskLogRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

