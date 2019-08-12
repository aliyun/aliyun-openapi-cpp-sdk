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

#include <alibabacloud/emr/model/DescribeFlowNodeInstanceContainerLogRequest.h>

using AlibabaCloud::Emr::Model::DescribeFlowNodeInstanceContainerLogRequest;

DescribeFlowNodeInstanceContainerLogRequest::DescribeFlowNodeInstanceContainerLogRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeFlowNodeInstanceContainerLog")
{}

DescribeFlowNodeInstanceContainerLogRequest::~DescribeFlowNodeInstanceContainerLogRequest()
{}

int DescribeFlowNodeInstanceContainerLogRequest::getOffset()const
{
	return offset_;
}

void DescribeFlowNodeInstanceContainerLogRequest::setOffset(int offset)
{
	offset_ = offset;
	setCoreParameter("Offset", offset);
}

std::string DescribeFlowNodeInstanceContainerLogRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFlowNodeInstanceContainerLogRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeFlowNodeInstanceContainerLogRequest::getLogName()const
{
	return logName_;
}

void DescribeFlowNodeInstanceContainerLogRequest::setLogName(const std::string& logName)
{
	logName_ = logName;
	setCoreParameter("LogName", std::to_string(logName));
}

std::string DescribeFlowNodeInstanceContainerLogRequest::getAppId()const
{
	return appId_;
}

void DescribeFlowNodeInstanceContainerLogRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

int DescribeFlowNodeInstanceContainerLogRequest::getLength()const
{
	return length_;
}

void DescribeFlowNodeInstanceContainerLogRequest::setLength(int length)
{
	length_ = length;
	setCoreParameter("Length", length);
}

std::string DescribeFlowNodeInstanceContainerLogRequest::getContainerId()const
{
	return containerId_;
}

void DescribeFlowNodeInstanceContainerLogRequest::setContainerId(const std::string& containerId)
{
	containerId_ = containerId;
	setCoreParameter("ContainerId", std::to_string(containerId));
}

std::string DescribeFlowNodeInstanceContainerLogRequest::getNodeInstanceId()const
{
	return nodeInstanceId_;
}

void DescribeFlowNodeInstanceContainerLogRequest::setNodeInstanceId(const std::string& nodeInstanceId)
{
	nodeInstanceId_ = nodeInstanceId;
	setCoreParameter("NodeInstanceId", std::to_string(nodeInstanceId));
}

std::string DescribeFlowNodeInstanceContainerLogRequest::getProjectId()const
{
	return projectId_;
}

void DescribeFlowNodeInstanceContainerLogRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", std::to_string(projectId));
}

