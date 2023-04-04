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
		if(!valueFacesFacesItem["FigureId"].isNull())
			facesObject.figureId = valueFacesFacesItem["FigureId"].asString();
		if(!valueFacesFacesItem["FigureConfidence"].isNull())
			facesObject.figureConfidence = std::stof(valueFacesFacesItem["FigureConfidence"].asString());
		if(!valueFacesFacesItem["FigureClusterId"].isNull())
			facesObject.figureClusterId = valueFacesFacesItem["FigureClusterId"].asString();
		if(!valueFacesFacesItem["FigureClusterConfidence"].isNull())
			facesObject.figureClusterConfidence = std::stof(valueFacesFacesItem["FigureClusterConfidence"].asString());
		if(!valueFacesFacesItem["FigureType"].isNull())
			facesObject.figureType = valueFacesFacesItem["FigureType"].asString();
		if(!valueFacesFacesItem["Age"].isNull())
			facesObject.age = std::stol(valueFacesFacesItem["Age"].asString());
		if(!valueFacesFacesItem["AgeSD"].isNull())
			facesObject.ageSD = std::stof(valueFacesFacesItem["AgeSD"].asString());
		if(!valueFacesFacesItem["Gender"].isNull())
			facesObject.gender = valueFacesFacesItem["Gender"].asString();
		if(!valueFacesFacesItem["GenderConfidence"].isNull())
			facesObject.genderConfidence = std::stof(valueFacesFacesItem["GenderConfidence"].asString());
		if(!valueFacesFacesItem["Emotion"].isNull())
			facesObject.emotion = valueFacesFacesItem["Emotion"].asString();
		if(!valueFacesFacesItem["EmotionConfidence"].isNull())
			facesObject.emotionConfidence = std::stof(valueFacesFacesItem["EmotionConfidence"].asString());
		if(!valueFacesFacesItem["FaceQuality"].isNull())
			facesObject.faceQuality = std::stof(valueFacesFacesItem["FaceQuality"].asString());
		if(!valueFacesFacesItem["Mouth"].isNull())
			facesObject.mouth = valueFacesFacesItem["Mouth"].asString();
		if(!valueFacesFacesItem["MouthConfidence"].isNull())
			facesObject.mouthConfidence = std::stof(valueFacesFacesItem["MouthConfidence"].asString());
		if(!valueFacesFacesItem["Beard"].isNull())
			facesObject.beard = valueFacesFacesItem["Beard"].asString();
		if(!valueFacesFacesItem["BeardConfidence"].isNull())
			facesObject.beardConfidence = std::stof(valueFacesFacesItem["BeardConfidence"].asString());
		if(!valueFacesFacesItem["Hat"].isNull())
			facesObject.hat = valueFacesFacesItem["Hat"].asString();
		if(!valueFacesFacesItem["HatConfidence"].isNull())
			facesObject.hatConfidence = std::stof(valueFacesFacesItem["HatConfidence"].asString());
		if(!valueFacesFacesItem["Mask"].isNull())
			facesObject.mask = valueFacesFacesItem["Mask"].asString();
		if(!valueFacesFacesItem["MaskConfidence"].isNull())
			facesObject.maskConfidence = std::stof(valueFacesFacesItem["MaskConfidence"].asString());
		if(!valueFacesFacesItem["Glasses"].isNull())
			facesObject.glasses = valueFacesFacesItem["Glasses"].asString();
		if(!valueFacesFacesItem["GlassesConfidence"].isNull())
			facesObject.glassesConfidence = std::stof(valueFacesFacesItem["GlassesConfidence"].asString());
		if(!valueFacesFacesItem["Sharpness"].isNull())
			facesObject.sharpness = std::stof(valueFacesFacesItem["Sharpness"].asString());
		if(!valueFacesFacesItem["Attractive"].isNull())
			facesObject.attractive = std::stof(valueFacesFacesItem["Attractive"].asString());
		auto boundaryNode = value["Boundary"];
		if(!boundaryNode["Width"].isNull())
			facesObject.boundary.width = std::stol(boundaryNode["Width"].asString());
		if(!boundaryNode["Height"].isNull())
			facesObject.boundary.height = std::stol(boundaryNode["Height"].asString());
		if(!boundaryNode["Left"].isNull())
			facesObject.boundary.left = std::stol(boundaryNode["Left"].asString());
		if(!boundaryNode["Top"].isNull())
			facesObject.boundary.top = std::stol(boundaryNode["Top"].asString());
		auto headPoseNode = value["HeadPose"];
		if(!headPoseNode["Pitch"].isNull())
			facesObject.headPose.pitch = std::stof(headPoseNode["Pitch"].asString());
		if(!headPoseNode["Roll"].isNull())
			facesObject.headPose.roll = std::stof(headPoseNode["Roll"].asString());
		if(!headPoseNode["Yaw"].isNull())
			facesObject.headPose.yaw = std::stof(headPoseNode["Yaw"].asString());
		faces_.push_back(facesObject);
	}

}

std::vector<DetectImageFacesResult::FacesItem> DetectImageFacesResult::getFaces()const
{
	return faces_;
}

