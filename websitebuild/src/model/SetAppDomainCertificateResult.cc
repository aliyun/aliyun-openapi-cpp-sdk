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

#include <alibabacloud/websitebuild/model/SetAppDomainCertificateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::WebsiteBuild;
using namespace AlibabaCloud::WebsiteBuild::Model;

SetAppDomainCertificateResult::SetAppDomainCertificateResult() :
	ServiceResult()
{}

SetAppDomainCertificateResult::SetAppDomainCertificateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SetAppDomainCertificateResult::~SetAppDomainCertificateResult()
{}

void SetAppDomainCertificateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto moduleNode = value["Module"];
	if(!moduleNode["Success"].isNull())
		module_.success = moduleNode["Success"].asString() == "true";
	auto allErrorArgs = value["ErrorArgs"]["ErrorArg"];
	for (const auto &item : allErrorArgs)
		errorArgs_.push_back(item.asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["Synchro"].isNull())
		synchro_ = value["Synchro"].asString() == "true";
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();
	if(!value["RootErrorMsg"].isNull())
		rootErrorMsg_ = value["RootErrorMsg"].asString();
	if(!value["RootErrorCode"].isNull())
		rootErrorCode_ = value["RootErrorCode"].asString();
	if(!value["AllowRetry"].isNull())
		allowRetry_ = value["AllowRetry"].asString() == "true";
	if(!value["AppName"].isNull())
		appName_ = value["AppName"].asString();

}

std::string SetAppDomainCertificateResult::getRootErrorMsg()const
{
	return rootErrorMsg_;
}

std::string SetAppDomainCertificateResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

bool SetAppDomainCertificateResult::getAllowRetry()const
{
	return allowRetry_;
}

bool SetAppDomainCertificateResult::getSynchro()const
{
	return synchro_;
}

std::vector<std::string> SetAppDomainCertificateResult::getErrorArgs()const
{
	return errorArgs_;
}

std::string SetAppDomainCertificateResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string SetAppDomainCertificateResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

SetAppDomainCertificateResult::Module SetAppDomainCertificateResult::getModule()const
{
	return module_;
}

std::string SetAppDomainCertificateResult::getRootErrorCode()const
{
	return rootErrorCode_;
}

std::string SetAppDomainCertificateResult::getAppName()const
{
	return appName_;
}

