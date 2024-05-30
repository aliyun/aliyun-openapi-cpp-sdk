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

#include <alibabacloud/slb/model/ListTLSCipherPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

ListTLSCipherPoliciesResult::ListTLSCipherPoliciesResult() :
	ServiceResult()
{}

ListTLSCipherPoliciesResult::ListTLSCipherPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTLSCipherPoliciesResult::~ListTLSCipherPoliciesResult()
{}

void ListTLSCipherPoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTLSCipherPoliciesNode = value["TLSCipherPolicies"]["TLSCipherPolicy"];
	for (auto valueTLSCipherPoliciesTLSCipherPolicy : allTLSCipherPoliciesNode)
	{
		TLSCipherPolicy tLSCipherPoliciesObject;
		if(!valueTLSCipherPoliciesTLSCipherPolicy["ServiceManagedMode"].isNull())
			tLSCipherPoliciesObject.serviceManagedMode = valueTLSCipherPoliciesTLSCipherPolicy["ServiceManagedMode"].asString();
		if(!valueTLSCipherPoliciesTLSCipherPolicy["Status"].isNull())
			tLSCipherPoliciesObject.status = valueTLSCipherPoliciesTLSCipherPolicy["Status"].asString();
		if(!valueTLSCipherPoliciesTLSCipherPolicy["InstanceId"].isNull())
			tLSCipherPoliciesObject.instanceId = valueTLSCipherPoliciesTLSCipherPolicy["InstanceId"].asString();
		if(!valueTLSCipherPoliciesTLSCipherPolicy["Name"].isNull())
			tLSCipherPoliciesObject.name = valueTLSCipherPoliciesTLSCipherPolicy["Name"].asString();
		if(!valueTLSCipherPoliciesTLSCipherPolicy["CreateTime"].isNull())
			tLSCipherPoliciesObject.createTime = std::stol(valueTLSCipherPoliciesTLSCipherPolicy["CreateTime"].asString());
		auto allRelateListenersNode = valueTLSCipherPoliciesTLSCipherPolicy["RelateListeners"]["RelateListener"];
		for (auto valueTLSCipherPoliciesTLSCipherPolicyRelateListenersRelateListener : allRelateListenersNode)
		{
			TLSCipherPolicy::RelateListener relateListenersObject;
			if(!valueTLSCipherPoliciesTLSCipherPolicyRelateListenersRelateListener["Port"].isNull())
				relateListenersObject.port = std::stoi(valueTLSCipherPoliciesTLSCipherPolicyRelateListenersRelateListener["Port"].asString());
			if(!valueTLSCipherPoliciesTLSCipherPolicyRelateListenersRelateListener["Protocol"].isNull())
				relateListenersObject.protocol = valueTLSCipherPoliciesTLSCipherPolicyRelateListenersRelateListener["Protocol"].asString();
			if(!valueTLSCipherPoliciesTLSCipherPolicyRelateListenersRelateListener["LoadBalancerId"].isNull())
				relateListenersObject.loadBalancerId = valueTLSCipherPoliciesTLSCipherPolicyRelateListenersRelateListener["LoadBalancerId"].asString();
			tLSCipherPoliciesObject.relateListeners.push_back(relateListenersObject);
		}
		auto allTLSVersions = value["TLSVersions"]["TLSVersion"];
		for (auto value : allTLSVersions)
			tLSCipherPoliciesObject.tLSVersions.push_back(value.asString());
		auto allCiphers = value["Ciphers"]["Cipher"];
		for (auto value : allCiphers)
			tLSCipherPoliciesObject.ciphers.push_back(value.asString());
		tLSCipherPolicies_.push_back(tLSCipherPoliciesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["IsTruncated"].isNull())
		isTruncated_ = value["IsTruncated"].asString() == "true";

}

int ListTLSCipherPoliciesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListTLSCipherPoliciesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListTLSCipherPoliciesResult::TLSCipherPolicy> ListTLSCipherPoliciesResult::getTLSCipherPolicies()const
{
	return tLSCipherPolicies_;
}

bool ListTLSCipherPoliciesResult::getIsTruncated()const
{
	return isTruncated_;
}

