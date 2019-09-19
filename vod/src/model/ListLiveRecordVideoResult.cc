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
	auto allLiveRecordVideoListNode = value["LiveRecordVideoList"]["LiveRecordVideo"];
	for (auto valueLiveRecordVideoListLiveRecordVideo : allLiveRecordVideoListNode)
	{
		LiveRecordVideo liveRecordVideoListObject;
		if(!valueLiveRecordVideoListLiveRecordVideo["StreamName"].isNull())
			liveRecordVideoListObject.streamName = valueLiveRecordVideoListLiveRecordVideo["StreamName"].asString();
		if(!valueLiveRecordVideoListLiveRecordVideo["DomainName"].isNull())
			liveRecordVideoListObject.domainName = valueLiveRecordVideoListLiveRecordVideo["DomainName"].asString();
		if(!valueLiveRecordVideoListLiveRecordVideo["AppName"].isNull())
			liveRecordVideoListObject.appName = valueLiveRecordVideoListLiveRecordVideo["AppName"].asString();
		if(!valueLiveRecordVideoListLiveRecordVideo["PlaylistId"].isNull())
			liveRecordVideoListObject.playlistId = valueLiveRecordVideoListLiveRecordVideo["PlaylistId"].asString();
		if(!valueLiveRecordVideoListLiveRecordVideo["RecordStartTime"].isNull())
			liveRecordVideoListObject.recordStartTime = valueLiveRecordVideoListLiveRecordVideo["RecordStartTime"].asString();
		if(!valueLiveRecordVideoListLiveRecordVideo["RecordEndTime"].isNull())
			liveRecordVideoListObject.recordEndTime = valueLiveRecordVideoListLiveRecordVideo["RecordEndTime"].asString();
		auto allPlayInfoListNode = allLiveRecordVideoListNode["PlayInfoList"]["PlayInfo"];
		for (auto allLiveRecordVideoListNodePlayInfoListPlayInfo : allPlayInfoListNode)
		{
			LiveRecordVideo::PlayInfo playInfoListObject;
			if(!allLiveRecordVideoListNodePlayInfoListPlayInfo["Width"].isNull())
				playInfoListObject.width = std::stol(allLiveRecordVideoListNodePlayInfoListPlayInfo["Width"].asString());
			if(!allLiveRecordVideoListNodePlayInfoListPlayInfo["Height"].isNull())
				playInfoListObject.height = std::stol(allLiveRecordVideoListNodePlayInfoListPlayInfo["Height"].asString());
			if(!allLiveRecordVideoListNodePlayInfoListPlayInfo["Size"].isNull())
				playInfoListObject.size = std::stol(allLiveRecordVideoListNodePlayInfoListPlayInfo["Size"].asString());
			if(!allLiveRecordVideoListNodePlayInfoListPlayInfo["PlayURL"].isNull())
				playInfoListObject.playURL = allLiveRecordVideoListNodePlayInfoListPlayInfo["PlayURL"].asString();
			if(!allLiveRecordVideoListNodePlayInfoListPlayInfo["Bitrate"].isNull())
				playInfoListObject.bitrate = allLiveRecordVideoListNodePlayInfoListPlayInfo["Bitrate"].asString();
			if(!allLiveRecordVideoListNodePlayInfoListPlayInfo["Definition"].isNull())
				playInfoListObject.definition = allLiveRecordVideoListNodePlayInfoListPlayInfo["Definition"].asString();
			if(!allLiveRecordVideoListNodePlayInfoListPlayInfo["Duration"].isNull())
				playInfoListObject.duration = allLiveRecordVideoListNodePlayInfoListPlayInfo["Duration"].asString();
			if(!allLiveRecordVideoListNodePlayInfoListPlayInfo["Format"].isNull())
				playInfoListObject.format = allLiveRecordVideoListNodePlayInfoListPlayInfo["Format"].asString();
			if(!allLiveRecordVideoListNodePlayInfoListPlayInfo["Fps"].isNull())
				playInfoListObject.fps = allLiveRecordVideoListNodePlayInfoListPlayInfo["Fps"].asString();
			if(!allLiveRecordVideoListNodePlayInfoListPlayInfo["Encrypt"].isNull())
				playInfoListObject.encrypt = std::stol(allLiveRecordVideoListNodePlayInfoListPlayInfo["Encrypt"].asString());
			if(!allLiveRecordVideoListNodePlayInfoListPlayInfo["Plaintext"].isNull())
				playInfoListObject.plaintext = allLiveRecordVideoListNodePlayInfoListPlayInfo["Plaintext"].asString();
			if(!allLiveRecordVideoListNodePlayInfoListPlayInfo["Complexity"].isNull())
				playInfoListObject.complexity = allLiveRecordVideoListNodePlayInfoListPlayInfo["Complexity"].asString();
			if(!allLiveRecordVideoListNodePlayInfoListPlayInfo["StreamType"].isNull())
				playInfoListObject.streamType = allLiveRecordVideoListNodePlayInfoListPlayInfo["StreamType"].asString();
			if(!allLiveRecordVideoListNodePlayInfoListPlayInfo["Rand"].isNull())
				playInfoListObject.rand = allLiveRecordVideoListNodePlayInfoListPlayInfo["Rand"].asString();
			if(!allLiveRecordVideoListNodePlayInfoListPlayInfo["JobId"].isNull())
				playInfoListObject.jobId = allLiveRecordVideoListNodePlayInfoListPlayInfo["JobId"].asString();
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

