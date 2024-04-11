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

#include <alibabacloud/cams/model/IsvGetAppIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

IsvGetAppIdResult::IsvGetAppIdResult() :
	ServiceResult()
{}

IsvGetAppIdResult::IsvGetAppIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

IsvGetAppIdResult::~IsvGetAppIdResult()
{}

void IsvGetAppIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["AppId"].isNull())
		appId_ = value["AppId"].asString();
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();
	if(!value["ConfigId"].isNull())
		configId_ = value["ConfigId"].asString();

}

std::string IsvGetAppIdResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

std::string IsvGetAppIdResult::getMessage()const
{
	return message_;
}

std::string IsvGetAppIdResult::getAppId()const
{
	return appId_;
}

std::string IsvGetAppIdResult::getConfigId()const
{
	return configId_;
}

std::string IsvGetAppIdResult::getCode()const
{
	return code_;
}

