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

#include <alibabacloud/lmztest/model/DemoHsfNineResponseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LmzTest;
using namespace AlibabaCloud::LmzTest::Model;

DemoHsfNineResponseResult::DemoHsfNineResponseResult() :
	ServiceResult()
{}

DemoHsfNineResponseResult::DemoHsfNineResponseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DemoHsfNineResponseResult::~DemoHsfNineResponseResult()
{}

void DemoHsfNineResponseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allinfos = value["infos"]["infos"];
	for (const auto &item : allinfos)
		infos_.push_back(item.asString());
	if(!value["id"].isNull())
		id_ = value["id"].asString();
	if(!value["name"].isNull())
		name_ = value["name"].asString();

}

std::string DemoHsfNineResponseResult::getId()const
{
	return id_;
}

std::vector<std::string> DemoHsfNineResponseResult::getInfos()const
{
	return infos_;
}

std::string DemoHsfNineResponseResult::getName()const
{
	return name_;
}

