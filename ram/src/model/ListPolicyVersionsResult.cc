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

#include <alibabacloud/ram/model/ListPolicyVersionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

ListPolicyVersionsResult::ListPolicyVersionsResult() :
	ServiceResult()
{}

ListPolicyVersionsResult::ListPolicyVersionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPolicyVersionsResult::~ListPolicyVersionsResult()
{}

void ListPolicyVersionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPolicyVersionsNode = value["PolicyVersions"]["PolicyVersion"];
	for (auto valuePolicyVersionsPolicyVersion : allPolicyVersionsNode)
	{
		PolicyVersion policyVersionsObject;
		if(!valuePolicyVersionsPolicyVersion["IsDefaultVersion"].isNull())
			policyVersionsObject.isDefaultVersion = valuePolicyVersionsPolicyVersion["IsDefaultVersion"].asString() == "true";
		if(!valuePolicyVersionsPolicyVersion["PolicyDocument"].isNull())
			policyVersionsObject.policyDocument = valuePolicyVersionsPolicyVersion["PolicyDocument"].asString();
		if(!valuePolicyVersionsPolicyVersion["VersionId"].isNull())
			policyVersionsObject.versionId = valuePolicyVersionsPolicyVersion["VersionId"].asString();
		if(!valuePolicyVersionsPolicyVersion["CreateDate"].isNull())
			policyVersionsObject.createDate = valuePolicyVersionsPolicyVersion["CreateDate"].asString();
		policyVersions_.push_back(policyVersionsObject);
	}

}

std::vector<ListPolicyVersionsResult::PolicyVersion> ListPolicyVersionsResult::getPolicyVersions()const
{
	return policyVersions_;
}

