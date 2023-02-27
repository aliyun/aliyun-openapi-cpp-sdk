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

#include <alibabacloud/ice/model/GetPlayInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

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
		if(!valuePlayInfoListPlayInfo["EncryptType"].isNull())
			playInfoListObject.encryptType = valuePlayInfoListPlayInfo["EncryptType"].asString();
		if(!valuePlayInfoListPlayInfo["StreamType"].isNull())
			playInfoListObject.streamType = valuePlayInfoListPlayInfo["StreamType"].asString();
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
		if(!valuePlayInfoListPlayInfo["FileURL"].isNull())
			playInfoListObject.fileURL = valuePlayInfoListPlayInfo["FileURL"].asString();
		if(!valuePlayInfoListPlayInfo["TransTemplateType"].isNull())
			playInfoListObject.transTemplateType = valuePlayInfoListPlayInfo["TransTemplateType"].asString();
		if(!valuePlayInfoListPlayInfo["StreamTags"].isNull())
			playInfoListObject.streamTags = valuePlayInfoListPlayInfo["StreamTags"].asString();
		if(!valuePlayInfoListPlayInfo["JobId"].isNull())
			playInfoListObject.jobId = valuePlayInfoListPlayInfo["JobId"].asString();
		playInfoList_.push_back(playInfoListObject);
	}
	auto mediaBaseNode = value["MediaBase"];
	if(!mediaBaseNode["CreationTime"].isNull())
		mediaBase_.creationTime = mediaBaseNode["CreationTime"].asString();
	if(!mediaBaseNode["Status"].isNull())
		mediaBase_.status = mediaBaseNode["Status"].asString();
	if(!mediaBaseNode["MediaId"].isNull())
		mediaBase_.mediaId = mediaBaseNode["MediaId"].asString();
	if(!mediaBaseNode["CoverURL"].isNull())
		mediaBase_.coverURL = mediaBaseNode["CoverURL"].asString();
	if(!mediaBaseNode["Title"].isNull())
		mediaBase_.title = mediaBaseNode["Title"].asString();
	if(!mediaBaseNode["MediaType"].isNull())
		mediaBase_.mediaType = mediaBaseNode["MediaType"].asString();

}

GetPlayInfoResult::MediaBase GetPlayInfoResult::getMediaBase()const
{
	return mediaBase_;
}

std::vector<GetPlayInfoResult::PlayInfo> GetPlayInfoResult::getPlayInfoList()const
{
	return playInfoList_;
}

