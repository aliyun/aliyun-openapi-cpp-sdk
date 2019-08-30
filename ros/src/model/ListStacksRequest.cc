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

#include <alibabacloud/ros/model/ListStacksRequest.h>

using AlibabaCloud::ROS::Model::ListStacksRequest;

ListStacksRequest::ListStacksRequest() :
	RpcServiceRequest("ros", "2019-09-10", "ListStacks")
{}

ListStacksRequest::~ListStacksRequest()
{}

std::string ListStacksRequest::getParentStackId()const
{
	return parentStackId_;
}

void ListStacksRequest::setParentStackId(const std::string& parentStackId)
{
	parentStackId_ = parentStackId;
	setCoreParameter("ParentStackId", parentStackId);
}

bool ListStacksRequest::getShowNestedStack()const
{
	return showNestedStack_;
}

void ListStacksRequest::setShowNestedStack(bool showNestedStack)
{
	showNestedStack_ = showNestedStack;
	setCoreParameter("ShowNestedStack", showNestedStack ? "true" : "false");
}

std::string ListStacksRequest::getRegionId()const
{
	return regionId_;
}

void ListStacksRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

long ListStacksRequest::getPageSize()const
{
	return pageSize_;
}

void ListStacksRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::vector<std::string> ListStacksRequest::getStackName()const
{
	return stackName_;
}

void ListStacksRequest::setStackName(const std::vector<std::string>& stackName)
{
	stackName_ = stackName;
	for(int i = 0; i!= stackName.size(); i++)
		setCoreParameter("StackName."+ std::to_string(i), stackName.at(i));
}

long ListStacksRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListStacksRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::vector<std::string> ListStacksRequest::getStatus()const
{
	return status_;
}

void ListStacksRequest::setStatus(const std::vector<std::string>& status)
{
	status_ = status;
	for(int i = 0; i!= status.size(); i++)
		setCoreParameter("Status."+ std::to_string(i), status.at(i));
}

