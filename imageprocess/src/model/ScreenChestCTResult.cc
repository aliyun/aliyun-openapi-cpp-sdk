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
	if(!dataNode["ErrorMessage"].isNull())
		data_.errorMessage = dataNode["ErrorMessage"].asString();
	auto lungNoduleNode = dataNode["LungNodule"];
	auto allSeriesNode = lungNoduleNode["Series"]["Serie"];
	for (auto lungNoduleNodeSeriesSerie : allSeriesNode)
	{
		Data::LungNodule::Serie serieObject;
		if(!lungNoduleNodeSeriesSerie["SeriesInstanceUid"].isNull())
			serieObject.seriesInstanceUid = lungNoduleNodeSeriesSerie["SeriesInstanceUid"].asString();
		if(!lungNoduleNodeSeriesSerie["Report"].isNull())
			serieObject.report = lungNoduleNodeSeriesSerie["Report"].asString();
		auto allElementsNode = lungNoduleNodeSeriesSerie["Elements"]["Element"];
		for (auto lungNoduleNodeSeriesSerieElementsElement : allElementsNode)
		{
			Data::LungNodule::Serie::Element elementsObject;
			if(!lungNoduleNodeSeriesSerieElementsElement["Lobe"].isNull())
				elementsObject.lobe = lungNoduleNodeSeriesSerieElementsElement["Lobe"].asString();
			if(!lungNoduleNodeSeriesSerieElementsElement["MeanValue"].isNull())
				elementsObject.meanValue = std::stof(lungNoduleNodeSeriesSerieElementsElement["MeanValue"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["Lung"].isNull())
				elementsObject.lung = lungNoduleNodeSeriesSerieElementsElement["Lung"].asString();
			if(!lungNoduleNodeSeriesSerieElementsElement["Confidence"].isNull())
				elementsObject.confidence = std::stof(lungNoduleNodeSeriesSerieElementsElement["Confidence"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["SOPInstanceUID"].isNull())
				elementsObject.sOPInstanceUID = lungNoduleNodeSeriesSerieElementsElement["SOPInstanceUID"].asString();
			if(!lungNoduleNodeSeriesSerieElementsElement["Category"].isNull())
				elementsObject.category = lungNoduleNodeSeriesSerieElementsElement["Category"].asString();
			if(!lungNoduleNodeSeriesSerieElementsElement["Volume"].isNull())
				elementsObject.volume = std::stof(lungNoduleNodeSeriesSerieElementsElement["Volume"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["Diameter"].isNull())
				elementsObject.diameter = std::stof(lungNoduleNodeSeriesSerieElementsElement["Diameter"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["X"].isNull())
				elementsObject.x = std::stof(lungNoduleNodeSeriesSerieElementsElement["X"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["Y"].isNull())
				elementsObject.y = std::stof(lungNoduleNodeSeriesSerieElementsElement["Y"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["Z"].isNull())
				elementsObject.z = std::stof(lungNoduleNodeSeriesSerieElementsElement["Z"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["ImageX"].isNull())
				elementsObject.imageX = std::stof(lungNoduleNodeSeriesSerieElementsElement["ImageX"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["ImageY"].isNull())
				elementsObject.imageY = std::stof(lungNoduleNodeSeriesSerieElementsElement["ImageY"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["ImageZ"].isNull())
				elementsObject.imageZ = std::stof(lungNoduleNodeSeriesSerieElementsElement["ImageZ"].asString());
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
	auto cACSNode = dataNode["CACS"];
	if(!cACSNode["ResultUrl"].isNull())
		data_.cACS.resultUrl = cACSNode["ResultUrl"].asString();
	if(!cACSNode["Score"].isNull())
		data_.cACS.score = cACSNode["Score"].asString();
	auto covidNode = dataNode["Covid"];
	if(!covidNode["NormalProbability"].isNull())
		data_.covid.normalProbability = covidNode["NormalProbability"].asString();
	if(!covidNode["NewProbability"].isNull())
		data_.covid.newProbability = covidNode["NewProbability"].asString();
	if(!covidNode["LesionRatio"].isNull())
		data_.covid.lesionRatio = covidNode["LesionRatio"].asString();
	if(!covidNode["OtherProbability"].isNull())
		data_.covid.otherProbability = covidNode["OtherProbability"].asString();
	if(!covidNode["Mask"].isNull())
		data_.covid.mask = covidNode["Mask"].asString();
	auto detectRibFractureNode = dataNode["DetectRibFracture"];
	if(!detectRibFractureNode["ResultURL"].isNull())
		data_.detectRibFracture.resultURL = detectRibFractureNode["ResultURL"].asString();
	auto allDetectionsNode = detectRibFractureNode["Detections"]["DetectionsItem"];
	for (auto detectRibFractureNodeDetectionsDetectionsItem : allDetectionsNode)
	{
		Data::DetectRibFracture::DetectionsItem detectionsItemObject;
		if(!detectRibFractureNodeDetectionsDetectionsItem["FractureId"].isNull())
			detectionsItemObject.fractureId = std::stol(detectRibFractureNodeDetectionsDetectionsItem["FractureId"].asString());
		if(!detectRibFractureNodeDetectionsDetectionsItem["FractureConfidence"].isNull())
			detectionsItemObject.fractureConfidence = std::stof(detectRibFractureNodeDetectionsDetectionsItem["FractureConfidence"].asString());
		if(!detectRibFractureNodeDetectionsDetectionsItem["FractureCategory"].isNull())
			detectionsItemObject.fractureCategory = std::stol(detectRibFractureNodeDetectionsDetectionsItem["FractureCategory"].asString());
		if(!detectRibFractureNodeDetectionsDetectionsItem["FractureLocation"].isNull())
			detectionsItemObject.fractureLocation = detectRibFractureNodeDetectionsDetectionsItem["FractureLocation"].asString();
		if(!detectRibFractureNodeDetectionsDetectionsItem["FractureSegment"].isNull())
			detectionsItemObject.fractureSegment = std::stol(detectRibFractureNodeDetectionsDetectionsItem["FractureSegment"].asString());
		auto allCoordinates = value["Coordinates"]["coordinates"];
		for (auto value : allCoordinates)
			detectionsItemObject.coordinates.push_back(value.asString());
		auto allCoordinateImage = value["CoordinateImage"]["CoordinateImage"];
		for (auto value : allCoordinateImage)
			detectionsItemObject.coordinateImage.push_back(value.asString());
		data_.detectRibFracture.detections.push_back(detectionsItemObject);
	}
		auto allSpacing1 = detectRibFractureNode["Spacing"]["Spacing"];
		for (auto value : allSpacing1)
			data_.detectRibFracture.spacing1.push_back(value.asString());
		auto allOrigin2 = detectRibFractureNode["Origin"]["Origin"];
		for (auto value : allOrigin2)
			data_.detectRibFracture.origin2.push_back(value.asString());
	auto analyzeChestVesselNode = dataNode["AnalyzeChestVessel"];
	if(!analyzeChestVesselNode["ResultURL"].isNull())
		data_.analyzeChestVessel.resultURL = analyzeChestVesselNode["ResultURL"].asString();
	auto aortaInfoNode = analyzeChestVesselNode["AortaInfo"];
	if(!aortaInfoNode["MaxAreaIndex"].isNull())
		data_.analyzeChestVessel.aortaInfo.maxAreaIndex = std::stol(aortaInfoNode["MaxAreaIndex"].asString());
	if(!aortaInfoNode["MaxArea"].isNull())
		data_.analyzeChestVessel.aortaInfo.maxArea = std::stof(aortaInfoNode["MaxArea"].asString());
	if(!aortaInfoNode["MaxDiameter"].isNull())
		data_.analyzeChestVessel.aortaInfo.maxDiameter = std::stof(aortaInfoNode["MaxDiameter"].asString());
	if(!aortaInfoNode["LabelValue"].isNull())
		data_.analyzeChestVessel.aortaInfo.labelValue = std::stol(aortaInfoNode["LabelValue"].asString());
		auto allCoordinates3 = aortaInfoNode["Coordinates"]["coordinates"];
		for (auto value : allCoordinates3)
			data_.analyzeChestVessel.aortaInfo.coordinates3.push_back(value.asString());
		auto allArea = aortaInfoNode["Area"]["area"];
		for (auto value : allArea)
			data_.analyzeChestVessel.aortaInfo.area.push_back(value.asString());
	auto pulmonaryInfoNode = analyzeChestVesselNode["PulmonaryInfo"];
	if(!pulmonaryInfoNode["MaxAreaIndex"].isNull())
		data_.analyzeChestVessel.pulmonaryInfo.maxAreaIndex = std::stol(pulmonaryInfoNode["MaxAreaIndex"].asString());
	if(!pulmonaryInfoNode["MaxArea"].isNull())
		data_.analyzeChestVessel.pulmonaryInfo.maxArea = std::stof(pulmonaryInfoNode["MaxArea"].asString());
	if(!pulmonaryInfoNode["MaxDiameter"].isNull())
		data_.analyzeChestVessel.pulmonaryInfo.maxDiameter = std::stof(pulmonaryInfoNode["MaxDiameter"].asString());
	if(!pulmonaryInfoNode["LabelValue"].isNull())
		data_.analyzeChestVessel.pulmonaryInfo.labelValue = std::stol(pulmonaryInfoNode["LabelValue"].asString());
	if(!pulmonaryInfoNode["NearestAortaArea"].isNull())
		data_.analyzeChestVessel.pulmonaryInfo.nearestAortaArea = std::stof(pulmonaryInfoNode["NearestAortaArea"].asString());
		auto allCoordinates4 = pulmonaryInfoNode["Coordinates"]["coordinates"];
		for (auto value : allCoordinates4)
			data_.analyzeChestVessel.pulmonaryInfo.coordinates4.push_back(value.asString());
		auto allArea5 = pulmonaryInfoNode["Area"]["area"];
		for (auto value : allArea5)
			data_.analyzeChestVessel.pulmonaryInfo.area5.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

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

