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

#include <alibabacloud/ccc/model/AssignJobsRequest.h>

using AlibabaCloud::CCC::Model::AssignJobsRequest;

AssignJobsRequest::AssignJobsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "AssignJobs")
{}

AssignJobsRequest::~AssignJobsRequest()
{}

std::vector<std::string> AssignJobsRequest::getCallingNumber()const
{
	return callingNumber_;
}

void AssignJobsRequest::setCallingNumber(const std::vector<std::string>& callingNumber)
{
	callingNumber_ = callingNumber;
	for(int i = 0; i!= callingNumber.size(); i++)
		setCoreParameter("CallingNumber."+ std::to_string(i), callingNumber.at(i));
}

std::string AssignJobsRequest::getInstanceId()const
{
	return instanceId_;
}

void AssignJobsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string AssignJobsRequest::getGroupId()const
{
	return groupId_;
}

void AssignJobsRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string AssignJobsRequest::getStrategyJson()const
{
	return strategyJson_;
}

void AssignJobsRequest::setStrategyJson(const std::string& strategyJson)
{
	strategyJson_ = strategyJson;
	setCoreParameter("StrategyJson", strategyJson);
}

std::string AssignJobsRequest::getScenarioId()const
{
	return scenarioId_;
}

void AssignJobsRequest::setScenarioId(const std::string& scenarioId)
{
	scenarioId_ = scenarioId;
	setCoreParameter("ScenarioId", scenarioId);
}

std::vector<std::string> AssignJobsRequest::getJobsJson()const
{
	return jobsJson_;
}

void AssignJobsRequest::setJobsJson(const std::vector<std::string>& jobsJson)
{
	jobsJson_ = jobsJson;
	for(int i = 0; i!= jobsJson.size(); i++)
		setCoreParameter("JobsJson."+ std::to_string(i), jobsJson.at(i));
}

