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

#include <alibabacloud/live/model/DescribeBoardSnapshotResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeBoardSnapshotResult::DescribeBoardSnapshotResult() :
	ServiceResult()
{}

DescribeBoardSnapshotResult::DescribeBoardSnapshotResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBoardSnapshotResult::~DescribeBoardSnapshotResult()
{}

void DescribeBoardSnapshotResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto snapshotNode = value["Snapshot"];
	auto boardNode = snapshotNode["Board"];
	if(!boardNode["BoardId"].isNull())
		snapshot_.board.boardId = boardNode["BoardId"].asString();
	if(!boardNode["AppUid"].isNull())
		snapshot_.board.appUid = boardNode["AppUid"].asString();
	if(!boardNode["EventTimestamp"].isNull())
		snapshot_.board.eventTimestamp = std::stol(boardNode["EventTimestamp"].asString());
	if(!boardNode["CreateTimestamp"].isNull())
		snapshot_.board.createTimestamp = std::stol(boardNode["CreateTimestamp"].asString());
	if(!boardNode["UpdateTimestamp"].isNull())
		snapshot_.board.updateTimestamp = std::stol(boardNode["UpdateTimestamp"].asString());
	auto allPages = value["Pages"]["Page"];
	for (auto value : allPages)
	{
		Snapshot::Board::Page pageObject;
		if(!value["PageIndex"].isNull())
			pageObject.pageIndex = std::stoi(value["PageIndex"].asString());
		auto allElements = value["Elements"]["Element"];
		for (auto value : allElements)
		{
			Snapshot::Board::Page::Element elementsObject;
			if(!value["ElementIndex"].isNull())
				elementsObject.elementIndex = value["ElementIndex"].asString();
			if(!value["OwnerId"].isNull())
				elementsObject.ownerId = value["OwnerId"].asString();
			if(!value["ElementType"].isNull())
				elementsObject.elementType = std::stoi(value["ElementType"].asString());
			if(!value["UpdateTimestamp"].isNull())
				elementsObject.updateTimestamp = std::stol(value["UpdateTimestamp"].asString());
			if(!value["Data"].isNull())
				elementsObject.data = value["Data"].asString();
			pageObject.elements.push_back(elementsObject);
		}
		snapshot_.board.pages.push_back(pageObject);
	}
	auto allConfigs = value["Configs"]["Config"];
	for (auto value : allConfigs)
	{
		Snapshot::Board::Config configObject;
		if(!value["AppUid"].isNull())
			configObject.appUid = value["AppUid"].asString();
		if(!value["Data"].isNull())
			configObject.data = value["Data"].asString();
		snapshot_.board.configs.push_back(configObject);
	}

}

DescribeBoardSnapshotResult::Snapshot DescribeBoardSnapshotResult::getSnapshot()const
{
	return snapshot_;
}

