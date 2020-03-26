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

#include <alibabacloud/ros/model/ContinueCreateStackRequest.h>

using AlibabaCloud::ROS::Model::ContinueCreateStackRequest;

ContinueCreateStackRequest::ContinueCreateStackRequest() :
	RoaServiceRequest("ros", "2015-09-01")
{
	setResourcePath("/stacks/[StackName]/[StackId]/continue");
	setMethod(HttpRequest::Method::Post);
}

ContinueCreateStackRequest::~ContinueCreateStackRequest()
{}

std::string ContinueCreateStackRequest::getStackId()const
{
	return stackId_;
}

void ContinueCreateStackRequest::setStackId(const std::string& stackId)
{
	stackId_ = stackId;
	setParameter("StackId", stackId);
}

std::string ContinueCreateStackRequest::getStackName()const
{
	return stackName_;
}

void ContinueCreateStackRequest::setStackName(const std::string& stackName)
{
	stackName_ = stackName;
	setParameter("StackName", stackName);
}

