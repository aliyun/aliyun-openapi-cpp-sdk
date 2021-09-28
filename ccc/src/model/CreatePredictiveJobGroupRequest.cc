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
{
	setMethod(HttpRequest::Method::Post);
}

CreatePredictiveJobGroupRequest::~CreatePredictiveJobGroupRequest()
{}

std::string CreatePredictiveJobGroupRequest::getDescription()const
{
	return description_;
}

void CreatePredictiveJobGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

bool CreatePredictiveJobGroupRequest::getTimingSchedule()const
{
	return timingSchedule_;
}

void CreatePredictiveJobGroupRequest::setTimingSchedule(bool timingSchedule)
{
	timingSchedule_ = timingSchedule;
	setParameter("TimingSchedule", timingSchedule ? "true" : "false");
}

std::string CreatePredictiveJobGroupRequest::getJobFilePath()const
{
	return jobFilePath_;
}

void CreatePredictiveJobGroupRequest::setJobFilePath(const std::string& jobFilePath)
{
	jobFilePath_ = jobFilePath;
	setParameter("JobFilePath", jobFilePath);
}

std::vector<std::string> CreatePredictiveJobGroupRequest::getJobsJson()const
{
	return jobsJson_;
}

void CreatePredictiveJobGroupRequest::setJobsJson(const std::vector<std::string>& jobsJson)
{
	jobsJson_ = jobsJson;
	for(int dep1 = 0; dep1!= jobsJson.size(); dep1++) {
		setBodyParameter("JobsJson."+ std::to_string(dep1), jobsJson.at(dep1));
	}
}

std::string CreatePredictiveJobGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void CreatePredictiveJobGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

bool CreatePredictiveJobGroupRequest::getIsDraft()const
{
	return isDraft_;
}

void CreatePredictiveJobGroupRequest::setIsDraft(bool isDraft)
{
	isDraft_ = isDraft;
	setParameter("IsDraft", isDraft ? "true" : "false");
}

std::string CreatePredictiveJobGroupRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void CreatePredictiveJobGroupRequest::setSkillGroupId(const std::string& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setParameter("SkillGroupId", skillGroupId);
}

std::string CreatePredictiveJobGroupRequest::getStrategyJson()const
{
	return strategyJson_;
}

void CreatePredictiveJobGroupRequest::setStrategyJson(const std::string& strategyJson)
{
	strategyJson_ = strategyJson;
	setParameter("StrategyJson", strategyJson);
}

std::string CreatePredictiveJobGroupRequest::getName()const
{
	return name_;
}

void CreatePredictiveJobGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int CreatePredictiveJobGroupRequest::getRatio()const
{
	return ratio_;
}

void CreatePredictiveJobGroupRequest::setRatio(int ratio)
{
	ratio_ = ratio;
	setParameter("Ratio", std::to_string(ratio));
}

