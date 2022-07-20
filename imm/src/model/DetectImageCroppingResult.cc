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

#include <alibabacloud/imm/model/DetectImageCroppingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

DetectImageCroppingResult::DetectImageCroppingResult() :
	ServiceResult()
{}

DetectImageCroppingResult::DetectImageCroppingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectImageCroppingResult::~DetectImageCroppingResult()
{}

void DetectImageCroppingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCroppingsNode = value["Croppings"]["CroppingsItem"];
	for (auto valueCroppingsCroppingsItem : allCroppingsNode)
	{
		CroppingsItem croppingsObject;
		if(!valueCroppingsCroppingsItem["AspectRatio"].isNull())
			croppingsObject.aspectRatio = valueCroppingsCroppingsItem["AspectRatio"].asString();
		if(!valueCroppingsCroppingsItem["Confidence"].isNull())
			croppingsObject.confidence = std::stof(valueCroppingsCroppingsItem["Confidence"].asString());
		auto boundaryNode = value["Boundary"];
		if(!boundaryNode["Width"].isNull())
			croppingsObject.boundary.width = std::stol(boundaryNode["Width"].asString());
		if(!boundaryNode["Height"].isNull())
			croppingsObject.boundary.height = std::stol(boundaryNode["Height"].asString());
		if(!boundaryNode["Left"].isNull())
			croppingsObject.boundary.left = std::stol(boundaryNode["Left"].asString());
		if(!boundaryNode["Top"].isNull())
			croppingsObject.boundary.top = std::stol(boundaryNode["Top"].asString());
		croppings_.push_back(croppingsObject);
	}

}

std::vector<DetectImageCroppingResult::CroppingsItem> DetectImageCroppingResult::getCroppings()const
{
	return croppings_;
}

