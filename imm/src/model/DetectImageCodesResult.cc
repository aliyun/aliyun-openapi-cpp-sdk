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

#include <alibabacloud/imm/model/DetectImageCodesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

DetectImageCodesResult::DetectImageCodesResult() :
	ServiceResult()
{}

DetectImageCodesResult::DetectImageCodesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectImageCodesResult::~DetectImageCodesResult()
{}

void DetectImageCodesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCodesNode = value["Codes"]["CodesItem"];
	for (auto valueCodesCodesItem : allCodesNode)
	{
		CodesItem codesObject;
		if(!valueCodesCodesItem["Content"].isNull())
			codesObject.content = valueCodesCodesItem["Content"].asString();
		if(!valueCodesCodesItem["Confidence"].isNull())
			codesObject.confidence = std::stof(valueCodesCodesItem["Confidence"].asString());
		if(!valueCodesCodesItem["Type"].isNull())
			codesObject.type = valueCodesCodesItem["Type"].asString();
		auto boundaryNode = value["Boundary"];
		if(!boundaryNode["Width"].isNull())
			codesObject.boundary.width = std::stol(boundaryNode["Width"].asString());
		if(!boundaryNode["Height"].isNull())
			codesObject.boundary.height = std::stol(boundaryNode["Height"].asString());
		if(!boundaryNode["Left"].isNull())
			codesObject.boundary.left = std::stol(boundaryNode["Left"].asString());
		if(!boundaryNode["Top"].isNull())
			codesObject.boundary.top = std::stol(boundaryNode["Top"].asString());
		codes_.push_back(codesObject);
	}

}

std::vector<DetectImageCodesResult::CodesItem> DetectImageCodesResult::getCodes()const
{
	return codes_;
}

