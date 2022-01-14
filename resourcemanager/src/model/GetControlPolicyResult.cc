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

#include <alibabacloud/resourcemanager/model/GetControlPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

GetControlPolicyResult::GetControlPolicyResult() :
	ServiceResult()
{}

GetControlPolicyResult::GetControlPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetControlPolicyResult::~GetControlPolicyResult()
{}

void GetControlPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto controlPolicyNode = value["ControlPolicy"];
	if(!controlPolicyNode["PolicyDocument"].isNull())
		controlPolicy_.policyDocument = controlPolicyNode["PolicyDocument"].asString();
	if(!controlPolicyNode["UpdateDate"].isNull())
		controlPolicy_.updateDate = controlPolicyNode["UpdateDate"].asString();
	if(!controlPolicyNode["Description"].isNull())
		controlPolicy_.description = controlPolicyNode["Description"].asString();
	if(!controlPolicyNode["EffectScope"].isNull())
		controlPolicy_.effectScope = controlPolicyNode["EffectScope"].asString();
	if(!controlPolicyNode["AttachmentCount"].isNull())
		controlPolicy_.attachmentCount = controlPolicyNode["AttachmentCount"].asString();
	if(!controlPolicyNode["PolicyName"].isNull())
		controlPolicy_.policyName = controlPolicyNode["PolicyName"].asString();
	if(!controlPolicyNode["PolicyId"].isNull())
		controlPolicy_.policyId = controlPolicyNode["PolicyId"].asString();
	if(!controlPolicyNode["CreateDate"].isNull())
		controlPolicy_.createDate = controlPolicyNode["CreateDate"].asString();
	if(!controlPolicyNode["PolicyType"].isNull())
		controlPolicy_.policyType = controlPolicyNode["PolicyType"].asString();

}

GetControlPolicyResult::ControlPolicy GetControlPolicyResult::getControlPolicy()const
{
	return controlPolicy_;
}

