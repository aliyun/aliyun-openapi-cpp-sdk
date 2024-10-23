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

#include <alibabacloud/ims/model/GetApplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ims;
using namespace AlibabaCloud::Ims::Model;

GetApplicationResult::GetApplicationResult() :
	ServiceResult()
{}

GetApplicationResult::GetApplicationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetApplicationResult::~GetApplicationResult()
{}

void GetApplicationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto applicationNode = value["Application"];
	if(!applicationNode["DisplayName"].isNull())
		application_.displayName = applicationNode["DisplayName"].asString();
	if(!applicationNode["AccessTokenValidity"].isNull())
		application_.accessTokenValidity = std::stoi(applicationNode["AccessTokenValidity"].asString());
	if(!applicationNode["SecretRequired"].isNull())
		application_.secretRequired = applicationNode["SecretRequired"].asString() == "true";
	if(!applicationNode["AccountId"].isNull())
		application_.accountId = applicationNode["AccountId"].asString();
	if(!applicationNode["CreateDate"].isNull())
		application_.createDate = applicationNode["CreateDate"].asString();
	if(!applicationNode["AppName"].isNull())
		application_.appName = applicationNode["AppName"].asString();
	if(!applicationNode["UpdateDate"].isNull())
		application_.updateDate = applicationNode["UpdateDate"].asString();
	if(!applicationNode["AppId"].isNull())
		application_.appId = applicationNode["AppId"].asString();
	if(!applicationNode["RefreshTokenValidity"].isNull())
		application_.refreshTokenValidity = std::stoi(applicationNode["RefreshTokenValidity"].asString());
	if(!applicationNode["AppPrincipalName"].isNull())
		application_.appPrincipalName = applicationNode["AppPrincipalName"].asString();
	if(!applicationNode["IsMultiTenant"].isNull())
		application_.isMultiTenant = applicationNode["IsMultiTenant"].asString() == "true";
	if(!applicationNode["AppType"].isNull())
		application_.appType = applicationNode["AppType"].asString();
	if(!applicationNode["TenantId"].isNull())
		application_.tenantId = applicationNode["TenantId"].asString();
	auto delegatedScopeNode = applicationNode["DelegatedScope"];
	auto allPredefinedScopesNode = delegatedScopeNode["PredefinedScopes"]["PredefinedScope"];
	for (auto delegatedScopeNodePredefinedScopesPredefinedScope : allPredefinedScopesNode)
	{
		Application::DelegatedScope::PredefinedScope predefinedScopeObject;
		if(!delegatedScopeNodePredefinedScopesPredefinedScope["Description"].isNull())
			predefinedScopeObject.description = delegatedScopeNodePredefinedScopesPredefinedScope["Description"].asString();
		if(!delegatedScopeNodePredefinedScopesPredefinedScope["Name"].isNull())
			predefinedScopeObject.name = delegatedScopeNodePredefinedScopesPredefinedScope["Name"].asString();
		if(!delegatedScopeNodePredefinedScopesPredefinedScope["Required"].isNull())
			predefinedScopeObject.required = delegatedScopeNodePredefinedScopesPredefinedScope["Required"].asString() == "true";
		application_.delegatedScope.predefinedScopes.push_back(predefinedScopeObject);
	}
		auto allRedirectUris = applicationNode["RedirectUris"]["RedirectUri"];
		for (auto value : allRedirectUris)
			application_.redirectUris.push_back(value.asString());

}

GetApplicationResult::Application GetApplicationResult::getApplication()const
{
	return application_;
}

