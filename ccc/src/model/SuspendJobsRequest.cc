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

#include <alibabacloud/ccc/model/SuspendJobsRequest.h>

using AlibabaCloud::CCC::Model::SuspendJobsRequest;

SuspendJobsRequest::SuspendJobsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "SuspendJobs")
{}

SuspendJobsRequest::~SuspendJobsRequest()
{}

bool SuspendJobsRequest::getAll()const
{
	return all_;
}

void SuspendJobsRequest::setAll(bool all)
{
	all_ = all;
	setParameter("All", std::to_string(all));
}

std::vector<std::string> SuspendJobsRequest::getJobId()const
{
	return jobId_;
}

void SuspendJobsRequest::setJobId(const std::vector<std::string>& jobId)
{
	jobId_ = jobId;
	for(int i = 0; i!= jobId.size(); i++)
		setParameter("JobId."+ std::to_string(i), jobId.at(i));
}

std::string SuspendJobsRequest::getInstanceId()const
{
	return instanceId_;
}

void SuspendJobsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::vector<std::string> SuspendJobsRequest::getJobReferenceId()const
{
	return jobReferenceId_;
}

void SuspendJobsRequest::setJobReferenceId(const std::vector<std::string>& jobReferenceId)
{
	jobReferenceId_ = jobReferenceId;
	for(int i = 0; i!= jobReferenceId.size(); i++)
		setParameter("JobReferenceId."+ std::to_string(i), jobReferenceId.at(i));
}

std::string SuspendJobsRequest::getGroupId()const
{
	return groupId_;
}

void SuspendJobsRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string SuspendJobsRequest::getScenarioId()const
{
	return scenarioId_;
}

void SuspendJobsRequest::setScenarioId(const std::string& scenarioId)
{
	scenarioId_ = scenarioId;
	setParameter("ScenarioId", scenarioId);
}

