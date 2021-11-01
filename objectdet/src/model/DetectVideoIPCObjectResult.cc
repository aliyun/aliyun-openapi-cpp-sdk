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

#include <alibabacloud/objectdet/model/DetectVideoIPCObjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Objectdet;
using namespace AlibabaCloud::Objectdet::Model;

DetectVideoIPCObjectResult::DetectVideoIPCObjectResult() :
	ServiceResult()
{}

DetectVideoIPCObjectResult::DetectVideoIPCObjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectVideoIPCObjectResult::~DetectVideoIPCObjectResult()
{}

void DetectVideoIPCObjectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Width"].isNull())
		data_.width = std::stol(dataNode["Width"].asString());
	if(!dataNode["Height"].isNull())
		data_.height = std::stol(dataNode["Height"].asString());
	if(!dataNode["InputFile"].isNull())
		data_.inputFile = dataNode["InputFile"].asString();
	auto allFramesNode = dataNode["Frames"]["Frame"];
	for (auto dataNodeFramesFrame : allFramesNode)
	{
		Data::Frame frameObject;
		if(!dataNodeFramesFrame["Time"].isNull())
			frameObject.time = std::stol(dataNodeFramesFrame["Time"].asString());
		auto allElementsNode = dataNodeFramesFrame["Elements"]["elementsItem"];
		for (auto dataNodeFramesFrameElementselementsItem : allElementsNode)
		{
			Data::Frame::ElementsItem elementsObject;
			if(!dataNodeFramesFrameElementselementsItem["Type"].isNull())
				elementsObject.type = dataNodeFramesFrameElementselementsItem["Type"].asString();
			if(!dataNodeFramesFrameElementselementsItem["X"].isNull())
				elementsObject.x = std::stol(dataNodeFramesFrameElementselementsItem["X"].asString());
			if(!dataNodeFramesFrameElementselementsItem["Y"].isNull())
				elementsObject.y = std::stol(dataNodeFramesFrameElementselementsItem["Y"].asString());
			if(!dataNodeFramesFrameElementselementsItem["Width"].isNull())
				elementsObject.width = std::stol(dataNodeFramesFrameElementselementsItem["Width"].asString());
			if(!dataNodeFramesFrameElementselementsItem["Height"].isNull())
				elementsObject.height = std::stol(dataNodeFramesFrameElementselementsItem["Height"].asString());
			if(!dataNodeFramesFrameElementselementsItem["Score"].isNull())
				elementsObject.score = std::stof(dataNodeFramesFrameElementselementsItem["Score"].asString());
			frameObject.elements.push_back(elementsObject);
		}
		data_.frames.push_back(frameObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DetectVideoIPCObjectResult::getMessage()const
{
	return message_;
}

DetectVideoIPCObjectResult::Data DetectVideoIPCObjectResult::getData()const
{
	return data_;
}

std::string DetectVideoIPCObjectResult::getCode()const
{
	return code_;
}

