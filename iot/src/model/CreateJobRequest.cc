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

#include <alibabacloud/iot/model/CreateJobRequest.h>

using AlibabaCloud::Iot::Model::CreateJobRequest;

CreateJobRequest::CreateJobRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateJob")
{
	setMethod(HttpRequest::Method::Post);
}

CreateJobRequest::~CreateJobRequest()
{}

std::string CreateJobRequest::getJobDocument()const
{
	return jobDocument_;
}

void CreateJobRequest::setJobDocument(const std::string& jobDocument)
{
	jobDocument_ = jobDocument;
	setParameter("JobDocument", jobDocument);
}

std::string CreateJobRequest::getDescription()const
{
	return description_;
}

void CreateJobRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateJobRequest::getType()const
{
	return type_;
}

void CreateJobRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string CreateJobRequest::getRolloutConfig()const
{
	return rolloutConfig_;
}

void CreateJobRequest::setRolloutConfig(const std::string& rolloutConfig)
{
	rolloutConfig_ = rolloutConfig;
	setParameter("RolloutConfig", rolloutConfig);
}

std::string CreateJobRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateJobRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string CreateJobRequest::getJobName()const
{
	return jobName_;
}

void CreateJobRequest::setJobName(const std::string& jobName)
{
	jobName_ = jobName;
	setParameter("JobName", jobName);
}

std::string CreateJobRequest::getTimeoutConfig()const
{
	return timeoutConfig_;
}

void CreateJobRequest::setTimeoutConfig(const std::string& timeoutConfig)
{
	timeoutConfig_ = timeoutConfig;
	setParameter("TimeoutConfig", timeoutConfig);
}

std::string CreateJobRequest::getTargetConfig()const
{
	return targetConfig_;
}

void CreateJobRequest::setTargetConfig(const std::string& targetConfig)
{
	targetConfig_ = targetConfig;
	setParameter("TargetConfig", targetConfig);
}

std::string CreateJobRequest::getJobFile()const
{
	return jobFile_;
}

void CreateJobRequest::setJobFile(const std::string& jobFile)
{
	jobFile_ = jobFile;
	setParameter("JobFile", jobFile);
}

std::string CreateJobRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateJobRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateJobRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateJobRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

long CreateJobRequest::getScheduledTime()const
{
	return scheduledTime_;
}

void CreateJobRequest::setScheduledTime(long scheduledTime)
{
	scheduledTime_ = scheduledTime;
	setParameter("ScheduledTime", std::to_string(scheduledTime));
}

