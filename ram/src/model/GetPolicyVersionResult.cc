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

#include <alibabacloud/ram/model/GetPolicyVersionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

GetPolicyVersionResult::GetPolicyVersionResult() :
	ServiceResult()
{}

GetPolicyVersionResult::GetPolicyVersionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPolicyVersionResult::~GetPolicyVersionResult()
{}

void GetPolicyVersionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto policyVersionNode = value["PolicyVersion"];
	if(!policyVersionNode["IsDefaultVersion"].isNull())
		policyVersion_.isDefaultVersion = policyVersionNode["IsDefaultVersion"].asString() == "true";
	if(!policyVersionNode["PolicyDocument"].isNull())
		policyVersion_.policyDocument = policyVersionNode["PolicyDocument"].asString();
	if(!policyVersionNode["VersionId"].isNull())
		policyVersion_.versionId = policyVersionNode["VersionId"].asString();
	if(!policyVersionNode["CreateDate"].isNull())
		policyVersion_.createDate = policyVersionNode["CreateDate"].asString();

}

GetPolicyVersionResult::PolicyVersion GetPolicyVersionResult::getPolicyVersion()const
{
	return policyVersion_;
}

