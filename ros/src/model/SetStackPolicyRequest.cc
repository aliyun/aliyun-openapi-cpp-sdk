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

#include <alibabacloud/ros/model/SetStackPolicyRequest.h>

using AlibabaCloud::ROS::Model::SetStackPolicyRequest;

SetStackPolicyRequest::SetStackPolicyRequest() :
	RpcServiceRequest("ros", "2019-09-10", "SetStackPolicy")
{}

SetStackPolicyRequest::~SetStackPolicyRequest()
{}

std::string SetStackPolicyRequest::getRegionId()const
{
	return regionId_;
}

void SetStackPolicyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SetStackPolicyRequest::getStackPolicyURL()const
{
	return stackPolicyURL_;
}

void SetStackPolicyRequest::setStackPolicyURL(const std::string& stackPolicyURL)
{
	stackPolicyURL_ = stackPolicyURL;
	setCoreParameter("StackPolicyURL", stackPolicyURL);
}

std::string SetStackPolicyRequest::getStackId()const
{
	return stackId_;
}

void SetStackPolicyRequest::setStackId(const std::string& stackId)
{
	stackId_ = stackId;
	setCoreParameter("StackId", stackId);
}

std::string SetStackPolicyRequest::getStackPolicyBody()const
{
	return stackPolicyBody_;
}

void SetStackPolicyRequest::setStackPolicyBody(const std::string& stackPolicyBody)
{
	stackPolicyBody_ = stackPolicyBody;
	setCoreParameter("StackPolicyBody", stackPolicyBody);
}

