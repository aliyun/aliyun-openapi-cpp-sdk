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

#include <alibabacloud/teslastream/model/BatchGetPluginConfigInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::TeslaStream;
using namespace AlibabaCloud::TeslaStream::Model;

BatchGetPluginConfigInfoResult::BatchGetPluginConfigInfoResult() :
	ServiceResult()
{}

BatchGetPluginConfigInfoResult::BatchGetPluginConfigInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchGetPluginConfigInfoResult::~BatchGetPluginConfigInfoResult()
{}

void BatchGetPluginConfigInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["plugin"];
	for (auto valueDataplugin : allDataNode)
	{
		Plugin dataObject;
		if(!valueDataplugin["PluginProperties"].isNull())
			dataObject.pluginProperties = valueDataplugin["PluginProperties"].asString();
		if(!valueDataplugin["PluginUniqKey"].isNull())
			dataObject.pluginUniqKey = valueDataplugin["PluginUniqKey"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string BatchGetPluginConfigInfoResult::getMessage()const
{
	return message_;
}

std::vector<BatchGetPluginConfigInfoResult::Plugin> BatchGetPluginConfigInfoResult::getData()const
{
	return data_;
}

int BatchGetPluginConfigInfoResult::getCode()const
{
	return code_;
}

