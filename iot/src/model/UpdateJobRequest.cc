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

#include <alibabacloud/iot/model/UpdateJobRequest.h>

using AlibabaCloud::Iot::Model::UpdateJobRequest;

UpdateJobRequest::UpdateJobRequest() :
	RpcServiceRequest("iot", "2018-01-20", "UpdateJob")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateJobRequest::~UpdateJobRequest()
{}

std::string UpdateJobRequest::getDescription()const
{
	return description_;
}

void UpdateJobRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string UpdateJobRequest::getRolloutConfig()const
{
	return rolloutConfig_;
}

void UpdateJobRequest::setRolloutConfig(const std::string& rolloutConfig)
{
	rolloutConfig_ = rolloutConfig;
	setParameter("RolloutConfig", rolloutConfig);
}

std::string UpdateJobRequest::getJobId()const
{
	return jobId_;
}

void UpdateJobRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string UpdateJobRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateJobRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string UpdateJobRequest::getTimeoutConfig()const
{
	return timeoutConfig_;
}

void UpdateJobRequest::setTimeoutConfig(const std::string& timeoutConfig)
{
	timeoutConfig_ = timeoutConfig;
	setParameter("TimeoutConfig", timeoutConfig);
}

std::string UpdateJobRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateJobRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateJobRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateJobRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

