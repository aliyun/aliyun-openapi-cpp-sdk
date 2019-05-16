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

#include <alibabacloud/vod/model/GetAttachedMediaInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetAttachedMediaInfoResult::GetAttachedMediaInfoResult() :
	ServiceResult()
{}

GetAttachedMediaInfoResult::GetAttachedMediaInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAttachedMediaInfoResult::~GetAttachedMediaInfoResult()
{}

void GetAttachedMediaInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allAttachedMediaList = value["AttachedMediaList"]["AttachedMedia"];
	for (auto value : allAttachedMediaList)
	{
		AttachedMedia attachedMediaListObject;
		if(!value["MediaId"].isNull())
			attachedMediaListObject.mediaId = value["MediaId"].asString();
		if(!value["Title"].isNull())
			attachedMediaListObject.title = value["Title"].asString();
		if(!value["Type"].isNull())
			attachedMediaListObject.type = value["Type"].asString();
		if(!value["Tags"].isNull())
			attachedMediaListObject.tags = value["Tags"].asString();
		if(!value["URL"].isNull())
			attachedMediaListObject.uRL = value["URL"].asString();
		if(!value["Description"].isNull())
			attachedMediaListObject.description = value["Description"].asString();
		if(!value["FileSize"].isNull())
			attachedMediaListObject.fileSize = std::stol(value["FileSize"].asString());
		if(!value["StorageLocation"].isNull())
			attachedMediaListObject.storageLocation = std::stol(value["StorageLocation"].asString());
		if(!value["CreationTime"].isNull())
			attachedMediaListObject.creationTime = value["CreationTime"].asString();
		if(!value["ModificationTime"].isNull())
			attachedMediaListObject.modificationTime = value["ModificationTime"].asString();
		if(!value["AppId"].isNull())
			attachedMediaListObject.appId = value["AppId"].asString();
		if(!value["Status"].isNull())
			attachedMediaListObject.status = value["Status"].asString();
		if(!value["OnlineStatus"].isNull())
			attachedMediaListObject.onlineStatus = value["OnlineStatus"].asString();
		if(!value["Icon"].isNull())
			attachedMediaListObject.icon = value["Icon"].asString();
		if(!value["RegionId"].isNull())
			attachedMediaListObject.regionId = value["RegionId"].asString();
		auto allCategories = value["Categories"]["Category"];
		for (auto value : allCategories)
		{
			AttachedMedia::Category categoriesObject;
			if(!value["CateId"].isNull())
				categoriesObject.cateId = std::stol(value["CateId"].asString());
			if(!value["CateName"].isNull())
				categoriesObject.cateName = value["CateName"].asString();
			if(!value["Level"].isNull())
				categoriesObject.level = std::stol(value["Level"].asString());
			if(!value["ParentId"].isNull())
				categoriesObject.parentId = std::stol(value["ParentId"].asString());
			attachedMediaListObject.categories.push_back(categoriesObject);
		}
		attachedMediaList_.push_back(attachedMediaListObject);
	}
	auto allNonExistMediaIds = value["NonExistMediaIds"]["MediaId"];
	for (const auto &item : allNonExistMediaIds)
		nonExistMediaIds_.push_back(item.asString());

}

std::vector<std::string> GetAttachedMediaInfoResult::getNonExistMediaIds()const
{
	return nonExistMediaIds_;
}

std::vector<GetAttachedMediaInfoResult::AttachedMedia> GetAttachedMediaInfoResult::getAttachedMediaList()const
{
	return attachedMediaList_;
}

