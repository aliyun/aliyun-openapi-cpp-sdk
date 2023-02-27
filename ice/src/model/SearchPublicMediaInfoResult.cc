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

#include <alibabacloud/ice/model/SearchPublicMediaInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

SearchPublicMediaInfoResult::SearchPublicMediaInfoResult() :
	ServiceResult()
{}

SearchPublicMediaInfoResult::SearchPublicMediaInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchPublicMediaInfoResult::~SearchPublicMediaInfoResult()
{}

void SearchPublicMediaInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPublicMediaInfosNode = value["PublicMediaInfos"]["publicMediaInfo"];
	for (auto valuePublicMediaInfospublicMediaInfo : allPublicMediaInfosNode)
	{
		PublicMediaInfo publicMediaInfosObject;
		if(!valuePublicMediaInfospublicMediaInfo["Authorized"].isNull())
			publicMediaInfosObject.authorized = valuePublicMediaInfospublicMediaInfo["Authorized"].asString() == "true";
		if(!valuePublicMediaInfospublicMediaInfo["Favorite"].isNull())
			publicMediaInfosObject.favorite = valuePublicMediaInfospublicMediaInfo["Favorite"].asString() == "true";
		if(!valuePublicMediaInfospublicMediaInfo["RemainingAuthTime"].isNull())
			publicMediaInfosObject.remainingAuthTime = valuePublicMediaInfospublicMediaInfo["RemainingAuthTime"].asString();
		auto mediaInfoNode = value["MediaInfo"];
		if(!mediaInfoNode["MediaId"].isNull())
			publicMediaInfosObject.mediaInfo.mediaId = mediaInfoNode["MediaId"].asString();
		auto mediaBasicInfoNode = mediaInfoNode["MediaBasicInfo"];
		if(!mediaBasicInfoNode["MediaId"].isNull())
			publicMediaInfosObject.mediaInfo.mediaBasicInfo.mediaId = mediaBasicInfoNode["MediaId"].asString();
		if(!mediaBasicInfoNode["MediaType"].isNull())
			publicMediaInfosObject.mediaInfo.mediaBasicInfo.mediaType = mediaBasicInfoNode["MediaType"].asString();
		if(!mediaBasicInfoNode["BusinessType"].isNull())
			publicMediaInfosObject.mediaInfo.mediaBasicInfo.businessType = mediaBasicInfoNode["BusinessType"].asString();
		if(!mediaBasicInfoNode["Source"].isNull())
			publicMediaInfosObject.mediaInfo.mediaBasicInfo.source = mediaBasicInfoNode["Source"].asString();
		if(!mediaBasicInfoNode["Title"].isNull())
			publicMediaInfosObject.mediaInfo.mediaBasicInfo.title = mediaBasicInfoNode["Title"].asString();
		if(!mediaBasicInfoNode["Description"].isNull())
			publicMediaInfosObject.mediaInfo.mediaBasicInfo.description = mediaBasicInfoNode["Description"].asString();
		if(!mediaBasicInfoNode["Category"].isNull())
			publicMediaInfosObject.mediaInfo.mediaBasicInfo.category = mediaBasicInfoNode["Category"].asString();
		if(!mediaBasicInfoNode["MediaTags"].isNull())
			publicMediaInfosObject.mediaInfo.mediaBasicInfo.mediaTags = mediaBasicInfoNode["MediaTags"].asString();
		if(!mediaBasicInfoNode["CoverURL"].isNull())
			publicMediaInfosObject.mediaInfo.mediaBasicInfo.coverURL = mediaBasicInfoNode["CoverURL"].asString();
		if(!mediaBasicInfoNode["UserData"].isNull())
			publicMediaInfosObject.mediaInfo.mediaBasicInfo.userData = mediaBasicInfoNode["UserData"].asString();
		if(!mediaBasicInfoNode["Snapshots"].isNull())
			publicMediaInfosObject.mediaInfo.mediaBasicInfo.snapshots = mediaBasicInfoNode["Snapshots"].asString();
		if(!mediaBasicInfoNode["Status"].isNull())
			publicMediaInfosObject.mediaInfo.mediaBasicInfo.status = mediaBasicInfoNode["Status"].asString();
		if(!mediaBasicInfoNode["TranscodeStatus"].isNull())
			publicMediaInfosObject.mediaInfo.mediaBasicInfo.transcodeStatus = mediaBasicInfoNode["TranscodeStatus"].asString();
		if(!mediaBasicInfoNode["CreateTime"].isNull())
			publicMediaInfosObject.mediaInfo.mediaBasicInfo.createTime = mediaBasicInfoNode["CreateTime"].asString();
		if(!mediaBasicInfoNode["ModifiedTime"].isNull())
			publicMediaInfosObject.mediaInfo.mediaBasicInfo.modifiedTime = mediaBasicInfoNode["ModifiedTime"].asString();
		if(!mediaBasicInfoNode["DeletedTime"].isNull())
			publicMediaInfosObject.mediaInfo.mediaBasicInfo.deletedTime = mediaBasicInfoNode["DeletedTime"].asString();
		if(!mediaBasicInfoNode["SpriteImages"].isNull())
			publicMediaInfosObject.mediaInfo.mediaBasicInfo.spriteImages = mediaBasicInfoNode["SpriteImages"].asString();
		auto dynamicMetaDataNode = mediaInfoNode["DynamicMetaData"];
		if(!dynamicMetaDataNode["Data"].isNull())
			publicMediaInfosObject.mediaInfo.dynamicMetaData.data = dynamicMetaDataNode["Data"].asString();
		if(!dynamicMetaDataNode["Type"].isNull())
			publicMediaInfosObject.mediaInfo.dynamicMetaData.type = dynamicMetaDataNode["Type"].asString();
		publicMediaInfos_.push_back(publicMediaInfosObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long SearchPublicMediaInfoResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<SearchPublicMediaInfoResult::PublicMediaInfo> SearchPublicMediaInfoResult::getPublicMediaInfos()const
{
	return publicMediaInfos_;
}

