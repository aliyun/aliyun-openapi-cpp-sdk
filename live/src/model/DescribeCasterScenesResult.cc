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

#include <alibabacloud/live/model/DescribeCasterScenesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeCasterScenesResult::DescribeCasterScenesResult() :
	ServiceResult()
{}

DescribeCasterScenesResult::DescribeCasterScenesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCasterScenesResult::~DescribeCasterScenesResult()
{}

void DescribeCasterScenesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSceneList = value["SceneList"]["Scene"];
	for (auto value : allSceneList)
	{
		Scene sceneListObject;
		if(!value["SceneId"].isNull())
			sceneListObject.sceneId = value["SceneId"].asString();
		if(!value["SceneName"].isNull())
			sceneListObject.sceneName = value["SceneName"].asString();
		if(!value["OutputType"].isNull())
			sceneListObject.outputType = value["OutputType"].asString();
		if(!value["LayoutId"].isNull())
			sceneListObject.layoutId = value["LayoutId"].asString();
		if(!value["StreamUrl"].isNull())
			sceneListObject.streamUrl = value["StreamUrl"].asString();
		if(!value["Status"].isNull())
			sceneListObject.status = std::stoi(value["Status"].asString());
		auto allStreamInfos = value["StreamInfos"]["StreamInfo"];
		for (auto value : allStreamInfos)
		{
			Scene::StreamInfo streamInfosObject;
			if(!value["TranscodeConfig"].isNull())
				streamInfosObject.transcodeConfig = value["TranscodeConfig"].asString();
			if(!value["VideoFormat"].isNull())
				streamInfosObject.videoFormat = value["VideoFormat"].asString();
			if(!value["OutputStreamUrl"].isNull())
				streamInfosObject.outputStreamUrl = value["OutputStreamUrl"].asString();
			sceneListObject.streamInfos.push_back(streamInfosObject);
		}
		auto allComponentIds = value["ComponentIds"]["componentId"];
		for (auto value : allComponentIds)
			sceneListObject.componentIds.push_back(value.asString());
		sceneList_.push_back(sceneListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int DescribeCasterScenesResult::getTotal()const
{
	return total_;
}

std::vector<DescribeCasterScenesResult::Scene> DescribeCasterScenesResult::getSceneList()const
{
	return sceneList_;
}

