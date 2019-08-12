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

#include <alibabacloud/ccc/model/CreatePredictiveJobGroupRequest.h>

using AlibabaCloud::CCC::Model::CreatePredictiveJobGroupRequest;

CreatePredictiveJobGroupRequest::CreatePredictiveJobGroupRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "CreatePredictiveJobGroup")
{}

CreatePredictiveJobGroupRequest::~CreatePredictiveJobGroupRequest()
{}

std::string CreatePredictiveJobGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void CreatePredictiveJobGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

bool CreatePredictiveJobGroupRequest::getIsDraft()const
{
	return isDraft_;
}

void CreatePredictiveJobGroupRequest::setIsDraft(bool isDraft)
{
	isDraft_ = isDraft;
	setCoreParameter("IsDraft", isDraft ? "true" : "false");
}

std::string CreatePredictiveJobGroupRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void CreatePredictiveJobGroupRequest::setSkillGroupId(const std::string& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setCoreParameter("SkillGroupId", std::to_string(skillGroupId));
}

std::string CreatePredictiveJobGroupRequest::getStrategyJson()const
{
	return strategyJson_;
}

void CreatePredictiveJobGroupRequest::setStrategyJson(const std::string& strategyJson)
{
	strategyJson_ = strategyJson;
	setCoreParameter("StrategyJson", std::to_string(strategyJson));
}

std::string CreatePredictiveJobGroupRequest::getName()const
{
	return name_;
}

void CreatePredictiveJobGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string CreatePredictiveJobGroupRequest::getDescription()const
{
	return description_;
}

void CreatePredictiveJobGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

bool CreatePredictiveJobGroupRequest::getTimingSchedule()const
{
	return timingSchedule_;
}

void CreatePredictiveJobGroupRequest::setTimingSchedule(bool timingSchedule)
{
	timingSchedule_ = timingSchedule;
	setCoreParameter("TimingSchedule", timingSchedule ? "true" : "false");
}

std::vector<std::string> CreatePredictiveJobGroupRequest::getJobsJson()const
{
	return jobsJson_;
}

void CreatePredictiveJobGroupRequest::setJobsJson(const std::vector<std::string>& jobsJson)
{
	jobsJson_ = jobsJson;
	for(int i = 0; i!= jobsJson.size(); i++)
		setCoreParameter("JobsJson."+ std::to_string(i), std::to_string(jobsJson.at(i)));
}

std::string CreatePredictiveJobGroupRequest::getJobFilePath()const
{
	return jobFilePath_;
}

void CreatePredictiveJobGroupRequest::setJobFilePath(const std::string& jobFilePath)
{
	jobFilePath_ = jobFilePath;
	setCoreParameter("JobFilePath", std::to_string(jobFilePath));
}

