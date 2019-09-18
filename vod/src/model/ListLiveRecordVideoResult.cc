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

#include <alibabacloud/vod/model/ListLiveRecordVideoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListLiveRecordVideoResult::ListLiveRecordVideoResult() :
	ServiceResult()
{}

ListLiveRecordVideoResult::ListLiveRecordVideoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLiveRecordVideoResult::~ListLiveRecordVideoResult()
{}

void ListLiveRecordVideoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLiveRecordVideoList = value["LiveRecordVideoList"]["LiveRecordVideo"];
	for (auto value : allLiveRecordVideoList)
	{
		LiveRecordVideo liveRecordVideoListObject;
		if(!value["StreamName"].isNull())
			liveRecordVideoListObject.streamName = value["StreamName"].asString();
		if(!value["DomainName"].isNull())
			liveRecordVideoListObject.domainName = value["DomainName"].asString();
		if(!value["AppName"].isNull())
			liveRecordVideoListObject.appName = value["AppName"].asString();
		if(!value["PlaylistId"].isNull())
			liveRecordVideoListObject.playlistId = value["PlaylistId"].asString();
		if(!value["RecordStartTime"].isNull())
			liveRecordVideoListObject.recordStartTime = value["RecordStartTime"].asString();
		if(!value["RecordEndTime"].isNull())
			liveRecordVideoListObject.recordEndTime = value["RecordEndTime"].asString();
		auto allPlayInfoList = value["PlayInfoList"]["PlayInfo"];
		for (auto value : allPlayInfoList)
		{
			LiveRecordVideo::PlayInfo playInfoListObject;
			if(!value["Width"].isNull())
				playInfoListObject.width = std::stol(value["Width"].asString());
			if(!value["Height"].isNull())
				playInfoListObject.height = std::stol(value["Height"].asString());
			if(!value["Size"].isNull())
				playInfoListObject.size = std::stol(value["Size"].asString());
			if(!value["PlayURL"].isNull())
				playInfoListObject.playURL = value["PlayURL"].asString();
			if(!value["Bitrate"].isNull())
				playInfoListObject.bitrate = value["Bitrate"].asString();
			if(!value["Definition"].isNull())
				playInfoListObject.definition = value["Definition"].asString();
			if(!value["Duration"].isNull())
				playInfoListObject.duration = value["Duration"].asString();
			if(!value["Format"].isNull())
				playInfoListObject.format = value["Format"].asString();
			if(!value["Fps"].isNull())
				playInfoListObject.fps = value["Fps"].asString();
			if(!value["Encrypt"].isNull())
				playInfoListObject.encrypt = std::stol(value["Encrypt"].asString());
			if(!value["Plaintext"].isNull())
				playInfoListObject.plaintext = value["Plaintext"].asString();
			if(!value["Complexity"].isNull())
				playInfoListObject.complexity = value["Complexity"].asString();
			if(!value["StreamType"].isNull())
				playInfoListObject.streamType = value["StreamType"].asString();
			if(!value["Rand"].isNull())
				playInfoListObject.rand = value["Rand"].asString();
			if(!value["JobId"].isNull())
				playInfoListObject.jobId = value["JobId"].asString();
			liveRecordVideoListObject.playInfoList.push_back(playInfoListObject);
		}
		auto videoNode = value["Video"];
		if(!videoNode["VideoId"].isNull())
			liveRecordVideoListObject.video.videoId = videoNode["VideoId"].asString();
		if(!videoNode["Title"].isNull())
			liveRecordVideoListObject.video.title = videoNode["Title"].asString();
		if(!videoNode["Tags"].isNull())
			liveRecordVideoListObject.video.tags = videoNode["Tags"].asString();
		if(!videoNode["Status"].isNull())
			liveRecordVideoListObject.video.status = videoNode["Status"].asString();
		if(!videoNode["Size"].isNull())
			liveRecordVideoListObject.video.size = std::stol(videoNode["Size"].asString());
		if(!videoNode["Privilege"].isNull())
			liveRecordVideoListObject.video.privilege = std::stoi(videoNode["Privilege"].asString());
		if(!videoNode["Duration"].isNull())
			liveRecordVideoListObject.video.duration = std::stof(videoNode["Duration"].asString());
		if(!videoNode["Description"].isNull())
			liveRecordVideoListObject.video.description = videoNode["Description"].asString();
		if(!videoNode["CustomerId"].isNull())
			liveRecordVideoListObject.video.customerId = std::stol(videoNode["CustomerId"].asString());
		if(!videoNode["CreateTime"].isNull())
			liveRecordVideoListObject.video.createTime = videoNode["CreateTime"].asString();
		if(!videoNode["CreationTime"].isNull())
			liveRecordVideoListObject.video.creationTime = videoNode["CreationTime"].asString();
		if(!videoNode["ModifyTime"].isNull())
			liveRecordVideoListObject.video.modifyTime = videoNode["ModifyTime"].asString();
		if(!videoNode["CoverURL"].isNull())
			liveRecordVideoListObject.video.coverURL = videoNode["CoverURL"].asString();
		if(!videoNode["CateId"].isNull())
			liveRecordVideoListObject.video.cateId = std::stoi(videoNode["CateId"].asString());
		if(!videoNode["CateName"].isNull())
			liveRecordVideoListObject.video.cateName = videoNode["CateName"].asString();
		if(!videoNode["DownloadSwitch"].isNull())
			liveRecordVideoListObject.video.downloadSwitch = videoNode["DownloadSwitch"].asString();
		if(!videoNode["TemplateGroupId"].isNull())
			liveRecordVideoListObject.video.templateGroupId = videoNode["TemplateGroupId"].asString();
			auto allSnapshots = videoNode["Snapshots"]["Snapshot"];
			for (auto value : allSnapshots)
				liveRecordVideoListObject.video.snapshots.push_back(value.asString());
		liveRecordVideoList_.push_back(liveRecordVideoListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListLiveRecordVideoResult::getTotal()const
{
	return total_;
}

std::vector<ListLiveRecordVideoResult::LiveRecordVideo> ListLiveRecordVideoResult::getLiveRecordVideoList()const
{
	return liveRecordVideoList_;
}

