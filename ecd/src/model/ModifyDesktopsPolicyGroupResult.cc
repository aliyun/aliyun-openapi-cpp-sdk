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

#include <alibabacloud/ecd/model/ModifyDesktopsPolicyGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

ModifyDesktopsPolicyGroupResult::ModifyDesktopsPolicyGroupResult() :
	ServiceResult()
{}

ModifyDesktopsPolicyGroupResult::ModifyDesktopsPolicyGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyDesktopsPolicyGroupResult::~ModifyDesktopsPolicyGroupResult()
{}

void ModifyDesktopsPolicyGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allModifyResultsNode = value["ModifyResults"]["ModifyResult"];
	for (auto valueModifyResultsModifyResult : allModifyResultsNode)
	{
		ModifyResult modifyResultsObject;
		if(!valueModifyResultsModifyResult["Code"].isNull())
			modifyResultsObject.code = valueModifyResultsModifyResult["Code"].asString();
		if(!valueModifyResultsModifyResult["Message"].isNull())
			modifyResultsObject.message = valueModifyResultsModifyResult["Message"].asString();
		if(!valueModifyResultsModifyResult["DesktopId"].isNull())
			modifyResultsObject.desktopId = valueModifyResultsModifyResult["DesktopId"].asString();
		if(!valueModifyResultsModifyResult["CheckResult"].isNull())
			modifyResultsObject.checkResult = valueModifyResultsModifyResult["CheckResult"].asString() == "true";
		modifyResults_.push_back(modifyResultsObject);
	}

}

std::vector<ModifyDesktopsPolicyGroupResult::ModifyResult> ModifyDesktopsPolicyGroupResult::getModifyResults()const
{
	return modifyResults_;
}

