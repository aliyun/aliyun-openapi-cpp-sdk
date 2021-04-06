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

#include <alibabacloud/imageprocess/model/ScreenChestCTResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imageprocess;
using namespace AlibabaCloud::Imageprocess::Model;

ScreenChestCTResult::ScreenChestCTResult() :
	ServiceResult()
{}

ScreenChestCTResult::ScreenChestCTResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ScreenChestCTResult::~ScreenChestCTResult()
{}

void ScreenChestCTResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto covidNode = dataNode["Covid"];
	if(!covidNode["NewProbability"].isNull())
		data_.covid.newProbability = covidNode["NewProbability"].asString();
	if(!covidNode["OtherProbability"].isNull())
		data_.covid.otherProbability = covidNode["OtherProbability"].asString();
	if(!covidNode["NormalProbability"].isNull())
		data_.covid.normalProbability = covidNode["NormalProbability"].asString();
	if(!covidNode["Mask"].isNull())
		data_.covid.mask = covidNode["Mask"].asString();
	if(!covidNode["LesionRatio"].isNull())
		data_.covid.lesionRatio = covidNode["LesionRatio"].asString();
	auto cACSNode = dataNode["CACS"];
	if(!cACSNode["Score"].isNull())
		data_.cACS.score = cACSNode["Score"].asString();
	if(!cACSNode["ResultUrl"].isNull())
		data_.cACS.resultUrl = cACSNode["ResultUrl"].asString();
	auto lungNoduleNode = dataNode["LungNodule"];
	auto allSeriesNode = lungNoduleNode["Series"]["Serie"];
	for (auto lungNoduleNodeSeriesSerie : allSeriesNode)
	{
		Data::LungNodule::Serie serieObject;
		if(!lungNoduleNodeSeriesSerie["Report"].isNull())
			serieObject.report = lungNoduleNodeSeriesSerie["Report"].asString();
		if(!lungNoduleNodeSeriesSerie["SeriesInstanceUid"].isNull())
			serieObject.seriesInstanceUid = lungNoduleNodeSeriesSerie["SeriesInstanceUid"].asString();
		auto allElementsNode = lungNoduleNodeSeriesSerie["Elements"]["Element"];
		for (auto lungNoduleNodeSeriesSerieElementsElement : allElementsNode)
		{
			Data::LungNodule::Serie::Element elementsObject;
			if(!lungNoduleNodeSeriesSerieElementsElement["ImageZ"].isNull())
				elementsObject.imageZ = std::stof(lungNoduleNodeSeriesSerieElementsElement["ImageZ"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["ImageY"].isNull())
				elementsObject.imageY = std::stof(lungNoduleNodeSeriesSerieElementsElement["ImageY"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["ImageX"].isNull())
				elementsObject.imageX = std::stof(lungNoduleNodeSeriesSerieElementsElement["ImageX"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["Lobe"].isNull())
				elementsObject.lobe = lungNoduleNodeSeriesSerieElementsElement["Lobe"].asString();
			if(!lungNoduleNodeSeriesSerieElementsElement["Category"].isNull())
				elementsObject.category = lungNoduleNodeSeriesSerieElementsElement["Category"].asString();
			if(!lungNoduleNodeSeriesSerieElementsElement["Lung"].isNull())
				elementsObject.lung = lungNoduleNodeSeriesSerieElementsElement["Lung"].asString();
			if(!lungNoduleNodeSeriesSerieElementsElement["MeanValue"].isNull())
				elementsObject.meanValue = std::stof(lungNoduleNodeSeriesSerieElementsElement["MeanValue"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["Volume"].isNull())
				elementsObject.volume = std::stof(lungNoduleNodeSeriesSerieElementsElement["Volume"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["Confidence"].isNull())
				elementsObject.confidence = std::stof(lungNoduleNodeSeriesSerieElementsElement["Confidence"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["X"].isNull())
				elementsObject.x = std::stof(lungNoduleNodeSeriesSerieElementsElement["X"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["Y"].isNull())
				elementsObject.y = std::stof(lungNoduleNodeSeriesSerieElementsElement["Y"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["Z"].isNull())
				elementsObject.z = std::stof(lungNoduleNodeSeriesSerieElementsElement["Z"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["SOPInstanceUID"].isNull())
				elementsObject.sOPInstanceUID = lungNoduleNodeSeriesSerieElementsElement["SOPInstanceUID"].asString();
			if(!lungNoduleNodeSeriesSerieElementsElement["Diameter"].isNull())
				elementsObject.diameter = std::stof(lungNoduleNodeSeriesSerieElementsElement["Diameter"].asString());
			serieObject.elements.push_back(elementsObject);
		}
		auto allOrigin = value["Origin"]["Origin"];
		for (auto value : allOrigin)
			serieObject.origin.push_back(value.asString());
		auto allSpacing = value["Spacing"]["Spacing"];
		for (auto value : allSpacing)
			serieObject.spacing.push_back(value.asString());
		data_.lungNodule.series.push_back(serieObject);
	}
	auto detectRibFractureNode = dataNode["DetectRibFracture"];
	if(!detectRibFractureNode["ResultURL"].isNull())
		data_.detectRibFracture.resultURL = detectRibFractureNode["ResultURL"].asString();
	auto allDetectionsNode = detectRibFractureNode["Detections"]["DetectionsItem"];
	for (auto detectRibFractureNodeDetectionsDetectionsItem : allDetectionsNode)
	{
		Data::DetectRibFracture::DetectionsItem detectionsItemObject;
		if(!detectRibFractureNodeDetectionsDetectionsItem["FractureCategory"].isNull())
			detectionsItemObject.fractureCategory = std::stol(detectRibFractureNodeDetectionsDetectionsItem["FractureCategory"].asString());
		if(!detectRibFractureNodeDetectionsDetectionsItem["FractureConfidence"].isNull())
			detectionsItemObject.fractureConfidence = std::stof(detectRibFractureNodeDetectionsDetectionsItem["FractureConfidence"].asString());
		if(!detectRibFractureNodeDetectionsDetectionsItem["FractureLocation"].isNull())
			detectionsItemObject.fractureLocation = detectRibFractureNodeDetectionsDetectionsItem["FractureLocation"].asString();
		if(!detectRibFractureNodeDetectionsDetectionsItem["FractureSegment"].isNull())
			detectionsItemObject.fractureSegment = std::stol(detectRibFractureNodeDetectionsDetectionsItem["FractureSegment"].asString());
		if(!detectRibFractureNodeDetectionsDetectionsItem["FractureId"].isNull())
			detectionsItemObject.fractureId = std::stol(detectRibFractureNodeDetectionsDetectionsItem["FractureId"].asString());
		auto allCoordinateImage = value["CoordinateImage"]["CoordinateImage"];
		for (auto value : allCoordinateImage)
			detectionsItemObject.coordinateImage.push_back(value.asString());
		auto allCoordinates = value["Coordinates"]["Coordinates"];
		for (auto value : allCoordinates)
			detectionsItemObject.coordinates.push_back(value.asString());
		data_.detectRibFracture.detections.push_back(detectionsItemObject);
	}
		auto allOrigin1 = detectRibFractureNode["Origin"]["Origin"];
		for (auto value : allOrigin1)
			data_.detectRibFracture.origin1.push_back(value.asString());
		auto allSpacing2 = detectRibFractureNode["Spacing"]["Spacing"];
		for (auto value : allSpacing2)
			data_.detectRibFracture.spacing2.push_back(value.asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string ScreenChestCTResult::getMessage()const
{
	return message_;
}

ScreenChestCTResult::Data ScreenChestCTResult::getData()const
{
	return data_;
}

std::string ScreenChestCTResult::getCode()const
{
	return code_;
}

