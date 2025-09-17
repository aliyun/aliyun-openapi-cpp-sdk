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

#include <alibabacloud/marketplaceintl/model/NoticeInstanceUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::MarketplaceIntl;
using namespace AlibabaCloud::MarketplaceIntl::Model;

NoticeInstanceUserResult::NoticeInstanceUserResult() :
	ServiceResult()
{}

NoticeInstanceUserResult::NoticeInstanceUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

NoticeInstanceUserResult::~NoticeInstanceUserResult()
{}

void NoticeInstanceUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto accessDeniedDetailNode = value["AccessDeniedDetail"];
	if(!accessDeniedDetailNode["AuthAction"].isNull())
		accessDeniedDetail_.authAction = accessDeniedDetailNode["AuthAction"].asString();
	if(!accessDeniedDetailNode["AuthPrincipalDisplayName"].isNull())
		accessDeniedDetail_.authPrincipalDisplayName = accessDeniedDetailNode["AuthPrincipalDisplayName"].asString();
	if(!accessDeniedDetailNode["AuthPrincipalOwnerId"].isNull())
		accessDeniedDetail_.authPrincipalOwnerId = accessDeniedDetailNode["AuthPrincipalOwnerId"].asString();
	if(!accessDeniedDetailNode["AuthPrincipalType"].isNull())
		accessDeniedDetail_.authPrincipalType = accessDeniedDetailNode["AuthPrincipalType"].asString();
	if(!accessDeniedDetailNode["EncodedDiagnosticMessage"].isNull())
		accessDeniedDetail_.encodedDiagnosticMessage = accessDeniedDetailNode["EncodedDiagnosticMessage"].asString();
	if(!accessDeniedDetailNode["NoPermissionType"].isNull())
		accessDeniedDetail_.noPermissionType = accessDeniedDetailNode["NoPermissionType"].asString();
	if(!accessDeniedDetailNode["PolicyType"].isNull())
		accessDeniedDetail_.policyType = accessDeniedDetailNode["PolicyType"].asString();
	if(!value["Result"].isNull())
		result_ = value["Result"].asString() == "true";
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

NoticeInstanceUserResult::AccessDeniedDetail NoticeInstanceUserResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

std::string NoticeInstanceUserResult::getMessage()const
{
	return message_;
}

std::string NoticeInstanceUserResult::getCode()const
{
	return code_;
}

bool NoticeInstanceUserResult::getSuccess()const
{
	return success_;
}

bool NoticeInstanceUserResult::getResult()const
{
	return result_;
}

