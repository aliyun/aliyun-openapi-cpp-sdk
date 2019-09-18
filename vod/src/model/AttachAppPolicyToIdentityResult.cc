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

#include <alibabacloud/vod/model/AttachAppPolicyToIdentityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

AttachAppPolicyToIdentityResult::AttachAppPolicyToIdentityResult() :
	ServiceResult()
{}

AttachAppPolicyToIdentityResult::AttachAppPolicyToIdentityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AttachAppPolicyToIdentityResult::~AttachAppPolicyToIdentityResult()
{}

void AttachAppPolicyToIdentityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNonExistPolicyNames = value["NonExistPolicyNames"]["PolicyName"];
	for (const auto &item : allNonExistPolicyNames)
		nonExistPolicyNames_.push_back(item.asString());
	auto allFailedPolicyNames = value["FailedPolicyNames"]["PolicyName"];
	for (const auto &item : allFailedPolicyNames)
		failedPolicyNames_.push_back(item.asString());

}

std::vector<std::string> AttachAppPolicyToIdentityResult::getNonExistPolicyNames()const
{
	return nonExistPolicyNames_;
}

std::vector<std::string> AttachAppPolicyToIdentityResult::getFailedPolicyNames()const
{
	return failedPolicyNames_;
}

