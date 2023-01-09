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

#include <alibabacloud/pts/model/ListOpenJMeterScenesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PTS;
using namespace AlibabaCloud::PTS::Model;

ListOpenJMeterScenesResult::ListOpenJMeterScenesResult() :
	ServiceResult()
{}

ListOpenJMeterScenesResult::ListOpenJMeterScenesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOpenJMeterScenesResult::~ListOpenJMeterScenesResult()
{}

void ListOpenJMeterScenesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJMeterSceneNode = value["JMeterScene"]["jMeterSceneItem"];
	for (auto valueJMeterScenejMeterSceneItem : allJMeterSceneNode)
	{
		JMeterSceneItem jMeterSceneObject;
		if(!valueJMeterScenejMeterSceneItem["DurationStr"].isNull())
			jMeterSceneObject.durationStr = valueJMeterScenejMeterSceneItem["DurationStr"].asString();
		if(!valueJMeterScenejMeterSceneItem["SceneId"].isNull())
			jMeterSceneObject.sceneId = valueJMeterScenejMeterSceneItem["SceneId"].asString();
		if(!valueJMeterScenejMeterSceneItem["SceneName"].isNull())
			jMeterSceneObject.sceneName = valueJMeterScenejMeterSceneItem["SceneName"].asString();
		jMeterScene_.push_back(jMeterSceneObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListOpenJMeterScenesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListOpenJMeterScenesResult::getMessage()const
{
	return message_;
}

int ListOpenJMeterScenesResult::getPageSize()const
{
	return pageSize_;
}

std::vector<ListOpenJMeterScenesResult::JMeterSceneItem> ListOpenJMeterScenesResult::getJMeterScene()const
{
	return jMeterScene_;
}

int ListOpenJMeterScenesResult::getPageNumber()const
{
	return pageNumber_;
}

int ListOpenJMeterScenesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListOpenJMeterScenesResult::getCode()const
{
	return code_;
}

bool ListOpenJMeterScenesResult::getSuccess()const
{
	return success_;
}

