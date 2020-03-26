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

#include <alibabacloud/ros/model/DeleteStackRequest.h>

using AlibabaCloud::ROS::Model::DeleteStackRequest;

DeleteStackRequest::DeleteStackRequest() :
	RoaServiceRequest("ros", "2015-09-01")
{
	setResourcePath("/stacks/[StackName]/[StackId]");
	setMethod(HttpRequest::Method::Delete);
}

DeleteStackRequest::~DeleteStackRequest()
{}

std::string DeleteStackRequest::getRegionId()const
{
	return regionId_;
}

void DeleteStackRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteStackRequest::getStackId()const
{
	return stackId_;
}

void DeleteStackRequest::setStackId(const std::string& stackId)
{
	stackId_ = stackId;
	setParameter("StackId", stackId);
}

std::string DeleteStackRequest::getStackName()const
{
	return stackName_;
}

void DeleteStackRequest::setStackName(const std::string& stackName)
{
	stackName_ = stackName;
	setParameter("StackName", stackName);
}

