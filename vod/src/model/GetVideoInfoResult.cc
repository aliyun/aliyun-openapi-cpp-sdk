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
	auto videoInGetVideoInfoNode = value["Video"];
	if(!videoInGetVideoInfoNode["VideoId"].isNull())
		videoInGetVideoInfo_.videoId = videoInGetVideoInfoNode["VideoId"].asString();
	if(!videoInGetVideoInfoNode["Title"].isNull())
		videoInGetVideoInfo_.title = videoInGetVideoInfoNode["Title"].asString();
	if(!videoInGetVideoInfoNode["Tags"].isNull())
		videoInGetVideoInfo_.tags = videoInGetVideoInfoNode["Tags"].asString();
	if(!videoInGetVideoInfoNode["Status"].isNull())
		videoInGetVideoInfo_.status = videoInGetVideoInfoNode["Status"].asString();
	if(!videoInGetVideoInfoNode["Size"].isNull())
		videoInGetVideoInfo_.size = std::stol(videoInGetVideoInfoNode["Size"].asString());
	if(!videoInGetVideoInfoNode["Duration"].isNull())
		videoInGetVideoInfo_.duration = std::stof(videoInGetVideoInfoNode["Duration"].asString());
	if(!videoInGetVideoInfoNode["Description"].isNull())
		videoInGetVideoInfo_.description = videoInGetVideoInfoNode["Description"].asString();
	if(!videoInGetVideoInfoNode["CreateTime"].isNull())
		videoInGetVideoInfo_.createTime = videoInGetVideoInfoNode["CreateTime"].asString();
	if(!videoInGetVideoInfoNode["ModifyTime"].isNull())
		videoInGetVideoInfo_.modifyTime = videoInGetVideoInfoNode["ModifyTime"].asString();
	if(!videoInGetVideoInfoNode["ModificationTime"].isNull())
		videoInGetVideoInfo_.modificationTime = videoInGetVideoInfoNode["ModificationTime"].asString();
	if(!videoInGetVideoInfoNode["CreationTime"].isNull())
		videoInGetVideoInfo_.creationTime = videoInGetVideoInfoNode["CreationTime"].asString();
	if(!videoInGetVideoInfoNode["CoverURL"].isNull())
		videoInGetVideoInfo_.coverURL = videoInGetVideoInfoNode["CoverURL"].asString();
	if(!videoInGetVideoInfoNode["CateId"].isNull())
		videoInGetVideoInfo_.cateId = std::stol(videoInGetVideoInfoNode["CateId"].asString());
	if(!videoInGetVideoInfoNode["CateName"].isNull())
		videoInGetVideoInfo_.cateName = videoInGetVideoInfoNode["CateName"].asString();
	if(!videoInGetVideoInfoNode["DownloadSwitch"].isNull())
		videoInGetVideoInfo_.downloadSwitch = videoInGetVideoInfoNode["DownloadSwitch"].asString();
	if(!videoInGetVideoInfoNode["TemplateGroupId"].isNull())
		videoInGetVideoInfo_.templateGroupId = videoInGetVideoInfoNode["TemplateGroupId"].asString();
	if(!videoInGetVideoInfoNode["PreprocessStatus"].isNull())
		videoInGetVideoInfo_.preprocessStatus = videoInGetVideoInfoNode["PreprocessStatus"].asString();
	if(!videoInGetVideoInfoNode["StorageLocation"].isNull())
		videoInGetVideoInfo_.storageLocation = videoInGetVideoInfoNode["StorageLocation"].asString();
	if(!videoInGetVideoInfoNode["RegionId"].isNull())
		videoInGetVideoInfo_.regionId = videoInGetVideoInfoNode["RegionId"].asString();
	if(!videoInGetVideoInfoNode["CustomMediaInfo"].isNull())
		videoInGetVideoInfo_.customMediaInfo = videoInGetVideoInfoNode["CustomMediaInfo"].asString();
	if(!videoInGetVideoInfoNode["AuditStatus"].isNull())
		videoInGetVideoInfo_.auditStatus = videoInGetVideoInfoNode["AuditStatus"].asString();
	if(!videoInGetVideoInfoNode["AppId"].isNull())
		videoInGetVideoInfo_.appId = videoInGetVideoInfoNode["AppId"].asString();
	auto allThumbnailList = value["ThumbnailList"]["Thumbnail"];
	for (auto value : allThumbnailList)
	{
		VideoInGetVideoInfo::Thumbnail thumbnailObject;
		if(!value["URL"].isNull())
			thumbnailObject.uRL = value["URL"].asString();
		videoInGetVideoInfo_.thumbnailList.push_back(thumbnailObject);
	}
		auto allSnapshots = videoInGetVideoInfoNode["Snapshots"]["Snapshot"];
		for (auto value : allSnapshots)
			videoInGetVideoInfo_.snapshots.push_back(value.asString());
	if(!value["AI"].isNull())
		aI_ = value["AI"].asString();

}

std::string GetVideoInfoResult::getAI()const
{
	return aI_;
}

GetVideoInfoResult::VideoInGetVideoInfo GetVideoInfoResult::getVideoInGetVideoInfo()const
{
	return videoInGetVideoInfo_;
}

