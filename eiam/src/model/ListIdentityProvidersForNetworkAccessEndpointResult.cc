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

#include <alibabacloud/eiam/model/ListIdentityProvidersForNetworkAccessEndpointResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListIdentityProvidersForNetworkAccessEndpointResult::ListIdentityProvidersForNetworkAccessEndpointResult() :
	ServiceResult()
{}

ListIdentityProvidersForNetworkAccessEndpointResult::ListIdentityProvidersForNetworkAccessEndpointResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIdentityProvidersForNetworkAccessEndpointResult::~ListIdentityProvidersForNetworkAccessEndpointResult()
{}

void ListIdentityProvidersForNetworkAccessEndpointResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIdentityProvidersForNetworkAccessEndpointNode = value["IdentityProvidersForNetworkAccessEndpoint"]["IdentityProviderForNetworkAccessEndpoint"];
	for (auto valueIdentityProvidersForNetworkAccessEndpointIdentityProviderForNetworkAccessEndpoint : allIdentityProvidersForNetworkAccessEndpointNode)
	{
		IdentityProviderForNetworkAccessEndpoint identityProvidersForNetworkAccessEndpointObject;
		if(!valueIdentityProvidersForNetworkAccessEndpointIdentityProviderForNetworkAccessEndpoint["InstanceId"].isNull())
			identityProvidersForNetworkAccessEndpointObject.instanceId = valueIdentityProvidersForNetworkAccessEndpointIdentityProviderForNetworkAccessEndpoint["InstanceId"].asString();
		if(!valueIdentityProvidersForNetworkAccessEndpointIdentityProviderForNetworkAccessEndpoint["IdentityProviderId"].isNull())
			identityProvidersForNetworkAccessEndpointObject.identityProviderId = valueIdentityProvidersForNetworkAccessEndpointIdentityProviderForNetworkAccessEndpoint["IdentityProviderId"].asString();
		if(!valueIdentityProvidersForNetworkAccessEndpointIdentityProviderForNetworkAccessEndpoint["IdentityProviderName"].isNull())
			identityProvidersForNetworkAccessEndpointObject.identityProviderName = valueIdentityProvidersForNetworkAccessEndpointIdentityProviderForNetworkAccessEndpoint["IdentityProviderName"].asString();
		identityProvidersForNetworkAccessEndpoint_.push_back(identityProvidersForNetworkAccessEndpointObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

long ListIdentityProvidersForNetworkAccessEndpointResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListIdentityProvidersForNetworkAccessEndpointResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListIdentityProvidersForNetworkAccessEndpointResult::IdentityProviderForNetworkAccessEndpoint> ListIdentityProvidersForNetworkAccessEndpointResult::getIdentityProvidersForNetworkAccessEndpoint()const
{
	return identityProvidersForNetworkAccessEndpoint_;
}

