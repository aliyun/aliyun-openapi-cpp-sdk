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

#include <alibabacloud/ice/model/ListMediaBasicInfosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

ListMediaBasicInfosResult::ListMediaBasicInfosResult() :
	ServiceResult()
{}

ListMediaBasicInfosResult::ListMediaBasicInfosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMediaBasicInfosResult::~ListMediaBasicInfosResult()
{}

void ListMediaBasicInfosResult::parse(const std::string &payload)
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
			if(!fileBasicInfoNode["FileMediaType"].isNull())
				fileInfoListObject.fileBasicInfo.fileMediaType = fileBasicInfoNode["FileMediaType"].asString();
			if(!fileBasicInfoNode["FileBusinessType"].isNull())
				fileInfoListObject.fileBasicInfo.fileBusinessType = fileBasicInfoNode["FileBusinessType"].asString();
			if(!fileBasicInfoNode["CreateTime"].isNull())
				fileInfoListObject.fileBasicInfo.createTime = fileBasicInfoNode["CreateTime"].asString();
			if(!fileBasicInfoNode["ModifiedTime"].isNull())
				fileInfoListObject.fileBasicInfo.modifiedTime = fileBasicInfoNode["ModifiedTime"].asString();
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
		if(!mediaBasicInfoNode["AppId"].isNull())
			mediaInfosObject.mediaBasicInfo.appId = mediaBasicInfoNode["AppId"].asString();
		if(!mediaBasicInfoNode["CateId"].isNull())
			mediaInfosObject.mediaBasicInfo.cateId = std::stol(mediaBasicInfoNode["CateId"].asString());
		if(!mediaBasicInfoNode["PublishState"].isNull())
			mediaInfosObject.mediaBasicInfo.publishState = mediaBasicInfoNode["PublishState"].asString();
		if(!mediaBasicInfoNode["Acl"].isNull())
			mediaInfosObject.mediaBasicInfo.acl = mediaBasicInfoNode["Acl"].asString();
		if(!mediaBasicInfoNode["Biz"].isNull())
			mediaInfosObject.mediaBasicInfo.biz = mediaBasicInfoNode["Biz"].asString();
		if(!mediaBasicInfoNode["UploadSource"].isNull())
			mediaInfosObject.mediaBasicInfo.uploadSource = mediaBasicInfoNode["UploadSource"].asString();
		if(!mediaBasicInfoNode["EntityId"].isNull())
			mediaInfosObject.mediaBasicInfo.entityId = mediaBasicInfoNode["EntityId"].asString();
		if(!mediaBasicInfoNode["ReferenceId"].isNull())
			mediaInfosObject.mediaBasicInfo.referenceId = mediaBasicInfoNode["ReferenceId"].asString();
		auto mediaDynamicInfoNode = value["MediaDynamicInfo"];
		auto dynamicMetaDataNode = mediaDynamicInfoNode["DynamicMetaData"];
		if(!dynamicMetaDataNode["Type"].isNull())
			mediaInfosObject.mediaDynamicInfo.dynamicMetaData.type = dynamicMetaDataNode["Type"].asString();
		if(!dynamicMetaDataNode["Data"].isNull())
			mediaInfosObject.mediaDynamicInfo.dynamicMetaData.data = dynamicMetaDataNode["Data"].asString();
		if(!dynamicMetaDataNode["EntityId"].isNull())
			mediaInfosObject.mediaDynamicInfo.dynamicMetaData.entityId = dynamicMetaDataNode["EntityId"].asString();
		mediaInfos_.push_back(mediaInfosObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

long ListMediaBasicInfosResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListMediaBasicInfosResult::getNextToken()const
{
	return nextToken_;
}

int ListMediaBasicInfosResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListMediaBasicInfosResult::MediaInfo> ListMediaBasicInfosResult::getMediaInfos()const
{
	return mediaInfos_;
}

