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

#include <alibabacloud/facebody/model/DetectPedestrianIntrusionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Facebody;
using namespace AlibabaCloud::Facebody::Model;

DetectPedestrianIntrusionResult::DetectPedestrianIntrusionResult() :
	ServiceResult()
{}

DetectPedestrianIntrusionResult::DetectPedestrianIntrusionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectPedestrianIntrusionResult::~DetectPedestrianIntrusionResult()
{}

void DetectPedestrianIntrusionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ImageWidth"].isNull())
		data_.imageWidth = std::stol(dataNode["ImageWidth"].asString());
	if(!dataNode["ImageHeight"].isNull())
		data_.imageHeight = std::stol(dataNode["ImageHeight"].asString());
	auto allElementsNode = dataNode["Elements"]["ElementsItem"];
	for (auto dataNodeElementsElementsItem : allElementsNode)
	{
		Data::ElementsItem elementsItemObject;
		if(!dataNodeElementsElementsItem["Score"].isNull())
			elementsItemObject.score = std::stol(dataNodeElementsElementsItem["Score"].asString());
		if(!dataNodeElementsElementsItem["Type"].isNull())
			elementsItemObject.type = dataNodeElementsElementsItem["Type"].asString();
		if(!dataNodeElementsElementsItem["IsIntrude"].isNull())
			elementsItemObject.isIntrude = dataNodeElementsElementsItem["IsIntrude"].asString() == "true";
		if(!dataNodeElementsElementsItem["BoxId"].isNull())
			elementsItemObject.boxId = std::stol(dataNodeElementsElementsItem["BoxId"].asString());
		auto boxNode = value["Box"];
		if(!boxNode["Left"].isNull())
			elementsItemObject.box.left = std::stol(boxNode["Left"].asString());
		if(!boxNode["Top"].isNull())
			elementsItemObject.box.top = std::stol(boxNode["Top"].asString());
		if(!boxNode["Right"].isNull())
			elementsItemObject.box.right = std::stol(boxNode["Right"].asString());
		if(!boxNode["Bottom"].isNull())
			elementsItemObject.box.bottom = std::stol(boxNode["Bottom"].asString());
		data_.elements.push_back(elementsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DetectPedestrianIntrusionResult::getMessage()const
{
	return message_;
}

DetectPedestrianIntrusionResult::Data DetectPedestrianIntrusionResult::getData()const
{
	return data_;
}

std::string DetectPedestrianIntrusionResult::getCode()const
{
	return code_;
}

