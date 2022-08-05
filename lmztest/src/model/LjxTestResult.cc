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

#include <alibabacloud/lmztest/model/LjxTestResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LmzTest;
using namespace AlibabaCloud::LmzTest::Model;

LjxTestResult::LjxTestResult() :
	ServiceResult()
{}

LjxTestResult::LjxTestResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

LjxTestResult::~LjxTestResult()
{}

void LjxTestResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMapsNode = value["Maps"]["mapsItem"];
	for (auto valueMapsmapsItem : allMapsNode)
	{
		MapsItem mapsObject;
		if(!valueMapsmapsItem["Param0"].isNull())
			mapsObject.param0 = valueMapsmapsItem["Param0"].asString();
		maps_.push_back(mapsObject);
	}
	auto testtestNode = value["testtest"];
	if(!testtestNode["id"].isNull())
		testtest_.id = testtestNode["id"].asString();
	auto allStringList = value["StringList"]["stringList"];
	for (const auto &item : allStringList)
		stringList_.push_back(item.asString());
	auto allLongList = value["LongList"]["longList"];
	for (const auto &item : allLongList)
		longList_.push_back(item.asString());
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();

}

std::vector<LjxTestResult::MapsItem> LjxTestResult::getMaps()const
{
	return maps_;
}

std::vector<std::string> LjxTestResult::getStringList()const
{
	return stringList_;
}

LjxTestResult::Testtest LjxTestResult::getTesttest()const
{
	return testtest_;
}

std::vector<std::string> LjxTestResult::getLongList()const
{
	return longList_;
}

std::string LjxTestResult::getId()const
{
	return id_;
}

int LjxTestResult::getCode()const
{
	return code_;
}

std::string LjxTestResult::getName()const
{
	return name_;
}

