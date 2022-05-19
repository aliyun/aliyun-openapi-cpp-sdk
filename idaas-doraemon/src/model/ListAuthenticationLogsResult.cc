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

#include <alibabacloud/idaas-doraemon/model/ListAuthenticationLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idaas_doraemon;
using namespace AlibabaCloud::Idaas_doraemon::Model;

ListAuthenticationLogsResult::ListAuthenticationLogsResult() :
	ServiceResult()
{}

ListAuthenticationLogsResult::ListAuthenticationLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAuthenticationLogsResult::~ListAuthenticationLogsResult()
{}

void ListAuthenticationLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAuthenticationLogContentNode = value["AuthenticationLogContent"]["authenticationLogContentItem"];
	for (auto valueAuthenticationLogContentauthenticationLogContentItem : allAuthenticationLogContentNode)
	{
		AuthenticationLogContentItem authenticationLogContentObject;
		if(!valueAuthenticationLogContentauthenticationLogContentItem["TenantId"].isNull())
			authenticationLogContentObject.tenantId = valueAuthenticationLogContentauthenticationLogContentItem["TenantId"].asString();
		if(!valueAuthenticationLogContentauthenticationLogContentItem["AliUid"].isNull())
			authenticationLogContentObject.aliUid = valueAuthenticationLogContentauthenticationLogContentItem["AliUid"].asString();
		if(!valueAuthenticationLogContentauthenticationLogContentItem["ApplicationUuid"].isNull())
			authenticationLogContentObject.applicationUuid = valueAuthenticationLogContentauthenticationLogContentItem["ApplicationUuid"].asString();
		if(!valueAuthenticationLogContentauthenticationLogContentItem["ApplicationExternalId"].isNull())
			authenticationLogContentObject.applicationExternalId = valueAuthenticationLogContentauthenticationLogContentItem["ApplicationExternalId"].asString();
		if(!valueAuthenticationLogContentauthenticationLogContentItem["UserId"].isNull())
			authenticationLogContentObject.userId = valueAuthenticationLogContentauthenticationLogContentItem["UserId"].asString();
		if(!valueAuthenticationLogContentauthenticationLogContentItem["AuthenticatorUuid"].isNull())
			authenticationLogContentObject.authenticatorUuid = valueAuthenticationLogContentauthenticationLogContentItem["AuthenticatorUuid"].asString();
		if(!valueAuthenticationLogContentauthenticationLogContentItem["AuthenticatorName"].isNull())
			authenticationLogContentObject.authenticatorName = valueAuthenticationLogContentauthenticationLogContentItem["AuthenticatorName"].asString();
		if(!valueAuthenticationLogContentauthenticationLogContentItem["CredentialId"].isNull())
			authenticationLogContentObject.credentialId = valueAuthenticationLogContentauthenticationLogContentItem["CredentialId"].asString();
		if(!valueAuthenticationLogContentauthenticationLogContentItem["AuthenticatorType"].isNull())
			authenticationLogContentObject.authenticatorType = valueAuthenticationLogContentauthenticationLogContentItem["AuthenticatorType"].asString();
		if(!valueAuthenticationLogContentauthenticationLogContentItem["AuthenticationAction"].isNull())
			authenticationLogContentObject.authenticationAction = valueAuthenticationLogContentauthenticationLogContentItem["AuthenticationAction"].asString();
		if(!valueAuthenticationLogContentauthenticationLogContentItem["ChallengeBase64"].isNull())
			authenticationLogContentObject.challengeBase64 = valueAuthenticationLogContentauthenticationLogContentItem["ChallengeBase64"].asString();
		if(!valueAuthenticationLogContentauthenticationLogContentItem["AuthenticationTime"].isNull())
			authenticationLogContentObject.authenticationTime = std::stol(valueAuthenticationLogContentauthenticationLogContentItem["AuthenticationTime"].asString());
		if(!valueAuthenticationLogContentauthenticationLogContentItem["UserAgent"].isNull())
			authenticationLogContentObject.userAgent = valueAuthenticationLogContentauthenticationLogContentItem["UserAgent"].asString();
		if(!valueAuthenticationLogContentauthenticationLogContentItem["UserSourceIp"].isNull())
			authenticationLogContentObject.userSourceIp = valueAuthenticationLogContentauthenticationLogContentItem["UserSourceIp"].asString();
		if(!valueAuthenticationLogContentauthenticationLogContentItem["RawAuthenticationContext"].isNull())
			authenticationLogContentObject.rawAuthenticationContext = valueAuthenticationLogContentauthenticationLogContentItem["RawAuthenticationContext"].asString();
		if(!valueAuthenticationLogContentauthenticationLogContentItem["VerifyResult"].isNull())
			authenticationLogContentObject.verifyResult = valueAuthenticationLogContentauthenticationLogContentItem["VerifyResult"].asString() == "true";
		if(!valueAuthenticationLogContentauthenticationLogContentItem["ErrorCode"].isNull())
			authenticationLogContentObject.errorCode = valueAuthenticationLogContentauthenticationLogContentItem["ErrorCode"].asString();
		if(!valueAuthenticationLogContentauthenticationLogContentItem["ErrorMessage"].isNull())
			authenticationLogContentObject.errorMessage = valueAuthenticationLogContentauthenticationLogContentItem["ErrorMessage"].asString();
		if(!valueAuthenticationLogContentauthenticationLogContentItem["LogTag"].isNull())
			authenticationLogContentObject.logTag = valueAuthenticationLogContentauthenticationLogContentItem["LogTag"].asString();
		if(!valueAuthenticationLogContentauthenticationLogContentItem["LogParams"].isNull())
			authenticationLogContentObject.logParams = valueAuthenticationLogContentauthenticationLogContentItem["LogParams"].asString();
		authenticationLogContent_.push_back(authenticationLogContentObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long ListAuthenticationLogsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListAuthenticationLogsResult::AuthenticationLogContentItem> ListAuthenticationLogsResult::getAuthenticationLogContent()const
{
	return authenticationLogContent_;
}

long ListAuthenticationLogsResult::getPageSize()const
{
	return pageSize_;
}

long ListAuthenticationLogsResult::getPageNumber()const
{
	return pageNumber_;
}

