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
		if(!videoNode["AuditStatus"].isNull())
			mediaListObject.video.auditStatus = videoNode["AuditStatus"].asString();
		if(!videoNode["AuditAIStatus"].isNull())
			mediaListObject.video.auditAIStatus = videoNode["AuditAIStatus"].asString();
		if(!videoNode["AuditManualStatus"].isNull())
			mediaListObject.video.auditManualStatus = videoNode["AuditManualStatus"].asString();
		if(!videoNode["AuditAIResult"].isNull())
			mediaListObject.video.auditAIResult = videoNode["AuditAIResult"].asString();
		if(!videoNode["AuditTemplateId"].isNull())
			mediaListObject.video.auditTemplateId = videoNode["AuditTemplateId"].asString();
		if(!videoNode["CustomMediaInfo"].isNull())
			mediaListObject.video.customMediaInfo = videoNode["CustomMediaInfo"].asString();
		if(!videoNode["AppId"].isNull())
			mediaListObject.video.appId = videoNode["AppId"].asString();
		auto allPlayInfoList = value["PlayInfoList"]["PlayInfo"];
		for (auto value : allPlayInfoList)
		{
			Media::Video::PlayInfo playInfoObject;
			if(!value["Width"].isNull())
				playInfoObject.width = value["Width"].asString();
			if(!value["Height"].isNull())
				playInfoObject.height = value["Height"].asString();
			if(!value["Size"].isNull())
				playInfoObject.size = value["Size"].asString();
			if(!value["PlayURL"].isNull())
				playInfoObject.playURL = value["PlayURL"].asString();
			if(!value["Bitrate"].isNull())
				playInfoObject.bitrate = value["Bitrate"].asString();
			if(!value["Definition"].isNull())
				playInfoObject.definition = value["Definition"].asString();
			if(!value["Duration"].isNull())
				playInfoObject.duration = value["Duration"].asString();
			if(!value["Format"].isNull())
				playInfoObject.format = value["Format"].asString();
			if(!value["Fps"].isNull())
				playInfoObject.fps = value["Fps"].asString();
			if(!value["Encrypt"].isNull())
				playInfoObject.encrypt = std::stol(value["Encrypt"].asString());
			if(!value["Plaintext"].isNull())
				playInfoObject.plaintext = value["Plaintext"].asString();
			if(!value["Complexity"].isNull())
				playInfoObject.complexity = value["Complexity"].asString();
			if(!value["StreamType"].isNull())
				playInfoObject.streamType = value["StreamType"].asString();
			if(!value["Rand"].isNull())
				playInfoObject.rand = value["Rand"].asString();
			if(!value["JobId"].isNull())
				playInfoObject.jobId = value["JobId"].asString();
			mediaListObject.video.playInfoList.push_back(playInfoObject);
		}
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
		if(!audioNode["AuditStatus"].isNull())
			mediaListObject.audio.auditStatus = audioNode["AuditStatus"].asString();
		if(!audioNode["AuditAIStatus"].isNull())
			mediaListObject.audio.auditAIStatus = audioNode["AuditAIStatus"].asString();
		if(!audioNode["AuditManualStatus"].isNull())
			mediaListObject.audio.auditManualStatus = audioNode["AuditManualStatus"].asString();
		if(!audioNode["AuditAIResult"].isNull())
			mediaListObject.audio.auditAIResult = audioNode["AuditAIResult"].asString();
		if(!audioNode["AuditTemplateId"].isNull())
			mediaListObject.audio.auditTemplateId = audioNode["AuditTemplateId"].asString();
		if(!audioNode["CustomMediaInfo"].isNull())
			mediaListObject.audio.customMediaInfo = audioNode["CustomMediaInfo"].asString();
		if(!audioNode["AppId"].isNull())
			mediaListObject.audio.appId = audioNode["AppId"].asString();
		auto allPlayInfoList3 = value["PlayInfoList"]["PlayInfo"];
		for (auto value : allPlayInfoList3)
		{
			Media::Audio::PlayInfo4 playInfo4Object;
			if(!value["Width"].isNull())
				playInfo4Object.width = value["Width"].asString();
			if(!value["Height"].isNull())
				playInfo4Object.height = value["Height"].asString();
			if(!value["Size"].isNull())
				playInfo4Object.size = value["Size"].asString();
			if(!value["PlayURL"].isNull())
				playInfo4Object.playURL = value["PlayURL"].asString();
			if(!value["Bitrate"].isNull())
				playInfo4Object.bitrate = value["Bitrate"].asString();
			if(!value["Definition"].isNull())
				playInfo4Object.definition = value["Definition"].asString();
			if(!value["Duration"].isNull())
				playInfo4Object.duration = value["Duration"].asString();
			if(!value["Format"].isNull())
				playInfo4Object.format = value["Format"].asString();
			if(!value["Fps"].isNull())
				playInfo4Object.fps = value["Fps"].asString();
			if(!value["Encrypt"].isNull())
				playInfo4Object.encrypt = std::stol(value["Encrypt"].asString());
			if(!value["Plaintext"].isNull())
				playInfo4Object.plaintext = value["Plaintext"].asString();
			if(!value["Complexity"].isNull())
				playInfo4Object.complexity = value["Complexity"].asString();
			if(!value["StreamType"].isNull())
				playInfo4Object.streamType = value["StreamType"].asString();
			if(!value["Rand"].isNull())
				playInfo4Object.rand = value["Rand"].asString();
			if(!value["JobId"].isNull())
				playInfo4Object.jobId = value["JobId"].asString();
			mediaListObject.audio.playInfoList3.push_back(playInfo4Object);
		}
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
		if(!imageNode["AppId"].isNull())
			mediaListObject.image.appId = imageNode["AppId"].asString();
		auto attachedMediaNode = value["AttachedMedia"];
		if(!attachedMediaNode["Title"].isNull())
			mediaListObject.attachedMedia.title = attachedMediaNode["Title"].asString();
		if(!attachedMediaNode["MediaId"].isNull())
			mediaListObject.attachedMedia.mediaId = attachedMediaNode["MediaId"].asString();
		if(!attachedMediaNode["Ext"].isNull())
			mediaListObject.attachedMedia.ext = attachedMediaNode["Ext"].asString();
		if(!attachedMediaNode["CreationTime"].isNull())
			mediaListObject.attachedMedia.creationTime = attachedMediaNode["CreationTime"].asString();
		if(!attachedMediaNode["ModificationTime"].isNull())
			mediaListObject.attachedMedia.modificationTime = attachedMediaNode["ModificationTime"].asString();
		if(!attachedMediaNode["Tags"].isNull())
			mediaListObject.attachedMedia.tags = attachedMediaNode["Tags"].asString();
		if(!attachedMediaNode["BusinessType"].isNull())
			mediaListObject.attachedMedia.businessType = attachedMediaNode["BusinessType"].asString();
		if(!attachedMediaNode["URL"].isNull())
			mediaListObject.attachedMedia.uRL = attachedMediaNode["URL"].asString();
		if(!attachedMediaNode["Status"].isNull())
			mediaListObject.attachedMedia.status = attachedMediaNode["Status"].asString();
		if(!attachedMediaNode["Description"].isNull())
			mediaListObject.attachedMedia.description = attachedMediaNode["Description"].asString();
		if(!attachedMediaNode["StorageLocation"].isNull())
			mediaListObject.attachedMedia.storageLocation = attachedMediaNode["StorageLocation"].asString();
		if(!attachedMediaNode["RegionId"].isNull())
			mediaListObject.attachedMedia.regionId = attachedMediaNode["RegionId"].asString();
		if(!attachedMediaNode["AppId"].isNull())
			mediaListObject.attachedMedia.appId = attachedMediaNode["AppId"].asString();
		if(!attachedMediaNode["Icon"].isNull())
			mediaListObject.attachedMedia.icon = attachedMediaNode["Icon"].asString();
		if(!attachedMediaNode["OnlineStatus"].isNull())
			mediaListObject.attachedMedia.onlineStatus = attachedMediaNode["OnlineStatus"].asString();
		auto allCategories = value["Categories"]["Category"];
		for (auto value : allCategories)
		{
			Media::AttachedMedia::Category categoryObject;
			if(!value["CateId"].isNull())
				categoryObject.cateId = std::stol(value["CateId"].asString());
			if(!value["CateName"].isNull())
				categoryObject.cateName = value["CateName"].asString();
			if(!value["Level"].isNull())
				categoryObject.level = std::stol(value["Level"].asString());
			if(!value["ParentId"].isNull())
				categoryObject.parentId = std::stol(value["ParentId"].asString());
			mediaListObject.attachedMedia.categories.push_back(categoryObject);
		}
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

