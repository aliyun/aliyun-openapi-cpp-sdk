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

#include <alibabacloud/websitebuild/model/RefreshAppInstanceTicketResult.h>
#include <json/json.h>

using namespace AlibabaCloud::WebsiteBuild;
using namespace AlibabaCloud::WebsiteBuild::Model;

RefreshAppInstanceTicketResult::RefreshAppInstanceTicketResult() :
	ServiceResult()
{}

RefreshAppInstanceTicketResult::RefreshAppInstanceTicketResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RefreshAppInstanceTicketResult::~RefreshAppInstanceTicketResult()
{}

void RefreshAppInstanceTicketResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto moduleNode = value["Module"];
	if(!moduleNode["Uuid"].isNull())
		module_.uuid = moduleNode["Uuid"].asString();
	if(!moduleNode["Bid"].isNull())
		module_.bid = moduleNode["Bid"].asString();
	if(!moduleNode["ParentPk"].isNull())
		module_.parentPk = moduleNode["ParentPk"].asString();
	if(!moduleNode["AliyunPk"].isNull())
		module_.aliyunPk = moduleNode["AliyunPk"].asString();
	if(!moduleNode["Attributes"].isNull())
		module_.attributes = moduleNode["Attributes"].asString();
	if(!moduleNode["AuthorizationGrantType"].isNull())
		module_.authorizationGrantType = moduleNode["AuthorizationGrantType"].asString();
	if(!moduleNode["AccessTokenValue"].isNull())
		module_.accessTokenValue = moduleNode["AccessTokenValue"].asString();
	if(!moduleNode["AccessTokenIssuedAt"].isNull())
		module_.accessTokenIssuedAt = moduleNode["AccessTokenIssuedAt"].asString();
	if(!moduleNode["AccessTokenExpiresAt"].isNull())
		module_.accessTokenExpiresAt = moduleNode["AccessTokenExpiresAt"].asString();
	if(!moduleNode["RefreshTokenValue"].isNull())
		module_.refreshTokenValue = moduleNode["RefreshTokenValue"].asString();
	if(!moduleNode["RefreshTokenIssuedAt"].isNull())
		module_.refreshTokenIssuedAt = moduleNode["RefreshTokenIssuedAt"].asString();
	if(!moduleNode["RefreshTokenExpiresAt"].isNull())
		module_.refreshTokenExpiresAt = moduleNode["RefreshTokenExpiresAt"].asString();
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

std::string RefreshAppInstanceTicketResult::getRootErrorMsg()const
{
	return rootErrorMsg_;
}

std::string RefreshAppInstanceTicketResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

bool RefreshAppInstanceTicketResult::getAllowRetry()const
{
	return allowRetry_;
}

bool RefreshAppInstanceTicketResult::getSynchro()const
{
	return synchro_;
}

std::vector<std::string> RefreshAppInstanceTicketResult::getErrorArgs()const
{
	return errorArgs_;
}

std::string RefreshAppInstanceTicketResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string RefreshAppInstanceTicketResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

RefreshAppInstanceTicketResult::Module RefreshAppInstanceTicketResult::getModule()const
{
	return module_;
}

std::string RefreshAppInstanceTicketResult::getRootErrorCode()const
{
	return rootErrorCode_;
}

std::string RefreshAppInstanceTicketResult::getAppName()const
{
	return appName_;
}

