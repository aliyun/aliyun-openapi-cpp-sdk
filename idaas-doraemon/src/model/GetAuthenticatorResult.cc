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

#include <alibabacloud/idaas-doraemon/model/GetAuthenticatorResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idaas_doraemon;
using namespace AlibabaCloud::Idaas_doraemon::Model;

GetAuthenticatorResult::GetAuthenticatorResult() :
	ServiceResult()
{}

GetAuthenticatorResult::GetAuthenticatorResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAuthenticatorResult::~GetAuthenticatorResult()
{}

void GetAuthenticatorResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto authenticatorNode = value["Authenticator"];
	if(!authenticatorNode["AuthenticatorUuid"].isNull())
		authenticator_.authenticatorUuid = authenticatorNode["AuthenticatorUuid"].asString();
	if(!authenticatorNode["CredentialId"].isNull())
		authenticator_.credentialId = authenticatorNode["CredentialId"].asString();
	if(!authenticatorNode["Type"].isNull())
		authenticator_.type = authenticatorNode["Type"].asString();
	if(!authenticatorNode["AuthenticatorName"].isNull())
		authenticator_.authenticatorName = authenticatorNode["AuthenticatorName"].asString();
	if(!authenticatorNode["RegisterTime"].isNull())
		authenticator_.registerTime = std::stol(authenticatorNode["RegisterTime"].asString());
	if(!authenticatorNode["LastVerifyTime"].isNull())
		authenticator_.lastVerifyTime = std::stol(authenticatorNode["LastVerifyTime"].asString());
	if(!authenticatorNode["RegisterSourceIp"].isNull())
		authenticator_.registerSourceIp = authenticatorNode["RegisterSourceIp"].asString();
	if(!authenticatorNode["LastVerifySourceIp"].isNull())
		authenticator_.lastVerifySourceIp = authenticatorNode["LastVerifySourceIp"].asString();
	if(!authenticatorNode["LastVerifyUserAgent"].isNull())
		authenticator_.lastVerifyUserAgent = authenticatorNode["LastVerifyUserAgent"].asString();
	if(!authenticatorNode["CustomAuthenticator"].isNull())
		authenticator_.customAuthenticator = authenticatorNode["CustomAuthenticator"].asString();

}

GetAuthenticatorResult::Authenticator GetAuthenticatorResult::getAuthenticator()const
{
	return authenticator_;
}

