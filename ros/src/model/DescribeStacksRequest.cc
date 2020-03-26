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

#include <alibabacloud/ros/model/DescribeStacksRequest.h>

using AlibabaCloud::ROS::Model::DescribeStacksRequest;

DescribeStacksRequest::DescribeStacksRequest() :
	RoaServiceRequest("ros", "2015-09-01")
{
	setResourcePath("/stacks");
	setMethod(HttpRequest::Method::Get);
}

DescribeStacksRequest::~DescribeStacksRequest()
{}

std::string DescribeStacksRequest::getStackId()const
{
	return stackId_;
}

void DescribeStacksRequest::setStackId(const std::string& stackId)
{
	stackId_ = stackId;
	setParameter("StackId", stackId);
}

std::string DescribeStacksRequest::getName()const
{
	return name_;
}

void DescribeStacksRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int DescribeStacksRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeStacksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int DescribeStacksRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeStacksRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeStacksRequest::getStatus()const
{
	return status_;
}

void DescribeStacksRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

