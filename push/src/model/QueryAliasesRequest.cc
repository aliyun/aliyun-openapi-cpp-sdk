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

#include <alibabacloud/push/model/QueryAliasesRequest.h>

using AlibabaCloud::Push::Model::QueryAliasesRequest;

QueryAliasesRequest::QueryAliasesRequest() :
	RpcServiceRequest("push", "2016-08-01", "QueryAliases")
{}

QueryAliasesRequest::~QueryAliasesRequest()
{}

long QueryAliasesRequest::getAppKey()const
{
	return appKey_;
}

void QueryAliasesRequest::setAppKey(long appKey)
{
	appKey_ = appKey;
	setCoreParameter("AppKey", std::to_string(appKey));
}

std::string QueryAliasesRequest::getDeviceId()const
{
	return deviceId_;
}

void QueryAliasesRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setCoreParameter("DeviceId", deviceId);
}

std::string QueryAliasesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryAliasesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

