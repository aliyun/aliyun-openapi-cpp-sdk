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

#include <alibabacloud/websitebuild/model/GetUserTmpIdentityForPartnerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::WebsiteBuild;
using namespace AlibabaCloud::WebsiteBuild::Model;

GetUserTmpIdentityForPartnerResult::GetUserTmpIdentityForPartnerResult() :
	ServiceResult()
{}

GetUserTmpIdentityForPartnerResult::GetUserTmpIdentityForPartnerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserTmpIdentityForPartnerResult::~GetUserTmpIdentityForPartnerResult()
{}

void GetUserTmpIdentityForPartnerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["HasCustomRoleAuth"].isNull())
		data_.hasCustomRoleAuth = dataNode["HasCustomRoleAuth"].asString() == "true";
	auto credentialsNode = dataNode["Credentials"];
	if(!credentialsNode["EncryptedAccessKeyId"].isNull())
		data_.credentials.encryptedAccessKeyId = credentialsNode["EncryptedAccessKeyId"].asString();
	if(!credentialsNode["EncryptedAccessKeySecret"].isNull())
		data_.credentials.encryptedAccessKeySecret = credentialsNode["EncryptedAccessKeySecret"].asString();
	if(!credentialsNode["EncryptedSecurityToken"].isNull())
		data_.credentials.encryptedSecurityToken = credentialsNode["EncryptedSecurityToken"].asString();
	if(!credentialsNode["Expiration"].isNull())
		data_.credentials.expiration = credentialsNode["Expiration"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string GetUserTmpIdentityForPartnerResult::getErrorMsg()const
{
	return errorMsg_;
}

GetUserTmpIdentityForPartnerResult::Data GetUserTmpIdentityForPartnerResult::getData()const
{
	return data_;
}

std::string GetUserTmpIdentityForPartnerResult::getErrorCode()const
{
	return errorCode_;
}

bool GetUserTmpIdentityForPartnerResult::getSuccess()const
{
	return success_;
}

