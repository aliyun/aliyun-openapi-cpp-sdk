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

#include <alibabacloud/idaas-doraemon/model/VerifyUserAuthenticationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idaas_doraemon;
using namespace AlibabaCloud::Idaas_doraemon::Model;

VerifyUserAuthenticationResult::VerifyUserAuthenticationResult() :
	ServiceResult()
{}

VerifyUserAuthenticationResult::VerifyUserAuthenticationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

VerifyUserAuthenticationResult::~VerifyUserAuthenticationResult()
{}

void VerifyUserAuthenticationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto authenticateResultInfoNode = value["AuthenticateResultInfo"];
	if(!authenticateResultInfoNode["UserId"].isNull())
		authenticateResultInfo_.userId = authenticateResultInfoNode["UserId"].asString();
	if(!authenticateResultInfoNode["CredentialId"].isNull())
		authenticateResultInfo_.credentialId = authenticateResultInfoNode["CredentialId"].asString();
	if(!authenticateResultInfoNode["BindHashBase64"].isNull())
		authenticateResultInfo_.bindHashBase64 = authenticateResultInfoNode["BindHashBase64"].asString();
	if(!value["VerifyResult"].isNull())
		verifyResult_ = value["VerifyResult"].asString() == "true";
	if(!value["EtasSDKString"].isNull())
		etasSDKString_ = value["EtasSDKString"].asString();
	if(!value["IdToken"].isNull())
		idToken_ = value["IdToken"].asString();

}

std::string VerifyUserAuthenticationResult::getIdToken()const
{
	return idToken_;
}

VerifyUserAuthenticationResult::AuthenticateResultInfo VerifyUserAuthenticationResult::getAuthenticateResultInfo()const
{
	return authenticateResultInfo_;
}

std::string VerifyUserAuthenticationResult::getEtasSDKString()const
{
	return etasSDKString_;
}

bool VerifyUserAuthenticationResult::getVerifyResult()const
{
	return verifyResult_;
}

