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

#include <alibabacloud/voicenavigator/model/BatchCreateSandBoxWhileListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

BatchCreateSandBoxWhileListResult::BatchCreateSandBoxWhileListResult() :
	ServiceResult()
{}

BatchCreateSandBoxWhileListResult::BatchCreateSandBoxWhileListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchCreateSandBoxWhileListResult::~BatchCreateSandBoxWhileListResult()
{}

void BatchCreateSandBoxWhileListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWhiteListNode = value["WhiteList"]["WhiteListItem"];
	for (auto valueWhiteListWhiteListItem : allWhiteListNode)
	{
		WhiteListItem whiteListObject;
		if(!valueWhiteListWhiteListItem["Uuid"].isNull())
			whiteListObject.uuid = valueWhiteListWhiteListItem["Uuid"].asString();
		if(!valueWhiteListWhiteListItem["PhoneNumber"].isNull())
			whiteListObject.phoneNumber = valueWhiteListWhiteListItem["PhoneNumber"].asString();
		if(!valueWhiteListWhiteListItem["Description"].isNull())
			whiteListObject.description = valueWhiteListWhiteListItem["Description"].asString();
		if(!valueWhiteListWhiteListItem["IsEnable"].isNull())
			whiteListObject.isEnable = std::stoi(valueWhiteListWhiteListItem["IsEnable"].asString());
		if(!valueWhiteListWhiteListItem["GmtCreate"].isNull())
			whiteListObject.gmtCreate = std::stol(valueWhiteListWhiteListItem["GmtCreate"].asString());
		if(!valueWhiteListWhiteListItem["InstanceId"].isNull())
			whiteListObject.instanceId = valueWhiteListWhiteListItem["InstanceId"].asString();
		if(!valueWhiteListWhiteListItem["GmtModified"].isNull())
			whiteListObject.gmtModified = std::stol(valueWhiteListWhiteListItem["GmtModified"].asString());
		if(!valueWhiteListWhiteListItem["Name"].isNull())
			whiteListObject.name = valueWhiteListWhiteListItem["Name"].asString();
		whiteList_.push_back(whiteListObject);
	}
	if(!value["Repeat"].isNull())
		repeat_ = value["Repeat"].asString() == "true";

}

std::vector<BatchCreateSandBoxWhileListResult::WhiteListItem> BatchCreateSandBoxWhileListResult::getWhiteList()const
{
	return whiteList_;
}

bool BatchCreateSandBoxWhileListResult::getRepeat()const
{
	return repeat_;
}

