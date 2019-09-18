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

#include <alibabacloud/imm/model/ListSetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListSetsResult::ListSetsResult() :
	ServiceResult()
{}

ListSetsResult::ListSetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSetsResult::~ListSetsResult()
{}

void ListSetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSets = value["Sets"]["SetsItem"];
	for (auto value : allSets)
	{
		SetsItem setsObject;
		if(!value["SetId"].isNull())
			setsObject.setId = value["SetId"].asString();
		if(!value["SetName"].isNull())
			setsObject.setName = value["SetName"].asString();
		if(!value["CreateTime"].isNull())
			setsObject.createTime = value["CreateTime"].asString();
		if(!value["ModifyTime"].isNull())
			setsObject.modifyTime = value["ModifyTime"].asString();
		if(!value["FaceCount"].isNull())
			setsObject.faceCount = std::stoi(value["FaceCount"].asString());
		if(!value["ImageCount"].isNull())
			setsObject.imageCount = std::stoi(value["ImageCount"].asString());
		if(!value["VideoCount"].isNull())
			setsObject.videoCount = std::stoi(value["VideoCount"].asString());
		if(!value["VideoLength"].isNull())
			setsObject.videoLength = std::stoi(value["VideoLength"].asString());
		sets_.push_back(setsObject);
	}
	if(!value["NextMarker"].isNull())
		nextMarker_ = value["NextMarker"].asString();

}

std::vector<ListSetsResult::SetsItem> ListSetsResult::getSets()const
{
	return sets_;
}

std::string ListSetsResult::getNextMarker()const
{
	return nextMarker_;
}

