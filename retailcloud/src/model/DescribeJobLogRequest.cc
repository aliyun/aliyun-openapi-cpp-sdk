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

#include <alibabacloud/retailcloud/model/DescribeJobLogRequest.h>

using AlibabaCloud::Retailcloud::Model::DescribeJobLogRequest;

DescribeJobLogRequest::DescribeJobLogRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "DescribeJobLog")
{
	setMethod(HttpRequest::Method::Get);
}

DescribeJobLogRequest::~DescribeJobLogRequest()
{}

long DescribeJobLogRequest::getAppId()const
{
	return appId_;
}

void DescribeJobLogRequest::setAppId(long appId)
{
	appId_ = appId;
	setParameter("AppId", std::to_string(appId));
}

std::string DescribeJobLogRequest::getPodName()const
{
	return podName_;
}

void DescribeJobLogRequest::setPodName(const std::string& podName)
{
	podName_ = podName;
	setParameter("PodName", podName);
}

long DescribeJobLogRequest::getEnvId()const
{
	return envId_;
}

void DescribeJobLogRequest::setEnvId(long envId)
{
	envId_ = envId;
	setParameter("EnvId", std::to_string(envId));
}

