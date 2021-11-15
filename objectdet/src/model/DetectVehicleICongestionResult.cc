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

#include <alibabacloud/objectdet/model/DetectVehicleICongestionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Objectdet;
using namespace AlibabaCloud::Objectdet::Model;

DetectVehicleICongestionResult::DetectVehicleICongestionResult() :
	ServiceResult()
{}

DetectVehicleICongestionResult::DetectVehicleICongestionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectVehicleICongestionResult::~DetectVehicleICongestionResult()
{}

void DetectVehicleICongestionResult::parse(const std::string &payload)
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
	auto allRegionIntersectFeaturesNode = dataNode["RegionIntersectFeatures"]["RegionIntersectFeaturesItem"];
	for (auto dataNodeRegionIntersectFeaturesRegionIntersectFeaturesItem : allRegionIntersectFeaturesNode)
	{
		Data::RegionIntersectFeaturesItem regionIntersectFeaturesItemObject;
		auto allFeatures = value["Features"]["Features"];
		for (auto value : allFeatures)
			regionIntersectFeaturesItemObject.features.push_back(value.asString());
		data_.regionIntersectFeatures.push_back(regionIntersectFeaturesItemObject);
	}
	auto allRegionIntersectMatchedNode = dataNode["RegionIntersectMatched"]["RegionIntersectMatchedItem"];
	for (auto dataNodeRegionIntersectMatchedRegionIntersectMatchedItem : allRegionIntersectMatchedNode)
	{
		Data::RegionIntersectMatchedItem regionIntersectMatchedItemObject;
		auto allIds = value["Ids"]["Ids"];
		for (auto value : allIds)
			regionIntersectMatchedItemObject.ids.push_back(value.asString());
		data_.regionIntersectMatched.push_back(regionIntersectMatchedItemObject);
	}
	auto allRegionIntersectsNode = dataNode["RegionIntersects"]["RegionIntersectsItem"];
	for (auto dataNodeRegionIntersectsRegionIntersectsItem : allRegionIntersectsNode)
	{
		Data::RegionIntersectsItem regionIntersectsItemObject;
		auto allIds1 = value["Ids"]["Ids"];
		for (auto value : allIds1)
			regionIntersectsItemObject.ids1.push_back(value.asString());
		data_.regionIntersects.push_back(regionIntersectsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DetectVehicleICongestionResult::getMessage()const
{
	return message_;
}

DetectVehicleICongestionResult::Data DetectVehicleICongestionResult::getData()const
{
	return data_;
}

std::string DetectVehicleICongestionResult::getCode()const
{
	return code_;
}

