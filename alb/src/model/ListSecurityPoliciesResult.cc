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

#include <alibabacloud/alb/model/ListSecurityPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

ListSecurityPoliciesResult::ListSecurityPoliciesResult() :
	ServiceResult()
{}

ListSecurityPoliciesResult::ListSecurityPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSecurityPoliciesResult::~ListSecurityPoliciesResult()
{}

void ListSecurityPoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecurityPoliciesNode = value["SecurityPolicies"]["SecurityPolicy"];
	for (auto valueSecurityPoliciesSecurityPolicy : allSecurityPoliciesNode)
	{
		SecurityPolicy securityPoliciesObject;
		if(!valueSecurityPoliciesSecurityPolicy["ResourceGroupId"].isNull())
			securityPoliciesObject.resourceGroupId = valueSecurityPoliciesSecurityPolicy["ResourceGroupId"].asString();
		if(!valueSecurityPoliciesSecurityPolicy["SecurityPolicyId"].isNull())
			securityPoliciesObject.securityPolicyId = valueSecurityPoliciesSecurityPolicy["SecurityPolicyId"].asString();
		if(!valueSecurityPoliciesSecurityPolicy["SecurityPolicyName"].isNull())
			securityPoliciesObject.securityPolicyName = valueSecurityPoliciesSecurityPolicy["SecurityPolicyName"].asString();
		if(!valueSecurityPoliciesSecurityPolicy["SecurityPolicyStatus"].isNull())
			securityPoliciesObject.securityPolicyStatus = valueSecurityPoliciesSecurityPolicy["SecurityPolicyStatus"].asString();
		if(!valueSecurityPoliciesSecurityPolicy["ServiceManagedEnabled"].isNull())
			securityPoliciesObject.serviceManagedEnabled = valueSecurityPoliciesSecurityPolicy["ServiceManagedEnabled"].asString() == "true";
		if(!valueSecurityPoliciesSecurityPolicy["ServiceManagedMode"].isNull())
			securityPoliciesObject.serviceManagedMode = valueSecurityPoliciesSecurityPolicy["ServiceManagedMode"].asString();
		if(!valueSecurityPoliciesSecurityPolicy["CreateTime"].isNull())
			securityPoliciesObject.createTime = valueSecurityPoliciesSecurityPolicy["CreateTime"].asString();
		auto allTagsNode = valueSecurityPoliciesSecurityPolicy["Tags"]["Tag"];
		for (auto valueSecurityPoliciesSecurityPolicyTagsTag : allTagsNode)
		{
			SecurityPolicy::Tag tagsObject;
			if(!valueSecurityPoliciesSecurityPolicyTagsTag["Key"].isNull())
				tagsObject.key = valueSecurityPoliciesSecurityPolicyTagsTag["Key"].asString();
			if(!valueSecurityPoliciesSecurityPolicyTagsTag["Value"].isNull())
				tagsObject.value = valueSecurityPoliciesSecurityPolicyTagsTag["Value"].asString();
			securityPoliciesObject.tags.push_back(tagsObject);
		}
		auto allCiphers = value["Ciphers"]["Cipher"];
		for (auto value : allCiphers)
			securityPoliciesObject.ciphers.push_back(value.asString());
		auto allTLSVersions = value["TLSVersions"]["TLSVersion"];
		for (auto value : allTLSVersions)
			securityPoliciesObject.tLSVersions.push_back(value.asString());
		securityPolicies_.push_back(securityPoliciesObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListSecurityPoliciesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListSecurityPoliciesResult::getNextToken()const
{
	return nextToken_;
}

int ListSecurityPoliciesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListSecurityPoliciesResult::SecurityPolicy> ListSecurityPoliciesResult::getSecurityPolicies()const
{
	return securityPolicies_;
}

