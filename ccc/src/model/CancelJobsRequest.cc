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

#include <alibabacloud/ccc/model/CancelJobsRequest.h>

using AlibabaCloud::CCC::Model::CancelJobsRequest;

CancelJobsRequest::CancelJobsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "CancelJobs")
{}

CancelJobsRequest::~CancelJobsRequest()
{}

bool CancelJobsRequest::getAll()const
{
	return all_;
}

void CancelJobsRequest::setAll(bool all)
{
	all_ = all;
	setCoreParameter("All", all ? "true" : "false");
}

std::vector<std::string> CancelJobsRequest::getJobId()const
{
	return jobId_;
}

void CancelJobsRequest::setJobId(const std::vector<std::string>& jobId)
{
	jobId_ = jobId;
	for(int i = 0; i!= jobId.size(); i++)
		setCoreParameter("JobId."+ std::to_string(i), jobId.at(i));
}

std::string CancelJobsRequest::getInstanceId()const
{
	return instanceId_;
}

void CancelJobsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::vector<std::string> CancelJobsRequest::getJobReferenceId()const
{
	return jobReferenceId_;
}

void CancelJobsRequest::setJobReferenceId(const std::vector<std::string>& jobReferenceId)
{
	jobReferenceId_ = jobReferenceId;
	for(int i = 0; i!= jobReferenceId.size(); i++)
		setCoreParameter("JobReferenceId."+ std::to_string(i), jobReferenceId.at(i));
}

std::string CancelJobsRequest::getGroupId()const
{
	return groupId_;
}

void CancelJobsRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string CancelJobsRequest::getScenarioId()const
{
	return scenarioId_;
}

void CancelJobsRequest::setScenarioId(const std::string& scenarioId)
{
	scenarioId_ = scenarioId;
	setCoreParameter("ScenarioId", scenarioId);
}

