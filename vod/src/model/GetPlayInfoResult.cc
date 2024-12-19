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

#include <alibabacloud/vod/model/GetPlayInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetPlayInfoResult::GetPlayInfoResult() :
	ServiceResult()
{}

GetPlayInfoResult::GetPlayInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPlayInfoResult::~GetPlayInfoResult()
{}

void GetPlayInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPlayInfoListNode = value["PlayInfoList"]["PlayInfo"];
	for (auto valuePlayInfoListPlayInfo : allPlayInfoListNode)
	{
		PlayInfo playInfoListObject;
		if(!valuePlayInfoListPlayInfo["CreationTime"].isNull())
			playInfoListObject.creationTime = valuePlayInfoListPlayInfo["CreationTime"].asString();
		if(!valuePlayInfoListPlayInfo["Status"].isNull())
			playInfoListObject.status = valuePlayInfoListPlayInfo["Status"].asString();
		if(!valuePlayInfoListPlayInfo["Specification"].isNull())
			playInfoListObject.specification = valuePlayInfoListPlayInfo["Specification"].asString();
		if(!valuePlayInfoListPlayInfo["Complexity"].isNull())
			playInfoListObject.complexity = valuePlayInfoListPlayInfo["Complexity"].asString();
		if(!valuePlayInfoListPlayInfo["NarrowBandType"].isNull())
			playInfoListObject.narrowBandType = valuePlayInfoListPlayInfo["NarrowBandType"].asString();
		if(!valuePlayInfoListPlayInfo["Height"].isNull())
			playInfoListObject.height = std::stol(valuePlayInfoListPlayInfo["Height"].asString());
		if(!valuePlayInfoListPlayInfo["Bitrate"].isNull())
			playInfoListObject.bitrate = valuePlayInfoListPlayInfo["Bitrate"].asString();
		if(!valuePlayInfoListPlayInfo["ModificationTime"].isNull())
			playInfoListObject.modificationTime = valuePlayInfoListPlayInfo["ModificationTime"].asString();
		if(!valuePlayInfoListPlayInfo["WatermarkId"].isNull())
			playInfoListObject.watermarkId = valuePlayInfoListPlayInfo["WatermarkId"].asString();
		if(!valuePlayInfoListPlayInfo["Encrypt"].isNull())
			playInfoListObject.encrypt = std::stol(valuePlayInfoListPlayInfo["Encrypt"].asString());
		if(!valuePlayInfoListPlayInfo["Definition"].isNull())
			playInfoListObject.definition = valuePlayInfoListPlayInfo["Definition"].asString();
		if(!valuePlayInfoListPlayInfo["Rand"].isNull())
			playInfoListObject.rand = valuePlayInfoListPlayInfo["Rand"].asString();
		if(!valuePlayInfoListPlayInfo["EncryptType"].isNull())
			playInfoListObject.encryptType = valuePlayInfoListPlayInfo["EncryptType"].asString();
		if(!valuePlayInfoListPlayInfo["EncryptMode"].isNull())
			playInfoListObject.encryptMode = valuePlayInfoListPlayInfo["EncryptMode"].asString();
		if(!valuePlayInfoListPlayInfo["PreprocessStatus"].isNull())
			playInfoListObject.preprocessStatus = valuePlayInfoListPlayInfo["PreprocessStatus"].asString();
		if(!valuePlayInfoListPlayInfo["StreamType"].isNull())
			playInfoListObject.streamType = valuePlayInfoListPlayInfo["StreamType"].asString();
		if(!valuePlayInfoListPlayInfo["JobId"].isNull())
			playInfoListObject.jobId = valuePlayInfoListPlayInfo["JobId"].asString();
		if(!valuePlayInfoListPlayInfo["Plaintext"].isNull())
			playInfoListObject.plaintext = valuePlayInfoListPlayInfo["Plaintext"].asString();
		if(!valuePlayInfoListPlayInfo["Size"].isNull())
			playInfoListObject.size = std::stol(valuePlayInfoListPlayInfo["Size"].asString());
		if(!valuePlayInfoListPlayInfo["Width"].isNull())
			playInfoListObject.width = std::stol(valuePlayInfoListPlayInfo["Width"].asString());
		if(!valuePlayInfoListPlayInfo["Fps"].isNull())
			playInfoListObject.fps = valuePlayInfoListPlayInfo["Fps"].asString();
		if(!valuePlayInfoListPlayInfo["Duration"].isNull())
			playInfoListObject.duration = valuePlayInfoListPlayInfo["Duration"].asString();
		if(!valuePlayInfoListPlayInfo["PlayURL"].isNull())
			playInfoListObject.playURL = valuePlayInfoListPlayInfo["PlayURL"].asString();
		if(!valuePlayInfoListPlayInfo["Format"].isNull())
			playInfoListObject.format = valuePlayInfoListPlayInfo["Format"].asString();
		if(!valuePlayInfoListPlayInfo["HDRType"].isNull())
			playInfoListObject.hDRType = valuePlayInfoListPlayInfo["HDRType"].asString();
		if(!valuePlayInfoListPlayInfo["BitDepth"].isNull())
			playInfoListObject.bitDepth = std::stoi(valuePlayInfoListPlayInfo["BitDepth"].asString());
		if(!valuePlayInfoListPlayInfo["JobType"].isNull())
			playInfoListObject.jobType = std::stoi(valuePlayInfoListPlayInfo["JobType"].asString());
		if(!valuePlayInfoListPlayInfo["JobExt"].isNull())
			playInfoListObject.jobExt = valuePlayInfoListPlayInfo["JobExt"].asString();
		if(!valuePlayInfoListPlayInfo["CodecName"].isNull())
			playInfoListObject.codecName = valuePlayInfoListPlayInfo["CodecName"].asString();
		playInfoList_.push_back(playInfoListObject);
	}
	auto videoBaseNode = value["VideoBase"];
	if(!videoBaseNode["CreationTime"].isNull())
		videoBase_.creationTime = videoBaseNode["CreationTime"].asString();
	if(!videoBaseNode["Status"].isNull())
		videoBase_.status = videoBaseNode["Status"].asString();
	if(!videoBaseNode["TranscodeMode"].isNull())
		videoBase_.transcodeMode = videoBaseNode["TranscodeMode"].asString();
	if(!videoBaseNode["OutputType"].isNull())
		videoBase_.outputType = videoBaseNode["OutputType"].asString();
	if(!videoBaseNode["VideoId"].isNull())
		videoBase_.videoId = videoBaseNode["VideoId"].asString();
	if(!videoBaseNode["CoverURL"].isNull())
		videoBase_.coverURL = videoBaseNode["CoverURL"].asString();
	if(!videoBaseNode["Duration"].isNull())
		videoBase_.duration = videoBaseNode["Duration"].asString();
	if(!videoBaseNode["Title"].isNull())
		videoBase_.title = videoBaseNode["Title"].asString();
	if(!videoBaseNode["MediaType"].isNull())
		videoBase_.mediaType = videoBaseNode["MediaType"].asString();
	if(!videoBaseNode["DanMuURL"].isNull())
		videoBase_.danMuURL = videoBaseNode["DanMuURL"].asString();
	if(!videoBaseNode["StorageClass"].isNull())
		videoBase_.storageClass = videoBaseNode["StorageClass"].asString();
	auto allThumbnailListNode = videoBaseNode["ThumbnailList"]["Thumbnail"];
	for (auto videoBaseNodeThumbnailListThumbnail : allThumbnailListNode)
	{
		VideoBase::Thumbnail thumbnailObject;
		if(!videoBaseNodeThumbnailListThumbnail["URL"].isNull())
			thumbnailObject.uRL = videoBaseNodeThumbnailListThumbnail["URL"].asString();
		videoBase_.thumbnailList.push_back(thumbnailObject);
	}

}

GetPlayInfoResult::VideoBase GetPlayInfoResult::getVideoBase()const
{
	return videoBase_;
}

std::vector<GetPlayInfoResult::PlayInfo> GetPlayInfoResult::getPlayInfoList()const
{
	return playInfoList_;
}

