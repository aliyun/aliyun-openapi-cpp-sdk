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

#include <alibabacloud/cloudauth/model/DetectFaceAttributesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

DetectFaceAttributesResult::DetectFaceAttributesResult() :
	ServiceResult()
{}

DetectFaceAttributesResult::DetectFaceAttributesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectFaceAttributesResult::~DetectFaceAttributesResult()
{}

void DetectFaceAttributesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ImgWidth"].isNull())
		data_.imgWidth = std::stoi(dataNode["ImgWidth"].asString());
	if(!dataNode["ImgHeight"].isNull())
		data_.imgHeight = std::stoi(dataNode["ImgHeight"].asString());
	auto allFaceInfos = value["FaceInfos"]["FaceAttributesDetectInfo"];
	for (auto value : allFaceInfos)
	{
		Data::FaceAttributesDetectInfo faceAttributesDetectInfoObject;
		auto faceRectNode = value["FaceRect"];
		if(!faceRectNode["Top"].isNull())
			faceAttributesDetectInfoObject.faceRect.top = std::stoi(faceRectNode["Top"].asString());
		if(!faceRectNode["Left"].isNull())
			faceAttributesDetectInfoObject.faceRect.left = std::stoi(faceRectNode["Left"].asString());
		if(!faceRectNode["Width"].isNull())
			faceAttributesDetectInfoObject.faceRect.width = std::stoi(faceRectNode["Width"].asString());
		if(!faceRectNode["Height"].isNull())
			faceAttributesDetectInfoObject.faceRect.height = std::stoi(faceRectNode["Height"].asString());
		auto faceAttributesNode = value["FaceAttributes"];
		if(!faceAttributesNode["Age"].isNull())
			faceAttributesDetectInfoObject.faceAttributes.age = std::stoi(faceAttributesNode["Age"].asString());
		if(!faceAttributesNode["Glasses"].isNull())
			faceAttributesDetectInfoObject.faceAttributes.glasses = faceAttributesNode["Glasses"].asString();
		if(!faceAttributesNode["Facetype"].isNull())
			faceAttributesDetectInfoObject.faceAttributes.facetype = faceAttributesNode["Facetype"].asString();
		if(!faceAttributesNode["Blur"].isNull())
			faceAttributesDetectInfoObject.faceAttributes.blur = std::stof(faceAttributesNode["Blur"].asString());
		if(!faceAttributesNode["Ethnicity"].isNull())
			faceAttributesDetectInfoObject.faceAttributes.ethnicity = faceAttributesNode["Ethnicity"].asString();
		auto genderNode = faceAttributesNode["Gender"];
		if(!genderNode["Score"].isNull())
			faceAttributesDetectInfoObject.faceAttributes.gender.score = std::stof(genderNode["Score"].asString());
		if(!genderNode["Value"].isNull())
			faceAttributesDetectInfoObject.faceAttributes.gender.value = genderNode["Value"].asString();
		auto smilingNode = faceAttributesNode["Smiling"];
		if(!smilingNode["Value"].isNull())
			faceAttributesDetectInfoObject.faceAttributes.smiling.value = std::stof(smilingNode["Value"].asString());
		if(!smilingNode["Threshold"].isNull())
			faceAttributesDetectInfoObject.faceAttributes.smiling.threshold = std::stof(smilingNode["Threshold"].asString());
		auto headposeNode = faceAttributesNode["Headpose"];
		if(!headposeNode["PitchAngle"].isNull())
			faceAttributesDetectInfoObject.faceAttributes.headpose.pitchAngle = std::stof(headposeNode["PitchAngle"].asString());
		if(!headposeNode["RollAngle"].isNull())
			faceAttributesDetectInfoObject.faceAttributes.headpose.rollAngle = std::stof(headposeNode["RollAngle"].asString());
		if(!headposeNode["YawAngle"].isNull())
			faceAttributesDetectInfoObject.faceAttributes.headpose.yawAngle = std::stof(headposeNode["YawAngle"].asString());
		data_.faceInfos.push_back(faceAttributesDetectInfoObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DetectFaceAttributesResult::getMessage()const
{
	return message_;
}

DetectFaceAttributesResult::Data DetectFaceAttributesResult::getData()const
{
	return data_;
}

std::string DetectFaceAttributesResult::getCode()const
{
	return code_;
}

bool DetectFaceAttributesResult::getSuccess()const
{
	return success_;
}

