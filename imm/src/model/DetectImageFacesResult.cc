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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allFaces = value["Faces"]["FacesItem"];
	for (auto value : allFaces)
	{
		FacesItem facesObject;
		if(!value["FaceId"].isNull())
			facesObject.faceId = value["FaceId"].asString();
		if(!value["FaceConfidence"].isNull())
			facesObject.faceConfidence = std::stof(value["FaceConfidence"].asString());
		if(!value["Age"].isNull())
			facesObject.age = std::stoi(value["Age"].asString());
		if(!value["Gender"].isNull())
			facesObject.gender = value["Gender"].asString();
		if(!value["Emotion"].isNull())
			facesObject.emotion = value["Emotion"].asString();
		if(!value["Attractive"].isNull())
			facesObject.attractive = std::stof(value["Attractive"].asString());
		if(!value["GenderConfidence"].isNull())
			facesObject.genderConfidence = std::stof(value["GenderConfidence"].asString());
		if(!value["AgeConfidence"].isNull())
			facesObject.ageConfidence = std::stof(value["AgeConfidence"].asString());
		if(!value["AttractiveConfidence"].isNull())
			facesObject.attractiveConfidence = std::stof(value["AttractiveConfidence"].asString());
		if(!value["EmotionConfidence"].isNull())
			facesObject.emotionConfidence = std::stof(value["EmotionConfidence"].asString());
		if(!value["FaceQuality"].isNull())
			facesObject.faceQuality = std::stof(value["FaceQuality"].asString());
		auto faceAttributesNode = value["FaceAttributes"];
		if(!faceAttributesNode["Glasses"].isNull())
			facesObject.faceAttributes.glasses = faceAttributesNode["Glasses"].asString();
		if(!faceAttributesNode["Beard"].isNull())
			facesObject.faceAttributes.beard = faceAttributesNode["Beard"].asString();
		if(!faceAttributesNode["Race"].isNull())
			facesObject.faceAttributes.race = faceAttributesNode["Race"].asString();
		if(!faceAttributesNode["Mask"].isNull())
			facesObject.faceAttributes.mask = faceAttributesNode["Mask"].asString();
		if(!faceAttributesNode["GlassesConfidence"].isNull())
			facesObject.faceAttributes.glassesConfidence = std::stof(faceAttributesNode["GlassesConfidence"].asString());
		if(!faceAttributesNode["BeardConfidence"].isNull())
			facesObject.faceAttributes.beardConfidence = std::stof(faceAttributesNode["BeardConfidence"].asString());
		if(!faceAttributesNode["RaceConfidence"].isNull())
			facesObject.faceAttributes.raceConfidence = std::stof(faceAttributesNode["RaceConfidence"].asString());
		if(!faceAttributesNode["MaskConfidence"].isNull())
			facesObject.faceAttributes.maskConfidence = std::stof(faceAttributesNode["MaskConfidence"].asString());
		auto faceBoundaryNode = faceAttributesNode["FaceBoundary"];
		if(!faceBoundaryNode["Left"].isNull())
			facesObject.faceAttributes.faceBoundary.left = std::stoi(faceBoundaryNode["Left"].asString());
		if(!faceBoundaryNode["Top"].isNull())
			facesObject.faceAttributes.faceBoundary.top = std::stoi(faceBoundaryNode["Top"].asString());
		if(!faceBoundaryNode["Width"].isNull())
			facesObject.faceAttributes.faceBoundary.width = std::stoi(faceBoundaryNode["Width"].asString());
		if(!faceBoundaryNode["Height"].isNull())
			facesObject.faceAttributes.faceBoundary.height = std::stoi(faceBoundaryNode["Height"].asString());
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
		if(!emotionDetailsNode["SAD"].isNull())
			facesObject.emotionDetails.sAD = std::stof(emotionDetailsNode["SAD"].asString());
		if(!emotionDetailsNode["ANGRY"].isNull())
			facesObject.emotionDetails.aNGRY = std::stof(emotionDetailsNode["ANGRY"].asString());
		if(!emotionDetailsNode["SURPRISED"].isNull())
			facesObject.emotionDetails.sURPRISED = std::stof(emotionDetailsNode["SURPRISED"].asString());
		if(!emotionDetailsNode["SCARED"].isNull())
			facesObject.emotionDetails.sCARED = std::stof(emotionDetailsNode["SCARED"].asString());
		if(!emotionDetailsNode["DISGUSTED"].isNull())
			facesObject.emotionDetails.dISGUSTED = std::stof(emotionDetailsNode["DISGUSTED"].asString());
		if(!emotionDetailsNode["CALM"].isNull())
			facesObject.emotionDetails.cALM = std::stof(emotionDetailsNode["CALM"].asString());
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

