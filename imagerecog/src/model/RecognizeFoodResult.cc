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

#include <alibabacloud/imagerecog/model/RecognizeFoodResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imagerecog;
using namespace AlibabaCloud::Imagerecog::Model;

RecognizeFoodResult::RecognizeFoodResult() :
	ServiceResult()
{}

RecognizeFoodResult::RecognizeFoodResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RecognizeFoodResult::~RecognizeFoodResult()
{}

void RecognizeFoodResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allTopFivesNode = dataNode["TopFives"]["TopFivesItem"];
	for (auto dataNodeTopFivesTopFivesItem : allTopFivesNode)
	{
		Data::TopFivesItem topFivesItemObject;
		if(!dataNodeTopFivesTopFivesItem["Category"].isNull())
			topFivesItemObject.category = dataNodeTopFivesTopFivesItem["Category"].asString();
		if(!dataNodeTopFivesTopFivesItem["Score"].isNull())
			topFivesItemObject.score = std::stof(dataNodeTopFivesTopFivesItem["Score"].asString());
		if(!dataNodeTopFivesTopFivesItem["Calorie"].isNull())
			topFivesItemObject.calorie = dataNodeTopFivesTopFivesItem["Calorie"].asString();
		data_.topFives.push_back(topFivesItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string RecognizeFoodResult::getMessage()const
{
	return message_;
}

RecognizeFoodResult::Data RecognizeFoodResult::getData()const
{
	return data_;
}

std::string RecognizeFoodResult::getCode()const
{
	return code_;
}

