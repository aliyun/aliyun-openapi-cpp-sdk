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

#include <alibabacloud/facebody/model/DeepfakeFaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Facebody;
using namespace AlibabaCloud::Facebody::Model;

DeepfakeFaceResult::DeepfakeFaceResult() :
	ServiceResult()
{}

DeepfakeFaceResult::DeepfakeFaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeepfakeFaceResult::~DeepfakeFaceResult()
{}

void DeepfakeFaceResult::parse(const std::string &payload)
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
		if(!dataNodeElementsElement["ImageURL"].isNull())
			elementObject.imageURL = dataNodeElementsElement["ImageURL"].asString();
		if(!dataNodeElementsElement["TaskId"].isNull())
			elementObject.taskId = dataNodeElementsElement["TaskId"].asString();
		if(!dataNodeElementsElement["FaceNumber"].isNull())
			elementObject.faceNumber = std::stol(dataNodeElementsElement["FaceNumber"].asString());
		auto allResultsNode = dataNodeElementsElement["Results"]["Result"];
		for (auto dataNodeElementsElementResultsResult : allResultsNode)
		{
			Data::Element::Result resultsObject;
			if(!dataNodeElementsElementResultsResult["Label"].isNull())
				resultsObject.label = dataNodeElementsElementResultsResult["Label"].asString();
			if(!dataNodeElementsElementResultsResult["Confidence"].isNull())
				resultsObject.confidence = std::stof(dataNodeElementsElementResultsResult["Confidence"].asString());
			if(!dataNodeElementsElementResultsResult["MessageTips"].isNull())
				resultsObject.messageTips = dataNodeElementsElementResultsResult["MessageTips"].asString();
			auto rectNode = value["Rect"];
			if(!rectNode["Left"].isNull())
				resultsObject.rect.left = std::stol(rectNode["Left"].asString());
			if(!rectNode["Top"].isNull())
				resultsObject.rect.top = std::stol(rectNode["Top"].asString());
			if(!rectNode["Width"].isNull())
				resultsObject.rect.width = std::stol(rectNode["Width"].asString());
			if(!rectNode["Height"].isNull())
				resultsObject.rect.height = std::stol(rectNode["Height"].asString());
			elementObject.results.push_back(resultsObject);
		}
		data_.elements.push_back(elementObject);
	}

}

DeepfakeFaceResult::Data DeepfakeFaceResult::getData()const
{
	return data_;
}

