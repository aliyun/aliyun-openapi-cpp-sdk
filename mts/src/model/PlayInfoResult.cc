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

#include <alibabacloud/mts/model/PlayInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

PlayInfoResult::PlayInfoResult() :
	ServiceResult()
{}

PlayInfoResult::PlayInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PlayInfoResult::~PlayInfoResult()
{}

void PlayInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPlayInfoListNode = value["PlayInfoList"]["PlayInfo"];
	for (auto valuePlayInfoListPlayInfo : allPlayInfoListNode)
	{
		PlayInfo playInfoListObject;
		if(!valuePlayInfoListPlayInfo["Url"].isNull())
			playInfoListObject.url = valuePlayInfoListPlayInfo["Url"].asString();
		if(!valuePlayInfoListPlayInfo["duration"].isNull())
			playInfoListObject.duration = valuePlayInfoListPlayInfo["duration"].asString();
		if(!valuePlayInfoListPlayInfo["size"].isNull())
			playInfoListObject.size = valuePlayInfoListPlayInfo["size"].asString();
		if(!valuePlayInfoListPlayInfo["width"].isNull())
			playInfoListObject.width = valuePlayInfoListPlayInfo["width"].asString();
		if(!valuePlayInfoListPlayInfo["height"].isNull())
			playInfoListObject.height = valuePlayInfoListPlayInfo["height"].asString();
		if(!valuePlayInfoListPlayInfo["bitrate"].isNull())
			playInfoListObject.bitrate = valuePlayInfoListPlayInfo["bitrate"].asString();
		if(!valuePlayInfoListPlayInfo["fps"].isNull())
			playInfoListObject.fps = valuePlayInfoListPlayInfo["fps"].asString();
		if(!valuePlayInfoListPlayInfo["format"].isNull())
			playInfoListObject.format = valuePlayInfoListPlayInfo["format"].asString();
		if(!valuePlayInfoListPlayInfo["definition"].isNull())
			playInfoListObject.definition = valuePlayInfoListPlayInfo["definition"].asString();
		if(!valuePlayInfoListPlayInfo["encryption"].isNull())
			playInfoListObject.encryption = valuePlayInfoListPlayInfo["encryption"].asString();
		if(!valuePlayInfoListPlayInfo["rand"].isNull())
			playInfoListObject.rand = valuePlayInfoListPlayInfo["rand"].asString();
		if(!valuePlayInfoListPlayInfo["plaintext"].isNull())
			playInfoListObject.plaintext = valuePlayInfoListPlayInfo["plaintext"].asString();
		if(!valuePlayInfoListPlayInfo["complexity"].isNull())
			playInfoListObject.complexity = valuePlayInfoListPlayInfo["complexity"].asString();
		if(!valuePlayInfoListPlayInfo["activityName"].isNull())
			playInfoListObject.activityName = valuePlayInfoListPlayInfo["activityName"].asString();
		if(!valuePlayInfoListPlayInfo["encryptionType"].isNull())
			playInfoListObject.encryptionType = valuePlayInfoListPlayInfo["encryptionType"].asString();
		if(!valuePlayInfoListPlayInfo["downloadType"].isNull())
			playInfoListObject.downloadType = valuePlayInfoListPlayInfo["downloadType"].asString();
		playInfoList_.push_back(playInfoListObject);
	}
	auto allNotFoundCDNDomain = value["NotFoundCDNDomain"]["String"];
	for (const auto &item : allNotFoundCDNDomain)
		notFoundCDNDomain_.push_back(item.asString());

}

std::vector<PlayInfoResult::PlayInfo> PlayInfoResult::getPlayInfoList()const
{
	return playInfoList_;
}

std::vector<std::string> PlayInfoResult::getNotFoundCDNDomain()const
{
	return notFoundCDNDomain_;
}

