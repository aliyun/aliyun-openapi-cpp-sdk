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

#include <alibabacloud/aegis/model/DescribeScreenTitlesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeScreenTitlesResult::DescribeScreenTitlesResult() :
	ServiceResult()
{}

DescribeScreenTitlesResult::DescribeScreenTitlesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScreenTitlesResult::~DescribeScreenTitlesResult()
{}

void DescribeScreenTitlesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSasScreenSettingListNode = value["SasScreenSettingList"]["SasScreenSetting"];
	for (auto valueSasScreenSettingListSasScreenSetting : allSasScreenSettingListNode)
	{
		SasScreenSetting sasScreenSettingListObject;
		if(!valueSasScreenSettingListSasScreenSetting["ScreenID"].isNull())
			sasScreenSettingListObject.screenID = std::stol(valueSasScreenSettingListSasScreenSetting["ScreenID"].asString());
		if(!valueSasScreenSettingListSasScreenSetting["ScreenTitle"].isNull())
			sasScreenSettingListObject.screenTitle = valueSasScreenSettingListSasScreenSetting["ScreenTitle"].asString();
		sasScreenSettingList_.push_back(sasScreenSettingListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeScreenTitlesResult::SasScreenSetting> DescribeScreenTitlesResult::getSasScreenSettingList()const
{
	return sasScreenSettingList_;
}

bool DescribeScreenTitlesResult::getSuccess()const
{
	return success_;
}

