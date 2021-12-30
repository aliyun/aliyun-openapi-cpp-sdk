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

#include <alibabacloud/ccc/model/AddJobsToPredictiveJobGroupRequest.h>

using AlibabaCloud::CCC::Model::AddJobsToPredictiveJobGroupRequest;

AddJobsToPredictiveJobGroupRequest::AddJobsToPredictiveJobGroupRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "AddJobsToPredictiveJobGroup")
{
	setMethod(HttpRequest::Method::Post);
}

AddJobsToPredictiveJobGroupRequest::~AddJobsToPredictiveJobGroupRequest()
{}

std::string AddJobsToPredictiveJobGroupRequest::getClientToken()const
{
	return clientToken_;
}

void AddJobsToPredictiveJobGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::vector<std::string> AddJobsToPredictiveJobGroupRequest::getJobsJson()const
{
	return jobsJson_;
}

void AddJobsToPredictiveJobGroupRequest::setJobsJson(const std::vector<std::string>& jobsJson)
{
	jobsJson_ = jobsJson;
	for(int dep1 = 0; dep1!= jobsJson.size(); dep1++) {
		setBodyParameter("JobsJson."+ std::to_string(dep1), jobsJson.at(dep1));
	}
}

std::string AddJobsToPredictiveJobGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void AddJobsToPredictiveJobGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string AddJobsToPredictiveJobGroupRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void AddJobsToPredictiveJobGroupRequest::setSkillGroupId(const std::string& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setParameter("SkillGroupId", skillGroupId);
}

std::string AddJobsToPredictiveJobGroupRequest::getJobGroupId()const
{
	return jobGroupId_;
}

void AddJobsToPredictiveJobGroupRequest::setJobGroupId(const std::string& jobGroupId)
{
	jobGroupId_ = jobGroupId;
	setParameter("JobGroupId", jobGroupId);
}

