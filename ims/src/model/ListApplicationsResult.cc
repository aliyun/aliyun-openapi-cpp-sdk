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

#include <alibabacloud/ims/model/ListApplicationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ims;
using namespace AlibabaCloud::Ims::Model;

ListApplicationsResult::ListApplicationsResult() :
	ServiceResult()
{}

ListApplicationsResult::ListApplicationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationsResult::~ListApplicationsResult()
{}

void ListApplicationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationsNode = value["Applications"]["Application"];
	for (auto valueApplicationsApplication : allApplicationsNode)
	{
		Application applicationsObject;
		if(!valueApplicationsApplication["DisplayName"].isNull())
			applicationsObject.displayName = valueApplicationsApplication["DisplayName"].asString();
		if(!valueApplicationsApplication["AccessTokenValidity"].isNull())
			applicationsObject.accessTokenValidity = std::stoi(valueApplicationsApplication["AccessTokenValidity"].asString());
		if(!valueApplicationsApplication["SecretRequired"].isNull())
			applicationsObject.secretRequired = valueApplicationsApplication["SecretRequired"].asString() == "true";
		if(!valueApplicationsApplication["AccountId"].isNull())
			applicationsObject.accountId = valueApplicationsApplication["AccountId"].asString();
		if(!valueApplicationsApplication["CreateDate"].isNull())
			applicationsObject.createDate = valueApplicationsApplication["CreateDate"].asString();
		if(!valueApplicationsApplication["AppName"].isNull())
			applicationsObject.appName = valueApplicationsApplication["AppName"].asString();
		if(!valueApplicationsApplication["UpdateDate"].isNull())
			applicationsObject.updateDate = valueApplicationsApplication["UpdateDate"].asString();
		if(!valueApplicationsApplication["AppId"].isNull())
			applicationsObject.appId = valueApplicationsApplication["AppId"].asString();
		if(!valueApplicationsApplication["RefreshTokenValidity"].isNull())
			applicationsObject.refreshTokenValidity = std::stoi(valueApplicationsApplication["RefreshTokenValidity"].asString());
		if(!valueApplicationsApplication["AppPrincipalName"].isNull())
			applicationsObject.appPrincipalName = valueApplicationsApplication["AppPrincipalName"].asString();
		if(!valueApplicationsApplication["IsMultiTenant"].isNull())
			applicationsObject.isMultiTenant = valueApplicationsApplication["IsMultiTenant"].asString() == "true";
		if(!valueApplicationsApplication["AppType"].isNull())
			applicationsObject.appType = valueApplicationsApplication["AppType"].asString();
		if(!valueApplicationsApplication["TenantId"].isNull())
			applicationsObject.tenantId = valueApplicationsApplication["TenantId"].asString();
		auto delegatedScopeNode = value["DelegatedScope"];
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
			applicationsObject.delegatedScope.predefinedScopes.push_back(predefinedScopeObject);
		}
		auto allRedirectUris = value["RedirectUris"]["RedirectUri"];
		for (auto value : allRedirectUris)
			applicationsObject.redirectUris.push_back(value.asString());
		applications_.push_back(applicationsObject);
	}

}

std::vector<ListApplicationsResult::Application> ListApplicationsResult::getApplications()const
{
	return applications_;
}

