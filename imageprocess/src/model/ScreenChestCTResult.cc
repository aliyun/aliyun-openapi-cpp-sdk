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
			if(!lungNoduleNodeSeriesSerieElementsElement["Category"].isNull())
				elementsObject.category = lungNoduleNodeSeriesSerieElementsElement["Category"].asString();
			if(!lungNoduleNodeSeriesSerieElementsElement["Confidence"].isNull())
				elementsObject.confidence = std::stof(lungNoduleNodeSeriesSerieElementsElement["Confidence"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["Diameter"].isNull())
				elementsObject.diameter = std::stof(lungNoduleNodeSeriesSerieElementsElement["Diameter"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["Lobe"].isNull())
				elementsObject.lobe = lungNoduleNodeSeriesSerieElementsElement["Lobe"].asString();
			if(!lungNoduleNodeSeriesSerieElementsElement["Lung"].isNull())
				elementsObject.lung = lungNoduleNodeSeriesSerieElementsElement["Lung"].asString();
			if(!lungNoduleNodeSeriesSerieElementsElement["X"].isNull())
				elementsObject.x = std::stof(lungNoduleNodeSeriesSerieElementsElement["X"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["Z"].isNull())
				elementsObject.z = std::stof(lungNoduleNodeSeriesSerieElementsElement["Z"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["Y"].isNull())
				elementsObject.y = std::stof(lungNoduleNodeSeriesSerieElementsElement["Y"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["ImageX"].isNull())
				elementsObject.imageX = std::stof(lungNoduleNodeSeriesSerieElementsElement["ImageX"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["ImageY"].isNull())
				elementsObject.imageY = std::stof(lungNoduleNodeSeriesSerieElementsElement["ImageY"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["ImageZ"].isNull())
				elementsObject.imageZ = std::stof(lungNoduleNodeSeriesSerieElementsElement["ImageZ"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["SOPInstanceUID"].isNull())
				elementsObject.sOPInstanceUID = lungNoduleNodeSeriesSerieElementsElement["SOPInstanceUID"].asString();
			if(!lungNoduleNodeSeriesSerieElementsElement["Volume"].isNull())
				elementsObject.volume = std::stof(lungNoduleNodeSeriesSerieElementsElement["Volume"].asString());
			if(!lungNoduleNodeSeriesSerieElementsElement["MeanValue"].isNull())
				elementsObject.meanValue = std::stof(lungNoduleNodeSeriesSerieElementsElement["MeanValue"].asString());
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
	if(!cACSNode["Score"].isNull())
		data_.cACS.score = cACSNode["Score"].asString();
	if(!cACSNode["ResultUrl"].isNull())
		data_.cACS.resultUrl = cACSNode["ResultUrl"].asString();
	auto covidNode = dataNode["Covid"];
	if(!covidNode["NewProbability"].isNull())
		data_.covid.newProbability = covidNode["NewProbability"].asString();
	if(!covidNode["NormalProbability"].isNull())
		data_.covid.normalProbability = covidNode["NormalProbability"].asString();
	if(!covidNode["OtherProbability"].isNull())
		data_.covid.otherProbability = covidNode["OtherProbability"].asString();
	if(!covidNode["LesionRatio"].isNull())
		data_.covid.lesionRatio = covidNode["LesionRatio"].asString();
	if(!covidNode["Mask"].isNull())
		data_.covid.mask = covidNode["Mask"].asString();

}

ScreenChestCTResult::Data ScreenChestCTResult::getData()const
{
	return data_;
}

