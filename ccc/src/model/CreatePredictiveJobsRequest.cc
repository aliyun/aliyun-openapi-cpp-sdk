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

#include <alibabacloud/ccc/model/CreatePredictiveJobsRequest.h>

using AlibabaCloud::CCC::Model::CreatePredictiveJobsRequest;

CreatePredictiveJobsRequest::CreatePredictiveJobsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "CreatePredictiveJobs")
{}

CreatePredictiveJobsRequest::~CreatePredictiveJobsRequest()
{}

std::string CreatePredictiveJobsRequest::getInstanceId()const
{
	return instanceId_;
}

void CreatePredictiveJobsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string CreatePredictiveJobsRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void CreatePredictiveJobsRequest::setSkillGroupId(const std::string& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setCoreParameter("SkillGroupId", skillGroupId);
}

std::string CreatePredictiveJobsRequest::getStrategyJson()const
{
	return strategyJson_;
}

void CreatePredictiveJobsRequest::setStrategyJson(const std::string& strategyJson)
{
	strategyJson_ = strategyJson;
	setCoreParameter("StrategyJson", strategyJson);
}

std::vector<std::string> CreatePredictiveJobsRequest::getJobsJson()const
{
	return jobsJson_;
}

void CreatePredictiveJobsRequest::setJobsJson(const std::vector<std::string>& jobsJson)
{
	jobsJson_ = jobsJson;
	for(int i = 0; i!= jobsJson.size(); i++)
		setCoreParameter("JobsJson."+ std::to_string(i), std::to_string(jobsJson.at(i)));
}

