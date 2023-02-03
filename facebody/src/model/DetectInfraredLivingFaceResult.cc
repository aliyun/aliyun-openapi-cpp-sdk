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

#include <alibabacloud/facebody/model/DetectInfraredLivingFaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Facebody;
using namespace AlibabaCloud::Facebody::Model;

DetectInfraredLivingFaceResult::DetectInfraredLivingFaceResult() :
	ServiceResult()
{}

DetectInfraredLivingFaceResult::DetectInfraredLivingFaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectInfraredLivingFaceResult::~DetectInfraredLivingFaceResult()
{}

void DetectInfraredLivingFaceResult::parse(const std::string &payload)
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
		if(!dataNodeElementselementsItem["FaceNumber"].isNull())
			elementsItemObject.faceNumber = std::stol(dataNodeElementselementsItem["FaceNumber"].asString());
		if(!dataNodeElementselementsItem["ImageURL"].isNull())
			elementsItemObject.imageURL = dataNodeElementselementsItem["ImageURL"].asString();
		auto allResultsNode = dataNodeElementselementsItem["Results"]["resultsItem"];
		for (auto dataNodeElementselementsItemResultsresultsItem : allResultsNode)
		{
			Data::ElementsItem::ResultsItem resultsObject;
			if(!dataNodeElementselementsItemResultsresultsItem["Label"].isNull())
				resultsObject.label = dataNodeElementselementsItemResultsresultsItem["Label"].asString();
			if(!dataNodeElementselementsItemResultsresultsItem["Rate"].isNull())
				resultsObject.rate = std::stof(dataNodeElementselementsItemResultsresultsItem["Rate"].asString());
			if(!dataNodeElementselementsItemResultsresultsItem["Suggestion"].isNull())
				resultsObject.suggestion = dataNodeElementselementsItemResultsresultsItem["Suggestion"].asString();
			if(!dataNodeElementselementsItemResultsresultsItem["MessageTips"].isNull())
				resultsObject.messageTips = dataNodeElementselementsItemResultsresultsItem["MessageTips"].asString();
			auto rectNode = value["Rect"];
			if(!rectNode["Height"].isNull())
				resultsObject.rect.height = std::stol(rectNode["Height"].asString());
			if(!rectNode["Width"].isNull())
				resultsObject.rect.width = std::stol(rectNode["Width"].asString());
			if(!rectNode["Top"].isNull())
				resultsObject.rect.top = std::stol(rectNode["Top"].asString());
			if(!rectNode["Left"].isNull())
				resultsObject.rect.left = std::stol(rectNode["Left"].asString());
			elementsItemObject.results.push_back(resultsObject);
		}
		data_.elements.push_back(elementsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DetectInfraredLivingFaceResult::getMessage()const
{
	return message_;
}

DetectInfraredLivingFaceResult::Data DetectInfraredLivingFaceResult::getData()const
{
	return data_;
}

std::string DetectInfraredLivingFaceResult::getCode()const
{
	return code_;
}

