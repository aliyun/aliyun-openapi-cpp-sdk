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

#include <alibabacloud/vod/model/SearchMediaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

SearchMediaResult::SearchMediaResult() :
	ServiceResult()
{}

SearchMediaResult::SearchMediaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchMediaResult::~SearchMediaResult()
{}

void SearchMediaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allMediaList = value["MediaList"]["Media"];
	for (auto value : allMediaList)
	{
		Media mediaListObject;
		if(!value["MediaType"].isNull())
			mediaListObject.mediaType = value["MediaType"].asString();
		if(!value["CreationTime"].isNull())
			mediaListObject.creationTime = value["CreationTime"].asString();
		if(!value["MediaId"].isNull())
			mediaListObject.mediaId = value["MediaId"].asString();
		auto videoNode = value["Video"];
		if(!videoNode["VideoId"].isNull())
			mediaListObject.video.videoId = videoNode["VideoId"].asString();
		if(!videoNode["MediaSource"].isNull())
			mediaListObject.video.mediaSource = videoNode["MediaSource"].asString();
		if(!videoNode["MediaType"].isNull())
			mediaListObject.video.mediaType = videoNode["MediaType"].asString();
		if(!videoNode["Title"].isNull())
			mediaListObject.video.title = videoNode["Title"].asString();
		if(!videoNode["Tags"].isNull())
			mediaListObject.video.tags = videoNode["Tags"].asString();
		if(!videoNode["Status"].isNull())
			mediaListObject.video.status = videoNode["Status"].asString();
		if(!videoNode["Size"].isNull())
			mediaListObject.video.size = std::stol(videoNode["Size"].asString());
		if(!videoNode["Duration"].isNull())
			mediaListObject.video.duration = std::stof(videoNode["Duration"].asString());
		if(!videoNode["Description"].isNull())
			mediaListObject.video.description = videoNode["Description"].asString();
		if(!videoNode["ModificationTime"].isNull())
			mediaListObject.video.modificationTime = videoNode["ModificationTime"].asString();
		if(!videoNode["CreationTime"].isNull())
			mediaListObject.video.creationTime = videoNode["CreationTime"].asString();
		if(!videoNode["CoverURL"].isNull())
			mediaListObject.video.coverURL = videoNode["CoverURL"].asString();
		if(!videoNode["CateId"].isNull())
			mediaListObject.video.cateId = std::stol(videoNode["CateId"].asString());
		if(!videoNode["CateName"].isNull())
			mediaListObject.video.cateName = videoNode["CateName"].asString();
		if(!videoNode["DownloadSwitch"].isNull())
			mediaListObject.video.downloadSwitch = videoNode["DownloadSwitch"].asString();
		if(!videoNode["PreprocessStatus"].isNull())
			mediaListObject.video.preprocessStatus = videoNode["PreprocessStatus"].asString();
		if(!videoNode["StorageLocation"].isNull())
			mediaListObject.video.storageLocation = videoNode["StorageLocation"].asString();
		if(!videoNode["RegionId"].isNull())
			mediaListObject.video.regionId = videoNode["RegionId"].asString();
		if(!videoNode["TranscodeMode"].isNull())
			mediaListObject.video.transcodeMode = videoNode["TranscodeMode"].asString();
			auto allSnapshots = videoNode["Snapshots"]["Snapshot"];
			for (auto value : allSnapshots)
				mediaListObject.video.snapshots.push_back(value.asString());
			auto allSpriteSnapshots = videoNode["SpriteSnapshots"]["SpriteSnapshot"];
			for (auto value : allSpriteSnapshots)
				mediaListObject.video.spriteSnapshots.push_back(value.asString());
		auto audioNode = value["Audio"];
		if(!audioNode["AudioId"].isNull())
			mediaListObject.audio.audioId = audioNode["AudioId"].asString();
		if(!audioNode["MediaSource"].isNull())
			mediaListObject.audio.mediaSource = audioNode["MediaSource"].asString();
		if(!audioNode["Title"].isNull())
			mediaListObject.audio.title = audioNode["Title"].asString();
		if(!audioNode["Tags"].isNull())
			mediaListObject.audio.tags = audioNode["Tags"].asString();
		if(!audioNode["Status"].isNull())
			mediaListObject.audio.status = audioNode["Status"].asString();
		if(!audioNode["Size"].isNull())
			mediaListObject.audio.size = std::stol(audioNode["Size"].asString());
		if(!audioNode["Duration"].isNull())
			mediaListObject.audio.duration = std::stof(audioNode["Duration"].asString());
		if(!audioNode["Description"].isNull())
			mediaListObject.audio.description = audioNode["Description"].asString();
		if(!audioNode["ModificationTime"].isNull())
			mediaListObject.audio.modificationTime = audioNode["ModificationTime"].asString();
		if(!audioNode["CreationTime"].isNull())
			mediaListObject.audio.creationTime = audioNode["CreationTime"].asString();
		if(!audioNode["CoverURL"].isNull())
			mediaListObject.audio.coverURL = audioNode["CoverURL"].asString();
		if(!audioNode["CateId"].isNull())
			mediaListObject.audio.cateId = std::stol(audioNode["CateId"].asString());
		if(!audioNode["CateName"].isNull())
			mediaListObject.audio.cateName = audioNode["CateName"].asString();
		if(!audioNode["DownloadSwitch"].isNull())
			mediaListObject.audio.downloadSwitch = audioNode["DownloadSwitch"].asString();
		if(!audioNode["PreprocessStatus"].isNull())
			mediaListObject.audio.preprocessStatus = audioNode["PreprocessStatus"].asString();
		if(!audioNode["StorageLocation"].isNull())
			mediaListObject.audio.storageLocation = audioNode["StorageLocation"].asString();
		if(!audioNode["RegionId"].isNull())
			mediaListObject.audio.regionId = audioNode["RegionId"].asString();
		if(!audioNode["TranscodeMode"].isNull())
			mediaListObject.audio.transcodeMode = audioNode["TranscodeMode"].asString();
			auto allSnapshots1 = audioNode["Snapshots"]["Snapshot"];
			for (auto value : allSnapshots1)
				mediaListObject.audio.snapshots1.push_back(value.asString());
			auto allSpriteSnapshots2 = audioNode["SpriteSnapshots"]["SpriteSnapshot"];
			for (auto value : allSpriteSnapshots2)
				mediaListObject.audio.spriteSnapshots2.push_back(value.asString());
		auto imageNode = value["Image"];
		if(!imageNode["Title"].isNull())
			mediaListObject.image.title = imageNode["Title"].asString();
		if(!imageNode["ImageId"].isNull())
			mediaListObject.image.imageId = imageNode["ImageId"].asString();
		if(!imageNode["CateId"].isNull())
			mediaListObject.image.cateId = std::stol(imageNode["CateId"].asString());
		if(!imageNode["CateName"].isNull())
			mediaListObject.image.cateName = imageNode["CateName"].asString();
		if(!imageNode["Ext"].isNull())
			mediaListObject.image.ext = imageNode["Ext"].asString();
		if(!imageNode["CreationTime"].isNull())
			mediaListObject.image.creationTime = imageNode["CreationTime"].asString();
		if(!imageNode["ModificationTime"].isNull())
			mediaListObject.image.modificationTime = imageNode["ModificationTime"].asString();
		if(!imageNode["Tags"].isNull())
			mediaListObject.image.tags = imageNode["Tags"].asString();
		if(!imageNode["Type"].isNull())
			mediaListObject.image.type = imageNode["Type"].asString();
		if(!imageNode["URL"].isNull())
			mediaListObject.image.uRL = imageNode["URL"].asString();
		if(!imageNode["Status"].isNull())
			mediaListObject.image.status = imageNode["Status"].asString();
		if(!imageNode["Description"].isNull())
			mediaListObject.image.description = imageNode["Description"].asString();
		if(!imageNode["StorageLocation"].isNull())
			mediaListObject.image.storageLocation = imageNode["StorageLocation"].asString();
		if(!imageNode["RegionId"].isNull())
			mediaListObject.image.regionId = imageNode["RegionId"].asString();
		mediaList_.push_back(mediaListObject);
	}
	if(!value["ScrollToken"].isNull())
		scrollToken_ = value["ScrollToken"].asString();
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

std::vector<SearchMediaResult::Media> SearchMediaResult::getMediaList()const
{
	return mediaList_;
}

std::string SearchMediaResult::getScrollToken()const
{
	return scrollToken_;
}

long SearchMediaResult::getTotal()const
{
	return total_;
}

