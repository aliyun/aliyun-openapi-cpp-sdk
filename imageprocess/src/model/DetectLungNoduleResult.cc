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

#include <alibabacloud/imageprocess/model/DetectLungNoduleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imageprocess;
using namespace AlibabaCloud::Imageprocess::Model;

DetectLungNoduleResult::DetectLungNoduleResult() :
	ServiceResult()
{}

DetectLungNoduleResult::DetectLungNoduleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectLungNoduleResult::~DetectLungNoduleResult()
{}

void DetectLungNoduleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allSeriesNode = dataNode["Series"]["Serie"];
	for (auto dataNodeSeriesSerie : allSeriesNode)
	{
		Data::Serie serieObject;
		if(!dataNodeSeriesSerie["SeriesInstanceUid"].isNull())
			serieObject.seriesInstanceUid = dataNodeSeriesSerie["SeriesInstanceUid"].asString();
		auto allElementsNode = allSeriesNode["Elements"]["Element"];
		for (auto allSeriesNodeElementsElement : allElementsNode)
		{
			Data::Serie::Element elementsObject;
			if(!allSeriesNodeElementsElement["Category"].isNull())
				elementsObject.category = allSeriesNodeElementsElement["Category"].asString();
			if(!allSeriesNodeElementsElement["Confidence"].isNull())
				elementsObject.confidence = std::stof(allSeriesNodeElementsElement["Confidence"].asString());
			if(!allSeriesNodeElementsElement["Diameter"].isNull())
				elementsObject.diameter = std::stof(allSeriesNodeElementsElement["Diameter"].asString());
			if(!allSeriesNodeElementsElement["Lobe"].isNull())
				elementsObject.lobe = allSeriesNodeElementsElement["Lobe"].asString();
			if(!allSeriesNodeElementsElement["Lung"].isNull())
				elementsObject.lung = allSeriesNodeElementsElement["Lung"].asString();
			if(!allSeriesNodeElementsElement["X"].isNull())
				elementsObject.x = std::stof(allSeriesNodeElementsElement["X"].asString());
			if(!allSeriesNodeElementsElement["Z"].isNull())
				elementsObject.z = std::stof(allSeriesNodeElementsElement["Z"].asString());
			if(!allSeriesNodeElementsElement["Y"].isNull())
				elementsObject.y = std::stof(allSeriesNodeElementsElement["Y"].asString());
			serieObject.elements.push_back(elementsObject);
		}
		data_.series.push_back(serieObject);
	}

}

DetectLungNoduleResult::Data DetectLungNoduleResult::getData()const
{
	return data_;
}

