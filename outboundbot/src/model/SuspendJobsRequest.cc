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

#include <alibabacloud/outboundbot/model/SuspendJobsRequest.h>

using AlibabaCloud::OutboundBot::Model::SuspendJobsRequest;

SuspendJobsRequest::SuspendJobsRequest() :
	RpcServiceRequest("outboundbot", "2019-12-26", "SuspendJobs")
{
	setMethod(HttpRequest::Method::Post);
}

SuspendJobsRequest::~SuspendJobsRequest()
{}

bool SuspendJobsRequest::getAll()const
{
	return all_;
}

void SuspendJobsRequest::setAll(bool all)
{
	all_ = all;
	setParameter("All", all ? "true" : "false");
}

std::vector<std::string> SuspendJobsRequest::getJobReferenceId()const
{
	return jobReferenceId_;
}

void SuspendJobsRequest::setJobReferenceId(const std::vector<std::string>& jobReferenceId)
{
	jobReferenceId_ = jobReferenceId;
	for(int dep1 = 0; dep1!= jobReferenceId.size(); dep1++) {
		setParameter("JobReferenceId."+ std::to_string(dep1), jobReferenceId.at(dep1));
	}
}

std::vector<std::string> SuspendJobsRequest::getJobId()const
{
	return jobId_;
}

void SuspendJobsRequest::setJobId(const std::vector<std::string>& jobId)
{
	jobId_ = jobId;
	for(int dep1 = 0; dep1!= jobId.size(); dep1++) {
		setParameter("JobId."+ std::to_string(dep1), jobId.at(dep1));
	}
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

std::string SuspendJobsRequest::getJobGroupId()const
{
	return jobGroupId_;
}

void SuspendJobsRequest::setJobGroupId(const std::string& jobGroupId)
{
	jobGroupId_ = jobGroupId;
	setParameter("JobGroupId", jobGroupId);
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

