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

#include <alibabacloud/ros/model/DescribeEventsRequest.h>

using AlibabaCloud::ROS::Model::DescribeEventsRequest;

DescribeEventsRequest::DescribeEventsRequest() :
	RoaServiceRequest("ros", "2015-09-01")
{
	setResourcePath("/stacks/[StackName]/[StackId]/events");
	setMethod(HttpRequest::Method::Get);
}

DescribeEventsRequest::~DescribeEventsRequest()
{}

std::string DescribeEventsRequest::getStackId()const
{
	return stackId_;
}

void DescribeEventsRequest::setStackId(const std::string& stackId)
{
	stackId_ = stackId;
	setParameter("StackId", stackId);
}

int DescribeEventsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeEventsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeEventsRequest::getStackName()const
{
	return stackName_;
}

void DescribeEventsRequest::setStackName(const std::string& stackName)
{
	stackName_ = stackName;
	setParameter("StackName", stackName);
}

std::string DescribeEventsRequest::getResourceName()const
{
	return resourceName_;
}

void DescribeEventsRequest::setResourceName(const std::string& resourceName)
{
	resourceName_ = resourceName;
	setParameter("ResourceName", resourceName);
}

std::string DescribeEventsRequest::getResourceStatus()const
{
	return resourceStatus_;
}

void DescribeEventsRequest::setResourceStatus(const std::string& resourceStatus)
{
	resourceStatus_ = resourceStatus;
	setParameter("ResourceStatus", resourceStatus);
}

std::string DescribeEventsRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeEventsRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

int DescribeEventsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeEventsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

