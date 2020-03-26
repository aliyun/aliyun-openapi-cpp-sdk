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

#include <alibabacloud/emr/model/CreateJobRequest.h>

using AlibabaCloud::Emr::Model::CreateJobRequest;

CreateJobRequest::CreateJobRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateJob")
{
	setMethod(HttpRequest::Method::Post);
}

CreateJobRequest::~CreateJobRequest()
{}

long CreateJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
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

std::string CreateJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateJobRequest::getFailAct()const
{
	return failAct_;
}

void CreateJobRequest::setFailAct(const std::string& failAct)
{
	failAct_ = failAct;
	setParameter("FailAct", failAct);
}

std::string CreateJobRequest::getRunParameter()const
{
	return runParameter_;
}

void CreateJobRequest::setRunParameter(const std::string& runParameter)
{
	runParameter_ = runParameter;
	setParameter("RunParameter", runParameter);
}

int CreateJobRequest::getRetryInterval()const
{
	return retryInterval_;
}

void CreateJobRequest::setRetryInterval(int retryInterval)
{
	retryInterval_ = retryInterval;
	setParameter("RetryInterval", std::to_string(retryInterval));
}

std::string CreateJobRequest::getRegionId()const
{
	return regionId_;
}

void CreateJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateJobRequest::getName()const
{
	return name_;
}

void CreateJobRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int CreateJobRequest::getMaxRetry()const
{
	return maxRetry_;
}

void CreateJobRequest::setMaxRetry(int maxRetry)
{
	maxRetry_ = maxRetry;
	setParameter("MaxRetry", std::to_string(maxRetry));
}

