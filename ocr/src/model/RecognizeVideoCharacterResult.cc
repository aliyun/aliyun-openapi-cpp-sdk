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

#include <alibabacloud/ocr/model/RecognizeVideoCharacterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ocr;
using namespace AlibabaCloud::Ocr::Model;

RecognizeVideoCharacterResult::RecognizeVideoCharacterResult() :
	ServiceResult()
{}

RecognizeVideoCharacterResult::RecognizeVideoCharacterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RecognizeVideoCharacterResult::~RecognizeVideoCharacterResult()
{}

void RecognizeVideoCharacterResult::parse(const std::string &payload)
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
		if(!dataNodeFramesFrame["Timestamp"].isNull())
			frameObject.timestamp = std::stol(dataNodeFramesFrame["Timestamp"].asString());
		auto allElementsNode = dataNodeFramesFrame["Elements"]["Element"];
		for (auto dataNodeFramesFrameElementsElement : allElementsNode)
		{
			Data::Frame::Element elementsObject;
			if(!dataNodeFramesFrameElementsElement["Score"].isNull())
				elementsObject.score = std::stof(dataNodeFramesFrameElementsElement["Score"].asString());
			if(!dataNodeFramesFrameElementsElement["Text"].isNull())
				elementsObject.text = dataNodeFramesFrameElementsElement["Text"].asString();
			auto allTextRectanglesNode = dataNodeFramesFrameElementsElement["TextRectangles"]["TextRectangle"];
			for (auto dataNodeFramesFrameElementsElementTextRectanglesTextRectangle : allTextRectanglesNode)
			{
				Data::Frame::Element::TextRectangle textRectanglesObject;
				if(!dataNodeFramesFrameElementsElementTextRectanglesTextRectangle["Angle"].isNull())
					textRectanglesObject.angle = std::stol(dataNodeFramesFrameElementsElementTextRectanglesTextRectangle["Angle"].asString());
				if(!dataNodeFramesFrameElementsElementTextRectanglesTextRectangle["Left"].isNull())
					textRectanglesObject.left = std::stol(dataNodeFramesFrameElementsElementTextRectanglesTextRectangle["Left"].asString());
				if(!dataNodeFramesFrameElementsElementTextRectanglesTextRectangle["Top"].isNull())
					textRectanglesObject.top = std::stol(dataNodeFramesFrameElementsElementTextRectanglesTextRectangle["Top"].asString());
				if(!dataNodeFramesFrameElementsElementTextRectanglesTextRectangle["Width"].isNull())
					textRectanglesObject.width = std::stol(dataNodeFramesFrameElementsElementTextRectanglesTextRectangle["Width"].asString());
				if(!dataNodeFramesFrameElementsElementTextRectanglesTextRectangle["Height"].isNull())
					textRectanglesObject.height = std::stol(dataNodeFramesFrameElementsElementTextRectanglesTextRectangle["Height"].asString());
				elementsObject.textRectangles.push_back(textRectanglesObject);
			}
			frameObject.elements.push_back(elementsObject);
		}
		data_.frames.push_back(frameObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string RecognizeVideoCharacterResult::getMessage()const
{
	return message_;
}

RecognizeVideoCharacterResult::Data RecognizeVideoCharacterResult::getData()const
{
	return data_;
}

std::string RecognizeVideoCharacterResult::getCode()const
{
	return code_;
}

