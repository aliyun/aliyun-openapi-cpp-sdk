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

#include <alibabacloud/resourcemanager/model/ListDelegatedServicesForAccountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

ListDelegatedServicesForAccountResult::ListDelegatedServicesForAccountResult() :
	ServiceResult()
{}

ListDelegatedServicesForAccountResult::ListDelegatedServicesForAccountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDelegatedServicesForAccountResult::~ListDelegatedServicesForAccountResult()
{}

void ListDelegatedServicesForAccountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDelegatedServicesNode = value["DelegatedServices"]["DelegatedService"];
	for (auto valueDelegatedServicesDelegatedService : allDelegatedServicesNode)
	{
		DelegatedService delegatedServicesObject;
		if(!valueDelegatedServicesDelegatedService["DelegationEnabledTime"].isNull())
			delegatedServicesObject.delegationEnabledTime = valueDelegatedServicesDelegatedService["DelegationEnabledTime"].asString();
		if(!valueDelegatedServicesDelegatedService["ServicePrincipal"].isNull())
			delegatedServicesObject.servicePrincipal = valueDelegatedServicesDelegatedService["ServicePrincipal"].asString();
		if(!valueDelegatedServicesDelegatedService["Status"].isNull())
			delegatedServicesObject.status = valueDelegatedServicesDelegatedService["Status"].asString();
		delegatedServices_.push_back(delegatedServicesObject);
	}

}

std::vector<ListDelegatedServicesForAccountResult::DelegatedService> ListDelegatedServicesForAccountResult::getDelegatedServices()const
{
	return delegatedServices_;
}

