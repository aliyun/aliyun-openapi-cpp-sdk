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

#include <alibabacloud/ccc/model/ResumePredictiveJobsRequest.h>

using AlibabaCloud::CCC::Model::ResumePredictiveJobsRequest;

ResumePredictiveJobsRequest::ResumePredictiveJobsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ResumePredictiveJobs")
{
	setMethod(HttpRequest::Method::Post);
}

ResumePredictiveJobsRequest::~ResumePredictiveJobsRequest()
{}

bool ResumePredictiveJobsRequest::getAll()const
{
	return all_;
}

void ResumePredictiveJobsRequest::setAll(bool all)
{
	all_ = all;
	setParameter("All", all ? "true" : "false");
}

std::vector<std::string> ResumePredictiveJobsRequest::getJobId()const
{
	return jobId_;
}

void ResumePredictiveJobsRequest::setJobId(const std::vector<std::string>& jobId)
{
	jobId_ = jobId;
	for(int dep1 = 0; dep1!= jobId.size(); dep1++) {
		setParameter("JobId."+ std::to_string(dep1), jobId.at(dep1));
	}
}

std::string ResumePredictiveJobsRequest::getInstanceId()const
{
	return instanceId_;
}

void ResumePredictiveJobsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ResumePredictiveJobsRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void ResumePredictiveJobsRequest::setSkillGroupId(const std::string& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setParameter("SkillGroupId", skillGroupId);
}

std::string ResumePredictiveJobsRequest::getJobGroupId()const
{
	return jobGroupId_;
}

void ResumePredictiveJobsRequest::setJobGroupId(const std::string& jobGroupId)
{
	jobGroupId_ = jobGroupId;
	setParameter("JobGroupId", jobGroupId);
}

