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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allBodies = value["Bodies"]["BodiesItem"];
	for (auto value : allBodies)
	{
		BodiesItem bodiesObject;
		if(!value["BodyConfidence"].isNull())
			bodiesObject.bodyConfidence = std::stof(value["BodyConfidence"].asString());
		auto bodyBoundaryNode = value["BodyBoundary"];
		if(!bodyBoundaryNode["Left"].isNull())
			bodiesObject.bodyBoundary.left = std::stoi(bodyBoundaryNode["Left"].asString());
		if(!bodyBoundaryNode["Top"].isNull())
			bodiesObject.bodyBoundary.top = std::stoi(bodyBoundaryNode["Top"].asString());
		if(!bodyBoundaryNode["Width"].isNull())
			bodiesObject.bodyBoundary.width = std::stoi(bodyBoundaryNode["Width"].asString());
		if(!bodyBoundaryNode["Height"].isNull())
			bodiesObject.bodyBoundary.height = std::stoi(bodyBoundaryNode["Height"].asString());
		bodies_.push_back(bodiesObject);
	}
	if(!value["ImageUri"].isNull())
		imageUri_ = value["ImageUri"].asString();

}

std::vector<DetectImageBodiesResult::BodiesItem> DetectImageBodiesResult::getBodies()const
{
	return bodies_;
}

std::string DetectImageBodiesResult::getImageUri()const
{
	return imageUri_;
}

