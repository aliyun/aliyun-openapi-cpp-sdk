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

#include <alibabacloud/resourcemanager/model/GetPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

GetPolicyResult::GetPolicyResult() :
	ServiceResult()
{}

GetPolicyResult::GetPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPolicyResult::~GetPolicyResult()
{}

void GetPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto policyNode = value["Policy"];
	if(!policyNode["AttachmentCount"].isNull())
		policy_.attachmentCount = std::stoi(policyNode["AttachmentCount"].asString());
	if(!policyNode["CreateDate"].isNull())
		policy_.createDate = policyNode["CreateDate"].asString();
	if(!policyNode["DefaultVersion"].isNull())
		policy_.defaultVersion = policyNode["DefaultVersion"].asString();
	if(!policyNode["Description"].isNull())
		policy_.description = policyNode["Description"].asString();
	if(!policyNode["PolicyDocument"].isNull())
		policy_.policyDocument = policyNode["PolicyDocument"].asString();
	if(!policyNode["PolicyName"].isNull())
		policy_.policyName = policyNode["PolicyName"].asString();
	if(!policyNode["PolicyType"].isNull())
		policy_.policyType = policyNode["PolicyType"].asString();
	if(!policyNode["UpdateDate"].isNull())
		policy_.updateDate = policyNode["UpdateDate"].asString();

}

GetPolicyResult::Policy GetPolicyResult::getPolicy()const
{
	return policy_;
}

