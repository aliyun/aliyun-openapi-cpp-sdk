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

#include <alibabacloud/retailcloud/model/ScaleAppRequest.h>

using AlibabaCloud::Retailcloud::Model::ScaleAppRequest;

ScaleAppRequest::ScaleAppRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "ScaleApp")
{
	setMethod(HttpRequest::Method::Post);
}

ScaleAppRequest::~ScaleAppRequest()
{}

int ScaleAppRequest::getTotalPartitions()const
{
	return totalPartitions_;
}

void ScaleAppRequest::setTotalPartitions(int totalPartitions)
{
	totalPartitions_ = totalPartitions;
	setParameter("TotalPartitions", std::to_string(totalPartitions));
}

int ScaleAppRequest::getReplicas()const
{
	return replicas_;
}

void ScaleAppRequest::setReplicas(int replicas)
{
	replicas_ = replicas;
	setParameter("Replicas", std::to_string(replicas));
}

long ScaleAppRequest::getEnvId()const
{
	return envId_;
}

void ScaleAppRequest::setEnvId(long envId)
{
	envId_ = envId;
	setParameter("EnvId", std::to_string(envId));
}

