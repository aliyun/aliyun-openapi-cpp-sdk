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

#include <alibabacloud/emr/model/RetryOperationRequest.h>

using AlibabaCloud::Emr::Model::RetryOperationRequest;

RetryOperationRequest::RetryOperationRequest() :
	RpcServiceRequest("emr", "2016-04-08", "RetryOperation")
{
	setMethod(HttpRequest::Method::Post);
}

RetryOperationRequest::~RetryOperationRequest()
{}

long RetryOperationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RetryOperationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RetryOperationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RetryOperationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RetryOperationRequest::getRegionId()const
{
	return regionId_;
}

void RetryOperationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string RetryOperationRequest::getOperationId()const
{
	return operationId_;
}

void RetryOperationRequest::setOperationId(const std::string& operationId)
{
	operationId_ = operationId;
	setParameter("OperationId", operationId);
}

