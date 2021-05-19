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

#include <alibabacloud/scsp/model/GetAuthInfoRequest.h>

using AlibabaCloud::Scsp::Model::GetAuthInfoRequest;

GetAuthInfoRequest::GetAuthInfoRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "GetAuthInfo")
{
	setMethod(HttpRequest::Method::Post);
}

GetAuthInfoRequest::~GetAuthInfoRequest()
{}

std::string GetAuthInfoRequest::getInstanceId()const
{
	return instanceId_;
}

void GetAuthInfoRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string GetAuthInfoRequest::getForeignId()const
{
	return foreignId_;
}

void GetAuthInfoRequest::setForeignId(const std::string& foreignId)
{
	foreignId_ = foreignId;
	setParameter("ForeignId", foreignId);
}

std::string GetAuthInfoRequest::getAppKey()const
{
	return appKey_;
}

void GetAuthInfoRequest::setAppKey(const std::string& appKey)
{
	appKey_ = appKey;
	setParameter("AppKey", appKey);
}

