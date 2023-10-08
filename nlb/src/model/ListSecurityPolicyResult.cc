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

#include <alibabacloud/nlb/model/ListSecurityPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nlb;
using namespace AlibabaCloud::Nlb::Model;

ListSecurityPolicyResult::ListSecurityPolicyResult() :
	ServiceResult()
{}

ListSecurityPolicyResult::ListSecurityPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSecurityPolicyResult::~ListSecurityPolicyResult()
{}

void ListSecurityPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecurityPoliciesNode = value["SecurityPolicies"]["SecurityPolicie"];
	for (auto valueSecurityPoliciesSecurityPolicie : allSecurityPoliciesNode)
	{
		SecurityPolicie securityPoliciesObject;
		if(!valueSecurityPoliciesSecurityPolicie["SecurityPolicyId"].isNull())
			securityPoliciesObject.securityPolicyId = valueSecurityPoliciesSecurityPolicie["SecurityPolicyId"].asString();
		if(!valueSecurityPoliciesSecurityPolicie["SecurityPolicyName"].isNull())
			securityPoliciesObject.securityPolicyName = valueSecurityPoliciesSecurityPolicie["SecurityPolicyName"].asString();
		if(!valueSecurityPoliciesSecurityPolicie["TlsVersion"].isNull())
			securityPoliciesObject.tlsVersion = valueSecurityPoliciesSecurityPolicie["TlsVersion"].asString();
		if(!valueSecurityPoliciesSecurityPolicie["Ciphers"].isNull())
			securityPoliciesObject.ciphers = valueSecurityPoliciesSecurityPolicie["Ciphers"].asString();
		if(!valueSecurityPoliciesSecurityPolicie["RegionId"].isNull())
			securityPoliciesObject.regionId = valueSecurityPoliciesSecurityPolicie["RegionId"].asString();
		if(!valueSecurityPoliciesSecurityPolicie["ResourceGroupId"].isNull())
			securityPoliciesObject.resourceGroupId = valueSecurityPoliciesSecurityPolicie["ResourceGroupId"].asString();
		if(!valueSecurityPoliciesSecurityPolicie["SecurityPolicyStatus"].isNull())
			securityPoliciesObject.securityPolicyStatus = valueSecurityPoliciesSecurityPolicie["SecurityPolicyStatus"].asString();
		auto allTagsNode = valueSecurityPoliciesSecurityPolicie["Tags"]["Tag"];
		for (auto valueSecurityPoliciesSecurityPolicieTagsTag : allTagsNode)
		{
			SecurityPolicie::Tag tagsObject;
			if(!valueSecurityPoliciesSecurityPolicieTagsTag["Key"].isNull())
				tagsObject.key = valueSecurityPoliciesSecurityPolicieTagsTag["Key"].asString();
			if(!valueSecurityPoliciesSecurityPolicieTagsTag["Value"].isNull())
				tagsObject.value = valueSecurityPoliciesSecurityPolicieTagsTag["Value"].asString();
			securityPoliciesObject.tags.push_back(tagsObject);
		}
		auto allRelatedListenersNode = valueSecurityPoliciesSecurityPolicie["RelatedListeners"]["RelatedListener"];
		for (auto valueSecurityPoliciesSecurityPolicieRelatedListenersRelatedListener : allRelatedListenersNode)
		{
			SecurityPolicie::RelatedListener relatedListenersObject;
			if(!valueSecurityPoliciesSecurityPolicieRelatedListenersRelatedListener["ListenerId"].isNull())
				relatedListenersObject.listenerId = valueSecurityPoliciesSecurityPolicieRelatedListenersRelatedListener["ListenerId"].asString();
			if(!valueSecurityPoliciesSecurityPolicieRelatedListenersRelatedListener["ListenerPort"].isNull())
				relatedListenersObject.listenerPort = std::stol(valueSecurityPoliciesSecurityPolicieRelatedListenersRelatedListener["ListenerPort"].asString());
			if(!valueSecurityPoliciesSecurityPolicieRelatedListenersRelatedListener["ListenerProtocol"].isNull())
				relatedListenersObject.listenerProtocol = valueSecurityPoliciesSecurityPolicieRelatedListenersRelatedListener["ListenerProtocol"].asString();
			if(!valueSecurityPoliciesSecurityPolicieRelatedListenersRelatedListener["LoadBalancerId"].isNull())
				relatedListenersObject.loadBalancerId = valueSecurityPoliciesSecurityPolicieRelatedListenersRelatedListener["LoadBalancerId"].asString();
			securityPoliciesObject.relatedListeners.push_back(relatedListenersObject);
		}
		securityPolicies_.push_back(securityPoliciesObject);
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

int ListSecurityPolicyResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListSecurityPolicyResult::getMessage()const
{
	return message_;
}

std::string ListSecurityPolicyResult::getNextToken()const
{
	return nextToken_;
}

int ListSecurityPolicyResult::getMaxResults()const
{
	return maxResults_;
}

int ListSecurityPolicyResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListSecurityPolicyResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string ListSecurityPolicyResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string ListSecurityPolicyResult::getCode()const
{
	return code_;
}

std::vector<ListSecurityPolicyResult::SecurityPolicie> ListSecurityPolicyResult::getSecurityPolicies()const
{
	return securityPolicies_;
}

bool ListSecurityPolicyResult::getSuccess()const
{
	return success_;
}

