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

#include <alibabacloud/cdrs/model/RecognizeImageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CDRS;
using namespace AlibabaCloud::CDRS::Model;

RecognizeImageResult::RecognizeImageResult() :
	ServiceResult()
{}

RecognizeImageResult::RecognizeImageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RecognizeImageResult::~RecognizeImageResult()
{}

void RecognizeImageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allBodyListNode = dataNode["BodyList"]["BodyListItem"];
	for (auto dataNodeBodyListBodyListItem : allBodyListNode)
	{
		Data::BodyListItem bodyListItemObject;
		if(!dataNodeBodyListBodyListItem["LeftTopX"].isNull())
			bodyListItemObject.leftTopX = std::stoi(dataNodeBodyListBodyListItem["LeftTopX"].asString());
		if(!dataNodeBodyListBodyListItem["LeftTopY"].isNull())
			bodyListItemObject.leftTopY = std::stoi(dataNodeBodyListBodyListItem["LeftTopY"].asString());
		if(!dataNodeBodyListBodyListItem["RightBottomX"].isNull())
			bodyListItemObject.rightBottomX = std::stoi(dataNodeBodyListBodyListItem["RightBottomX"].asString());
		if(!dataNodeBodyListBodyListItem["RightBottomY"].isNull())
			bodyListItemObject.rightBottomY = std::stoi(dataNodeBodyListBodyListItem["RightBottomY"].asString());
		if(!dataNodeBodyListBodyListItem["Feature"].isNull())
			bodyListItemObject.feature = dataNodeBodyListBodyListItem["Feature"].asString();
		if(!dataNodeBodyListBodyListItem["TargetImageContent"].isNull())
			bodyListItemObject.targetImageContent = dataNodeBodyListBodyListItem["TargetImageContent"].asString();
		if(!dataNodeBodyListBodyListItem["CropAlgorithmCode"].isNull())
			bodyListItemObject.cropAlgorithmCode = dataNodeBodyListBodyListItem["CropAlgorithmCode"].asString();
		data_.bodyList.push_back(bodyListItemObject);
	}
	auto allFaceListNode = dataNode["FaceList"]["FaceListItem"];
	for (auto dataNodeFaceListFaceListItem : allFaceListNode)
	{
		Data::FaceListItem faceListItemObject;
		if(!dataNodeFaceListFaceListItem["LeftTopX"].isNull())
			faceListItemObject.leftTopX = std::stoi(dataNodeFaceListFaceListItem["LeftTopX"].asString());
		if(!dataNodeFaceListFaceListItem["LeftTopY"].isNull())
			faceListItemObject.leftTopY = std::stoi(dataNodeFaceListFaceListItem["LeftTopY"].asString());
		if(!dataNodeFaceListFaceListItem["RightBottomX"].isNull())
			faceListItemObject.rightBottomX = std::stoi(dataNodeFaceListFaceListItem["RightBottomX"].asString());
		if(!dataNodeFaceListFaceListItem["RightBottomY"].isNull())
			faceListItemObject.rightBottomY = std::stoi(dataNodeFaceListFaceListItem["RightBottomY"].asString());
		if(!dataNodeFaceListFaceListItem["FaceQuality"].isNull())
			faceListItemObject.faceQuality = std::stof(dataNodeFaceListFaceListItem["FaceQuality"].asString());
		if(!dataNodeFaceListFaceListItem["FaceKeyPointQuality"].isNull())
			faceListItemObject.faceKeyPointQuality = std::stof(dataNodeFaceListFaceListItem["FaceKeyPointQuality"].asString());
		if(!dataNodeFaceListFaceListItem["Feature"].isNull())
			faceListItemObject.feature = dataNodeFaceListFaceListItem["Feature"].asString();
		if(!dataNodeFaceListFaceListItem["TargetImageContent"].isNull())
			faceListItemObject.targetImageContent = dataNodeFaceListFaceListItem["TargetImageContent"].asString();
		if(!dataNodeFaceListFaceListItem["CropAlgorithmCode"].isNull())
			faceListItemObject.cropAlgorithmCode = dataNodeFaceListFaceListItem["CropAlgorithmCode"].asString();
		data_.faceList.push_back(faceListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

std::string RecognizeImageResult::getMessage()const
{
	return message_;
}

RecognizeImageResult::Data RecognizeImageResult::getData()const
{
	return data_;
}

std::string RecognizeImageResult::getCode()const
{
	return code_;
}

std::string RecognizeImageResult::getSuccess()const
{
	return success_;
}

