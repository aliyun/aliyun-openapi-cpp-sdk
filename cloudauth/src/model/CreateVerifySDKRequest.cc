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

#include <alibabacloud/cloudauth/model/CreateVerifySDKRequest.h>

using AlibabaCloud::Cloudauth::Model::CreateVerifySDKRequest;

CreateVerifySDKRequest::CreateVerifySDKRequest() :
	RpcServiceRequest("cloudauth", "2018-09-16", "CreateVerifySDK")
{}

CreateVerifySDKRequest::~CreateVerifySDKRequest()
{}

std::string CreateVerifySDKRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateVerifySDKRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string CreateVerifySDKRequest::getAppUrl()const
{
	return appUrl_;
}

void CreateVerifySDKRequest::setAppUrl(const std::string& appUrl)
{
	appUrl_ = appUrl;
	setCoreParameter("AppUrl", appUrl);
}

std::string CreateVerifySDKRequest::getLang()const
{
	return lang_;
}

void CreateVerifySDKRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string CreateVerifySDKRequest::getPlatform()const
{
	return platform_;
}

void CreateVerifySDKRequest::setPlatform(const std::string& platform)
{
	platform_ = platform;
	setCoreParameter("Platform", platform);
}

