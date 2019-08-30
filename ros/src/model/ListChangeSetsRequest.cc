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

#include <alibabacloud/ros/model/ListChangeSetsRequest.h>

using AlibabaCloud::ROS::Model::ListChangeSetsRequest;

ListChangeSetsRequest::ListChangeSetsRequest() :
	RpcServiceRequest("ros", "2019-09-10", "ListChangeSets")
{}

ListChangeSetsRequest::~ListChangeSetsRequest()
{}

std::vector<std::string> ListChangeSetsRequest::getExecutionStatus()const
{
	return executionStatus_;
}

void ListChangeSetsRequest::setExecutionStatus(const std::vector<std::string>& executionStatus)
{
	executionStatus_ = executionStatus;
	for(int i = 0; i!= executionStatus.size(); i++)
		setCoreParameter("ExecutionStatus."+ std::to_string(i), executionStatus.at(i));
}

std::vector<std::string> ListChangeSetsRequest::getChangeSetName()const
{
	return changeSetName_;
}

void ListChangeSetsRequest::setChangeSetName(const std::vector<std::string>& changeSetName)
{
	changeSetName_ = changeSetName;
	for(int i = 0; i!= changeSetName.size(); i++)
		setCoreParameter("ChangeSetName."+ std::to_string(i), changeSetName.at(i));
}

std::string ListChangeSetsRequest::getRegionId()const
{
	return regionId_;
}

void ListChangeSetsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListChangeSetsRequest::getStackId()const
{
	return stackId_;
}

void ListChangeSetsRequest::setStackId(const std::string& stackId)
{
	stackId_ = stackId;
	setCoreParameter("StackId", stackId);
}

long ListChangeSetsRequest::getPageSize()const
{
	return pageSize_;
}

void ListChangeSetsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long ListChangeSetsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListChangeSetsRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::vector<std::string> ListChangeSetsRequest::getStatus()const
{
	return status_;
}

void ListChangeSetsRequest::setStatus(const std::vector<std::string>& status)
{
	status_ = status;
	for(int i = 0; i!= status.size(); i++)
		setCoreParameter("Status."+ std::to_string(i), status.at(i));
}

