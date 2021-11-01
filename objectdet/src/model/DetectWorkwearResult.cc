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

#include <alibabacloud/objectdet/model/DetectWorkwearResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Objectdet;
using namespace AlibabaCloud::Objectdet::Model;

DetectWorkwearResult::DetectWorkwearResult() :
	ServiceResult()
{}

DetectWorkwearResult::DetectWorkwearResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectWorkwearResult::~DetectWorkwearResult()
{}

void DetectWorkwearResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allElementsNode = dataNode["Elements"]["识别内容"];
	for (auto dataNodeElements识别内容 : allElementsNode)
	{
		Data::识别内容 识别内容Object;
		if(!dataNodeElements识别内容["Score"].isNull())
			识别内容Object.score = dataNodeElements识别内容["Score"].asString();
		if(!dataNodeElements识别内容["Type"].isNull())
			识别内容Object.type = dataNodeElements识别内容["Type"].asString();
		auto allPropertyNode = dataNodeElements识别内容["Property"]["识别属性"];
		for (auto dataNodeElements识别内容Property识别属性 : allPropertyNode)
		{
			Data::识别内容::识别属性 propertyObject;
			if(!dataNodeElements识别内容Property识别属性["Label"].isNull())
				propertyObject.label = dataNodeElements识别内容Property识别属性["Label"].asString();
			auto probabilityNode = value["Probability"];
			if(!probabilityNode["No"].isNull())
				propertyObject.probability.no = probabilityNode["No"].asString();
			if(!probabilityNode["Threshold"].isNull())
				propertyObject.probability.threshold = std::stol(probabilityNode["Threshold"].asString());
			if(!probabilityNode["Unknown"].isNull())
				propertyObject.probability.unknown = probabilityNode["Unknown"].asString();
			if(!probabilityNode["Yes"].isNull())
				propertyObject.probability.yes = probabilityNode["Yes"].asString();
			识别内容Object.property.push_back(propertyObject);
		}
		auto rectanglesNode = value["Rectangles"];
		if(!rectanglesNode["Height"].isNull())
			识别内容Object.rectangles.height = std::stol(rectanglesNode["Height"].asString());
		if(!rectanglesNode["Left"].isNull())
			识别内容Object.rectangles.left = std::stol(rectanglesNode["Left"].asString());
		if(!rectanglesNode["Top"].isNull())
			识别内容Object.rectangles.top = std::stol(rectanglesNode["Top"].asString());
		if(!rectanglesNode["Width"].isNull())
			识别内容Object.rectangles.width = std::stol(rectanglesNode["Width"].asString());
		data_.elements.push_back(识别内容Object);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DetectWorkwearResult::getMessage()const
{
	return message_;
}

DetectWorkwearResult::Data DetectWorkwearResult::getData()const
{
	return data_;
}

std::string DetectWorkwearResult::getCode()const
{
	return code_;
}

