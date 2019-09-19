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

#include <alibabacloud/teslastream/model/GetJobTopologyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::TeslaStream;
using namespace AlibabaCloud::TeslaStream::Model;

GetJobTopologyResult::GetJobTopologyResult() :
	ServiceResult()
{}

GetJobTopologyResult::GetJobTopologyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJobTopologyResult::~GetJobTopologyResult()
{}

void GetJobTopologyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Job"];
	for (auto valueDataJob : allDataNode)
	{
		Job dataObject;
		if(!valueDataJob["Text"].isNull())
			dataObject.text = valueDataJob["Text"].asString();
		if(!valueDataJob["Type"].isNull())
			dataObject.type = valueDataJob["Type"].asString();
		if(!valueDataJob["PluginRelation"].isNull())
			dataObject.pluginRelation = valueDataJob["PluginRelation"].asString();
		auto allParents = value["Parents"]["Parent"];
		for (auto value : allParents)
			dataObject.parents.push_back(value.asString());
		auto allChildrens = value["Childrens"]["Children"];
		for (auto value : allChildrens)
			dataObject.childrens.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetJobTopologyResult::getMessage()const
{
	return message_;
}

std::vector<GetJobTopologyResult::Job> GetJobTopologyResult::getData()const
{
	return data_;
}

int GetJobTopologyResult::getCode()const
{
	return code_;
}

