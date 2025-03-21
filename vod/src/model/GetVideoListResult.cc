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

#include <alibabacloud/vod/model/GetVideoListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetVideoListResult::GetVideoListResult() :
	ServiceResult()
{}

GetVideoListResult::GetVideoListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVideoListResult::~GetVideoListResult()
{}

void GetVideoListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVideoListNode = value["VideoList"]["Video"];
	for (auto valueVideoListVideo : allVideoListNode)
	{
		Video videoListObject;
		if(!valueVideoListVideo["StorageLocation"].isNull())
			videoListObject.storageLocation = valueVideoListVideo["StorageLocation"].asString();
		if(!valueVideoListVideo["Status"].isNull())
			videoListObject.status = valueVideoListVideo["Status"].asString();
		if(!valueVideoListVideo["CreationTime"].isNull())
			videoListObject.creationTime = valueVideoListVideo["CreationTime"].asString();
		if(!valueVideoListVideo["CateId"].isNull())
			videoListObject.cateId = std::stol(valueVideoListVideo["CateId"].asString());
		if(!valueVideoListVideo["VideoId"].isNull())
			videoListObject.videoId = valueVideoListVideo["VideoId"].asString();
		if(!valueVideoListVideo["CreateTime"].isNull())
			videoListObject.createTime = valueVideoListVideo["CreateTime"].asString();
		if(!valueVideoListVideo["Tags"].isNull())
			videoListObject.tags = valueVideoListVideo["Tags"].asString();
		if(!valueVideoListVideo["ModificationTime"].isNull())
			videoListObject.modificationTime = valueVideoListVideo["ModificationTime"].asString();
		if(!valueVideoListVideo["CateName"].isNull())
			videoListObject.cateName = valueVideoListVideo["CateName"].asString();
		if(!valueVideoListVideo["Description"].isNull())
			videoListObject.description = valueVideoListVideo["Description"].asString();
		if(!valueVideoListVideo["AppId"].isNull())
			videoListObject.appId = valueVideoListVideo["AppId"].asString();
		if(!valueVideoListVideo["Size"].isNull())
			videoListObject.size = std::stol(valueVideoListVideo["Size"].asString());
		if(!valueVideoListVideo["CoverURL"].isNull())
			videoListObject.coverURL = valueVideoListVideo["CoverURL"].asString();
		if(!valueVideoListVideo["Duration"].isNull())
			videoListObject.duration = std::stof(valueVideoListVideo["Duration"].asString());
		if(!valueVideoListVideo["Title"].isNull())
			videoListObject.title = valueVideoListVideo["Title"].asString();
		if(!valueVideoListVideo["ModifyTime"].isNull())
			videoListObject.modifyTime = valueVideoListVideo["ModifyTime"].asString();
		if(!valueVideoListVideo["StorageClass"].isNull())
			videoListObject.storageClass = valueVideoListVideo["StorageClass"].asString();
		if(!valueVideoListVideo["RestoreStatus"].isNull())
			videoListObject.restoreStatus = valueVideoListVideo["RestoreStatus"].asString();
		if(!valueVideoListVideo["RestoreExpiration"].isNull())
			videoListObject.restoreExpiration = valueVideoListVideo["RestoreExpiration"].asString();
		if(!valueVideoListVideo["UserData"].isNull())
			videoListObject.userData = valueVideoListVideo["UserData"].asString();
		auto allSnapshots = value["Snapshots"]["Snapshot"];
		for (auto value : allSnapshots)
			videoListObject.snapshots.push_back(value.asString());
		videoList_.push_back(videoListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int GetVideoListResult::getTotal()const
{
	return total_;
}

std::vector<GetVideoListResult::Video> GetVideoListResult::getVideoList()const
{
	return videoList_;
}

