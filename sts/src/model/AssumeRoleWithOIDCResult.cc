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

#include <alibabacloud/sts/model/AssumeRoleWithOIDCResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sts;
using namespace AlibabaCloud::Sts::Model;

AssumeRoleWithOIDCResult::AssumeRoleWithOIDCResult() :
	ServiceResult()
{}

AssumeRoleWithOIDCResult::AssumeRoleWithOIDCResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AssumeRoleWithOIDCResult::~AssumeRoleWithOIDCResult()
{}

void AssumeRoleWithOIDCResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto oIDCTokenInfoNode = value["OIDCTokenInfo"];
	if(!oIDCTokenInfoNode["Subject"].isNull())
		oIDCTokenInfo_.subject = oIDCTokenInfoNode["Subject"].asString();
	if(!oIDCTokenInfoNode["Issuer"].isNull())
		oIDCTokenInfo_.issuer = oIDCTokenInfoNode["Issuer"].asString();
	if(!oIDCTokenInfoNode["ClientIds"].isNull())
		oIDCTokenInfo_.clientIds = oIDCTokenInfoNode["ClientIds"].asString();
	if(!oIDCTokenInfoNode["ExpirationTime"].isNull())
		oIDCTokenInfo_.expirationTime = oIDCTokenInfoNode["ExpirationTime"].asString();
	if(!oIDCTokenInfoNode["IssuanceTime"].isNull())
		oIDCTokenInfo_.issuanceTime = oIDCTokenInfoNode["IssuanceTime"].asString();
	if(!oIDCTokenInfoNode["VerificationInfo"].isNull())
		oIDCTokenInfo_.verificationInfo = oIDCTokenInfoNode["VerificationInfo"].asString();
	auto assumedRoleUserNode = value["AssumedRoleUser"];
	if(!assumedRoleUserNode["AssumedRoleId"].isNull())
		assumedRoleUser_.assumedRoleId = assumedRoleUserNode["AssumedRoleId"].asString();
	if(!assumedRoleUserNode["Arn"].isNull())
		assumedRoleUser_.arn = assumedRoleUserNode["Arn"].asString();
	auto credentialsNode = value["Credentials"];
	if(!credentialsNode["SecurityToken"].isNull())
		credentials_.securityToken = credentialsNode["SecurityToken"].asString();
	if(!credentialsNode["Expiration"].isNull())
		credentials_.expiration = credentialsNode["Expiration"].asString();
	if(!credentialsNode["AccessKeySecret"].isNull())
		credentials_.accessKeySecret = credentialsNode["AccessKeySecret"].asString();
	if(!credentialsNode["AccessKeyId"].isNull())
		credentials_.accessKeyId = credentialsNode["AccessKeyId"].asString();
	if(!value["SourceIdentity"].isNull())
		sourceIdentity_ = value["SourceIdentity"].asString();

}

std::string AssumeRoleWithOIDCResult::getSourceIdentity()const
{
	return sourceIdentity_;
}

AssumeRoleWithOIDCResult::OIDCTokenInfo AssumeRoleWithOIDCResult::getOIDCTokenInfo()const
{
	return oIDCTokenInfo_;
}

AssumeRoleWithOIDCResult::AssumedRoleUser AssumeRoleWithOIDCResult::getAssumedRoleUser()const
{
	return assumedRoleUser_;
}

AssumeRoleWithOIDCResult::Credentials AssumeRoleWithOIDCResult::getCredentials()const
{
	return credentials_;
}

