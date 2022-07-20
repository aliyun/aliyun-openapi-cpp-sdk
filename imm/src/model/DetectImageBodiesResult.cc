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

#include <alibabacloud/imm/model/DetectImageBodiesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

DetectImageBodiesResult::DetectImageBodiesResult() :
	ServiceResult()
{}

DetectImageBodiesResult::DetectImageBodiesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectImageBodiesResult::~DetectImageBodiesResult()
{}

void DetectImageBodiesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBodiesNode = value["Bodies"]["BodiesItem"];
	for (auto valueBodiesBodiesItem : allBodiesNode)
	{
		BodiesItem bodiesObject;
		if(!valueBodiesBodiesItem["Confidence"].isNull())
			bodiesObject.confidence = std::stof(valueBodiesBodiesItem["Confidence"].asString());
		auto boundaryNode = value["Boundary"];
		if(!boundaryNode["Width"].isNull())
			bodiesObject.boundary.width = std::stol(boundaryNode["Width"].asString());
		if(!boundaryNode["Height"].isNull())
			bodiesObject.boundary.height = std::stol(boundaryNode["Height"].asString());
		if(!boundaryNode["Left"].isNull())
			bodiesObject.boundary.left = std::stol(boundaryNode["Left"].asString());
		if(!boundaryNode["Top"].isNull())
			bodiesObject.boundary.top = std::stol(boundaryNode["Top"].asString());
		bodies_.push_back(bodiesObject);
	}

}

std::vector<DetectImageBodiesResult::BodiesItem> DetectImageBodiesResult::getBodies()const
{
	return bodies_;
}

