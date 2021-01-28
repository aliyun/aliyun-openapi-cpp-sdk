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

#include <alibabacloud/retailcloud/model/AllocatePodConfigRequest.h>

using AlibabaCloud::Retailcloud::Model::AllocatePodConfigRequest;

AllocatePodConfigRequest::AllocatePodConfigRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "AllocatePodConfig")
{
	setMethod(HttpRequest::Method::Post);
}

AllocatePodConfigRequest::~AllocatePodConfigRequest()
{}

std::string AllocatePodConfigRequest::getRequestId()const
{
	return requestId_;
}

void AllocatePodConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

long AllocatePodConfigRequest::getAppId()const
{
	return appId_;
}

void AllocatePodConfigRequest::setAppId(long appId)
{
	appId_ = appId;
	setParameter("AppId", std::to_string(appId));
}

long AllocatePodConfigRequest::getEnvId()const
{
	return envId_;
}

void AllocatePodConfigRequest::setEnvId(long envId)
{
	envId_ = envId;
	setParameter("EnvId", std::to_string(envId));
}

