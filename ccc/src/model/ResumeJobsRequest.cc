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

#include <alibabacloud/ccc/model/ResumeJobsRequest.h>

using AlibabaCloud::CCC::Model::ResumeJobsRequest;

ResumeJobsRequest::ResumeJobsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ResumeJobs")
{}

ResumeJobsRequest::~ResumeJobsRequest()
{}

bool ResumeJobsRequest::getAll()const
{
	return all_;
}

void ResumeJobsRequest::setAll(bool all)
{
	all_ = all;
	setCoreParameter("All", all ? "true" : "false");
}

std::vector<std::string> ResumeJobsRequest::getJobId()const
{
	return jobId_;
}

void ResumeJobsRequest::setJobId(const std::vector<std::string>& jobId)
{
	jobId_ = jobId;
	for(int i = 0; i!= jobId.size(); i++)
		setCoreParameter("JobId."+ std::to_string(i), std::to_string(jobId.at(i)));
}

std::string ResumeJobsRequest::getInstanceId()const
{
	return instanceId_;
}

void ResumeJobsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::vector<std::string> ResumeJobsRequest::getJobReferenceId()const
{
	return jobReferenceId_;
}

void ResumeJobsRequest::setJobReferenceId(const std::vector<std::string>& jobReferenceId)
{
	jobReferenceId_ = jobReferenceId;
	for(int i = 0; i!= jobReferenceId.size(); i++)
		setCoreParameter("JobReferenceId."+ std::to_string(i), std::to_string(jobReferenceId.at(i)));
}

std::string ResumeJobsRequest::getGroupId()const
{
	return groupId_;
}

void ResumeJobsRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string ResumeJobsRequest::getScenarioId()const
{
	return scenarioId_;
}

void ResumeJobsRequest::setScenarioId(const std::string& scenarioId)
{
	scenarioId_ = scenarioId;
	setCoreParameter("ScenarioId", std::to_string(scenarioId));
}

