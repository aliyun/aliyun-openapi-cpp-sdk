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

#include <alibabacloud/push/model/UnbindAliasRequest.h>

using AlibabaCloud::Push::Model::UnbindAliasRequest;

UnbindAliasRequest::UnbindAliasRequest() :
	RpcServiceRequest("push", "2016-08-01", "UnbindAlias")
{}

UnbindAliasRequest::~UnbindAliasRequest()
{}

std::string UnbindAliasRequest::getAliasName()const
{
	return aliasName_;
}

void UnbindAliasRequest::setAliasName(const std::string& aliasName)
{
	aliasName_ = aliasName;
	setCoreParameter("AliasName", aliasName);
}

long UnbindAliasRequest::getAppKey()const
{
	return appKey_;
}

void UnbindAliasRequest::setAppKey(long appKey)
{
	appKey_ = appKey;
	setCoreParameter("AppKey", std::to_string(appKey));
}

std::string UnbindAliasRequest::getDeviceId()const
{
	return deviceId_;
}

void UnbindAliasRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setCoreParameter("DeviceId", deviceId);
}

std::string UnbindAliasRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UnbindAliasRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool UnbindAliasRequest::getUnbindAll()const
{
	return unbindAll_;
}

void UnbindAliasRequest::setUnbindAll(bool unbindAll)
{
	unbindAll_ = unbindAll;
	setCoreParameter("UnbindAll", unbindAll ? "true" : "false");
}

