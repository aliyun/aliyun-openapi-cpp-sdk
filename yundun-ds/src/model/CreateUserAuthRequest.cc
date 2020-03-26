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

#include <alibabacloud/yundun-ds/model/CreateUserAuthRequest.h>

using AlibabaCloud::Yundun_ds::Model::CreateUserAuthRequest;

CreateUserAuthRequest::CreateUserAuthRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "CreateUserAuth")
{
	setMethod(HttpRequest::Method::Post);
}

CreateUserAuthRequest::~CreateUserAuthRequest()
{}

std::string CreateUserAuthRequest::getAccessKeySecret()const
{
	return accessKeySecret_;
}

void CreateUserAuthRequest::setAccessKeySecret(const std::string& accessKeySecret)
{
	accessKeySecret_ = accessKeySecret;
	setParameter("AccessKeySecret", accessKeySecret);
}

long CreateUserAuthRequest::getAccountId()const
{
	return accountId_;
}

void CreateUserAuthRequest::setAccountId(long accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", std::to_string(accountId));
}

std::string CreateUserAuthRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateUserAuthRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateUserAuthRequest::getAccessKey()const
{
	return accessKey_;
}

void CreateUserAuthRequest::setAccessKey(const std::string& accessKey)
{
	accessKey_ = accessKey;
	setParameter("AccessKey", accessKey);
}

std::string CreateUserAuthRequest::getLang()const
{
	return lang_;
}

void CreateUserAuthRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

