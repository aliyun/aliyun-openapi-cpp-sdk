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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allVideoList = value["VideoList"]["Video"];
	for (auto value : allVideoList)
	{
		Video videoListObject;
		if(!value["VideoId"].isNull())
			videoListObject.videoId = value["VideoId"].asString();
		if(!value["Title"].isNull())
			videoListObject.title = value["Title"].asString();
		if(!value["Tags"].isNull())
			videoListObject.tags = value["Tags"].asString();
		if(!value["Status"].isNull())
			videoListObject.status = value["Status"].asString();
		if(!value["Size"].isNull())
			videoListObject.size = std::stol(value["Size"].asString());
		if(!value["Duration"].isNull())
			videoListObject.duration = std::stof(value["Duration"].asString());
		if(!value["Description"].isNull())
			videoListObject.description = value["Description"].asString();
		if(!value["ModificationTime"].isNull())
			videoListObject.modificationTime = value["ModificationTime"].asString();
		if(!value["CreationTime"].isNull())
			videoListObject.creationTime = value["CreationTime"].asString();
		if(!value["CoverURL"].isNull())
			videoListObject.coverURL = value["CoverURL"].asString();
		if(!value["CateId"].isNull())
			videoListObject.cateId = std::stol(value["CateId"].asString());
		if(!value["CateName"].isNull())
			videoListObject.cateName = value["CateName"].asString();
		if(!value["DownloadSwitch"].isNull())
			videoListObject.downloadSwitch = value["DownloadSwitch"].asString();
		if(!value["TemplateGroupId"].isNull())
			videoListObject.templateGroupId = value["TemplateGroupId"].asString();
		if(!value["PreprocessStatus"].isNull())
			videoListObject.preprocessStatus = value["PreprocessStatus"].asString();
		if(!value["StorageLocation"].isNull())
			videoListObject.storageLocation = value["StorageLocation"].asString();
		if(!value["RegionId"].isNull())
			videoListObject.regionId = value["RegionId"].asString();
		if(!value["CustomMediaInfo"].isNull())
			videoListObject.customMediaInfo = value["CustomMediaInfo"].asString();
		if(!value["AppId"].isNull())
			videoListObject.appId = value["AppId"].asString();
		auto allThumbnailList = value["ThumbnailList"]["Thumbnail"];
		for (auto value : allThumbnailList)
		{
			Video::Thumbnail thumbnailListObject;
			if(!value["URL"].isNull())
				thumbnailListObject.uRL = value["URL"].asString();
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

