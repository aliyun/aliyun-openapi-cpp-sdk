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

#include <alibabacloud/retailcloud/model/DescribePodContainerLogListRequest.h>

using AlibabaCloud::Retailcloud::Model::DescribePodContainerLogListRequest;

DescribePodContainerLogListRequest::DescribePodContainerLogListRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "DescribePodContainerLogList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribePodContainerLogListRequest::~DescribePodContainerLogListRequest()
{}

int DescribePodContainerLogListRequest::getLine()const
{
	return line_;
}

void DescribePodContainerLogListRequest::setLine(int line)
{
	line_ = line;
	setParameter("Line", std::to_string(line));
}

long DescribePodContainerLogListRequest::getAppId()const
{
	return appId_;
}

void DescribePodContainerLogListRequest::setAppId(long appId)
{
	appId_ = appId;
	setParameter("AppId", std::to_string(appId));
}

std::string DescribePodContainerLogListRequest::getPodName()const
{
	return podName_;
}

void DescribePodContainerLogListRequest::setPodName(const std::string& podName)
{
	podName_ = podName;
	setParameter("PodName", podName);
}

long DescribePodContainerLogListRequest::getEnvId()const
{
	return envId_;
}

void DescribePodContainerLogListRequest::setEnvId(long envId)
{
	envId_ = envId;
	setParameter("EnvId", std::to_string(envId));
}

