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

#include <alibabacloud/push/model/QueryDevicesByAccountRequest.h>

using AlibabaCloud::Push::Model::QueryDevicesByAccountRequest;

QueryDevicesByAccountRequest::QueryDevicesByAccountRequest() :
	RpcServiceRequest("push", "2016-08-01", "QueryDevicesByAccount")
{}

QueryDevicesByAccountRequest::~QueryDevicesByAccountRequest()
{}

long QueryDevicesByAccountRequest::getAppKey()const
{
	return appKey_;
}

void QueryDevicesByAccountRequest::setAppKey(long appKey)
{
	appKey_ = appKey;
	setCoreParameter("AppKey", std::to_string(appKey));
}

std::string QueryDevicesByAccountRequest::getAccount()const
{
	return account_;
}

void QueryDevicesByAccountRequest::setAccount(const std::string& account)
{
	account_ = account;
	setCoreParameter("Account", account);
}

std::string QueryDevicesByAccountRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryDevicesByAccountRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

