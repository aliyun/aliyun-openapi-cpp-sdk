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

#include <alibabacloud/aegis/model/DescribeScreenSettingsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeScreenSettingsResult::DescribeScreenSettingsResult() :
	ServiceResult()
{}

DescribeScreenSettingsResult::DescribeScreenSettingsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScreenSettingsResult::~DescribeScreenSettingsResult()
{}

void DescribeScreenSettingsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSasScreenSettingListNode = value["SasScreenSettingList"]["SasScreenSettingListItem"];
	for (auto valueSasScreenSettingListSasScreenSettingListItem : allSasScreenSettingListNode)
	{
		SasScreenSettingListItem sasScreenSettingListObject;
		if(!valueSasScreenSettingListSasScreenSettingListItem["ScreenSettingTitle"].isNull())
			sasScreenSettingListObject.screenSettingTitle = valueSasScreenSettingListSasScreenSettingListItem["ScreenSettingTitle"].asString();
		if(!valueSasScreenSettingListSasScreenSettingListItem["ScreenSettingIdMap"].isNull())
			sasScreenSettingListObject.screenSettingIdMap = valueSasScreenSettingListSasScreenSettingListItem["ScreenSettingIdMap"].asString();
		sasScreenSettingList_.push_back(sasScreenSettingListObject);
	}

}

std::vector<DescribeScreenSettingsResult::SasScreenSettingListItem> DescribeScreenSettingsResult::getSasScreenSettingList()const
{
	return sasScreenSettingList_;
}

