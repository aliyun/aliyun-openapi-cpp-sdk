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

#include <alibabacloud/pts/model/ListPtsSceneResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PTS;
using namespace AlibabaCloud::PTS::Model;

ListPtsSceneResult::ListPtsSceneResult() :
	ServiceResult()
{}

ListPtsSceneResult::ListPtsSceneResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPtsSceneResult::~ListPtsSceneResult()
{}

void ListPtsSceneResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSceneViewListNode = value["SceneViewList"]["SceneView"];
	for (auto valueSceneViewListSceneView : allSceneViewListNode)
	{
		SceneView sceneViewListObject;
		if(!valueSceneViewListSceneView["CreateTime"].isNull())
			sceneViewListObject.createTime = valueSceneViewListSceneView["CreateTime"].asString();
		if(!valueSceneViewListSceneView["SceneId"].isNull())
			sceneViewListObject.sceneId = valueSceneViewListSceneView["SceneId"].asString();
		if(!valueSceneViewListSceneView["SceneName"].isNull())
			sceneViewListObject.sceneName = valueSceneViewListSceneView["SceneName"].asString();
		sceneViewList_.push_back(sceneViewListObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListPtsSceneResult::getMessage()const
{
	return message_;
}

int ListPtsSceneResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListPtsSceneResult::SceneView> ListPtsSceneResult::getSceneViewList()const
{
	return sceneViewList_;
}

std::string ListPtsSceneResult::getCode()const
{
	return code_;
}

bool ListPtsSceneResult::getSuccess()const
{
	return success_;
}

