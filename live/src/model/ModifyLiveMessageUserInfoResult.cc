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

#include <alibabacloud/live/model/ModifyLiveMessageUserInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

ModifyLiveMessageUserInfoResult::ModifyLiveMessageUserInfoResult() :
	ServiceResult()
{}

ModifyLiveMessageUserInfoResult::ModifyLiveMessageUserInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyLiveMessageUserInfoResult::~ModifyLiveMessageUserInfoResult()
{}

void ModifyLiveMessageUserInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFailListNode = value["FailList"]["FailGroups"];
	for (auto valueFailListFailGroups : allFailListNode)
	{
		FailGroups failListObject;
		if(!valueFailListFailGroups["Code"].isNull())
			failListObject.code = std::stoi(valueFailListFailGroups["Code"].asString());
		if(!valueFailListFailGroups["GroupId"].isNull())
			failListObject.groupId = valueFailListFailGroups["GroupId"].asString();
		if(!valueFailListFailGroups["Reason"].isNull())
			failListObject.reason = valueFailListFailGroups["Reason"].asString();
		if(!valueFailListFailGroups["Success"].isNull())
			failListObject.success = valueFailListFailGroups["Success"].asString() == "true";
		failList_.push_back(failListObject);
	}
	auto allSuccessListNode = value["SuccessList"]["SuccessGroups"];
	for (auto valueSuccessListSuccessGroups : allSuccessListNode)
	{
		SuccessGroups successListObject;
		if(!valueSuccessListSuccessGroups["GroupId"].isNull())
			successListObject.groupId = valueSuccessListSuccessGroups["GroupId"].asString();
		if(!valueSuccessListSuccessGroups["Success"].isNull())
			successListObject.success = valueSuccessListSuccessGroups["Success"].asString() == "true";
		successList_.push_back(successListObject);
	}

}

std::vector<ModifyLiveMessageUserInfoResult::SuccessGroups> ModifyLiveMessageUserInfoResult::getSuccessList()const
{
	return successList_;
}

std::vector<ModifyLiveMessageUserInfoResult::FailGroups> ModifyLiveMessageUserInfoResult::getFailList()const
{
	return failList_;
}

