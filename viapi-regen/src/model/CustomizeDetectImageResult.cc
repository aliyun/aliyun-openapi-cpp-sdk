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

#include <alibabacloud/viapi-regen/model/CustomizeDetectImageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Viapi_regen;
using namespace AlibabaCloud::Viapi_regen::Model;

CustomizeDetectImageResult::CustomizeDetectImageResult() :
	ServiceResult()
{}

CustomizeDetectImageResult::CustomizeDetectImageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CustomizeDetectImageResult::~CustomizeDetectImageResult()
{}

void CustomizeDetectImageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allElementsNode = dataNode["Elements"]["elementsItem"];
	for (auto dataNodeElementselementsItem : allElementsNode)
	{
		Data::ElementsItem elementsItemObject;
		if(!dataNodeElementselementsItem["Score"].isNull())
			elementsItemObject.score = std::stof(dataNodeElementselementsItem["Score"].asString());
		if(!dataNodeElementselementsItem["Category"].isNull())
			elementsItemObject.category = dataNodeElementselementsItem["Category"].asString();
		auto boxesNode = value["Boxes"];
		if(!boxesNode["X"].isNull())
			elementsItemObject.boxes.x = std::stof(boxesNode["X"].asString());
		if(!boxesNode["Y"].isNull())
			elementsItemObject.boxes.y = std::stof(boxesNode["Y"].asString());
		if(!boxesNode["Width"].isNull())
			elementsItemObject.boxes.width = std::stof(boxesNode["Width"].asString());
		if(!boxesNode["Height"].isNull())
			elementsItemObject.boxes.height = std::stof(boxesNode["Height"].asString());
		data_.elements.push_back(elementsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CustomizeDetectImageResult::getMessage()const
{
	return message_;
}

CustomizeDetectImageResult::Data CustomizeDetectImageResult::getData()const
{
	return data_;
}

std::string CustomizeDetectImageResult::getCode()const
{
	return code_;
}

