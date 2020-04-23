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

#include <alibabacloud/onsmqtt/model/ApplyTokenRequest.h>

using AlibabaCloud::OnsMqtt::Model::ApplyTokenRequest;

ApplyTokenRequest::ApplyTokenRequest() :
	RpcServiceRequest("onsmqtt", "2020-04-20", "ApplyToken")
{
	setMethod(HttpRequest::Method::Post);
}

ApplyTokenRequest::~ApplyTokenRequest()
{}

long ApplyTokenRequest::getExpireTime()const
{
	return expireTime_;
}

void ApplyTokenRequest::setExpireTime(long expireTime)
{
	expireTime_ = expireTime;
	setParameter("ExpireTime", std::to_string(expireTime));
}

std::string ApplyTokenRequest::getResources()const
{
	return resources_;
}

void ApplyTokenRequest::setResources(const std::string& resources)
{
	resources_ = resources;
	setParameter("Resources", resources);
}

std::string ApplyTokenRequest::getInstanceId()const
{
	return instanceId_;
}

void ApplyTokenRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ApplyTokenRequest::getActions()const
{
	return actions_;
}

void ApplyTokenRequest::setActions(const std::string& actions)
{
	actions_ = actions;
	setParameter("Actions", actions);
}

