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
	auto allMediaListNode = value["MediaList"]["Media"];
	for (auto valueMediaListMedia : allMediaListNode)
	{
		Media mediaListObject;
		if(!valueMediaListMedia["CreationTime"].isNull())
			mediaListObject.creationTime = valueMediaListMedia["CreationTime"].asString();
		if(!valueMediaListMedia["MediaType"].isNull())
			mediaListObject.mediaType = valueMediaListMedia["MediaType"].asString();
		if(!valueMediaListMedia["MediaId"].isNull())
			mediaListObject.mediaId = valueMediaListMedia["MediaId"].asString();
		auto videoNode = value["Video"];
		if(!videoNode["Status"].isNull())
			mediaListObject.video.status = videoNode["Status"].asString();
		if(!videoNode["CreationTime"].isNull())
			mediaListObject.video.creationTime = videoNode["CreationTime"].asString();
		if(!videoNode["StorageLocation"].isNull())
			mediaListObject.video.storageLocation = videoNode["StorageLocation"].asString();
		if(!videoNode["CateId"].isNull())
			mediaListObject.video.cateId = std::stol(videoNode["CateId"].asString());
		if(!videoNode["AuditTemplateId"].isNull())
			mediaListObject.video.auditTemplateId = videoNode["AuditTemplateId"].asString();
		if(!videoNode["Tags"].isNull())
			mediaListObject.video.tags = videoNode["Tags"].asString();
		if(!videoNode["ModificationTime"].isNull())
			mediaListObject.video.modificationTime = videoNode["ModificationTime"].asString();
		if(!videoNode["AuditManualStatus"].isNull())
			mediaListObject.video.auditManualStatus = videoNode["AuditManualStatus"].asString();
		if(!videoNode["MediaType"].isNull())
			mediaListObject.video.mediaType = videoNode["MediaType"].asString();
		if(!videoNode["MediaSource"].isNull())
			mediaListObject.video.mediaSource = videoNode["MediaSource"].asString();
		if(!videoNode["Description"].isNull())
			mediaListObject.video.description = videoNode["Description"].asString();
		if(!videoNode["AppId"].isNull())
			mediaListObject.video.appId = videoNode["AppId"].asString();
		if(!videoNode["CoverURL"].isNull())
			mediaListObject.video.coverURL = videoNode["CoverURL"].asString();
		if(!videoNode["AuditStatus"].isNull())
			mediaListObject.video.auditStatus = videoNode["AuditStatus"].asString();
		if(!videoNode["AuditAIStatus"].isNull())
			mediaListObject.video.auditAIStatus = videoNode["AuditAIStatus"].asString();
		if(!videoNode["VideoId"].isNull())
			mediaListObject.video.videoId = videoNode["VideoId"].asString();
		if(!videoNode["AuditLabel"].isNull())
			mediaListObject.video.auditLabel = videoNode["AuditLabel"].asString();
		if(!videoNode["DownloadSwitch"].isNull())
			mediaListObject.video.downloadSwitch = videoNode["DownloadSwitch"].asString();
		if(!videoNode["RegionId"].isNull())
			mediaListObject.video.regionId = videoNode["RegionId"].asString();
		if(!videoNode["AuditAbnormalModules"].isNull())
			mediaListObject.video.auditAbnormalModules = videoNode["AuditAbnormalModules"].asString();
		if(!videoNode["CustomMediaInfo"].isNull())
			mediaListObject.video.customMediaInfo = videoNode["CustomMediaInfo"].asString();
		if(!videoNode["CateName"].isNull())
			mediaListObject.video.cateName = videoNode["CateName"].asString();
		if(!videoNode["TranscodeMode"].isNull())
			mediaListObject.video.transcodeMode = videoNode["TranscodeMode"].asString();
		if(!videoNode["AuditAIResult"].isNull())
			mediaListObject.video.auditAIResult = videoNode["AuditAIResult"].asString();
		if(!videoNode["PreprocessStatus"].isNull())
			mediaListObject.video.preprocessStatus = videoNode["PreprocessStatus"].asString();
		if(!videoNode["RestoreExpiration"].isNull())
			mediaListObject.video.restoreExpiration = videoNode["RestoreExpiration"].asString();
		if(!videoNode["RestoreStatus"].isNull())
			mediaListObject.video.restoreStatus = videoNode["RestoreStatus"].asString();
		if(!videoNode["StorageClass"].isNull())
			mediaListObject.video.storageClass = videoNode["StorageClass"].asString();
		if(!videoNode["Size"].isNull())
			mediaListObject.video.size = std::stol(videoNode["Size"].asString());
		if(!videoNode["Duration"].isNull())
			mediaListObject.video.duration = std::stof(videoNode["Duration"].asString());
		if(!videoNode["Title"].isNull())
			mediaListObject.video.title = videoNode["Title"].asString();
		auto allPlayInfoListNode = videoNode["PlayInfoList"]["PlayInfo"];
		for (auto videoNodePlayInfoListPlayInfo : allPlayInfoListNode)
		{
			Media::Video::PlayInfo playInfoObject;
			if(!videoNodePlayInfoListPlayInfo["Complexity"].isNull())
				playInfoObject.complexity = videoNodePlayInfoListPlayInfo["Complexity"].asString();
			if(!videoNodePlayInfoListPlayInfo["Height"].isNull())
				playInfoObject.height = videoNodePlayInfoListPlayInfo["Height"].asString();
			if(!videoNodePlayInfoListPlayInfo["Bitrate"].isNull())
				playInfoObject.bitrate = videoNodePlayInfoListPlayInfo["Bitrate"].asString();
			if(!videoNodePlayInfoListPlayInfo["Encrypt"].isNull())
				playInfoObject.encrypt = std::stol(videoNodePlayInfoListPlayInfo["Encrypt"].asString());
			if(!videoNodePlayInfoListPlayInfo["Definition"].isNull())
				playInfoObject.definition = videoNodePlayInfoListPlayInfo["Definition"].asString();
			if(!videoNodePlayInfoListPlayInfo["Rand"].isNull())
				playInfoObject.rand = videoNodePlayInfoListPlayInfo["Rand"].asString();
			if(!videoNodePlayInfoListPlayInfo["StreamType"].isNull())
				playInfoObject.streamType = videoNodePlayInfoListPlayInfo["StreamType"].asString();
			if(!videoNodePlayInfoListPlayInfo["JobId"].isNull())
				playInfoObject.jobId = videoNodePlayInfoListPlayInfo["JobId"].asString();
			if(!videoNodePlayInfoListPlayInfo["Width"].isNull())
				playInfoObject.width = videoNodePlayInfoListPlayInfo["Width"].asString();
			if(!videoNodePlayInfoListPlayInfo["Size"].isNull())
				playInfoObject.size = videoNodePlayInfoListPlayInfo["Size"].asString();
			if(!videoNodePlayInfoListPlayInfo["Plaintext"].isNull())
				playInfoObject.plaintext = videoNodePlayInfoListPlayInfo["Plaintext"].asString();
			if(!videoNodePlayInfoListPlayInfo["PlayURL"].isNull())
				playInfoObject.playURL = videoNodePlayInfoListPlayInfo["PlayURL"].asString();
			if(!videoNodePlayInfoListPlayInfo["Duration"].isNull())
				playInfoObject.duration = videoNodePlayInfoListPlayInfo["Duration"].asString();
			if(!videoNodePlayInfoListPlayInfo["Fps"].isNull())
				playInfoObject.fps = videoNodePlayInfoListPlayInfo["Fps"].asString();
			if(!videoNodePlayInfoListPlayInfo["Format"].isNull())
				playInfoObject.format = videoNodePlayInfoListPlayInfo["Format"].asString();
			mediaListObject.video.playInfoList.push_back(playInfoObject);
		}
			auto allSpriteSnapshots = videoNode["SpriteSnapshots"]["SpriteSnapshot"];
			for (auto value : allSpriteSnapshots)
				mediaListObject.video.spriteSnapshots.push_back(value.asString());
			auto allSnapshots = videoNode["Snapshots"]["Snapshot"];
			for (auto value : allSnapshots)
				mediaListObject.video.snapshots.push_back(value.asString());
		auto audioNode = value["Audio"];
		if(!audioNode["Status"].isNull())
			mediaListObject.audio.status = audioNode["Status"].asString();
		if(!audioNode["CreationTime"].isNull())
			mediaListObject.audio.creationTime = audioNode["CreationTime"].asString();
		if(!audioNode["StorageLocation"].isNull())
			mediaListObject.audio.storageLocation = audioNode["StorageLocation"].asString();
		if(!audioNode["CateId"].isNull())
			mediaListObject.audio.cateId = std::stol(audioNode["CateId"].asString());
		if(!audioNode["AuditTemplateId"].isNull())
			mediaListObject.audio.auditTemplateId = audioNode["AuditTemplateId"].asString();
		if(!audioNode["Tags"].isNull())
			mediaListObject.audio.tags = audioNode["Tags"].asString();
		if(!audioNode["ModificationTime"].isNull())
			mediaListObject.audio.modificationTime = audioNode["ModificationTime"].asString();
		if(!audioNode["AuditManualStatus"].isNull())
			mediaListObject.audio.auditManualStatus = audioNode["AuditManualStatus"].asString();
		if(!audioNode["MediaSource"].isNull())
			mediaListObject.audio.mediaSource = audioNode["MediaSource"].asString();
		if(!audioNode["Description"].isNull())
			mediaListObject.audio.description = audioNode["Description"].asString();
		if(!audioNode["AppId"].isNull())
			mediaListObject.audio.appId = audioNode["AppId"].asString();
		if(!audioNode["CoverURL"].isNull())
			mediaListObject.audio.coverURL = audioNode["CoverURL"].asString();
		if(!audioNode["AudioId"].isNull())
			mediaListObject.audio.audioId = audioNode["AudioId"].asString();
		if(!audioNode["AuditStatus"].isNull())
			mediaListObject.audio.auditStatus = audioNode["AuditStatus"].asString();
		if(!audioNode["AuditAIStatus"].isNull())
			mediaListObject.audio.auditAIStatus = audioNode["AuditAIStatus"].asString();
		if(!audioNode["DownloadSwitch"].isNull())
			mediaListObject.audio.downloadSwitch = audioNode["DownloadSwitch"].asString();
		if(!audioNode["RegionId"].isNull())
			mediaListObject.audio.regionId = audioNode["RegionId"].asString();
		if(!audioNode["CateName"].isNull())
			mediaListObject.audio.cateName = audioNode["CateName"].asString();
		if(!audioNode["TranscodeMode"].isNull())
			mediaListObject.audio.transcodeMode = audioNode["TranscodeMode"].asString();
		if(!audioNode["CustomMediaInfo"].isNull())
			mediaListObject.audio.customMediaInfo = audioNode["CustomMediaInfo"].asString();
		if(!audioNode["AuditAIResult"].isNull())
			mediaListObject.audio.auditAIResult = audioNode["AuditAIResult"].asString();
		if(!audioNode["PreprocessStatus"].isNull())
			mediaListObject.audio.preprocessStatus = audioNode["PreprocessStatus"].asString();
		if(!audioNode["RestoreExpiration"].isNull())
			mediaListObject.audio.restoreExpiration = audioNode["RestoreExpiration"].asString();
		if(!audioNode["RestoreStatus"].isNull())
			mediaListObject.audio.restoreStatus = audioNode["RestoreStatus"].asString();
		if(!audioNode["StorageClass"].isNull())
			mediaListObject.audio.storageClass = audioNode["StorageClass"].asString();
		if(!audioNode["Size"].isNull())
			mediaListObject.audio.size = std::stol(audioNode["Size"].asString());
		if(!audioNode["Duration"].isNull())
			mediaListObject.audio.duration = std::stof(audioNode["Duration"].asString());
		if(!audioNode["Title"].isNull())
			mediaListObject.audio.title = audioNode["Title"].asString();
		auto allPlayInfoList3Node = audioNode["PlayInfoList"]["PlayInfo"];
		for (auto audioNodePlayInfoListPlayInfo : allPlayInfoList3Node)
		{
			Media::Audio::PlayInfo4 playInfo4Object;
			if(!audioNodePlayInfoListPlayInfo["Complexity"].isNull())
				playInfo4Object.complexity = audioNodePlayInfoListPlayInfo["Complexity"].asString();
			if(!audioNodePlayInfoListPlayInfo["Height"].isNull())
				playInfo4Object.height = audioNodePlayInfoListPlayInfo["Height"].asString();
			if(!audioNodePlayInfoListPlayInfo["Bitrate"].isNull())
				playInfo4Object.bitrate = audioNodePlayInfoListPlayInfo["Bitrate"].asString();
			if(!audioNodePlayInfoListPlayInfo["Encrypt"].isNull())
				playInfo4Object.encrypt = std::stol(audioNodePlayInfoListPlayInfo["Encrypt"].asString());
			if(!audioNodePlayInfoListPlayInfo["Definition"].isNull())
				playInfo4Object.definition = audioNodePlayInfoListPlayInfo["Definition"].asString();
			if(!audioNodePlayInfoListPlayInfo["Rand"].isNull())
				playInfo4Object.rand = audioNodePlayInfoListPlayInfo["Rand"].asString();
			if(!audioNodePlayInfoListPlayInfo["StreamType"].isNull())
				playInfo4Object.streamType = audioNodePlayInfoListPlayInfo["StreamType"].asString();
			if(!audioNodePlayInfoListPlayInfo["JobId"].isNull())
				playInfo4Object.jobId = audioNodePlayInfoListPlayInfo["JobId"].asString();
			if(!audioNodePlayInfoListPlayInfo["Width"].isNull())
				playInfo4Object.width = audioNodePlayInfoListPlayInfo["Width"].asString();
			if(!audioNodePlayInfoListPlayInfo["Size"].isNull())
				playInfo4Object.size = audioNodePlayInfoListPlayInfo["Size"].asString();
			if(!audioNodePlayInfoListPlayInfo["Plaintext"].isNull())
				playInfo4Object.plaintext = audioNodePlayInfoListPlayInfo["Plaintext"].asString();
			if(!audioNodePlayInfoListPlayInfo["PlayURL"].isNull())
				playInfo4Object.playURL = audioNodePlayInfoListPlayInfo["PlayURL"].asString();
			if(!audioNodePlayInfoListPlayInfo["Duration"].isNull())
				playInfo4Object.duration = audioNodePlayInfoListPlayInfo["Duration"].asString();
			if(!audioNodePlayInfoListPlayInfo["Fps"].isNull())
				playInfo4Object.fps = audioNodePlayInfoListPlayInfo["Fps"].asString();
			if(!audioNodePlayInfoListPlayInfo["Format"].isNull())
				playInfo4Object.format = audioNodePlayInfoListPlayInfo["Format"].asString();
			mediaListObject.audio.playInfoList3.push_back(playInfo4Object);
		}
			auto allSpriteSnapshots1 = audioNode["SpriteSnapshots"]["SpriteSnapshot"];
			for (auto value : allSpriteSnapshots1)
				mediaListObject.audio.spriteSnapshots1.push_back(value.asString());
			auto allSnapshots2 = audioNode["Snapshots"]["Snapshot"];
			for (auto value : allSnapshots2)
				mediaListObject.audio.snapshots2.push_back(value.asString());
		auto imageNode = value["Image"];
		if(!imageNode["StorageLocation"].isNull())
			mediaListObject.image.storageLocation = imageNode["StorageLocation"].asString();
		if(!imageNode["CreationTime"].isNull())
			mediaListObject.image.creationTime = imageNode["CreationTime"].asString();
		if(!imageNode["Type"].isNull())
			mediaListObject.image.type = imageNode["Type"].asString();
		if(!imageNode["Status"].isNull())
			mediaListObject.image.status = imageNode["Status"].asString();
		if(!imageNode["CateId"].isNull())
			mediaListObject.image.cateId = std::stol(imageNode["CateId"].asString());
		if(!imageNode["Tags"].isNull())
			mediaListObject.image.tags = imageNode["Tags"].asString();
		if(!imageNode["ModificationTime"].isNull())
			mediaListObject.image.modificationTime = imageNode["ModificationTime"].asString();
		if(!imageNode["RegionId"].isNull())
			mediaListObject.image.regionId = imageNode["RegionId"].asString();
		if(!imageNode["CateName"].isNull())
			mediaListObject.image.cateName = imageNode["CateName"].asString();
		if(!imageNode["Description"].isNull())
			mediaListObject.image.description = imageNode["Description"].asString();
		if(!imageNode["AppId"].isNull())
			mediaListObject.image.appId = imageNode["AppId"].asString();
		if(!imageNode["URL"].isNull())
			mediaListObject.image.uRL = imageNode["URL"].asString();
		if(!imageNode["Title"].isNull())
			mediaListObject.image.title = imageNode["Title"].asString();
		if(!imageNode["Ext"].isNull())
			mediaListObject.image.ext = imageNode["Ext"].asString();
		if(!imageNode["ImageId"].isNull())
			mediaListObject.image.imageId = imageNode["ImageId"].asString();
		auto attachedMediaNode = value["AttachedMedia"];
		if(!attachedMediaNode["CreationTime"].isNull())
			mediaListObject.attachedMedia.creationTime = attachedMediaNode["CreationTime"].asString();
		if(!attachedMediaNode["Status"].isNull())
			mediaListObject.attachedMedia.status = attachedMediaNode["Status"].asString();
		if(!attachedMediaNode["StorageLocation"].isNull())
			mediaListObject.attachedMedia.storageLocation = attachedMediaNode["StorageLocation"].asString();
		if(!attachedMediaNode["Icon"].isNull())
			mediaListObject.attachedMedia.icon = attachedMediaNode["Icon"].asString();
		if(!attachedMediaNode["Tags"].isNull())
			mediaListObject.attachedMedia.tags = attachedMediaNode["Tags"].asString();
		if(!attachedMediaNode["ModificationTime"].isNull())
			mediaListObject.attachedMedia.modificationTime = attachedMediaNode["ModificationTime"].asString();
		if(!attachedMediaNode["MediaId"].isNull())
			mediaListObject.attachedMedia.mediaId = attachedMediaNode["MediaId"].asString();
		if(!attachedMediaNode["BusinessType"].isNull())
			mediaListObject.attachedMedia.businessType = attachedMediaNode["BusinessType"].asString();
		if(!attachedMediaNode["RegionId"].isNull())
			mediaListObject.attachedMedia.regionId = attachedMediaNode["RegionId"].asString();
		if(!attachedMediaNode["Description"].isNull())
			mediaListObject.attachedMedia.description = attachedMediaNode["Description"].asString();
		if(!attachedMediaNode["AppId"].isNull())
			mediaListObject.attachedMedia.appId = attachedMediaNode["AppId"].asString();
		if(!attachedMediaNode["URL"].isNull())
			mediaListObject.attachedMedia.uRL = attachedMediaNode["URL"].asString();
		if(!attachedMediaNode["Title"].isNull())
			mediaListObject.attachedMedia.title = attachedMediaNode["Title"].asString();
		if(!attachedMediaNode["Ext"].isNull())
			mediaListObject.attachedMedia.ext = attachedMediaNode["Ext"].asString();
		if(!attachedMediaNode["OnlineStatus"].isNull())
			mediaListObject.attachedMedia.onlineStatus = attachedMediaNode["OnlineStatus"].asString();
		auto allCategoriesNode = attachedMediaNode["Categories"]["Category"];
		for (auto attachedMediaNodeCategoriesCategory : allCategoriesNode)
		{
			Media::AttachedMedia::Category categoryObject;
			if(!attachedMediaNodeCategoriesCategory["ParentId"].isNull())
				categoryObject.parentId = std::stol(attachedMediaNodeCategoriesCategory["ParentId"].asString());
			if(!attachedMediaNodeCategoriesCategory["CateName"].isNull())
				categoryObject.cateName = attachedMediaNodeCategoriesCategory["CateName"].asString();
			if(!attachedMediaNodeCategoriesCategory["CateId"].isNull())
				categoryObject.cateId = std::stol(attachedMediaNodeCategoriesCategory["CateId"].asString());
			if(!attachedMediaNodeCategoriesCategory["Level"].isNull())
				categoryObject.level = std::stol(attachedMediaNodeCategoriesCategory["Level"].asString());
			mediaListObject.attachedMedia.categories.push_back(categoryObject);
		}
		auto aiDataNode = value["AiData"];
		auto allAiLabelInfoNode = aiDataNode["AiLabelInfo"]["AiLabelInfoItem"];
		for (auto aiDataNodeAiLabelInfoAiLabelInfoItem : allAiLabelInfoNode)
		{
			Media::AiData::AiLabelInfoItem aiLabelInfoItemObject;
			if(!aiDataNodeAiLabelInfoAiLabelInfoItem["Category"].isNull())
				aiLabelInfoItemObject.category = aiDataNodeAiLabelInfoAiLabelInfoItem["Category"].asString();
			if(!aiDataNodeAiLabelInfoAiLabelInfoItem["LabelName"].isNull())
				aiLabelInfoItemObject.labelName = aiDataNodeAiLabelInfoAiLabelInfoItem["LabelName"].asString();
			if(!aiDataNodeAiLabelInfoAiLabelInfoItem["LabelId"].isNull())
				aiLabelInfoItemObject.labelId = aiDataNodeAiLabelInfoAiLabelInfoItem["LabelId"].asString();
			auto allOccurrencesNode = aiDataNodeAiLabelInfoAiLabelInfoItem["Occurrences"]["OccurrencesItem"];
			for (auto aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem : allOccurrencesNode)
			{
				Media::AiData::AiLabelInfoItem::OccurrencesItem occurrencesObject;
				if(!aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["Score"].isNull())
					occurrencesObject.score = aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["Score"].asString();
				if(!aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["From"].isNull())
					occurrencesObject.from = aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["From"].asString();
				if(!aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["To"].isNull())
					occurrencesObject.to = aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["To"].asString();
				aiLabelInfoItemObject.occurrences.push_back(occurrencesObject);
			}
			mediaListObject.aiData.aiLabelInfo.push_back(aiLabelInfoItemObject);
		}
		auto allOcrInfoNode = aiDataNode["OcrInfo"]["OcrInfoItem"];
		for (auto aiDataNodeOcrInfoOcrInfoItem : allOcrInfoNode)
		{
			Media::AiData::OcrInfoItem ocrInfoItemObject;
			if(!aiDataNodeOcrInfoOcrInfoItem["From"].isNull())
				ocrInfoItemObject.from = aiDataNodeOcrInfoOcrInfoItem["From"].asString();
			if(!aiDataNodeOcrInfoOcrInfoItem["To"].isNull())
				ocrInfoItemObject.to = aiDataNodeOcrInfoOcrInfoItem["To"].asString();
			if(!aiDataNodeOcrInfoOcrInfoItem["Content"].isNull())
				ocrInfoItemObject.content = aiDataNodeOcrInfoOcrInfoItem["Content"].asString();
			mediaListObject.aiData.ocrInfo.push_back(ocrInfoItemObject);
		}
		auto aiRoughDataNode = value["AiRoughData"];
		if(!aiRoughDataNode["SaveType"].isNull())
			mediaListObject.aiRoughData.saveType = aiRoughDataNode["SaveType"].asString();
		if(!aiRoughDataNode["Status"].isNull())
			mediaListObject.aiRoughData.status = aiRoughDataNode["Status"].asString();
		if(!aiRoughDataNode["AiJobId"].isNull())
			mediaListObject.aiRoughData.aiJobId = aiRoughDataNode["AiJobId"].asString();
		if(!aiRoughDataNode["AiCategory"].isNull())
			mediaListObject.aiRoughData.aiCategory = aiRoughDataNode["AiCategory"].asString();
		mediaList_.push_back(mediaListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());
	if(!value["ScrollToken"].isNull())
		scrollToken_ = value["ScrollToken"].asString();

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

