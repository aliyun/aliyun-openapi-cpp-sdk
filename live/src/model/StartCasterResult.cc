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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPgmSceneInfosNode = value["PgmSceneInfos"]["SceneInfo"];
	for (auto valuePgmSceneInfosSceneInfo : allPgmSceneInfosNode)
	{
		SceneInfo pgmSceneInfosObject;
		if(!valuePgmSceneInfosSceneInfo["RtsUrl"].isNull())
			pgmSceneInfosObject.rtsUrl = valuePgmSceneInfosSceneInfo["RtsUrl"].asString();
		if(!valuePgmSceneInfosSceneInfo["SceneId"].isNull())
			pgmSceneInfosObject.sceneId = valuePgmSceneInfosSceneInfo["SceneId"].asString();
		if(!valuePgmSceneInfosSceneInfo["StreamUrl"].isNull())
			pgmSceneInfosObject.streamUrl = valuePgmSceneInfosSceneInfo["StreamUrl"].asString();
		auto allStreamInfosNode = valuePgmSceneInfosSceneInfo["StreamInfos"]["StreamInfo"];
		for (auto valuePgmSceneInfosSceneInfoStreamInfosStreamInfo : allStreamInfosNode)
		{
			SceneInfo::StreamInfo streamInfosObject;
			if(!valuePgmSceneInfosSceneInfoStreamInfosStreamInfo["OutputStreamUrl"].isNull())
				streamInfosObject.outputStreamUrl = valuePgmSceneInfosSceneInfoStreamInfosStreamInfo["OutputStreamUrl"].asString();
			if(!valuePgmSceneInfosSceneInfoStreamInfosStreamInfo["TranscodeConfig"].isNull())
				streamInfosObject.transcodeConfig = valuePgmSceneInfosSceneInfoStreamInfosStreamInfo["TranscodeConfig"].asString();
			if(!valuePgmSceneInfosSceneInfoStreamInfosStreamInfo["VideoFormat"].isNull())
				streamInfosObject.videoFormat = valuePgmSceneInfosSceneInfoStreamInfosStreamInfo["VideoFormat"].asString();
			pgmSceneInfosObject.streamInfos.push_back(streamInfosObject);
		}
		pgmSceneInfos_.push_back(pgmSceneInfosObject);
	}
	auto allPvwSceneInfosNode = value["PvwSceneInfos"]["SceneInfo"];
	for (auto valuePvwSceneInfosSceneInfo : allPvwSceneInfosNode)
	{
		SceneInfo1 pvwSceneInfosObject;
		if(!valuePvwSceneInfosSceneInfo["RtsUrl"].isNull())
			pvwSceneInfosObject.rtsUrl = valuePvwSceneInfosSceneInfo["RtsUrl"].asString();
		if(!valuePvwSceneInfosSceneInfo["SceneId"].isNull())
			pvwSceneInfosObject.sceneId = valuePvwSceneInfosSceneInfo["SceneId"].asString();
		if(!valuePvwSceneInfosSceneInfo["StreamUrl"].isNull())
			pvwSceneInfosObject.streamUrl = valuePvwSceneInfosSceneInfo["StreamUrl"].asString();
		pvwSceneInfos_.push_back(pvwSceneInfosObject);
	}

}

std::vector<StartCasterResult::SceneInfo1> StartCasterResult::getPvwSceneInfos()const
{
	return pvwSceneInfos_;
}

std::vector<StartCasterResult::SceneInfo> StartCasterResult::getPgmSceneInfos()const
{
	return pgmSceneInfos_;
}

