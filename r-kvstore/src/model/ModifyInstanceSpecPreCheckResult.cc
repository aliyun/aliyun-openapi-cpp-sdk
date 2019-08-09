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

#include <alibabacloud/r-kvstore/model/ModifyInstanceSpecPreCheckResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

ModifyInstanceSpecPreCheckResult::ModifyInstanceSpecPreCheckResult() :
	ServiceResult()
{}

ModifyInstanceSpecPreCheckResult::ModifyInstanceSpecPreCheckResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyInstanceSpecPreCheckResult::~ModifyInstanceSpecPreCheckResult()
{}

void ModifyInstanceSpecPreCheckResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto preCheckResultNode = value["PreCheckResult"];
	if(!preCheckResultNode["UsedMemorySize"].isNull())
		preCheckResult_.usedMemorySize = preCheckResultNode["UsedMemorySize"].asString();
	if(!preCheckResultNode["AllowModify"].isNull())
		preCheckResult_.allowModify = preCheckResultNode["AllowModify"].asString();
	if(!preCheckResultNode["Code"].isNull())
		preCheckResult_.code = preCheckResultNode["Code"].asString();
	if(!preCheckResultNode["Message"].isNull())
		preCheckResult_.message = preCheckResultNode["Message"].asString();
	if(!value["IsAllowModify"].isNull())
		isAllowModify_ = value["IsAllowModify"].asString() == "true";
	if(!value["DisableCommands"].isNull())
		disableCommands_ = value["DisableCommands"].asString();

}

ModifyInstanceSpecPreCheckResult::PreCheckResult ModifyInstanceSpecPreCheckResult::getPreCheckResult()const
{
	return preCheckResult_;
}

std::string ModifyInstanceSpecPreCheckResult::getDisableCommands()const
{
	return disableCommands_;
}

bool ModifyInstanceSpecPreCheckResult::getIsAllowModify()const
{
	return isAllowModify_;
}

