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

#include <alibabacloud/sas/model/GetVulWhitelistResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetVulWhitelistResult::GetVulWhitelistResult() :
	ServiceResult()
{}

GetVulWhitelistResult::GetVulWhitelistResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVulWhitelistResult::~GetVulWhitelistResult()
{}

void GetVulWhitelistResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto vulWhitelistNode = value["VulWhitelist"];
	if(!vulWhitelistNode["Id"].isNull())
		vulWhitelist_.id = std::stol(vulWhitelistNode["Id"].asString());
	if(!vulWhitelistNode["Name"].isNull())
		vulWhitelist_.name = vulWhitelistNode["Name"].asString();
	if(!vulWhitelistNode["Type"].isNull())
		vulWhitelist_.type = vulWhitelistNode["Type"].asString();
	if(!vulWhitelistNode["AliasName"].isNull())
		vulWhitelist_.aliasName = vulWhitelistNode["AliasName"].asString();
	if(!vulWhitelistNode["Reason"].isNull())
		vulWhitelist_.reason = vulWhitelistNode["Reason"].asString();
	if(!vulWhitelistNode["Target"].isNull())
		vulWhitelist_.target = vulWhitelistNode["Target"].asString();
	if(!vulWhitelistNode["Whitelist"].isNull())
		vulWhitelist_.whitelist = vulWhitelistNode["Whitelist"].asString();

}

GetVulWhitelistResult::VulWhitelist GetVulWhitelistResult::getVulWhitelist()const
{
	return vulWhitelist_;
}

