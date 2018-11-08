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
	auto allVideoList = value["VideoList"]["Video"];
	for (auto value : allVideoList)
	{
		Video videoListObject;
		if(!value["VideoId"].isNull())
			videoListObject.videoId = value["VideoId"].asString();
		if(!value["Title"].isNull())
			videoListObject.title = value["Title"].asString();
		if(!value["Tags"].isNull())
			videoListObject.tags = value["Tags"].asString();
		if(!value["Status"].isNull())
			videoListObject.status = value["Status"].asString();
		if(!value["Size"].isNull())
			videoListObject.size = std::stol(value["Size"].asString());
		if(!value["Duration"].isNull())
			videoListObject.duration = std::stof(value["Duration"].asString());
		if(!value["Description"].isNull())
			videoListObject.description = value["Description"].asString();
		if(!value["CreateTime"].isNull())
			videoListObject.createTime = value["CreateTime"].asString();
		if(!value["ModifyTime"].isNull())
			videoListObject.modifyTime = value["ModifyTime"].asString();
		if(!value["ModificationTime"].isNull())
			videoListObject.modificationTime = value["ModificationTime"].asString();
		if(!value["CreationTime"].isNull())
			videoListObject.creationTime = value["CreationTime"].asString();
		if(!value["CoverURL"].isNull())
			videoListObject.coverURL = value["CoverURL"].asString();
		if(!value["CateId"].isNull())
			videoListObject.cateId = std::stol(value["CateId"].asString());
		if(!value["CateName"].isNull())
			videoListObject.cateName = value["CateName"].asString();
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

