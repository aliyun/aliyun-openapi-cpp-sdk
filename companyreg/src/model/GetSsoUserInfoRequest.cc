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

#include <alibabacloud/companyreg/model/GetSsoUserInfoRequest.h>

using AlibabaCloud::Companyreg::Model::GetSsoUserInfoRequest;

GetSsoUserInfoRequest::GetSsoUserInfoRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "GetSsoUserInfo")
{
	setMethod(HttpRequest::Method::Get);
}

GetSsoUserInfoRequest::~GetSsoUserInfoRequest()
{}

std::string GetSsoUserInfoRequest::getOpsAppKey()const
{
	return opsAppKey_;
}

void GetSsoUserInfoRequest::setOpsAppKey(const std::string& opsAppKey)
{
	opsAppKey_ = opsAppKey;
	setParameter("OpsAppKey", opsAppKey);
}

std::string GetSsoUserInfoRequest::getToken()const
{
	return token_;
}

void GetSsoUserInfoRequest::setToken(const std::string& token)
{
	token_ = token;
	setParameter("Token", token);
}

