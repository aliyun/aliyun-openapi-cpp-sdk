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

#include <alibabacloud/kms/model/CreatePolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

CreatePolicyResult::CreatePolicyResult() :
	ServiceResult()
{}

CreatePolicyResult::CreatePolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreatePolicyResult::~CreatePolicyResult()
{}

void CreatePolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Arn"].isNull())
		arn_ = value["Arn"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["KmsInstance"].isNull())
		kmsInstance_ = value["KmsInstance"].asString();
	if(!value["Permissions"].isNull())
		permissions_ = value["Permissions"].asString();
	if(!value["Resources"].isNull())
		resources_ = value["Resources"].asString();
	if(!value["AccessControlRules"].isNull())
		accessControlRules_ = value["AccessControlRules"].asString();

}

std::string CreatePolicyResult::getKmsInstance()const
{
	return kmsInstance_;
}

std::string CreatePolicyResult::getDescription()const
{
	return description_;
}

std::string CreatePolicyResult::getAccessControlRules()const
{
	return accessControlRules_;
}

std::string CreatePolicyResult::getPermissions()const
{
	return permissions_;
}

std::string CreatePolicyResult::getResources()const
{
	return resources_;
}

std::string CreatePolicyResult::getArn()const
{
	return arn_;
}

std::string CreatePolicyResult::getName()const
{
	return name_;
}

