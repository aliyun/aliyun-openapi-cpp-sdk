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

#include <alibabacloud/viapi-regen/model/CustomizeInstanceSegmentImageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Viapi_regen;
using namespace AlibabaCloud::Viapi_regen::Model;

CustomizeInstanceSegmentImageResult::CustomizeInstanceSegmentImageResult() :
	ServiceResult()
{}

CustomizeInstanceSegmentImageResult::CustomizeInstanceSegmentImageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CustomizeInstanceSegmentImageResult::~CustomizeInstanceSegmentImageResult()
{}

void CustomizeInstanceSegmentImageResult::parse(const std::string &payload)
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
		auto allContoursNode = dataNodeElementselementsItem["Contours"]["contoursItem"];
		for (auto dataNodeElementselementsItemContourscontoursItem : allContoursNode)
		{
			Data::ElementsItem::ContoursItem contoursObject;
			if(!dataNodeElementselementsItemContourscontoursItem["X"].isNull())
				contoursObject.x = std::stoi(dataNodeElementselementsItemContourscontoursItem["X"].asString());
			if(!dataNodeElementselementsItemContourscontoursItem["Y"].isNull())
				contoursObject.y = std::stoi(dataNodeElementselementsItemContourscontoursItem["Y"].asString());
			elementsItemObject.contours.push_back(contoursObject);
		}
		auto boxesNode = value["Boxes"];
		if(!boxesNode["X"].isNull())
			elementsItemObject.boxes.x = std::stoi(boxesNode["X"].asString());
		if(!boxesNode["Y"].isNull())
			elementsItemObject.boxes.y = std::stoi(boxesNode["Y"].asString());
		if(!boxesNode["Width"].isNull())
			elementsItemObject.boxes.width = std::stoi(boxesNode["Width"].asString());
		if(!boxesNode["Height"].isNull())
			elementsItemObject.boxes.height = std::stoi(boxesNode["Height"].asString());
		auto maskNode = value["Mask"];
		if(!maskNode["Counts"].isNull())
			elementsItemObject.mask.counts = maskNode["Counts"].asString();
			auto allSizes = maskNode["Sizes"]["sizes"];
			for (auto value : allSizes)
				elementsItemObject.mask.sizes.push_back(value.asString());
		data_.elements.push_back(elementsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CustomizeInstanceSegmentImageResult::getMessage()const
{
	return message_;
}

CustomizeInstanceSegmentImageResult::Data CustomizeInstanceSegmentImageResult::getData()const
{
	return data_;
}

std::string CustomizeInstanceSegmentImageResult::getCode()const
{
	return code_;
}

