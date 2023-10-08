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

#include <alibabacloud/nlb/model/ListListenersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nlb;
using namespace AlibabaCloud::Nlb::Model;

ListListenersResult::ListListenersResult() :
	ServiceResult()
{}

ListListenersResult::ListListenersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListListenersResult::~ListListenersResult()
{}

void ListListenersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListenersNode = value["Listeners"]["ListenerInfo"];
	for (auto valueListenersListenerInfo : allListenersNode)
	{
		ListenerInfo listenersObject;
		if(!valueListenersListenerInfo["LoadBalancerId"].isNull())
			listenersObject.loadBalancerId = valueListenersListenerInfo["LoadBalancerId"].asString();
		if(!valueListenersListenerInfo["ListenerId"].isNull())
			listenersObject.listenerId = valueListenersListenerInfo["ListenerId"].asString();
		if(!valueListenersListenerInfo["ListenerProtocol"].isNull())
			listenersObject.listenerProtocol = valueListenersListenerInfo["ListenerProtocol"].asString();
		if(!valueListenersListenerInfo["ListenerPort"].isNull())
			listenersObject.listenerPort = std::stoi(valueListenersListenerInfo["ListenerPort"].asString());
		if(!valueListenersListenerInfo["StartPort"].isNull())
			listenersObject.startPort = valueListenersListenerInfo["StartPort"].asString();
		if(!valueListenersListenerInfo["EndPort"].isNull())
			listenersObject.endPort = valueListenersListenerInfo["EndPort"].asString();
		if(!valueListenersListenerInfo["ListenerDescription"].isNull())
			listenersObject.listenerDescription = valueListenersListenerInfo["ListenerDescription"].asString();
		if(!valueListenersListenerInfo["ServerGroupId"].isNull())
			listenersObject.serverGroupId = valueListenersListenerInfo["ServerGroupId"].asString();
		if(!valueListenersListenerInfo["IdleTimeout"].isNull())
			listenersObject.idleTimeout = std::stoi(valueListenersListenerInfo["IdleTimeout"].asString());
		if(!valueListenersListenerInfo["SecurityPolicyId"].isNull())
			listenersObject.securityPolicyId = valueListenersListenerInfo["SecurityPolicyId"].asString();
		if(!valueListenersListenerInfo["CaEnabled"].isNull())
			listenersObject.caEnabled = valueListenersListenerInfo["CaEnabled"].asString() == "true";
		if(!valueListenersListenerInfo["ListenerStatus"].isNull())
			listenersObject.listenerStatus = valueListenersListenerInfo["ListenerStatus"].asString();
		if(!valueListenersListenerInfo["RegionId"].isNull())
			listenersObject.regionId = valueListenersListenerInfo["RegionId"].asString();
		if(!valueListenersListenerInfo["AlpnEnabled"].isNull())
			listenersObject.alpnEnabled = valueListenersListenerInfo["AlpnEnabled"].asString() == "true";
		if(!valueListenersListenerInfo["AlpnPolicy"].isNull())
			listenersObject.alpnPolicy = valueListenersListenerInfo["AlpnPolicy"].asString();
		if(!valueListenersListenerInfo["SecSensorEnabled"].isNull())
			listenersObject.secSensorEnabled = valueListenersListenerInfo["SecSensorEnabled"].asString() == "true";
		if(!valueListenersListenerInfo["ProxyProtocolEnabled"].isNull())
			listenersObject.proxyProtocolEnabled = valueListenersListenerInfo["ProxyProtocolEnabled"].asString() == "true";
		if(!valueListenersListenerInfo["Cps"].isNull())
			listenersObject.cps = std::stoi(valueListenersListenerInfo["Cps"].asString());
		if(!valueListenersListenerInfo["Mss"].isNull())
			listenersObject.mss = std::stoi(valueListenersListenerInfo["Mss"].asString());
		auto allTagsNode = valueListenersListenerInfo["Tags"]["tagModels"];
		for (auto valueListenersListenerInfoTagstagModels : allTagsNode)
		{
			ListenerInfo::TagModels tagsObject;
			if(!valueListenersListenerInfoTagstagModels["Key"].isNull())
				tagsObject.key = valueListenersListenerInfoTagstagModels["Key"].asString();
			if(!valueListenersListenerInfoTagstagModels["Value"].isNull())
				tagsObject.value = valueListenersListenerInfoTagstagModels["Value"].asString();
			listenersObject.tags.push_back(tagsObject);
		}
		auto allCertificateIds = value["CertificateIds"]["CertificateId"];
		for (auto value : allCertificateIds)
			listenersObject.certificateIds.push_back(value.asString());
		auto allCaCertificateIds = value["CaCertificateIds"]["CaCertificateId"];
		for (auto value : allCaCertificateIds)
			listenersObject.caCertificateIds.push_back(value.asString());
		listeners_.push_back(listenersObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::vector<ListListenersResult::ListenerInfo> ListListenersResult::getListeners()const
{
	return listeners_;
}

int ListListenersResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListListenersResult::getMessage()const
{
	return message_;
}

std::string ListListenersResult::getNextToken()const
{
	return nextToken_;
}

int ListListenersResult::getMaxResults()const
{
	return maxResults_;
}

int ListListenersResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListListenersResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string ListListenersResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string ListListenersResult::getCode()const
{
	return code_;
}

bool ListListenersResult::getSuccess()const
{
	return success_;
}

