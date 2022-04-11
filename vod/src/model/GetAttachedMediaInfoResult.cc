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
	auto allAttachedMediaListNode = value["AttachedMediaList"]["AttachedMedia"];
	for (auto valueAttachedMediaListAttachedMedia : allAttachedMediaListNode)
	{
		AttachedMedia attachedMediaListObject;
		if(!valueAttachedMediaListAttachedMedia["Type"].isNull())
			attachedMediaListObject.type = valueAttachedMediaListAttachedMedia["Type"].asString();
		if(!valueAttachedMediaListAttachedMedia["StorageLocation"].isNull())
			attachedMediaListObject.storageLocation = valueAttachedMediaListAttachedMedia["StorageLocation"].asString();
		if(!valueAttachedMediaListAttachedMedia["CreationTime"].isNull())
			attachedMediaListObject.creationTime = valueAttachedMediaListAttachedMedia["CreationTime"].asString();
		if(!valueAttachedMediaListAttachedMedia["Status"].isNull())
			attachedMediaListObject.status = valueAttachedMediaListAttachedMedia["Status"].asString();
		if(!valueAttachedMediaListAttachedMedia["Icon"].isNull())
			attachedMediaListObject.icon = valueAttachedMediaListAttachedMedia["Icon"].asString();
		if(!valueAttachedMediaListAttachedMedia["Tags"].isNull())
			attachedMediaListObject.tags = valueAttachedMediaListAttachedMedia["Tags"].asString();
		if(!valueAttachedMediaListAttachedMedia["ModificationTime"].isNull())
			attachedMediaListObject.modificationTime = valueAttachedMediaListAttachedMedia["ModificationTime"].asString();
		if(!valueAttachedMediaListAttachedMedia["MediaId"].isNull())
			attachedMediaListObject.mediaId = valueAttachedMediaListAttachedMedia["MediaId"].asString();
		if(!valueAttachedMediaListAttachedMedia["RegionId"].isNull())
			attachedMediaListObject.regionId = valueAttachedMediaListAttachedMedia["RegionId"].asString();
		if(!valueAttachedMediaListAttachedMedia["Description"].isNull())
			attachedMediaListObject.description = valueAttachedMediaListAttachedMedia["Description"].asString();
		if(!valueAttachedMediaListAttachedMedia["AppId"].isNull())
			attachedMediaListObject.appId = valueAttachedMediaListAttachedMedia["AppId"].asString();
		if(!valueAttachedMediaListAttachedMedia["URL"].isNull())
			attachedMediaListObject.uRL = valueAttachedMediaListAttachedMedia["URL"].asString();
		if(!valueAttachedMediaListAttachedMedia["Title"].isNull())
			attachedMediaListObject.title = valueAttachedMediaListAttachedMedia["Title"].asString();
		if(!valueAttachedMediaListAttachedMedia["OnlineStatus"].isNull())
			attachedMediaListObject.onlineStatus = valueAttachedMediaListAttachedMedia["OnlineStatus"].asString();
		if(!valueAttachedMediaListAttachedMedia["FileSize"].isNull())
			attachedMediaListObject.fileSize = std::stol(valueAttachedMediaListAttachedMedia["FileSize"].asString());
		auto allCategoriesNode = valueAttachedMediaListAttachedMedia["Categories"]["Category"];
		for (auto valueAttachedMediaListAttachedMediaCategoriesCategory : allCategoriesNode)
		{
			AttachedMedia::Category categoriesObject;
			if(!valueAttachedMediaListAttachedMediaCategoriesCategory["ParentId"].isNull())
				categoriesObject.parentId = std::stol(valueAttachedMediaListAttachedMediaCategoriesCategory["ParentId"].asString());
			if(!valueAttachedMediaListAttachedMediaCategoriesCategory["CateName"].isNull())
				categoriesObject.cateName = valueAttachedMediaListAttachedMediaCategoriesCategory["CateName"].asString();
			if(!valueAttachedMediaListAttachedMediaCategoriesCategory["CateId"].isNull())
				categoriesObject.cateId = std::stol(valueAttachedMediaListAttachedMediaCategoriesCategory["CateId"].asString());
			if(!valueAttachedMediaListAttachedMediaCategoriesCategory["Level"].isNull())
				categoriesObject.level = std::stol(valueAttachedMediaListAttachedMediaCategoriesCategory["Level"].asString());
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

