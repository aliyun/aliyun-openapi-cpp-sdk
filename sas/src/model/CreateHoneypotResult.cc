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

#include <alibabacloud/sas/model/CreateHoneypotResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

CreateHoneypotResult::CreateHoneypotResult() :
	ServiceResult()
{}

CreateHoneypotResult::CreateHoneypotResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateHoneypotResult::~CreateHoneypotResult()
{}

void CreateHoneypotResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["HoneypotId"].isNull())
		data_.honeypotId = dataNode["HoneypotId"].asString();
	if(!dataNode["HoneypotName"].isNull())
		data_.honeypotName = dataNode["HoneypotName"].asString();
	if(!dataNode["ControlNodeName"].isNull())
		data_.controlNodeName = dataNode["ControlNodeName"].asString();
	if(!dataNode["HoneypotImageName"].isNull())
		data_.honeypotImageName = dataNode["HoneypotImageName"].asString();
	if(!dataNode["PresetId"].isNull())
		data_.presetId = dataNode["PresetId"].asString();
	if(!dataNode["HoneypotImageDisplayName"].isNull())
		data_.honeypotImageDisplayName = dataNode["HoneypotImageDisplayName"].asString();
	if(!dataNode["NodeId"].isNull())
		data_.nodeId = dataNode["NodeId"].asString();
		auto allState = dataNode["State"]["State"];
		for (auto value : allState)
			data_.state.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string CreateHoneypotResult::getMessage()const
{
	return message_;
}

int CreateHoneypotResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

CreateHoneypotResult::Data CreateHoneypotResult::getData()const
{
	return data_;
}

std::string CreateHoneypotResult::getCode()const
{
	return code_;
}

bool CreateHoneypotResult::getSuccess()const
{
	return success_;
}

