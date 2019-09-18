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

#include <alibabacloud/ivpd/model/DetectImageElementsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivpd;
using namespace AlibabaCloud::Ivpd::Model;

DetectImageElementsResult::DetectImageElementsResult() :
	ServiceResult()
{}

DetectImageElementsResult::DetectImageElementsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectImageElementsResult::~DetectImageElementsResult()
{}

void DetectImageElementsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allElements = value["Elements"]["Element"];
	for (auto value : allElements)
	{
		Data::Element elementObject;
		if(!value["Type"].isNull())
			elementObject.type = value["Type"].asString();
		if(!value["X"].isNull())
			elementObject.x = std::stoi(value["X"].asString());
		if(!value["Y"].isNull())
			elementObject.y = std::stoi(value["Y"].asString());
		if(!value["Width"].isNull())
			elementObject.width = std::stoi(value["Width"].asString());
		if(!value["Height"].isNull())
			elementObject.height = std::stoi(value["Height"].asString());
		if(!value["Score"].isNull())
			elementObject.score = std::stof(value["Score"].asString());
		data_.elements.push_back(elementObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DetectImageElementsResult::getMessage()const
{
	return message_;
}

DetectImageElementsResult::Data DetectImageElementsResult::getData()const
{
	return data_;
}

std::string DetectImageElementsResult::getCode()const
{
	return code_;
}

