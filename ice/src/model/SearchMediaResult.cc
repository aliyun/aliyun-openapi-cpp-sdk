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

#include <alibabacloud/ice/model/SearchMediaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

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
	auto allMediaInfoListNode = value["MediaInfoList"]["MediaInfo"];
	for (auto valueMediaInfoListMediaInfo : allMediaInfoListNode)
	{
		MediaInfo mediaInfoListObject;
		if(!valueMediaInfoListMediaInfo["MediaId"].isNull())
			mediaInfoListObject.mediaId = valueMediaInfoListMediaInfo["MediaId"].asString();
		auto allFileInfoListNode = valueMediaInfoListMediaInfo["FileInfoList"]["FileInfo"];
		for (auto valueMediaInfoListMediaInfoFileInfoListFileInfo : allFileInfoListNode)
		{
			MediaInfo::FileInfo fileInfoListObject;
			auto fileBasicInfoNode = value["FileBasicInfo"];
			if(!fileBasicInfoNode["FileName"].isNull())
				fileInfoListObject.fileBasicInfo.fileName = fileBasicInfoNode["FileName"].asString();
			if(!fileBasicInfoNode["FileStatus"].isNull())
				fileInfoListObject.fileBasicInfo.fileStatus = fileBasicInfoNode["FileStatus"].asString();
			if(!fileBasicInfoNode["FileType"].isNull())
				fileInfoListObject.fileBasicInfo.fileType = fileBasicInfoNode["FileType"].asString();
			if(!fileBasicInfoNode["FileSize"].isNull())
				fileInfoListObject.fileBasicInfo.fileSize = fileBasicInfoNode["FileSize"].asString();
			if(!fileBasicInfoNode["FileUrl"].isNull())
				fileInfoListObject.fileBasicInfo.fileUrl = fileBasicInfoNode["FileUrl"].asString();
			if(!fileBasicInfoNode["Region"].isNull())
				fileInfoListObject.fileBasicInfo.region = fileBasicInfoNode["Region"].asString();
			if(!fileBasicInfoNode["FormatName"].isNull())
				fileInfoListObject.fileBasicInfo.formatName = fileBasicInfoNode["FormatName"].asString();
			if(!fileBasicInfoNode["Duration"].isNull())
				fileInfoListObject.fileBasicInfo.duration = fileBasicInfoNode["Duration"].asString();
			if(!fileBasicInfoNode["Bitrate"].isNull())
				fileInfoListObject.fileBasicInfo.bitrate = fileBasicInfoNode["Bitrate"].asString();
			if(!fileBasicInfoNode["Width"].isNull())
				fileInfoListObject.fileBasicInfo.width = fileBasicInfoNode["Width"].asString();
			if(!fileBasicInfoNode["Height"].isNull())
				fileInfoListObject.fileBasicInfo.height = fileBasicInfoNode["Height"].asString();
			if(!fileBasicInfoNode["FileMediaType"].isNull())
				fileInfoListObject.fileBasicInfo.fileMediaType = fileBasicInfoNode["FileMediaType"].asString();
			if(!fileBasicInfoNode["FileBusinessType"].isNull())
				fileInfoListObject.fileBasicInfo.fileBusinessType = fileBasicInfoNode["FileBusinessType"].asString();
			if(!fileBasicInfoNode["CreateTime"].isNull())
				fileInfoListObject.fileBasicInfo.createTime = fileBasicInfoNode["CreateTime"].asString();
			if(!fileBasicInfoNode["ModifiedTime"].isNull())
				fileInfoListObject.fileBasicInfo.modifiedTime = fileBasicInfoNode["ModifiedTime"].asString();
			mediaInfoListObject.fileInfoList.push_back(fileInfoListObject);
		}
		auto mediaBasicInfoNode = value["MediaBasicInfo"];
		if(!mediaBasicInfoNode["MediaId"].isNull())
			mediaInfoListObject.mediaBasicInfo.mediaId = mediaBasicInfoNode["MediaId"].asString();
		if(!mediaBasicInfoNode["InputURL"].isNull())
			mediaInfoListObject.mediaBasicInfo.inputURL = mediaBasicInfoNode["InputURL"].asString();
		if(!mediaBasicInfoNode["MediaType"].isNull())
			mediaInfoListObject.mediaBasicInfo.mediaType = mediaBasicInfoNode["MediaType"].asString();
		if(!mediaBasicInfoNode["BusinessType"].isNull())
			mediaInfoListObject.mediaBasicInfo.businessType = mediaBasicInfoNode["BusinessType"].asString();
		if(!mediaBasicInfoNode["Source"].isNull())
			mediaInfoListObject.mediaBasicInfo.source = mediaBasicInfoNode["Source"].asString();
		if(!mediaBasicInfoNode["Title"].isNull())
			mediaInfoListObject.mediaBasicInfo.title = mediaBasicInfoNode["Title"].asString();
		if(!mediaBasicInfoNode["Description"].isNull())
			mediaInfoListObject.mediaBasicInfo.description = mediaBasicInfoNode["Description"].asString();
		if(!mediaBasicInfoNode["Category"].isNull())
			mediaInfoListObject.mediaBasicInfo.category = mediaBasicInfoNode["Category"].asString();
		if(!mediaBasicInfoNode["MediaTags"].isNull())
			mediaInfoListObject.mediaBasicInfo.mediaTags = mediaBasicInfoNode["MediaTags"].asString();
		if(!mediaBasicInfoNode["CoverURL"].isNull())
			mediaInfoListObject.mediaBasicInfo.coverURL = mediaBasicInfoNode["CoverURL"].asString();
		if(!mediaBasicInfoNode["UserData"].isNull())
			mediaInfoListObject.mediaBasicInfo.userData = mediaBasicInfoNode["UserData"].asString();
		if(!mediaBasicInfoNode["Snapshots"].isNull())
			mediaInfoListObject.mediaBasicInfo.snapshots = mediaBasicInfoNode["Snapshots"].asString();
		if(!mediaBasicInfoNode["Status"].isNull())
			mediaInfoListObject.mediaBasicInfo.status = mediaBasicInfoNode["Status"].asString();
		if(!mediaBasicInfoNode["TranscodeStatus"].isNull())
			mediaInfoListObject.mediaBasicInfo.transcodeStatus = mediaBasicInfoNode["TranscodeStatus"].asString();
		if(!mediaBasicInfoNode["CreateTime"].isNull())
			mediaInfoListObject.mediaBasicInfo.createTime = mediaBasicInfoNode["CreateTime"].asString();
		if(!mediaBasicInfoNode["ModifiedTime"].isNull())
			mediaInfoListObject.mediaBasicInfo.modifiedTime = mediaBasicInfoNode["ModifiedTime"].asString();
		if(!mediaBasicInfoNode["DeletedTime"].isNull())
			mediaInfoListObject.mediaBasicInfo.deletedTime = mediaBasicInfoNode["DeletedTime"].asString();
		if(!mediaBasicInfoNode["SpriteImages"].isNull())
			mediaInfoListObject.mediaBasicInfo.spriteImages = mediaBasicInfoNode["SpriteImages"].asString();
		if(!mediaBasicInfoNode["AppId"].isNull())
			mediaInfoListObject.mediaBasicInfo.appId = mediaBasicInfoNode["AppId"].asString();
		if(!mediaBasicInfoNode["CateId"].isNull())
			mediaInfoListObject.mediaBasicInfo.cateId = std::stol(mediaBasicInfoNode["CateId"].asString());
		if(!mediaBasicInfoNode["PublishState"].isNull())
			mediaInfoListObject.mediaBasicInfo.publishState = mediaBasicInfoNode["PublishState"].asString();
		if(!mediaBasicInfoNode["Acl"].isNull())
			mediaInfoListObject.mediaBasicInfo.acl = mediaBasicInfoNode["Acl"].asString();
		if(!mediaBasicInfoNode["Biz"].isNull())
			mediaInfoListObject.mediaBasicInfo.biz = mediaBasicInfoNode["Biz"].asString();
		if(!mediaBasicInfoNode["UploadSource"].isNull())
			mediaInfoListObject.mediaBasicInfo.uploadSource = mediaBasicInfoNode["UploadSource"].asString();
		if(!mediaBasicInfoNode["EntityId"].isNull())
			mediaInfoListObject.mediaBasicInfo.entityId = mediaBasicInfoNode["EntityId"].asString();
		if(!mediaBasicInfoNode["CateName"].isNull())
			mediaInfoListObject.mediaBasicInfo.cateName = mediaBasicInfoNode["CateName"].asString();
		if(!mediaBasicInfoNode["ReferenceId"].isNull())
			mediaInfoListObject.mediaBasicInfo.referenceId = mediaBasicInfoNode["ReferenceId"].asString();
		auto mediaDynamicInfoNode = value["MediaDynamicInfo"];
		auto dynamicMetaDataNode = mediaDynamicInfoNode["DynamicMetaData"];
		if(!dynamicMetaDataNode["Type"].isNull())
			mediaInfoListObject.mediaDynamicInfo.dynamicMetaData.type = dynamicMetaDataNode["Type"].asString();
		if(!dynamicMetaDataNode["Data"].isNull())
			mediaInfoListObject.mediaDynamicInfo.dynamicMetaData.data = dynamicMetaDataNode["Data"].asString();
		if(!dynamicMetaDataNode["EntityId"].isNull())
			mediaInfoListObject.mediaDynamicInfo.dynamicMetaData.entityId = dynamicMetaDataNode["EntityId"].asString();
		auto mediaExtraInfoNode = mediaDynamicInfoNode["MediaExtraInfo"];
		if(!mediaExtraInfoNode["ManualAuditStatus"].isNull())
			mediaInfoListObject.mediaDynamicInfo.mediaExtraInfo.manualAuditStatus = mediaExtraInfoNode["ManualAuditStatus"].asString();
		if(!mediaExtraInfoNode["ManualAuditResult"].isNull())
			mediaInfoListObject.mediaDynamicInfo.mediaExtraInfo.manualAuditResult = mediaExtraInfoNode["ManualAuditResult"].asString();
		if(!mediaExtraInfoNode["AiAuditStatus"].isNull())
			mediaInfoListObject.mediaDynamicInfo.mediaExtraInfo.aiAuditStatus = mediaExtraInfoNode["AiAuditStatus"].asString();
		if(!mediaExtraInfoNode["AiAuditResult"].isNull())
			mediaInfoListObject.mediaDynamicInfo.mediaExtraInfo.aiAuditResult = mediaExtraInfoNode["AiAuditResult"].asString();
		if(!mediaExtraInfoNode["AiAuditTemplate"].isNull())
			mediaInfoListObject.mediaDynamicInfo.mediaExtraInfo.aiAuditTemplate = mediaExtraInfoNode["AiAuditTemplate"].asString();
		if(!mediaExtraInfoNode["AiAuditJobId"].isNull())
			mediaInfoListObject.mediaDynamicInfo.mediaExtraInfo.aiAuditJobId = mediaExtraInfoNode["AiAuditJobId"].asString();
		if(!mediaExtraInfoNode["AiAuditLabel"].isNull())
			mediaInfoListObject.mediaDynamicInfo.mediaExtraInfo.aiAuditLabel = mediaExtraInfoNode["AiAuditLabel"].asString();
		auto aiDataNode = value["AiData"];
		auto allAiLabelInfoNode = aiDataNode["AiLabelInfo"]["AiLabelInfoItem"];
		for (auto aiDataNodeAiLabelInfoAiLabelInfoItem : allAiLabelInfoNode)
		{
			MediaInfo::AiData::AiLabelInfoItem aiLabelInfoItemObject;
			if(!aiDataNodeAiLabelInfoAiLabelInfoItem["FaceId"].isNull())
				aiLabelInfoItemObject.faceId = aiDataNodeAiLabelInfoAiLabelInfoItem["FaceId"].asString();
			if(!aiDataNodeAiLabelInfoAiLabelInfoItem["LabelType"].isNull())
				aiLabelInfoItemObject.labelType = aiDataNodeAiLabelInfoAiLabelInfoItem["LabelType"].asString();
			if(!aiDataNodeAiLabelInfoAiLabelInfoItem["Source"].isNull())
				aiLabelInfoItemObject.source = aiDataNodeAiLabelInfoAiLabelInfoItem["Source"].asString();
			if(!aiDataNodeAiLabelInfoAiLabelInfoItem["Category"].isNull())
				aiLabelInfoItemObject.category = aiDataNodeAiLabelInfoAiLabelInfoItem["Category"].asString();
			if(!aiDataNodeAiLabelInfoAiLabelInfoItem["LabelName"].isNull())
				aiLabelInfoItemObject.labelName = aiDataNodeAiLabelInfoAiLabelInfoItem["LabelName"].asString();
			if(!aiDataNodeAiLabelInfoAiLabelInfoItem["LabelId"].isNull())
				aiLabelInfoItemObject.labelId = aiDataNodeAiLabelInfoAiLabelInfoItem["LabelId"].asString();
			auto allOccurrencesNode = aiDataNodeAiLabelInfoAiLabelInfoItem["Occurrences"]["OccurrencesItem"];
			for (auto aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem : allOccurrencesNode)
			{
				MediaInfo::AiData::AiLabelInfoItem::OccurrencesItem occurrencesObject;
				if(!aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["Score"].isNull())
					occurrencesObject.score = aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["Score"].asString();
				if(!aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["Image"].isNull())
					occurrencesObject.image = aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["Image"].asString();
				if(!aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["TableBatchSeqId"].isNull())
					occurrencesObject.tableBatchSeqId = aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["TableBatchSeqId"].asString();
				if(!aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["clipId"].isNull())
					occurrencesObject.clipId = aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["clipId"].asString();
				if(!aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["From"].isNull())
					occurrencesObject.from = aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["From"].asString();
				if(!aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["To"].isNull())
					occurrencesObject.to = aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["To"].asString();
				if(!aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["FinegrainName"].isNull())
					occurrencesObject.finegrainName = aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["FinegrainName"].asString();
				if(!aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["FinegrainId"].isNull())
					occurrencesObject.finegrainId = aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["FinegrainId"].asString();
				if(!aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["Content"].isNull())
					occurrencesObject.content = aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["Content"].asString();
				auto allTracksNode = aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItem["Tracks"]["TracksItem"];
				for (auto aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItemTracksTracksItem : allTracksNode)
				{
					MediaInfo::AiData::AiLabelInfoItem::OccurrencesItem::TracksItem tracksObject;
					if(!aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItemTracksTracksItem["Size"].isNull())
						tracksObject.size = aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItemTracksTracksItem["Size"].asString();
					if(!aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItemTracksTracksItem["Position"].isNull())
						tracksObject.position = aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItemTracksTracksItem["Position"].asString();
					if(!aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItemTracksTracksItem["Timestamp"].isNull())
						tracksObject.timestamp = aiDataNodeAiLabelInfoAiLabelInfoItemOccurrencesOccurrencesItemTracksTracksItem["Timestamp"].asString();
					occurrencesObject.tracks.push_back(tracksObject);
				}
				aiLabelInfoItemObject.occurrences.push_back(occurrencesObject);
			}
			mediaInfoListObject.aiData.aiLabelInfo.push_back(aiLabelInfoItemObject);
		}
		auto allAsrInfoNode = aiDataNode["AsrInfo"]["AsrInfoItem"];
		for (auto aiDataNodeAsrInfoAsrInfoItem : allAsrInfoNode)
		{
			MediaInfo::AiData::AsrInfoItem asrInfoItemObject;
			if(!aiDataNodeAsrInfoAsrInfoItem["From"].isNull())
				asrInfoItemObject.from = aiDataNodeAsrInfoAsrInfoItem["From"].asString();
			if(!aiDataNodeAsrInfoAsrInfoItem["To"].isNull())
				asrInfoItemObject.to = aiDataNodeAsrInfoAsrInfoItem["To"].asString();
			if(!aiDataNodeAsrInfoAsrInfoItem["ClipId"].isNull())
				asrInfoItemObject.clipId = aiDataNodeAsrInfoAsrInfoItem["ClipId"].asString();
			if(!aiDataNodeAsrInfoAsrInfoItem["Content"].isNull())
				asrInfoItemObject.content = aiDataNodeAsrInfoAsrInfoItem["Content"].asString();
			if(!aiDataNodeAsrInfoAsrInfoItem["Timestamp"].isNull())
				asrInfoItemObject.timestamp = aiDataNodeAsrInfoAsrInfoItem["Timestamp"].asString();
			mediaInfoListObject.aiData.asrInfo.push_back(asrInfoItemObject);
		}
		auto allOcrInfoNode = aiDataNode["OcrInfo"]["OcrInfoItem"];
		for (auto aiDataNodeOcrInfoOcrInfoItem : allOcrInfoNode)
		{
			MediaInfo::AiData::OcrInfoItem ocrInfoItemObject;
			if(!aiDataNodeOcrInfoOcrInfoItem["From"].isNull())
				ocrInfoItemObject.from = aiDataNodeOcrInfoOcrInfoItem["From"].asString();
			if(!aiDataNodeOcrInfoOcrInfoItem["To"].isNull())
				ocrInfoItemObject.to = aiDataNodeOcrInfoOcrInfoItem["To"].asString();
			if(!aiDataNodeOcrInfoOcrInfoItem["ClipId"].isNull())
				ocrInfoItemObject.clipId = aiDataNodeOcrInfoOcrInfoItem["ClipId"].asString();
			if(!aiDataNodeOcrInfoOcrInfoItem["Content"].isNull())
				ocrInfoItemObject.content = aiDataNodeOcrInfoOcrInfoItem["Content"].asString();
			if(!aiDataNodeOcrInfoOcrInfoItem["Timestamp"].isNull())
				ocrInfoItemObject.timestamp = aiDataNodeOcrInfoOcrInfoItem["Timestamp"].asString();
			mediaInfoListObject.aiData.ocrInfo.push_back(ocrInfoItemObject);
		}
		auto aiRoughDataNode = value["AiRoughData"];
		if(!aiRoughDataNode["SaveType"].isNull())
			mediaInfoListObject.aiRoughData.saveType = aiRoughDataNode["SaveType"].asString();
		if(!aiRoughDataNode["Status"].isNull())
			mediaInfoListObject.aiRoughData.status = aiRoughDataNode["Status"].asString();
		if(!aiRoughDataNode["AiJobId"].isNull())
			mediaInfoListObject.aiRoughData.aiJobId = aiRoughDataNode["AiJobId"].asString();
		if(!aiRoughDataNode["Result"].isNull())
			mediaInfoListObject.aiRoughData.result = aiRoughDataNode["Result"].asString();
		if(!aiRoughDataNode["AiCategory"].isNull())
			mediaInfoListObject.aiRoughData.aiCategory = aiRoughDataNode["AiCategory"].asString();
		mediaInfoList_.push_back(mediaInfoListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

std::vector<SearchMediaResult::MediaInfo> SearchMediaResult::getMediaInfoList()const
{
	return mediaInfoList_;
}

long SearchMediaResult::getTotal()const
{
	return total_;
}

std::string SearchMediaResult::getCode()const
{
	return code_;
}

std::string SearchMediaResult::getSuccess()const
{
	return success_;
}

