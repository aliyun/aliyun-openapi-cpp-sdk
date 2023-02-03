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

#include <alibabacloud/mse/model/GetPluginsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetPluginsResult::GetPluginsResult() :
	ServiceResult()
{}

GetPluginsResult::GetPluginsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPluginsResult::~GetPluginsResult()
{}

void GetPluginsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Id"].isNull())
			dataObject.id = std::stol(valueDataDataItem["Id"].asString());
		if(!valueDataDataItem["PrimaryUser"].isNull())
			dataObject.primaryUser = valueDataDataItem["PrimaryUser"].asString();
		if(!valueDataDataItem["Category"].isNull())
			dataObject.category = std::stoi(valueDataDataItem["Category"].asString());
		if(!valueDataDataItem["Name"].isNull())
			dataObject.name = valueDataDataItem["Name"].asString();
		if(!valueDataDataItem["Version"].isNull())
			dataObject.version = valueDataDataItem["Version"].asString();
		if(!valueDataDataItem["Summary"].isNull())
			dataObject.summary = valueDataDataItem["Summary"].asString();
		if(!valueDataDataItem["Phase"].isNull())
			dataObject.phase = std::stoi(valueDataDataItem["Phase"].asString());
		if(!valueDataDataItem["Priority"].isNull())
			dataObject.priority = std::stoi(valueDataDataItem["Priority"].asString());
		if(!valueDataDataItem["ConfigCheck"].isNull())
			dataObject.configCheck = valueDataDataItem["ConfigCheck"].asString();
		if(!valueDataDataItem["WasmLang"].isNull())
			dataObject.wasmLang = std::stoi(valueDataDataItem["WasmLang"].asString());
		if(!valueDataDataItem["PublishState"].isNull())
			dataObject.publishState = std::stoi(valueDataDataItem["PublishState"].asString());
		if(!valueDataDataItem["WasmFile"].isNull())
			dataObject.wasmFile = valueDataDataItem["WasmFile"].asString();
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = valueDataDataItem["Status"].asString();
		if(!valueDataDataItem["Mode"].isNull())
			dataObject.mode = std::stoi(valueDataDataItem["Mode"].asString());
		if(!valueDataDataItem["MaxVersion"].isNull())
			dataObject.maxVersion = valueDataDataItem["MaxVersion"].asString();
		if(!valueDataDataItem["NewVersionPublishingFlag"].isNull())
			dataObject.newVersionPublishingFlag = valueDataDataItem["NewVersionPublishingFlag"].asString() == "true";
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::string GetPluginsResult::getMessage()const
{
	return message_;
}

int GetPluginsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<GetPluginsResult::DataItem> GetPluginsResult::getData()const
{
	return data_;
}

std::string GetPluginsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string GetPluginsResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetPluginsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

int GetPluginsResult::getCode()const
{
	return code_;
}

bool GetPluginsResult::getSuccess()const
{
	return success_;
}

