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

#include <alibabacloud/eiam/model/ListIdentityProvidersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListIdentityProvidersResult::ListIdentityProvidersResult() :
	ServiceResult()
{}

ListIdentityProvidersResult::ListIdentityProvidersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIdentityProvidersResult::~ListIdentityProvidersResult()
{}

void ListIdentityProvidersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIdentityProvidersNode = value["IdentityProviders"]["IdentityProvider"];
	for (auto valueIdentityProvidersIdentityProvider : allIdentityProvidersNode)
	{
		IdentityProvider identityProvidersObject;
		if(!valueIdentityProvidersIdentityProvider["InstanceId"].isNull())
			identityProvidersObject.instanceId = valueIdentityProvidersIdentityProvider["InstanceId"].asString();
		if(!valueIdentityProvidersIdentityProvider["IdentityProviderId"].isNull())
			identityProvidersObject.identityProviderId = valueIdentityProvidersIdentityProvider["IdentityProviderId"].asString();
		if(!valueIdentityProvidersIdentityProvider["IdentityProviderExternalId"].isNull())
			identityProvidersObject.identityProviderExternalId = valueIdentityProvidersIdentityProvider["IdentityProviderExternalId"].asString();
		if(!valueIdentityProvidersIdentityProvider["Description"].isNull())
			identityProvidersObject.description = valueIdentityProvidersIdentityProvider["Description"].asString();
		if(!valueIdentityProvidersIdentityProvider["IdentityProviderName"].isNull())
			identityProvidersObject.identityProviderName = valueIdentityProvidersIdentityProvider["IdentityProviderName"].asString();
		if(!valueIdentityProvidersIdentityProvider["UdPullStatus"].isNull())
			identityProvidersObject.udPullStatus = valueIdentityProvidersIdentityProvider["UdPullStatus"].asString();
		if(!valueIdentityProvidersIdentityProvider["AuthnSourceType"].isNull())
			identityProvidersObject.authnSourceType = valueIdentityProvidersIdentityProvider["AuthnSourceType"].asString();
		if(!valueIdentityProvidersIdentityProvider["AuthnSourceSupplier"].isNull())
			identityProvidersObject.authnSourceSupplier = valueIdentityProvidersIdentityProvider["AuthnSourceSupplier"].asString();
		if(!valueIdentityProvidersIdentityProvider["AuthnStatus"].isNull())
			identityProvidersObject.authnStatus = valueIdentityProvidersIdentityProvider["AuthnStatus"].asString();
		if(!valueIdentityProvidersIdentityProvider["IncrementalCallbackStatus"].isNull())
			identityProvidersObject.incrementalCallbackStatus = valueIdentityProvidersIdentityProvider["IncrementalCallbackStatus"].asString();
		if(!valueIdentityProvidersIdentityProvider["UdPullTargetScope"].isNull())
			identityProvidersObject.udPullTargetScope = valueIdentityProvidersIdentityProvider["UdPullTargetScope"].asString();
		if(!valueIdentityProvidersIdentityProvider["IdentityProviderType"].isNull())
			identityProvidersObject.identityProviderType = valueIdentityProvidersIdentityProvider["IdentityProviderType"].asString();
		if(!valueIdentityProvidersIdentityProvider["AdvancedStatus"].isNull())
			identityProvidersObject.advancedStatus = valueIdentityProvidersIdentityProvider["AdvancedStatus"].asString();
		if(!valueIdentityProvidersIdentityProvider["UdPushStatus"].isNull())
			identityProvidersObject.udPushStatus = valueIdentityProvidersIdentityProvider["UdPushStatus"].asString();
		if(!valueIdentityProvidersIdentityProvider["LockReason"].isNull())
			identityProvidersObject.lockReason = valueIdentityProvidersIdentityProvider["LockReason"].asString();
		if(!valueIdentityProvidersIdentityProvider["LastStatusCheckJobResult"].isNull())
			identityProvidersObject.lastStatusCheckJobResult = valueIdentityProvidersIdentityProvider["LastStatusCheckJobResult"].asString();
		if(!valueIdentityProvidersIdentityProvider["CreateTime"].isNull())
			identityProvidersObject.createTime = std::stol(valueIdentityProvidersIdentityProvider["CreateTime"].asString());
		if(!valueIdentityProvidersIdentityProvider["UpdateTime"].isNull())
			identityProvidersObject.updateTime = std::stol(valueIdentityProvidersIdentityProvider["UpdateTime"].asString());
		if(!valueIdentityProvidersIdentityProvider["LogoUrl"].isNull())
			identityProvidersObject.logoUrl = valueIdentityProvidersIdentityProvider["LogoUrl"].asString();
		if(!valueIdentityProvidersIdentityProvider["PeriodicSyncStatus"].isNull())
			identityProvidersObject.periodicSyncStatus = valueIdentityProvidersIdentityProvider["PeriodicSyncStatus"].asString();
		identityProviders_.push_back(identityProvidersObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListIdentityProvidersResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListIdentityProvidersResult::IdentityProvider> ListIdentityProvidersResult::getIdentityProviders()const
{
	return identityProviders_;
}

