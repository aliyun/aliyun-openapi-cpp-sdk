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

#include <alibabacloud/live/model/StartCasterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

StartCasterResult::StartCasterResult() :
	ServiceResult()
{}

StartCasterResult::StartCasterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StartCasterResult::~StartCasterResult()
{}

void StartCasterResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allPvwSceneInfos = value["PvwSceneInfos"]["SceneInfo"];
	for (auto value : allPvwSceneInfos)
	{
		SceneInfo pvwSceneInfosObject;
		if(!value["SceneId"].isNull())
			pvwSceneInfosObject.sceneId = value["SceneId"].asString();
		if(!value["StreamUrl"].isNull())
			pvwSceneInfosObject.streamUrl = value["StreamUrl"].asString();
		pvwSceneInfos_.push_back(pvwSceneInfosObject);
	}
	auto allPgmSceneInfos = value["PgmSceneInfos"]["SceneInfo"];
	for (auto value : allPgmSceneInfos)
	{
		SceneInfo1 pgmSceneInfosObject;
		if(!value["SceneId"].isNull())
			pgmSceneInfosObject.sceneId = value["SceneId"].asString();
		if(!value["StreamUrl"].isNull())
			pgmSceneInfosObject.streamUrl = value["StreamUrl"].asString();
		auto allStreamInfos = value["StreamInfos"]["StreamInfo"];
		for (auto value : allStreamInfos)
		{
			SceneInfo1::StreamInfo streamInfosObject;
			if(!value["TranscodeConfig"].isNull())
				streamInfosObject.transcodeConfig = value["TranscodeConfig"].asString();
			if(!value["VideoFormat"].isNull())
				streamInfosObject.videoFormat = value["VideoFormat"].asString();
			if(!value["OutputStreamUrl"].isNull())
				streamInfosObject.outputStreamUrl = value["OutputStreamUrl"].asString();
			pgmSceneInfosObject.streamInfos.push_back(streamInfosObject);
		}
		pgmSceneInfos_.push_back(pgmSceneInfosObject);
	}

}

std::vector<StartCasterResult::SceneInfo> StartCasterResult::getPvwSceneInfos()const
{
	return pvwSceneInfos_;
}

std::vector<StartCasterResult::SceneInfo1> StartCasterResult::getPgmSceneInfos()const
{
	return pgmSceneInfos_;
}

