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

#include <alibabacloud/ccc/model/RefreshTokenRequest.h>

using AlibabaCloud::CCC::Model::RefreshTokenRequest;

RefreshTokenRequest::RefreshTokenRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "RefreshToken")
{
	setMethod(HttpRequest::Method::Post);
}

RefreshTokenRequest::~RefreshTokenRequest()
{}

std::string RefreshTokenRequest::getInstanceId()const
{
	return instanceId_;
}

void RefreshTokenRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string RefreshTokenRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RefreshTokenRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

