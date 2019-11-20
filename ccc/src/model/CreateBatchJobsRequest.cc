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

#include <alibabacloud/ccc/model/CreateBatchJobsRequest.h>

using AlibabaCloud::CCC::Model::CreateBatchJobsRequest;

CreateBatchJobsRequest::CreateBatchJobsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "CreateBatchJobs")
{
	setMethod(HttpRequest::Method::Post);
}

CreateBatchJobsRequest::~CreateBatchJobsRequest()
{}

std::string CreateBatchJobsRequest::getDescription()const
{
	return description_;
}

void CreateBatchJobsRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateBatchJobsRequest::getJobFilePath()const
{
	return jobFilePath_;
}

void CreateBatchJobsRequest::setJobFilePath(const std::string& jobFilePath)
{
	jobFilePath_ = jobFilePath;
	setCoreParameter("JobFilePath", jobFilePath);
}

std::vector<std::string> CreateBatchJobsRequest::getCallingNumber()const
{
	return callingNumber_;
}

void CreateBatchJobsRequest::setCallingNumber(const std::vector<std::string>& callingNumber)
{
	callingNumber_ = callingNumber;
	for(int dep1 = 0; dep1!= callingNumber.size(); dep1++) {
		setCoreParameter("CallingNumber."+ std::to_string(dep1), callingNumber.at(dep1));
	}
}

std::string CreateBatchJobsRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateBatchJobsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

bool CreateBatchJobsRequest::getSubmitted()const
{
	return submitted_;
}

void CreateBatchJobsRequest::setSubmitted(bool submitted)
{
	submitted_ = submitted;
	setCoreParameter("Submitted", submitted ? "true" : "false");
}

std::string CreateBatchJobsRequest::getStrategyJson()const
{
	return strategyJson_;
}

void CreateBatchJobsRequest::setStrategyJson(const std::string& strategyJson)
{
	strategyJson_ = strategyJson;
	setCoreParameter("StrategyJson", strategyJson);
}

std::string CreateBatchJobsRequest::getName()const
{
	return name_;
}

void CreateBatchJobsRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CreateBatchJobsRequest::getScenarioId()const
{
	return scenarioId_;
}

void CreateBatchJobsRequest::setScenarioId(const std::string& scenarioId)
{
	scenarioId_ = scenarioId;
	setCoreParameter("ScenarioId", scenarioId);
}

