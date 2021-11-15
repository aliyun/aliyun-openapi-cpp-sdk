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

#include <alibabacloud/objectdet/model/DetectVehicleIllegalParkingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Objectdet;
using namespace AlibabaCloud::Objectdet::Model;

DetectVehicleIllegalParkingResult::DetectVehicleIllegalParkingResult() :
	ServiceResult()
{}

DetectVehicleIllegalParkingResult::DetectVehicleIllegalParkingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectVehicleIllegalParkingResult::~DetectVehicleIllegalParkingResult()
{}

void DetectVehicleIllegalParkingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allElementsNode = dataNode["Elements"]["Element"];
	for (auto dataNodeElementsElement : allElementsNode)
	{
		Data::Element elementObject;
		if(!dataNodeElementsElement["Score"].isNull())
			elementObject.score = std::stof(dataNodeElementsElement["Score"].asString());
		if(!dataNodeElementsElement["TypeName"].isNull())
			elementObject.typeName = dataNodeElementsElement["TypeName"].asString();
		if(!dataNodeElementsElement["Id"].isNull())
			elementObject.id = std::stol(dataNodeElementsElement["Id"].asString());
		auto allBoxesNode = dataNodeElementsElement["Boxes"]["BoxesItem"];
		for (auto dataNodeElementsElementBoxesBoxesItem : allBoxesNode)
		{
			Data::Element::BoxesItem boxesObject;
			if(!dataNodeElementsElementBoxesBoxesItem["Left"].isNull())
				boxesObject.left = std::stol(dataNodeElementsElementBoxesBoxesItem["Left"].asString());
			if(!dataNodeElementsElementBoxesBoxesItem["Top"].isNull())
				boxesObject.top = std::stol(dataNodeElementsElementBoxesBoxesItem["Top"].asString());
			if(!dataNodeElementsElementBoxesBoxesItem["Right"].isNull())
				boxesObject.right = std::stol(dataNodeElementsElementBoxesBoxesItem["Right"].asString());
			if(!dataNodeElementsElementBoxesBoxesItem["Bottom"].isNull())
				boxesObject.bottom = std::stol(dataNodeElementsElementBoxesBoxesItem["Bottom"].asString());
			elementObject.boxes.push_back(boxesObject);
		}
		data_.elements.push_back(elementObject);
	}
	auto allRegionIntersectsNode = dataNode["RegionIntersects"]["RegionIntersect"];
	for (auto dataNodeRegionIntersectsRegionIntersect : allRegionIntersectsNode)
	{
		Data::RegionIntersect regionIntersectObject;
		auto allIds = value["Ids"]["Ids"];
		for (auto value : allIds)
			regionIntersectObject.ids.push_back(value.asString());
		data_.regionIntersects.push_back(regionIntersectObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DetectVehicleIllegalParkingResult::getMessage()const
{
	return message_;
}

DetectVehicleIllegalParkingResult::Data DetectVehicleIllegalParkingResult::getData()const
{
	return data_;
}

std::string DetectVehicleIllegalParkingResult::getCode()const
{
	return code_;
}

