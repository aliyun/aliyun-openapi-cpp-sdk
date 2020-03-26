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
{
	setMethod(HttpRequest::Method::Post);
}

DescribeFlowNodeInstanceContainerLogRequest::~DescribeFlowNodeInstanceContainerLogRequest()
{}

int DescribeFlowNodeInstanceContainerLogRequest::getOffset()const
{
	return offset_;
}

void DescribeFlowNodeInstanceContainerLogRequest::setOffset(int offset)
{
	offset_ = offset;
	setParameter("Offset", std::to_string(offset));
}

std::string DescribeFlowNodeInstanceContainerLogRequest::getLogName()const
{
	return logName_;
}

void DescribeFlowNodeInstanceContainerLogRequest::setLogName(const std::string& logName)
{
	logName_ = logName;
	setParameter("LogName", logName);
}

int DescribeFlowNodeInstanceContainerLogRequest::getLength()const
{
	return length_;
}

void DescribeFlowNodeInstanceContainerLogRequest::setLength(int length)
{
	length_ = length;
	setParameter("Length", std::to_string(length));
}

std::string DescribeFlowNodeInstanceContainerLogRequest::getNodeInstanceId()const
{
	return nodeInstanceId_;
}

void DescribeFlowNodeInstanceContainerLogRequest::setNodeInstanceId(const std::string& nodeInstanceId)
{
	nodeInstanceId_ = nodeInstanceId;
	setParameter("NodeInstanceId", nodeInstanceId);
}

std::string DescribeFlowNodeInstanceContainerLogRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFlowNodeInstanceContainerLogRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeFlowNodeInstanceContainerLogRequest::getAppId()const
{
	return appId_;
}

void DescribeFlowNodeInstanceContainerLogRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string DescribeFlowNodeInstanceContainerLogRequest::getContainerId()const
{
	return containerId_;
}

void DescribeFlowNodeInstanceContainerLogRequest::setContainerId(const std::string& containerId)
{
	containerId_ = containerId;
	setParameter("ContainerId", containerId);
}

std::string DescribeFlowNodeInstanceContainerLogRequest::getProjectId()const
{
	return projectId_;
}

void DescribeFlowNodeInstanceContainerLogRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

