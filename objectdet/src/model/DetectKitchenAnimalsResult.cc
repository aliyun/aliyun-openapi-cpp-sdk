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

#include <alibabacloud/objectdet/model/DetectKitchenAnimalsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Objectdet;
using namespace AlibabaCloud::Objectdet::Model;

DetectKitchenAnimalsResult::DetectKitchenAnimalsResult() :
	ServiceResult()
{}

DetectKitchenAnimalsResult::DetectKitchenAnimalsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectKitchenAnimalsResult::~DetectKitchenAnimalsResult()
{}

void DetectKitchenAnimalsResult::parse(const std::string &payload)
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
		if(!dataNodeElementselementsItem["Type"].isNull())
			elementsItemObject.type = dataNodeElementselementsItem["Type"].asString();
		if(!dataNodeElementselementsItem["Score"].isNull())
			elementsItemObject.score = std::stof(dataNodeElementselementsItem["Score"].asString());
		auto rectanglesNode = value["Rectangles"];
		if(!rectanglesNode["Top"].isNull())
			elementsItemObject.rectangles.top = std::stol(rectanglesNode["Top"].asString());
		if(!rectanglesNode["Left"].isNull())
			elementsItemObject.rectangles.left = std::stol(rectanglesNode["Left"].asString());
		if(!rectanglesNode["Height"].isNull())
			elementsItemObject.rectangles.height = std::stol(rectanglesNode["Height"].asString());
		if(!rectanglesNode["Width"].isNull())
			elementsItemObject.rectangles.width = std::stol(rectanglesNode["Width"].asString());
		data_.elements.push_back(elementsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DetectKitchenAnimalsResult::getMessage()const
{
	return message_;
}

DetectKitchenAnimalsResult::Data DetectKitchenAnimalsResult::getData()const
{
	return data_;
}

std::string DetectKitchenAnimalsResult::getCode()const
{
	return code_;
}

