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

#include <alibabacloud/eiam/model/ListApplicationFederatedCredentialsForProviderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListApplicationFederatedCredentialsForProviderResult::ListApplicationFederatedCredentialsForProviderResult() :
	ServiceResult()
{}

ListApplicationFederatedCredentialsForProviderResult::ListApplicationFederatedCredentialsForProviderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationFederatedCredentialsForProviderResult::~ListApplicationFederatedCredentialsForProviderResult()
{}

void ListApplicationFederatedCredentialsForProviderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationFederatedCredentialsNode = value["ApplicationFederatedCredentials"]["ApplicationFederatedCredential"];
	for (auto valueApplicationFederatedCredentialsApplicationFederatedCredential : allApplicationFederatedCredentialsNode)
	{
		ApplicationFederatedCredential applicationFederatedCredentialsObject;
		if(!valueApplicationFederatedCredentialsApplicationFederatedCredential["Status"].isNull())
			applicationFederatedCredentialsObject.status = valueApplicationFederatedCredentialsApplicationFederatedCredential["Status"].asString();
		if(!valueApplicationFederatedCredentialsApplicationFederatedCredential["Description"].isNull())
			applicationFederatedCredentialsObject.description = valueApplicationFederatedCredentialsApplicationFederatedCredential["Description"].asString();
		if(!valueApplicationFederatedCredentialsApplicationFederatedCredential["InstanceId"].isNull())
			applicationFederatedCredentialsObject.instanceId = valueApplicationFederatedCredentialsApplicationFederatedCredential["InstanceId"].asString();
		if(!valueApplicationFederatedCredentialsApplicationFederatedCredential["ApplicationFederatedCredentialType"].isNull())
			applicationFederatedCredentialsObject.applicationFederatedCredentialType = valueApplicationFederatedCredentialsApplicationFederatedCredential["ApplicationFederatedCredentialType"].asString();
		if(!valueApplicationFederatedCredentialsApplicationFederatedCredential["CreateTime"].isNull())
			applicationFederatedCredentialsObject.createTime = std::stol(valueApplicationFederatedCredentialsApplicationFederatedCredential["CreateTime"].asString());
		if(!valueApplicationFederatedCredentialsApplicationFederatedCredential["LastUsedTime"].isNull())
			applicationFederatedCredentialsObject.lastUsedTime = std::stol(valueApplicationFederatedCredentialsApplicationFederatedCredential["LastUsedTime"].asString());
		if(!valueApplicationFederatedCredentialsApplicationFederatedCredential["UpdateTime"].isNull())
			applicationFederatedCredentialsObject.updateTime = std::stol(valueApplicationFederatedCredentialsApplicationFederatedCredential["UpdateTime"].asString());
		if(!valueApplicationFederatedCredentialsApplicationFederatedCredential["ApplicationFederatedCredentialName"].isNull())
			applicationFederatedCredentialsObject.applicationFederatedCredentialName = valueApplicationFederatedCredentialsApplicationFederatedCredential["ApplicationFederatedCredentialName"].asString();
		if(!valueApplicationFederatedCredentialsApplicationFederatedCredential["ApplicationId"].isNull())
			applicationFederatedCredentialsObject.applicationId = valueApplicationFederatedCredentialsApplicationFederatedCredential["ApplicationId"].asString();
		if(!valueApplicationFederatedCredentialsApplicationFederatedCredential["FederatedCredentialProviderId"].isNull())
			applicationFederatedCredentialsObject.federatedCredentialProviderId = valueApplicationFederatedCredentialsApplicationFederatedCredential["FederatedCredentialProviderId"].asString();
		if(!valueApplicationFederatedCredentialsApplicationFederatedCredential["ApplicationFederatedCredentialId"].isNull())
			applicationFederatedCredentialsObject.applicationFederatedCredentialId = valueApplicationFederatedCredentialsApplicationFederatedCredential["ApplicationFederatedCredentialId"].asString();
		applicationFederatedCredentials_.push_back(applicationFederatedCredentialsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["PreviousToken"].isNull())
		previousToken_ = value["PreviousToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListApplicationFederatedCredentialsForProviderResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListApplicationFederatedCredentialsForProviderResult::getPreviousToken()const
{
	return previousToken_;
}

std::string ListApplicationFederatedCredentialsForProviderResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListApplicationFederatedCredentialsForProviderResult::ApplicationFederatedCredential> ListApplicationFederatedCredentialsForProviderResult::getApplicationFederatedCredentials()const
{
	return applicationFederatedCredentials_;
}

int ListApplicationFederatedCredentialsForProviderResult::getMaxResults()const
{
	return maxResults_;
}

