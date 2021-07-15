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

#include <alibabacloud/alb/model/ListSystemSecurityPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

ListSystemSecurityPoliciesResult::ListSystemSecurityPoliciesResult() :
	ServiceResult()
{}

ListSystemSecurityPoliciesResult::ListSystemSecurityPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSystemSecurityPoliciesResult::~ListSystemSecurityPoliciesResult()
{}

void ListSystemSecurityPoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecurityPoliciesNode = value["SecurityPolicies"]["SecurityPolicy"];
	for (auto valueSecurityPoliciesSecurityPolicy : allSecurityPoliciesNode)
	{
		SecurityPolicy securityPoliciesObject;
		if(!valueSecurityPoliciesSecurityPolicy["SecurityPolicyId"].isNull())
			securityPoliciesObject.securityPolicyId = valueSecurityPoliciesSecurityPolicy["SecurityPolicyId"].asString();
		auto allCiphers = value["Ciphers"]["Cipher"];
		for (auto value : allCiphers)
			securityPoliciesObject.ciphers.push_back(value.asString());
		auto allTLSVersions = value["TLSVersions"]["Version"];
		for (auto value : allTLSVersions)
			securityPoliciesObject.tLSVersions.push_back(value.asString());
		securityPolicies_.push_back(securityPoliciesObject);
	}

}

std::vector<ListSystemSecurityPoliciesResult::SecurityPolicy> ListSystemSecurityPoliciesResult::getSecurityPolicies()const
{
	return securityPolicies_;
}

