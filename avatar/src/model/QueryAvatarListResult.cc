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

#include <alibabacloud/avatar/model/QueryAvatarListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Avatar;
using namespace AlibabaCloud::Avatar::Model;

QueryAvatarListResult::QueryAvatarListResult() :
	ServiceResult()
{}

QueryAvatarListResult::QueryAvatarListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAvatarListResult::~QueryAvatarListResult()
{}

void QueryAvatarListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["PageNo"].isNull())
		data_.pageNo = std::stoi(dataNode["PageNo"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalPage"].isNull())
		data_.totalPage = std::stoi(dataNode["TotalPage"].asString());
	auto allListNode = dataNode["List"]["listItem"];
	for (auto dataNodeListlistItem : allListNode)
	{
		Data::ListItem listItemObject;
		if(!dataNodeListlistItem["Code"].isNull())
			listItemObject.code = dataNodeListlistItem["Code"].asString();
		if(!dataNodeListlistItem["Name"].isNull())
			listItemObject.name = dataNodeListlistItem["Name"].asString();
		if(!dataNodeListlistItem["Image"].isNull())
			listItemObject.image = dataNodeListlistItem["Image"].asString();
		if(!dataNodeListlistItem["Portrait"].isNull())
			listItemObject.portrait = dataNodeListlistItem["Portrait"].asString();
		if(!dataNodeListlistItem["Description"].isNull())
			listItemObject.description = dataNodeListlistItem["Description"].asString();
		if(!dataNodeListlistItem["AvatarType"].isNull())
			listItemObject.avatarType = dataNodeListlistItem["AvatarType"].asString();
		if(!dataNodeListlistItem["ModelType"].isNull())
			listItemObject.modelType = dataNodeListlistItem["ModelType"].asString();
		if(!dataNodeListlistItem["MakeStatus"].isNull())
			listItemObject.makeStatus = dataNodeListlistItem["MakeStatus"].asString();
		if(!dataNodeListlistItem["MakeFailReason"].isNull())
			listItemObject.makeFailReason = dataNodeListlistItem["MakeFailReason"].asString();
		if(!dataNodeListlistItem["MakeStage"].isNull())
			listItemObject.makeStage = dataNodeListlistItem["MakeStage"].asString();
		auto supportedResolutionsNode = value["SupportedResolutions"];
		auto allOfflineNode = supportedResolutionsNode["Offline"]["offlineItem"];
		for (auto supportedResolutionsNodeOfflineofflineItem : allOfflineNode)
		{
			Data::ListItem::SupportedResolutions::OfflineItem offlineItemObject;
			if(!supportedResolutionsNodeOfflineofflineItem["Width"].isNull())
				offlineItemObject.width = std::stoi(supportedResolutionsNodeOfflineofflineItem["Width"].asString());
			if(!supportedResolutionsNodeOfflineofflineItem["Height"].isNull())
				offlineItemObject.height = std::stoi(supportedResolutionsNodeOfflineofflineItem["Height"].asString());
			if(!supportedResolutionsNodeOfflineofflineItem["Desc"].isNull())
				offlineItemObject.desc = supportedResolutionsNodeOfflineofflineItem["Desc"].asString();
			listItemObject.supportedResolutions.offline.push_back(offlineItemObject);
		}
		auto allOnlineNode = supportedResolutionsNode["Online"]["onlineItem"];
		for (auto supportedResolutionsNodeOnlineonlineItem : allOnlineNode)
		{
			Data::ListItem::SupportedResolutions::OnlineItem onlineItemObject;
			if(!supportedResolutionsNodeOnlineonlineItem["Width"].isNull())
				onlineItemObject.width = std::stoi(supportedResolutionsNodeOnlineonlineItem["Width"].asString());
			if(!supportedResolutionsNodeOnlineonlineItem["Height"].isNull())
				onlineItemObject.height = std::stoi(supportedResolutionsNodeOnlineonlineItem["Height"].asString());
			if(!supportedResolutionsNodeOnlineonlineItem["Desc"].isNull())
				onlineItemObject.desc = supportedResolutionsNodeOnlineonlineItem["Desc"].asString();
			listItemObject.supportedResolutions.online.push_back(onlineItemObject);
		}
		data_.list.push_back(listItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryAvatarListResult::getMessage()const
{
	return message_;
}

QueryAvatarListResult::Data QueryAvatarListResult::getData()const
{
	return data_;
}

std::string QueryAvatarListResult::getCode()const
{
	return code_;
}

bool QueryAvatarListResult::getSuccess()const
{
	return success_;
}

