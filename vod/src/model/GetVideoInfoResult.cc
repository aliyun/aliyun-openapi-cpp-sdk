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

#include <alibabacloud/vod/model/GetVideoInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetVideoInfoResult::GetVideoInfoResult() :
	ServiceResult()
{}

GetVideoInfoResult::GetVideoInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVideoInfoResult::~GetVideoInfoResult()
{}

void GetVideoInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto videoNode = value["Video"];
	if(!videoNode["StorageLocation"].isNull())
		video_.storageLocation = videoNode["StorageLocation"].asString();
	if(!videoNode["CreationTime"].isNull())
		video_.creationTime = videoNode["CreationTime"].asString();
	if(!videoNode["Status"].isNull())
		video_.status = videoNode["Status"].asString();
	if(!videoNode["CateId"].isNull())
		video_.cateId = std::stol(videoNode["CateId"].asString());
	if(!videoNode["VideoId"].isNull())
		video_.videoId = videoNode["VideoId"].asString();
	if(!videoNode["CreateTime"].isNull())
		video_.createTime = videoNode["CreateTime"].asString();
	if(!videoNode["DownloadSwitch"].isNull())
		video_.downloadSwitch = videoNode["DownloadSwitch"].asString();
	if(!videoNode["Tags"].isNull())
		video_.tags = videoNode["Tags"].asString();
	if(!videoNode["ModificationTime"].isNull())
		video_.modificationTime = videoNode["ModificationTime"].asString();
	if(!videoNode["RegionId"].isNull())
		video_.regionId = videoNode["RegionId"].asString();
	if(!videoNode["CustomMediaInfo"].isNull())
		video_.customMediaInfo = videoNode["CustomMediaInfo"].asString();
	if(!videoNode["CateName"].isNull())
		video_.cateName = videoNode["CateName"].asString();
	if(!videoNode["Description"].isNull())
		video_.description = videoNode["Description"].asString();
	if(!videoNode["PreprocessStatus"].isNull())
		video_.preprocessStatus = videoNode["PreprocessStatus"].asString();
	if(!videoNode["AppId"].isNull())
		video_.appId = videoNode["AppId"].asString();
	if(!videoNode["Size"].isNull())
		video_.size = std::stol(videoNode["Size"].asString());
	if(!videoNode["CoverURL"].isNull())
		video_.coverURL = videoNode["CoverURL"].asString();
	if(!videoNode["TemplateGroupId"].isNull())
		video_.templateGroupId = videoNode["TemplateGroupId"].asString();
	if(!videoNode["Duration"].isNull())
		video_.duration = std::stof(videoNode["Duration"].asString());
	if(!videoNode["Title"].isNull())
		video_.title = videoNode["Title"].asString();
	if(!videoNode["AuditStatus"].isNull())
		video_.auditStatus = videoNode["AuditStatus"].asString();
	if(!videoNode["ModifyTime"].isNull())
		video_.modifyTime = videoNode["ModifyTime"].asString();
	if(!videoNode["StorageClass"].isNull())
		video_.storageClass = videoNode["StorageClass"].asString();
	if(!videoNode["RestoreStatus"].isNull())
		video_.restoreStatus = videoNode["RestoreStatus"].asString();
	if(!videoNode["RestoreExpiration"].isNull())
		video_.restoreExpiration = videoNode["RestoreExpiration"].asString();
	if(!videoNode["UserData"].isNull())
		video_.userData = videoNode["UserData"].asString();
	auto allThumbnailListNode = videoNode["ThumbnailList"]["Thumbnail"];
	for (auto videoNodeThumbnailListThumbnail : allThumbnailListNode)
	{
		Video::Thumbnail thumbnailObject;
		if(!videoNodeThumbnailListThumbnail["URL"].isNull())
			thumbnailObject.uRL = videoNodeThumbnailListThumbnail["URL"].asString();
		video_.thumbnailList.push_back(thumbnailObject);
	}
		auto allSnapshots = videoNode["Snapshots"]["Snapshot"];
		for (auto value : allSnapshots)
			video_.snapshots.push_back(value.asString());
	if(!value["AI"].isNull())
		aI_ = value["AI"].asString();

}

GetVideoInfoResult::Video GetVideoInfoResult::getVideo()const
{
	return video_;
}

std::string GetVideoInfoResult::getAI()const
{
	return aI_;
}

