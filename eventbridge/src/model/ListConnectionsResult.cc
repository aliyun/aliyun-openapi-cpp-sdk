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

#include <alibabacloud/eventbridge/model/ListConnectionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eventbridge;
using namespace AlibabaCloud::Eventbridge::Model;

ListConnectionsResult::ListConnectionsResult() :
	ServiceResult()
{}

ListConnectionsResult::ListConnectionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListConnectionsResult::~ListConnectionsResult()
{}

void ListConnectionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	if(!dataNode["Total"].isNull())
		data_.total = std::stof(dataNode["Total"].asString());
	if(!dataNode["MaxResults"].isNull())
		data_.maxResults = std::stof(dataNode["MaxResults"].asString());
	auto allConnectionsNode = dataNode["Connections"]["connectionsItem"];
	for (auto dataNodeConnectionsconnectionsItem : allConnectionsNode)
	{
		Data::ConnectionsItem connectionsItemObject;
		if(!dataNodeConnectionsconnectionsItem["ConnectionName"].isNull())
			connectionsItemObject.connectionName = dataNodeConnectionsconnectionsItem["ConnectionName"].asString();
		if(!dataNodeConnectionsconnectionsItem["Description"].isNull())
			connectionsItemObject.description = dataNodeConnectionsconnectionsItem["Description"].asString();
		if(!dataNodeConnectionsconnectionsItem["Id"].isNull())
			connectionsItemObject.id = std::stol(dataNodeConnectionsconnectionsItem["Id"].asString());
		if(!dataNodeConnectionsconnectionsItem["GmtCreate"].isNull())
			connectionsItemObject.gmtCreate = std::stol(dataNodeConnectionsconnectionsItem["GmtCreate"].asString());
		auto networkParametersNode = value["NetworkParameters"];
		if(!networkParametersNode["NetworkType"].isNull())
			connectionsItemObject.networkParameters.networkType = networkParametersNode["NetworkType"].asString();
		if(!networkParametersNode["VpcId"].isNull())
			connectionsItemObject.networkParameters.vpcId = networkParametersNode["VpcId"].asString();
		if(!networkParametersNode["VswitcheId"].isNull())
			connectionsItemObject.networkParameters.vswitcheId = networkParametersNode["VswitcheId"].asString();
		if(!networkParametersNode["SecurityGroupId"].isNull())
			connectionsItemObject.networkParameters.securityGroupId = networkParametersNode["SecurityGroupId"].asString();
		auto authParametersNode = value["AuthParameters"];
		if(!authParametersNode["AuthorizationType"].isNull())
			connectionsItemObject.authParameters.authorizationType = authParametersNode["AuthorizationType"].asString();
		auto apiKeyAuthParametersNode = authParametersNode["ApiKeyAuthParameters"];
		if(!apiKeyAuthParametersNode["ApiKeyName"].isNull())
			connectionsItemObject.authParameters.apiKeyAuthParameters.apiKeyName = apiKeyAuthParametersNode["ApiKeyName"].asString();
		if(!apiKeyAuthParametersNode["ApiKeyValue"].isNull())
			connectionsItemObject.authParameters.apiKeyAuthParameters.apiKeyValue = apiKeyAuthParametersNode["ApiKeyValue"].asString();
		auto basicAuthParametersNode = authParametersNode["BasicAuthParameters"];
		if(!basicAuthParametersNode["Password"].isNull())
			connectionsItemObject.authParameters.basicAuthParameters.password = basicAuthParametersNode["Password"].asString();
		if(!basicAuthParametersNode["Username"].isNull())
			connectionsItemObject.authParameters.basicAuthParameters.username = basicAuthParametersNode["Username"].asString();
		auto invocationHttpParametersNode = authParametersNode["InvocationHttpParameters"];
		auto allBodyParametersNode = invocationHttpParametersNode["BodyParameters"]["bodyParametersItem"];
		for (auto invocationHttpParametersNodeBodyParametersbodyParametersItem : allBodyParametersNode)
		{
			Data::ConnectionsItem::AuthParameters::InvocationHttpParameters::BodyParametersItem bodyParametersItemObject;
			if(!invocationHttpParametersNodeBodyParametersbodyParametersItem["IsValueSecret"].isNull())
				bodyParametersItemObject.isValueSecret = invocationHttpParametersNodeBodyParametersbodyParametersItem["IsValueSecret"].asString();
			if(!invocationHttpParametersNodeBodyParametersbodyParametersItem["Key"].isNull())
				bodyParametersItemObject.key = invocationHttpParametersNodeBodyParametersbodyParametersItem["Key"].asString();
			if(!invocationHttpParametersNodeBodyParametersbodyParametersItem["Value"].isNull())
				bodyParametersItemObject.value = invocationHttpParametersNodeBodyParametersbodyParametersItem["Value"].asString();
			connectionsItemObject.authParameters.invocationHttpParameters.bodyParameters.push_back(bodyParametersItemObject);
		}
		auto allHeaderParametersNode = invocationHttpParametersNode["HeaderParameters"]["headerParametersItem"];
		for (auto invocationHttpParametersNodeHeaderParametersheaderParametersItem : allHeaderParametersNode)
		{
			Data::ConnectionsItem::AuthParameters::InvocationHttpParameters::HeaderParametersItem headerParametersItemObject;
			if(!invocationHttpParametersNodeHeaderParametersheaderParametersItem["IsValueSecret"].isNull())
				headerParametersItemObject.isValueSecret = invocationHttpParametersNodeHeaderParametersheaderParametersItem["IsValueSecret"].asString();
			if(!invocationHttpParametersNodeHeaderParametersheaderParametersItem["Key"].isNull())
				headerParametersItemObject.key = invocationHttpParametersNodeHeaderParametersheaderParametersItem["Key"].asString();
			if(!invocationHttpParametersNodeHeaderParametersheaderParametersItem["Value"].isNull())
				headerParametersItemObject.value = invocationHttpParametersNodeHeaderParametersheaderParametersItem["Value"].asString();
			connectionsItemObject.authParameters.invocationHttpParameters.headerParameters.push_back(headerParametersItemObject);
		}
		auto allQueryStringParametersNode = invocationHttpParametersNode["QueryStringParameters"]["queryStringParametersItem"];
		for (auto invocationHttpParametersNodeQueryStringParametersqueryStringParametersItem : allQueryStringParametersNode)
		{
			Data::ConnectionsItem::AuthParameters::InvocationHttpParameters::QueryStringParametersItem queryStringParametersItemObject;
			if(!invocationHttpParametersNodeQueryStringParametersqueryStringParametersItem["IsValueSecret"].isNull())
				queryStringParametersItemObject.isValueSecret = invocationHttpParametersNodeQueryStringParametersqueryStringParametersItem["IsValueSecret"].asString();
			if(!invocationHttpParametersNodeQueryStringParametersqueryStringParametersItem["Key"].isNull())
				queryStringParametersItemObject.key = invocationHttpParametersNodeQueryStringParametersqueryStringParametersItem["Key"].asString();
			if(!invocationHttpParametersNodeQueryStringParametersqueryStringParametersItem["Value"].isNull())
				queryStringParametersItemObject.value = invocationHttpParametersNodeQueryStringParametersqueryStringParametersItem["Value"].asString();
			connectionsItemObject.authParameters.invocationHttpParameters.queryStringParameters.push_back(queryStringParametersItemObject);
		}
		auto oAuthParametersNode = authParametersNode["OAuthParameters"];
		if(!oAuthParametersNode["AuthorizationEndpoint"].isNull())
			connectionsItemObject.authParameters.oAuthParameters.authorizationEndpoint = oAuthParametersNode["AuthorizationEndpoint"].asString();
		if(!oAuthParametersNode["HttpMethod"].isNull())
			connectionsItemObject.authParameters.oAuthParameters.httpMethod = oAuthParametersNode["HttpMethod"].asString();
		auto clientParametersNode = oAuthParametersNode["ClientParameters"];
		if(!clientParametersNode["ClientID"].isNull())
			connectionsItemObject.authParameters.oAuthParameters.clientParameters.clientID = clientParametersNode["ClientID"].asString();
		if(!clientParametersNode["ClientSecret"].isNull())
			connectionsItemObject.authParameters.oAuthParameters.clientParameters.clientSecret = clientParametersNode["ClientSecret"].asString();
		auto oAuthHttpParametersNode = oAuthParametersNode["OAuthHttpParameters"];
		auto allBodyParameters1Node = oAuthHttpParametersNode["BodyParameters"]["bodyParametersItem"];
		for (auto oAuthHttpParametersNodeBodyParametersbodyParametersItem : allBodyParameters1Node)
		{
			Data::ConnectionsItem::AuthParameters::OAuthParameters::OAuthHttpParameters::BodyParametersItem4 bodyParametersItem4Object;
			if(!oAuthHttpParametersNodeBodyParametersbodyParametersItem["IsValueSecret"].isNull())
				bodyParametersItem4Object.isValueSecret = oAuthHttpParametersNodeBodyParametersbodyParametersItem["IsValueSecret"].asString();
			if(!oAuthHttpParametersNodeBodyParametersbodyParametersItem["Key"].isNull())
				bodyParametersItem4Object.key = oAuthHttpParametersNodeBodyParametersbodyParametersItem["Key"].asString();
			if(!oAuthHttpParametersNodeBodyParametersbodyParametersItem["Value"].isNull())
				bodyParametersItem4Object.value = oAuthHttpParametersNodeBodyParametersbodyParametersItem["Value"].asString();
			connectionsItemObject.authParameters.oAuthParameters.oAuthHttpParameters.bodyParameters1.push_back(bodyParametersItem4Object);
		}
		auto allHeaderParameters2Node = oAuthHttpParametersNode["HeaderParameters"]["headerParametersItem"];
		for (auto oAuthHttpParametersNodeHeaderParametersheaderParametersItem : allHeaderParameters2Node)
		{
			Data::ConnectionsItem::AuthParameters::OAuthParameters::OAuthHttpParameters::HeaderParametersItem5 headerParametersItem5Object;
			if(!oAuthHttpParametersNodeHeaderParametersheaderParametersItem["IsValueSecret"].isNull())
				headerParametersItem5Object.isValueSecret = oAuthHttpParametersNodeHeaderParametersheaderParametersItem["IsValueSecret"].asString();
			if(!oAuthHttpParametersNodeHeaderParametersheaderParametersItem["Key"].isNull())
				headerParametersItem5Object.key = oAuthHttpParametersNodeHeaderParametersheaderParametersItem["Key"].asString();
			if(!oAuthHttpParametersNodeHeaderParametersheaderParametersItem["Value"].isNull())
				headerParametersItem5Object.value = oAuthHttpParametersNodeHeaderParametersheaderParametersItem["Value"].asString();
			connectionsItemObject.authParameters.oAuthParameters.oAuthHttpParameters.headerParameters2.push_back(headerParametersItem5Object);
		}
		auto allQueryStringParameters3Node = oAuthHttpParametersNode["QueryStringParameters"]["queryStringParametersItem"];
		for (auto oAuthHttpParametersNodeQueryStringParametersqueryStringParametersItem : allQueryStringParameters3Node)
		{
			Data::ConnectionsItem::AuthParameters::OAuthParameters::OAuthHttpParameters::QueryStringParametersItem6 queryStringParametersItem6Object;
			if(!oAuthHttpParametersNodeQueryStringParametersqueryStringParametersItem["IsValueSecret"].isNull())
				queryStringParametersItem6Object.isValueSecret = oAuthHttpParametersNodeQueryStringParametersqueryStringParametersItem["IsValueSecret"].asString();
			if(!oAuthHttpParametersNodeQueryStringParametersqueryStringParametersItem["Key"].isNull())
				queryStringParametersItem6Object.key = oAuthHttpParametersNodeQueryStringParametersqueryStringParametersItem["Key"].asString();
			if(!oAuthHttpParametersNodeQueryStringParametersqueryStringParametersItem["Value"].isNull())
				queryStringParametersItem6Object.value = oAuthHttpParametersNodeQueryStringParametersqueryStringParametersItem["Value"].asString();
			connectionsItemObject.authParameters.oAuthParameters.oAuthHttpParameters.queryStringParameters3.push_back(queryStringParametersItem6Object);
		}
		data_.connections.push_back(connectionsItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string ListConnectionsResult::getMessage()const
{
	return message_;
}

ListConnectionsResult::Data ListConnectionsResult::getData()const
{
	return data_;
}

std::string ListConnectionsResult::getCode()const
{
	return code_;
}

