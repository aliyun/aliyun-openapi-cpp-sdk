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

#include <alibabacloud/mts/model/SubmitIProductionJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitIProductionJobRequest;

SubmitIProductionJobRequest::SubmitIProductionJobRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitIProductionJob")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitIProductionJobRequest::~SubmitIProductionJobRequest()
{}

long SubmitIProductionJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitIProductionJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SubmitIProductionJobRequest::getJobParams()const
{
	return jobParams_;
}

void SubmitIProductionJobRequest::setJobParams(const std::string& jobParams)
{
	jobParams_ = jobParams;
	setParameter("JobParams", jobParams);
}

std::string SubmitIProductionJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitIProductionJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SubmitIProductionJobRequest::getUserData()const
{
	return userData_;
}

void SubmitIProductionJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

std::string SubmitIProductionJobRequest::getFunctionName()const
{
	return functionName_;
}

void SubmitIProductionJobRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setParameter("FunctionName", functionName);
}

std::string SubmitIProductionJobRequest::getNotifyUrl()const
{
	return notifyUrl_;
}

void SubmitIProductionJobRequest::setNotifyUrl(const std::string& notifyUrl)
{
	notifyUrl_ = notifyUrl;
	setParameter("NotifyUrl", notifyUrl);
}

std::string SubmitIProductionJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitIProductionJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitIProductionJobRequest::getModelId()const
{
	return modelId_;
}

void SubmitIProductionJobRequest::setModelId(const std::string& modelId)
{
	modelId_ = modelId;
	setParameter("ModelId", modelId);
}

std::string SubmitIProductionJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitIProductionJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long SubmitIProductionJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitIProductionJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SubmitIProductionJobRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitIProductionJobRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setParameter("PipelineId", pipelineId);
}

std::string SubmitIProductionJobRequest::getScheduleParams()const
{
	return scheduleParams_;
}

void SubmitIProductionJobRequest::setScheduleParams(const std::string& scheduleParams)
{
	scheduleParams_ = scheduleParams;
	setParameter("ScheduleParams", scheduleParams);
}

