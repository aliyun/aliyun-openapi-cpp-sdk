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

#include <alibabacloud/avatar/model/QueryAvatarResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Avatar;
using namespace AlibabaCloud::Avatar::Model;

QueryAvatarResult::QueryAvatarResult() :
	ServiceResult()
{}

QueryAvatarResult::QueryAvatarResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAvatarResult::~QueryAvatarResult()
{}

void QueryAvatarResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["Portrait"].isNull())
		data_.portrait = dataNode["Portrait"].asString();
	if(!dataNode["Image"].isNull())
		data_.image = dataNode["Image"].asString();
	if(!dataNode["AllLocateImages"].isNull())
		data_.allLocateImages = dataNode["AllLocateImages"].asString();
	if(!dataNode["ModelType"].isNull())
		data_.modelType = dataNode["ModelType"].asString();
	if(!dataNode["AvatarType"].isNull())
		data_.avatarType = dataNode["AvatarType"].asString();
	if(!dataNode["MakeStatus"].isNull())
		data_.makeStatus = dataNode["MakeStatus"].asString();
	if(!dataNode["MakeFailReason"].isNull())
		data_.makeFailReason = dataNode["MakeFailReason"].asString();
	if(!dataNode["MakeStage"].isNull())
		data_.makeStage = dataNode["MakeStage"].asString();
	auto supportedResolutionsNode = dataNode["SupportedResolutions"];
	auto allOfflineNode = supportedResolutionsNode["Offline"]["offlineItem"];
	for (auto supportedResolutionsNodeOfflineofflineItem : allOfflineNode)
	{
		Data::SupportedResolutions::OfflineItem offlineItemObject;
		if(!supportedResolutionsNodeOfflineofflineItem["Width"].isNull())
			offlineItemObject.width = std::stoi(supportedResolutionsNodeOfflineofflineItem["Width"].asString());
		if(!supportedResolutionsNodeOfflineofflineItem["Height"].isNull())
			offlineItemObject.height = std::stoi(supportedResolutionsNodeOfflineofflineItem["Height"].asString());
		if(!supportedResolutionsNodeOfflineofflineItem["Desc"].isNull())
			offlineItemObject.desc = supportedResolutionsNodeOfflineofflineItem["Desc"].asString();
		data_.supportedResolutions.offline.push_back(offlineItemObject);
	}
	auto allOnlineNode = supportedResolutionsNode["Online"]["onlineItem"];
	for (auto supportedResolutionsNodeOnlineonlineItem : allOnlineNode)
	{
		Data::SupportedResolutions::OnlineItem onlineItemObject;
		if(!supportedResolutionsNodeOnlineonlineItem["Width"].isNull())
			onlineItemObject.width = std::stoi(supportedResolutionsNodeOnlineonlineItem["Width"].asString());
		if(!supportedResolutionsNodeOnlineonlineItem["Height"].isNull())
			onlineItemObject.height = std::stoi(supportedResolutionsNodeOnlineonlineItem["Height"].asString());
		if(!supportedResolutionsNodeOnlineonlineItem["Desc"].isNull())
			onlineItemObject.desc = supportedResolutionsNodeOnlineonlineItem["Desc"].asString();
		data_.supportedResolutions.online.push_back(onlineItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryAvatarResult::getMessage()const
{
	return message_;
}

QueryAvatarResult::Data QueryAvatarResult::getData()const
{
	return data_;
}

std::string QueryAvatarResult::getCode()const
{
	return code_;
}

bool QueryAvatarResult::getSuccess()const
{
	return success_;
}

