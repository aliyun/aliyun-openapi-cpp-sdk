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

#include <alibabacloud/videorecog/model/SplitVideoPartsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Videorecog;
using namespace AlibabaCloud::Videorecog::Model;

SplitVideoPartsResult::SplitVideoPartsResult() :
	ServiceResult()
{}

SplitVideoPartsResult::SplitVideoPartsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SplitVideoPartsResult::~SplitVideoPartsResult()
{}

void SplitVideoPartsResult::parse(const std::string &payload)
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
		if(!dataNodeElementselementsItem["BeginTime"].isNull())
			elementsItemObject.beginTime = std::stof(dataNodeElementselementsItem["BeginTime"].asString());
		if(!dataNodeElementselementsItem["EndTime"].isNull())
			elementsItemObject.endTime = std::stof(dataNodeElementselementsItem["EndTime"].asString());
		if(!dataNodeElementselementsItem["Index"].isNull())
			elementsItemObject.index = std::stol(dataNodeElementselementsItem["Index"].asString());
		data_.elements.push_back(elementsItemObject);
	}
	auto allSplitVideoPartResultsNode = dataNode["SplitVideoPartResults"]["splitVideoPartResultsItem"];
	for (auto dataNodeSplitVideoPartResultssplitVideoPartResultsItem : allSplitVideoPartResultsNode)
	{
		Data::SplitVideoPartResultsItem splitVideoPartResultsItemObject;
		if(!dataNodeSplitVideoPartResultssplitVideoPartResultsItem["BeginTime"].isNull())
			splitVideoPartResultsItemObject.beginTime = std::stof(dataNodeSplitVideoPartResultssplitVideoPartResultsItem["BeginTime"].asString());
		if(!dataNodeSplitVideoPartResultssplitVideoPartResultsItem["EndTime"].isNull())
			splitVideoPartResultsItemObject.endTime = std::stof(dataNodeSplitVideoPartResultssplitVideoPartResultsItem["EndTime"].asString());
		if(!dataNodeSplitVideoPartResultssplitVideoPartResultsItem["Theme"].isNull())
			splitVideoPartResultsItemObject.theme = dataNodeSplitVideoPartResultssplitVideoPartResultsItem["Theme"].asString();
		if(!dataNodeSplitVideoPartResultssplitVideoPartResultsItem["Type"].isNull())
			splitVideoPartResultsItemObject.type = dataNodeSplitVideoPartResultssplitVideoPartResultsItem["Type"].asString();
		if(!dataNodeSplitVideoPartResultssplitVideoPartResultsItem["By"].isNull())
			splitVideoPartResultsItemObject.by = dataNodeSplitVideoPartResultssplitVideoPartResultsItem["By"].asString();
		data_.splitVideoPartResults.push_back(splitVideoPartResultsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string SplitVideoPartsResult::getMessage()const
{
	return message_;
}

SplitVideoPartsResult::Data SplitVideoPartsResult::getData()const
{
	return data_;
}

std::string SplitVideoPartsResult::getCode()const
{
	return code_;
}

