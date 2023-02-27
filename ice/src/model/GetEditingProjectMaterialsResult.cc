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

#include <alibabacloud/ice/model/GetEditingProjectMaterialsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetEditingProjectMaterialsResult::GetEditingProjectMaterialsResult() :
	ServiceResult()
{}

GetEditingProjectMaterialsResult::GetEditingProjectMaterialsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetEditingProjectMaterialsResult::~GetEditingProjectMaterialsResult()
{}

void GetEditingProjectMaterialsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMediaInfosNode = value["MediaInfos"]["MediaInfo"];
	for (auto valueMediaInfosMediaInfo : allMediaInfosNode)
	{
		MediaInfo mediaInfosObject;
		if(!valueMediaInfosMediaInfo["MediaId"].isNull())
			mediaInfosObject.mediaId = valueMediaInfosMediaInfo["MediaId"].asString();
		auto allFileInfoListNode = valueMediaInfosMediaInfo["FileInfoList"]["FileInfo"];
		for (auto valueMediaInfosMediaInfoFileInfoListFileInfo : allFileInfoListNode)
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
			mediaInfosObject.fileInfoList.push_back(fileInfoListObject);
		}
		auto mediaBasicInfoNode = value["MediaBasicInfo"];
		if(!mediaBasicInfoNode["MediaId"].isNull())
			mediaInfosObject.mediaBasicInfo.mediaId = mediaBasicInfoNode["MediaId"].asString();
		if(!mediaBasicInfoNode["InputURL"].isNull())
			mediaInfosObject.mediaBasicInfo.inputURL = mediaBasicInfoNode["InputURL"].asString();
		if(!mediaBasicInfoNode["MediaType"].isNull())
			mediaInfosObject.mediaBasicInfo.mediaType = mediaBasicInfoNode["MediaType"].asString();
		if(!mediaBasicInfoNode["BusinessType"].isNull())
			mediaInfosObject.mediaBasicInfo.businessType = mediaBasicInfoNode["BusinessType"].asString();
		if(!mediaBasicInfoNode["Source"].isNull())
			mediaInfosObject.mediaBasicInfo.source = mediaBasicInfoNode["Source"].asString();
		if(!mediaBasicInfoNode["Title"].isNull())
			mediaInfosObject.mediaBasicInfo.title = mediaBasicInfoNode["Title"].asString();
		if(!mediaBasicInfoNode["Description"].isNull())
			mediaInfosObject.mediaBasicInfo.description = mediaBasicInfoNode["Description"].asString();
		if(!mediaBasicInfoNode["Category"].isNull())
			mediaInfosObject.mediaBasicInfo.category = mediaBasicInfoNode["Category"].asString();
		if(!mediaBasicInfoNode["MediaTags"].isNull())
			mediaInfosObject.mediaBasicInfo.mediaTags = mediaBasicInfoNode["MediaTags"].asString();
		if(!mediaBasicInfoNode["CoverURL"].isNull())
			mediaInfosObject.mediaBasicInfo.coverURL = mediaBasicInfoNode["CoverURL"].asString();
		if(!mediaBasicInfoNode["UserData"].isNull())
			mediaInfosObject.mediaBasicInfo.userData = mediaBasicInfoNode["UserData"].asString();
		if(!mediaBasicInfoNode["Snapshots"].isNull())
			mediaInfosObject.mediaBasicInfo.snapshots = mediaBasicInfoNode["Snapshots"].asString();
		if(!mediaBasicInfoNode["Status"].isNull())
			mediaInfosObject.mediaBasicInfo.status = mediaBasicInfoNode["Status"].asString();
		if(!mediaBasicInfoNode["TranscodeStatus"].isNull())
			mediaInfosObject.mediaBasicInfo.transcodeStatus = mediaBasicInfoNode["TranscodeStatus"].asString();
		if(!mediaBasicInfoNode["CreateTime"].isNull())
			mediaInfosObject.mediaBasicInfo.createTime = mediaBasicInfoNode["CreateTime"].asString();
		if(!mediaBasicInfoNode["ModifiedTime"].isNull())
			mediaInfosObject.mediaBasicInfo.modifiedTime = mediaBasicInfoNode["ModifiedTime"].asString();
		if(!mediaBasicInfoNode["DeletedTime"].isNull())
			mediaInfosObject.mediaBasicInfo.deletedTime = mediaBasicInfoNode["DeletedTime"].asString();
		if(!mediaBasicInfoNode["SpriteImages"].isNull())
			mediaInfosObject.mediaBasicInfo.spriteImages = mediaBasicInfoNode["SpriteImages"].asString();
		auto mediaDynamicInfoNode = value["MediaDynamicInfo"];
		auto dynamicMetaDataNode = mediaDynamicInfoNode["DynamicMetaData"];
		if(!dynamicMetaDataNode["MediaId"].isNull())
			mediaInfosObject.mediaDynamicInfo.dynamicMetaData.mediaId = dynamicMetaDataNode["MediaId"].asString();
		if(!dynamicMetaDataNode["EntityId"].isNull())
			mediaInfosObject.mediaDynamicInfo.dynamicMetaData.entityId = dynamicMetaDataNode["EntityId"].asString();
		if(!dynamicMetaDataNode["Data"].isNull())
			mediaInfosObject.mediaDynamicInfo.dynamicMetaData.data = dynamicMetaDataNode["Data"].asString();
		mediaInfos_.push_back(mediaInfosObject);
	}
	auto allLiveMaterialsNode = value["LiveMaterials"]["LiveStreamConfig"];
	for (auto valueLiveMaterialsLiveStreamConfig : allLiveMaterialsNode)
	{
		LiveStreamConfig liveMaterialsObject;
		if(!valueLiveMaterialsLiveStreamConfig["AppName"].isNull())
			liveMaterialsObject.appName = valueLiveMaterialsLiveStreamConfig["AppName"].asString();
		if(!valueLiveMaterialsLiveStreamConfig["StreamName"].isNull())
			liveMaterialsObject.streamName = valueLiveMaterialsLiveStreamConfig["StreamName"].asString();
		if(!valueLiveMaterialsLiveStreamConfig["DomainName"].isNull())
			liveMaterialsObject.domainName = valueLiveMaterialsLiveStreamConfig["DomainName"].asString();
		if(!valueLiveMaterialsLiveStreamConfig["LiveUrl"].isNull())
			liveMaterialsObject.liveUrl = valueLiveMaterialsLiveStreamConfig["LiveUrl"].asString();
		liveMaterials_.push_back(liveMaterialsObject);
	}
	auto allProjectMaterials = value["ProjectMaterials"]["projectMaterial"];
	for (const auto &item : allProjectMaterials)
		projectMaterials_.push_back(item.asString());
	if(!value["ProjectId"].isNull())
		projectId_ = value["ProjectId"].asString();

}

std::vector<GetEditingProjectMaterialsResult::LiveStreamConfig> GetEditingProjectMaterialsResult::getLiveMaterials()const
{
	return liveMaterials_;
}

std::string GetEditingProjectMaterialsResult::getProjectId()const
{
	return projectId_;
}

std::vector<GetEditingProjectMaterialsResult::MediaInfo> GetEditingProjectMaterialsResult::getMediaInfos()const
{
	return mediaInfos_;
}

std::vector<std::string> GetEditingProjectMaterialsResult::getProjectMaterials()const
{
	return projectMaterials_;
}

