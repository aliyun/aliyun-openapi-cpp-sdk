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

#include <alibabacloud/ccc/model/StartJobRequest.h>

using AlibabaCloud::CCC::Model::StartJobRequest;

StartJobRequest::StartJobRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "StartJob")
{}

StartJobRequest::~StartJobRequest()
{}

std::string StartJobRequest::getJobJson()const
{
	return jobJson_;
}

void StartJobRequest::setJobJson(const std::string& jobJson)
{
	jobJson_ = jobJson;
	setCoreParameter("JobJson", jobJson);
}

std::vector<std::string> StartJobRequest::getCallingNumber()const
{
	return callingNumber_;
}

void StartJobRequest::setCallingNumber(const std::vector<std::string>& callingNumber)
{
	callingNumber_ = callingNumber;
	for(int i = 0; i!= callingNumber.size(); i++)
		setCoreParameter("CallingNumber."+ std::to_string(i), callingNumber.at(i));
}

std::string StartJobRequest::getInstanceId()const
{
	return instanceId_;
}

void StartJobRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string StartJobRequest::getGroupId()const
{
	return groupId_;
}

void StartJobRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

bool StartJobRequest::getSelfHostedCallCenter()const
{
	return selfHostedCallCenter_;
}

void StartJobRequest::setSelfHostedCallCenter(bool selfHostedCallCenter)
{
	selfHostedCallCenter_ = selfHostedCallCenter;
	setCoreParameter("SelfHostedCallCenter", selfHostedCallCenter ? "true" : "false");
}

std::string StartJobRequest::getScenarioId()const
{
	return scenarioId_;
}

void StartJobRequest::setScenarioId(const std::string& scenarioId)
{
	scenarioId_ = scenarioId;
	setCoreParameter("ScenarioId", scenarioId);
}

