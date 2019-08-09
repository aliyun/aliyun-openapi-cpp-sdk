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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allAppPolicyList = value["AppPolicyList"]["AppPolicy"];
	for (auto value : allAppPolicyList)
	{
		AppPolicy appPolicyListObject;
		if(!value["AppId"].isNull())
			appPolicyListObject.appId = value["AppId"].asString();
		if(!value["CreationTime"].isNull())
			appPolicyListObject.creationTime = value["CreationTime"].asString();
		if(!value["PolicyName"].isNull())
			appPolicyListObject.policyName = value["PolicyName"].asString();
		if(!value["PolicyType"].isNull())
			appPolicyListObject.policyType = value["PolicyType"].asString();
		if(!value["PolicyValue"].isNull())
			appPolicyListObject.policyValue = value["PolicyValue"].asString();
		if(!value["Description"].isNull())
			appPolicyListObject.description = value["Description"].asString();
		if(!value["ModificationTime"].isNull())
			appPolicyListObject.modificationTime = value["ModificationTime"].asString();
		appPolicyList_.push_back(appPolicyListObject);
	}

}

std::vector<ListAppPoliciesForIdentityResult::AppPolicy> ListAppPoliciesForIdentityResult::getAppPolicyList()const
{
	return appPolicyList_;
}

