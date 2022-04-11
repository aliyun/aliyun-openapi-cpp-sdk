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

#include <alibabacloud/vod/model/ListAppPoliciesForIdentityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListAppPoliciesForIdentityResult::ListAppPoliciesForIdentityResult() :
	ServiceResult()
{}

ListAppPoliciesForIdentityResult::ListAppPoliciesForIdentityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppPoliciesForIdentityResult::~ListAppPoliciesForIdentityResult()
{}

void ListAppPoliciesForIdentityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAppPolicyListNode = value["AppPolicyList"]["AppPolicy"];
	for (auto valueAppPolicyListAppPolicy : allAppPolicyListNode)
	{
		AppPolicy appPolicyListObject;
		if(!valueAppPolicyListAppPolicy["CreationTime"].isNull())
			appPolicyListObject.creationTime = valueAppPolicyListAppPolicy["CreationTime"].asString();
		if(!valueAppPolicyListAppPolicy["Description"].isNull())
			appPolicyListObject.description = valueAppPolicyListAppPolicy["Description"].asString();
		if(!valueAppPolicyListAppPolicy["AppId"].isNull())
			appPolicyListObject.appId = valueAppPolicyListAppPolicy["AppId"].asString();
		if(!valueAppPolicyListAppPolicy["PolicyValue"].isNull())
			appPolicyListObject.policyValue = valueAppPolicyListAppPolicy["PolicyValue"].asString();
		if(!valueAppPolicyListAppPolicy["PolicyName"].isNull())
			appPolicyListObject.policyName = valueAppPolicyListAppPolicy["PolicyName"].asString();
		if(!valueAppPolicyListAppPolicy["ModificationTime"].isNull())
			appPolicyListObject.modificationTime = valueAppPolicyListAppPolicy["ModificationTime"].asString();
		if(!valueAppPolicyListAppPolicy["PolicyType"].isNull())
			appPolicyListObject.policyType = valueAppPolicyListAppPolicy["PolicyType"].asString();
		appPolicyList_.push_back(appPolicyListObject);
	}

}

std::vector<ListAppPoliciesForIdentityResult::AppPolicy> ListAppPoliciesForIdentityResult::getAppPolicyList()const
{
	return appPolicyList_;
}

