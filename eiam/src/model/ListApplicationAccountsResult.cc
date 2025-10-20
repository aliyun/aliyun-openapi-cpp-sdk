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

#include <alibabacloud/eiam/model/ListApplicationAccountsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListApplicationAccountsResult::ListApplicationAccountsResult() :
	ServiceResult()
{}

ListApplicationAccountsResult::ListApplicationAccountsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationAccountsResult::~ListApplicationAccountsResult()
{}

void ListApplicationAccountsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationAccountsNode = value["ApplicationAccounts"]["ApplicationAccount"];
	for (auto valueApplicationAccountsApplicationAccount : allApplicationAccountsNode)
	{
		ApplicationAccount applicationAccountsObject;
		if(!valueApplicationAccountsApplicationAccount["InstanceId"].isNull())
			applicationAccountsObject.instanceId = valueApplicationAccountsApplicationAccount["InstanceId"].asString();
		if(!valueApplicationAccountsApplicationAccount["ApplicationId"].isNull())
			applicationAccountsObject.applicationId = valueApplicationAccountsApplicationAccount["ApplicationId"].asString();
		if(!valueApplicationAccountsApplicationAccount["ApplicationAccountId"].isNull())
			applicationAccountsObject.applicationAccountId = valueApplicationAccountsApplicationAccount["ApplicationAccountId"].asString();
		if(!valueApplicationAccountsApplicationAccount["UserId"].isNull())
			applicationAccountsObject.userId = valueApplicationAccountsApplicationAccount["UserId"].asString();
		if(!valueApplicationAccountsApplicationAccount["ApplicationUsername"].isNull())
			applicationAccountsObject.applicationUsername = valueApplicationAccountsApplicationAccount["ApplicationUsername"].asString();
		if(!valueApplicationAccountsApplicationAccount["CreateTime"].isNull())
			applicationAccountsObject.createTime = std::stol(valueApplicationAccountsApplicationAccount["CreateTime"].asString());
		auto allApplicationUserAttributesNode = valueApplicationAccountsApplicationAccount["ApplicationUserAttributes"]["ApplicationUserAttribut"];
		for (auto valueApplicationAccountsApplicationAccountApplicationUserAttributesApplicationUserAttribut : allApplicationUserAttributesNode)
		{
			ApplicationAccount::ApplicationUserAttribut applicationUserAttributesObject;
			if(!valueApplicationAccountsApplicationAccountApplicationUserAttributesApplicationUserAttribut["AttributeName"].isNull())
				applicationUserAttributesObject.attributeName = valueApplicationAccountsApplicationAccountApplicationUserAttributesApplicationUserAttribut["AttributeName"].asString();
			if(!valueApplicationAccountsApplicationAccountApplicationUserAttributesApplicationUserAttribut["AttributeType"].isNull())
				applicationUserAttributesObject.attributeType = valueApplicationAccountsApplicationAccountApplicationUserAttributesApplicationUserAttribut["AttributeType"].asString();
			if(!valueApplicationAccountsApplicationAccountApplicationUserAttributesApplicationUserAttribut["AttributeValueExpression"].isNull())
				applicationUserAttributesObject.attributeValueExpression = valueApplicationAccountsApplicationAccountApplicationUserAttributesApplicationUserAttribut["AttributeValueExpression"].asString();
			applicationAccountsObject.applicationUserAttributes.push_back(applicationUserAttributesObject);
		}
		applicationAccounts_.push_back(applicationAccountsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListApplicationAccountsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListApplicationAccountsResult::ApplicationAccount> ListApplicationAccountsResult::getApplicationAccounts()const
{
	return applicationAccounts_;
}

