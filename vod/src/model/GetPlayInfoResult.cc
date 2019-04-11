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
	auto allPlayInfoList = value["PlayInfoList"]["PlayInfo"];
	for (auto value : allPlayInfoList)
	{
		PlayInfo playInfoListObject;
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
		if(!value["PreprocessStatus"].isNull())
			playInfoListObject.preprocessStatus = value["PreprocessStatus"].asString();
		if(!value["WatermarkId"].isNull())
			playInfoListObject.watermarkId = value["WatermarkId"].asString();
		if(!value["Status"].isNull())
			playInfoListObject.status = value["Status"].asString();
		if(!value["CreationTime"].isNull())
			playInfoListObject.creationTime = value["CreationTime"].asString();
		if(!value["ModificationTime"].isNull())
			playInfoListObject.modificationTime = value["ModificationTime"].asString();
		if(!value["EncryptType"].isNull())
			playInfoListObject.encryptType = value["EncryptType"].asString();
		if(!value["NarrowBandType"].isNull())
			playInfoListObject.narrowBandType = value["NarrowBandType"].asString();
		playInfoList_.push_back(playInfoListObject);
	}
	auto videoBaseNode = value["VideoBase"];
	if(!videoBaseNode["OutputType"].isNull())
		videoBase_.outputType = videoBaseNode["OutputType"].asString();
	if(!videoBaseNode["CoverURL"].isNull())
		videoBase_.coverURL = videoBaseNode["CoverURL"].asString();
	if(!videoBaseNode["Duration"].isNull())
		videoBase_.duration = videoBaseNode["Duration"].asString();
	if(!videoBaseNode["Status"].isNull())
		videoBase_.status = videoBaseNode["Status"].asString();
	if(!videoBaseNode["Title"].isNull())
		videoBase_.title = videoBaseNode["Title"].asString();
	if(!videoBaseNode["VideoId"].isNull())
		videoBase_.videoId = videoBaseNode["VideoId"].asString();
	if(!videoBaseNode["MediaType"].isNull())
		videoBase_.mediaType = videoBaseNode["MediaType"].asString();
	if(!videoBaseNode["CreationTime"].isNull())
		videoBase_.creationTime = videoBaseNode["CreationTime"].asString();
	if(!videoBaseNode["TranscodeMode"].isNull())
		videoBase_.transcodeMode = videoBaseNode["TranscodeMode"].asString();
	auto allThumbnailList = value["ThumbnailList"]["Thumbnail"];
	for (auto value : allThumbnailList)
	{
		VideoBase::Thumbnail thumbnailObject;
		if(!value["URL"].isNull())
			thumbnailObject.uRL = value["URL"].asString();
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

