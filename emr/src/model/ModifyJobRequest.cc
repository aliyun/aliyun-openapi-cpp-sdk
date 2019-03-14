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

#include <alibabacloud/emr/model/ModifyJobRequest.h>

using AlibabaCloud::Emr::Model::ModifyJobRequest;

ModifyJobRequest::ModifyJobRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyJob")
{}

ModifyJobRequest::~ModifyJobRequest()
{}

std::string ModifyJobRequest::getRunParameter()const
{
	return runParameter_;
}

void ModifyJobRequest::setRunParameter(const std::string& runParameter)
{
	runParameter_ = runParameter;
	setParameter("RunParameter", runParameter);
}

int ModifyJobRequest::getRetryInterval()const
{
	return retryInterval_;
}

void ModifyJobRequest::setRetryInterval(int retryInterval)
{
	retryInterval_ = retryInterval;
	setParameter("RetryInterval", std::to_string(retryInterval));
}

long ModifyJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyJobRequest::getRegionId()const
{
	return regionId_;
}

void ModifyJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyJobRequest::getName()const
{
	return name_;
}

void ModifyJobRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ModifyJobRequest::getId()const
{
	return id_;
}

void ModifyJobRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string ModifyJobRequest::getType()const
{
	return type_;
}

void ModifyJobRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

int ModifyJobRequest::getMaxRetry()const
{
	return maxRetry_;
}

void ModifyJobRequest::setMaxRetry(int maxRetry)
{
	maxRetry_ = maxRetry;
	setParameter("MaxRetry", std::to_string(maxRetry));
}

std::string ModifyJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyJobRequest::getFailAct()const
{
	return failAct_;
}

void ModifyJobRequest::setFailAct(const std::string& failAct)
{
	failAct_ = failAct;
	setParameter("FailAct", failAct);
}

