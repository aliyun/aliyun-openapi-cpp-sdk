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

#include <alibabacloud/arms/model/ListEnvironmentFeaturesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListEnvironmentFeaturesResult::ListEnvironmentFeaturesResult() :
	ServiceResult()
{}

ListEnvironmentFeaturesResult::ListEnvironmentFeaturesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEnvironmentFeaturesResult::~ListEnvironmentFeaturesResult()
{}

void ListEnvironmentFeaturesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["Config"].isNull())
			dataObject.config = valueDatadataItem["Config"].asString();
		if(!valueDatadataItem["Description"].isNull())
			dataObject.description = valueDatadataItem["Description"].asString();
		if(!valueDatadataItem["EnvironmentId"].isNull())
			dataObject.environmentId = valueDatadataItem["EnvironmentId"].asString();
		if(!valueDatadataItem["Language"].isNull())
			dataObject.language = valueDatadataItem["Language"].asString();
		if(!valueDatadataItem["LatestVersion"].isNull())
			dataObject.latestVersion = valueDatadataItem["LatestVersion"].asString();
		if(!valueDatadataItem["Name"].isNull())
			dataObject.name = valueDatadataItem["Name"].asString();
		if(!valueDatadataItem["Status"].isNull())
			dataObject.status = valueDatadataItem["Status"].asString();
		if(!valueDatadataItem["Version"].isNull())
			dataObject.version = valueDatadataItem["Version"].asString();
		if(!valueDatadataItem["Alias"].isNull())
			dataObject.alias = valueDatadataItem["Alias"].asString();
		if(!valueDatadataItem["Icon"].isNull())
			dataObject.icon = valueDatadataItem["Icon"].asString();
		if(!valueDatadataItem["Managed"].isNull())
			dataObject.managed = valueDatadataItem["Managed"].asString() == "true";
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListEnvironmentFeaturesResult::getMessage()const
{
	return message_;
}

std::vector<ListEnvironmentFeaturesResult::DataItem> ListEnvironmentFeaturesResult::getData()const
{
	return data_;
}

int ListEnvironmentFeaturesResult::getCode()const
{
	return code_;
}

bool ListEnvironmentFeaturesResult::getSuccess()const
{
	return success_;
}

