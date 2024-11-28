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

#include <alibabacloud/vod/model/GetVideoInfosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetVideoInfosResult::GetVideoInfosResult() :
	ServiceResult()
{}

GetVideoInfosResult::GetVideoInfosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVideoInfosResult::~GetVideoInfosResult()
{}

void GetVideoInfosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVideoListNode = value["VideoList"]["Video"];
	for (auto valueVideoListVideo : allVideoListNode)
	{
		Video videoListObject;
		if(!valueVideoListVideo["StorageLocation"].isNull())
			videoListObject.storageLocation = valueVideoListVideo["StorageLocation"].asString();
		if(!valueVideoListVideo["CreationTime"].isNull())
			videoListObject.creationTime = valueVideoListVideo["CreationTime"].asString();
		if(!valueVideoListVideo["Status"].isNull())
			videoListObject.status = valueVideoListVideo["Status"].asString();
		if(!valueVideoListVideo["CateId"].isNull())
			videoListObject.cateId = std::stol(valueVideoListVideo["CateId"].asString());
		if(!valueVideoListVideo["VideoId"].isNull())
			videoListObject.videoId = valueVideoListVideo["VideoId"].asString();
		if(!valueVideoListVideo["DownloadSwitch"].isNull())
			videoListObject.downloadSwitch = valueVideoListVideo["DownloadSwitch"].asString();
		if(!valueVideoListVideo["Tags"].isNull())
			videoListObject.tags = valueVideoListVideo["Tags"].asString();
		if(!valueVideoListVideo["ModificationTime"].isNull())
			videoListObject.modificationTime = valueVideoListVideo["ModificationTime"].asString();
		if(!valueVideoListVideo["RegionId"].isNull())
			videoListObject.regionId = valueVideoListVideo["RegionId"].asString();
		if(!valueVideoListVideo["CustomMediaInfo"].isNull())
			videoListObject.customMediaInfo = valueVideoListVideo["CustomMediaInfo"].asString();
		if(!valueVideoListVideo["CateName"].isNull())
			videoListObject.cateName = valueVideoListVideo["CateName"].asString();
		if(!valueVideoListVideo["Description"].isNull())
			videoListObject.description = valueVideoListVideo["Description"].asString();
		if(!valueVideoListVideo["PreprocessStatus"].isNull())
			videoListObject.preprocessStatus = valueVideoListVideo["PreprocessStatus"].asString();
		if(!valueVideoListVideo["AppId"].isNull())
			videoListObject.appId = valueVideoListVideo["AppId"].asString();
		if(!valueVideoListVideo["Size"].isNull())
			videoListObject.size = std::stol(valueVideoListVideo["Size"].asString());
		if(!valueVideoListVideo["CoverURL"].isNull())
			videoListObject.coverURL = valueVideoListVideo["CoverURL"].asString();
		if(!valueVideoListVideo["TemplateGroupId"].isNull())
			videoListObject.templateGroupId = valueVideoListVideo["TemplateGroupId"].asString();
		if(!valueVideoListVideo["Duration"].isNull())
			videoListObject.duration = std::stof(valueVideoListVideo["Duration"].asString());
		if(!valueVideoListVideo["Title"].isNull())
			videoListObject.title = valueVideoListVideo["Title"].asString();
		if(!valueVideoListVideo["StorageClass"].isNull())
			videoListObject.storageClass = valueVideoListVideo["StorageClass"].asString();
		if(!valueVideoListVideo["RestoreStatus"].isNull())
			videoListObject.restoreStatus = valueVideoListVideo["RestoreStatus"].asString();
		if(!valueVideoListVideo["RestoreExpiration"].isNull())
			videoListObject.restoreExpiration = valueVideoListVideo["RestoreExpiration"].asString();
		if(!valueVideoListVideo["UserData"].isNull())
			videoListObject.userData = valueVideoListVideo["UserData"].asString();
		auto allThumbnailListNode = valueVideoListVideo["ThumbnailList"]["Thumbnail"];
		for (auto valueVideoListVideoThumbnailListThumbnail : allThumbnailListNode)
		{
			Video::Thumbnail thumbnailListObject;
			if(!valueVideoListVideoThumbnailListThumbnail["URL"].isNull())
				thumbnailListObject.uRL = valueVideoListVideoThumbnailListThumbnail["URL"].asString();
			videoListObject.thumbnailList.push_back(thumbnailListObject);
		}
		auto allSnapshots = value["Snapshots"]["Snapshot"];
		for (auto value : allSnapshots)
			videoListObject.snapshots.push_back(value.asString());
		videoList_.push_back(videoListObject);
	}
	auto allNonExistVideoIds = value["NonExistVideoIds"]["VideoId"];
	for (const auto &item : allNonExistVideoIds)
		nonExistVideoIds_.push_back(item.asString());

}

std::vector<GetVideoInfosResult::Video> GetVideoInfosResult::getVideoList()const
{
	return videoList_;
}

std::vector<std::string> GetVideoInfosResult::getNonExistVideoIds()const
{
	return nonExistVideoIds_;
}

