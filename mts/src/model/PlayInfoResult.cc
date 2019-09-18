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
	auto allPlayInfoList = value["PlayInfoList"]["PlayInfo"];
	for (auto value : allPlayInfoList)
	{
		PlayInfo playInfoListObject;
		if(!value["Url"].isNull())
			playInfoListObject.url = value["Url"].asString();
		if(!value["duration"].isNull())
			playInfoListObject.duration = value["duration"].asString();
		if(!value["size"].isNull())
			playInfoListObject.size = value["size"].asString();
		if(!value["width"].isNull())
			playInfoListObject.width = value["width"].asString();
		if(!value["height"].isNull())
			playInfoListObject.height = value["height"].asString();
		if(!value["bitrate"].isNull())
			playInfoListObject.bitrate = value["bitrate"].asString();
		if(!value["fps"].isNull())
			playInfoListObject.fps = value["fps"].asString();
		if(!value["format"].isNull())
			playInfoListObject.format = value["format"].asString();
		if(!value["definition"].isNull())
			playInfoListObject.definition = value["definition"].asString();
		if(!value["encryption"].isNull())
			playInfoListObject.encryption = value["encryption"].asString();
		if(!value["rand"].isNull())
			playInfoListObject.rand = value["rand"].asString();
		if(!value["plaintext"].isNull())
			playInfoListObject.plaintext = value["plaintext"].asString();
		if(!value["complexity"].isNull())
			playInfoListObject.complexity = value["complexity"].asString();
		if(!value["activityName"].isNull())
			playInfoListObject.activityName = value["activityName"].asString();
		if(!value["encryptionType"].isNull())
			playInfoListObject.encryptionType = value["encryptionType"].asString();
		if(!value["downloadType"].isNull())
			playInfoListObject.downloadType = value["downloadType"].asString();
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

