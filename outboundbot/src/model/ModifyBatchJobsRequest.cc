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

#include <alibabacloud/outboundbot/model/ModifyBatchJobsRequest.h>

using AlibabaCloud::OutboundBot::Model::ModifyBatchJobsRequest;

ModifyBatchJobsRequest::ModifyBatchJobsRequest() :
	RpcServiceRequest("outboundbot", "2019-12-26", "ModifyBatchJobs")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyBatchJobsRequest::~ModifyBatchJobsRequest()
{}

std::string ModifyBatchJobsRequest::getDescription()const
{
	return description_;
}

void ModifyBatchJobsRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyBatchJobsRequest::getJobFilePath()const
{
	return jobFilePath_;
}

void ModifyBatchJobsRequest::setJobFilePath(const std::string& jobFilePath)
{
	jobFilePath_ = jobFilePath;
	setParameter("JobFilePath", jobFilePath);
}

std::vector<std::string> ModifyBatchJobsRequest::getCallingNumber()const
{
	return callingNumber_;
}

void ModifyBatchJobsRequest::setCallingNumber(const std::vector<std::string>& callingNumber)
{
	callingNumber_ = callingNumber;
	for(int dep1 = 0; dep1!= callingNumber.size(); dep1++) {
		setParameter("CallingNumber."+ std::to_string(dep1), callingNumber.at(dep1));
	}
}

std::string ModifyBatchJobsRequest::getScriptId()const
{
	return scriptId_;
}

void ModifyBatchJobsRequest::setScriptId(const std::string& scriptId)
{
	scriptId_ = scriptId;
	setParameter("ScriptId", scriptId);
}

std::string ModifyBatchJobsRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyBatchJobsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

bool ModifyBatchJobsRequest::getSubmitted()const
{
	return submitted_;
}

void ModifyBatchJobsRequest::setSubmitted(bool submitted)
{
	submitted_ = submitted;
	setParameter("Submitted", submitted ? "true" : "false");
}

std::string ModifyBatchJobsRequest::getBatchJobName()const
{
	return batchJobName_;
}

void ModifyBatchJobsRequest::setBatchJobName(const std::string& batchJobName)
{
	batchJobName_ = batchJobName;
	setParameter("BatchJobName", batchJobName);
}

std::string ModifyBatchJobsRequest::getStrategyJson()const
{
	return strategyJson_;
}

void ModifyBatchJobsRequest::setStrategyJson(const std::string& strategyJson)
{
	strategyJson_ = strategyJson;
	setParameter("StrategyJson", strategyJson);
}

std::string ModifyBatchJobsRequest::getJobGroupId()const
{
	return jobGroupId_;
}

void ModifyBatchJobsRequest::setJobGroupId(const std::string& jobGroupId)
{
	jobGroupId_ = jobGroupId;
	setParameter("JobGroupId", jobGroupId);
}

std::string ModifyBatchJobsRequest::getScenarioId()const
{
	return scenarioId_;
}

void ModifyBatchJobsRequest::setScenarioId(const std::string& scenarioId)
{
	scenarioId_ = scenarioId;
	setParameter("ScenarioId", scenarioId);
}

