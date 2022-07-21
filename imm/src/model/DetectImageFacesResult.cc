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

#include <alibabacloud/imm/model/DetectImageFacesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

DetectImageFacesResult::DetectImageFacesResult() :
	ServiceResult()
{}

DetectImageFacesResult::DetectImageFacesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectImageFacesResult::~DetectImageFacesResult()
{}

void DetectImageFacesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFacesNode = value["Faces"]["FacesItem"];
	for (auto valueFacesFacesItem : allFacesNode)
	{
		FacesItem facesObject;
		if(!valueFacesFacesItem["AttractiveConfidence"].isNull())
			facesObject.attractiveConfidence = std::stof(valueFacesFacesItem["AttractiveConfidence"].asString());
		if(!valueFacesFacesItem["Gender"].isNull())
			facesObject.gender = valueFacesFacesItem["Gender"].asString();
		if(!valueFacesFacesItem["GenderConfidence"].isNull())
			facesObject.genderConfidence = std::stof(valueFacesFacesItem["GenderConfidence"].asString());
		if(!valueFacesFacesItem["FaceId"].isNull())
			facesObject.faceId = valueFacesFacesItem["FaceId"].asString();
		if(!valueFacesFacesItem["FaceQuality"].isNull())
			facesObject.faceQuality = std::stof(valueFacesFacesItem["FaceQuality"].asString());
		if(!valueFacesFacesItem["Emotion"].isNull())
			facesObject.emotion = valueFacesFacesItem["Emotion"].asString();
		if(!valueFacesFacesItem["Age"].isNull())
			facesObject.age = std::stoi(valueFacesFacesItem["Age"].asString());
		if(!valueFacesFacesItem["FaceConfidence"].isNull())
			facesObject.faceConfidence = std::stof(valueFacesFacesItem["FaceConfidence"].asString());
		if(!valueFacesFacesItem["EmotionConfidence"].isNull())
			facesObject.emotionConfidence = std::stof(valueFacesFacesItem["EmotionConfidence"].asString());
		if(!valueFacesFacesItem["Attractive"].isNull())
			facesObject.attractive = std::stof(valueFacesFacesItem["Attractive"].asString());
		if(!valueFacesFacesItem["AgeConfidence"].isNull())
			facesObject.ageConfidence = std::stof(valueFacesFacesItem["AgeConfidence"].asString());
		auto faceAttributesNode = value["FaceAttributes"];
		if(!faceAttributesNode["GlassesConfidence"].isNull())
			facesObject.faceAttributes.glassesConfidence = std::stof(faceAttributesNode["GlassesConfidence"].asString());
		if(!faceAttributesNode["Glasses"].isNull())
			facesObject.faceAttributes.glasses = faceAttributesNode["Glasses"].asString();
		if(!faceAttributesNode["Mask"].isNull())
			facesObject.faceAttributes.mask = faceAttributesNode["Mask"].asString();
		if(!faceAttributesNode["BeardConfidence"].isNull())
			facesObject.faceAttributes.beardConfidence = std::stof(faceAttributesNode["BeardConfidence"].asString());
		if(!faceAttributesNode["MaskConfidence"].isNull())
			facesObject.faceAttributes.maskConfidence = std::stof(faceAttributesNode["MaskConfidence"].asString());
		if(!faceAttributesNode["Beard"].isNull())
			facesObject.faceAttributes.beard = faceAttributesNode["Beard"].asString();
		auto faceBoundaryNode = faceAttributesNode["FaceBoundary"];
		if(!faceBoundaryNode["Top"].isNull())
			facesObject.faceAttributes.faceBoundary.top = std::stoi(faceBoundaryNode["Top"].asString());
		if(!faceBoundaryNode["Width"].isNull())
			facesObject.faceAttributes.faceBoundary.width = std::stoi(faceBoundaryNode["Width"].asString());
		if(!faceBoundaryNode["Height"].isNull())
			facesObject.faceAttributes.faceBoundary.height = std::stoi(faceBoundaryNode["Height"].asString());
		if(!faceBoundaryNode["Left"].isNull())
			facesObject.faceAttributes.faceBoundary.left = std::stoi(faceBoundaryNode["Left"].asString());
		auto headPoseNode = faceAttributesNode["HeadPose"];
		if(!headPoseNode["Pitch"].isNull())
			facesObject.faceAttributes.headPose.pitch = std::stof(headPoseNode["Pitch"].asString());
		if(!headPoseNode["Roll"].isNull())
			facesObject.faceAttributes.headPose.roll = std::stof(headPoseNode["Roll"].asString());
		if(!headPoseNode["Yaw"].isNull())
			facesObject.faceAttributes.headPose.yaw = std::stof(headPoseNode["Yaw"].asString());
		auto emotionDetailsNode = value["EmotionDetails"];
		if(!emotionDetailsNode["HAPPY"].isNull())
			facesObject.emotionDetails.hAPPY = std::stof(emotionDetailsNode["HAPPY"].asString());
		if(!emotionDetailsNode["CALM"].isNull())
			facesObject.emotionDetails.cALM = std::stof(emotionDetailsNode["CALM"].asString());
		if(!emotionDetailsNode["SURPRISED"].isNull())
			facesObject.emotionDetails.sURPRISED = std::stof(emotionDetailsNode["SURPRISED"].asString());
		if(!emotionDetailsNode["DISGUSTED"].isNull())
			facesObject.emotionDetails.dISGUSTED = std::stof(emotionDetailsNode["DISGUSTED"].asString());
		if(!emotionDetailsNode["ANGRY"].isNull())
			facesObject.emotionDetails.aNGRY = std::stof(emotionDetailsNode["ANGRY"].asString());
		if(!emotionDetailsNode["SAD"].isNull())
			facesObject.emotionDetails.sAD = std::stof(emotionDetailsNode["SAD"].asString());
		if(!emotionDetailsNode["SCARED"].isNull())
			facesObject.emotionDetails.sCARED = std::stof(emotionDetailsNode["SCARED"].asString());
		faces_.push_back(facesObject);
	}
	if(!value["ImageUri"].isNull())
		imageUri_ = value["ImageUri"].asString();

}

std::string DetectImageFacesResult::getImageUri()const
{
	return imageUri_;
}

std::vector<DetectImageFacesResult::FacesItem> DetectImageFacesResult::getFaces()const
{
	return faces_;
}

