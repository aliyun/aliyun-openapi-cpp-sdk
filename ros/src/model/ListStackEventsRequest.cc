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

#include <alibabacloud/ros/model/ListStackEventsRequest.h>

using AlibabaCloud::ROS::Model::ListStackEventsRequest;

ListStackEventsRequest::ListStackEventsRequest() :
	RpcServiceRequest("ros", "2019-09-10", "ListStackEvents")
{}

ListStackEventsRequest::~ListStackEventsRequest()
{}

std::string ListStackEventsRequest::getRegionId()const
{
	return regionId_;
}

void ListStackEventsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListStackEventsRequest::getStackId()const
{
	return stackId_;
}

void ListStackEventsRequest::setStackId(const std::string& stackId)
{
	stackId_ = stackId;
	setCoreParameter("StackId", stackId);
}

long ListStackEventsRequest::getPageSize()const
{
	return pageSize_;
}

void ListStackEventsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::vector<std::string> ListStackEventsRequest::getLogicalResourceId()const
{
	return logicalResourceId_;
}

void ListStackEventsRequest::setLogicalResourceId(const std::vector<std::string>& logicalResourceId)
{
	logicalResourceId_ = logicalResourceId;
	for(int i = 0; i!= logicalResourceId.size(); i++)
		setCoreParameter("LogicalResourceId."+ std::to_string(i), logicalResourceId.at(i));
}

std::vector<std::string> ListStackEventsRequest::getResourceType()const
{
	return resourceType_;
}

void ListStackEventsRequest::setResourceType(const std::vector<std::string>& resourceType)
{
	resourceType_ = resourceType;
	for(int i = 0; i!= resourceType.size(); i++)
		setCoreParameter("ResourceType."+ std::to_string(i), resourceType.at(i));
}

long ListStackEventsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListStackEventsRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::vector<std::string> ListStackEventsRequest::getStatus()const
{
	return status_;
}

void ListStackEventsRequest::setStatus(const std::vector<std::string>& status)
{
	status_ = status;
	for(int i = 0; i!= status.size(); i++)
		setCoreParameter("Status."+ std::to_string(i), status.at(i));
}

