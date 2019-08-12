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

#include <alibabacloud/imm/model/GetImageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

GetImageResult::GetImageResult() :
	ServiceResult()
{}

GetImageResult::GetImageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetImageResult::~GetImageResult()
{}

void GetImageResult::parse(const std::string &payload)
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
			facesObject.age = value["Age"].asString();
		if(!value["Gender"].isNull())
			facesObject.gender = value["Gender"].asString();
		if(!value["Emotion"].isNull())
			facesObject.emotion = value["Emotion"].asString();
		if(!value["Attractive"].isNull())
			facesObject.attractive = std::stof(value["Attractive"].asString());
		if(!value["GenderConfidence"].isNull())
			facesObject.genderConfidence = std::stof(value["GenderConfidence"].asString());
		if(!value["GroupId"].isNull())
			facesObject.groupId = value["GroupId"].asString();
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
	auto allOCR = value["OCR"]["OCRItem"];
	for (auto value : allOCR)
	{
		OCRItem oCRObject;
		if(!value["OCRContents"].isNull())
			oCRObject.oCRContents = value["OCRContents"].asString();
		if(!value["OCRConfidence"].isNull())
			oCRObject.oCRConfidence = std::stof(value["OCRConfidence"].asString());
		auto oCRBoundaryNode = value["OCRBoundary"];
		if(!oCRBoundaryNode["Left"].isNull())
			oCRObject.oCRBoundary.left = std::stoi(oCRBoundaryNode["Left"].asString());
		if(!oCRBoundaryNode["Top"].isNull())
			oCRObject.oCRBoundary.top = std::stoi(oCRBoundaryNode["Top"].asString());
		if(!oCRBoundaryNode["Width"].isNull())
			oCRObject.oCRBoundary.width = std::stoi(oCRBoundaryNode["Width"].asString());
		if(!oCRBoundaryNode["Height"].isNull())
			oCRObject.oCRBoundary.height = std::stoi(oCRBoundaryNode["Height"].asString());
		oCR_.push_back(oCRObject);
	}
	auto allTags = value["Tags"]["TagsItem"];
	for (auto value : allTags)
	{
		TagsItem tagsObject;
		if(!value["TagName"].isNull())
			tagsObject.tagName = value["TagName"].asString();
		if(!value["TagConfidence"].isNull())
			tagsObject.tagConfidence = std::stof(value["TagConfidence"].asString());
		if(!value["TagLevel"].isNull())
			tagsObject.tagLevel = std::stoi(value["TagLevel"].asString());
		if(!value["ParentTagName"].isNull())
			tagsObject.parentTagName = value["ParentTagName"].asString();
		tags_.push_back(tagsObject);
	}
	auto allCelebrity = value["Celebrity"]["CelebrityItem"];
	for (auto value : allCelebrity)
	{
		CelebrityItem celebrityObject;
		if(!value["CelebrityName"].isNull())
			celebrityObject.celebrityName = value["CelebrityName"].asString();
		if(!value["CelebrityGender"].isNull())
			celebrityObject.celebrityGender = value["CelebrityGender"].asString();
		if(!value["CelebrityConfidence"].isNull())
			celebrityObject.celebrityConfidence = std::stof(value["CelebrityConfidence"].asString());
		if(!value["CelebrityLibraryName"].isNull())
			celebrityObject.celebrityLibraryName = value["CelebrityLibraryName"].asString();
		auto celebrityBoundaryNode = value["CelebrityBoundary"];
		if(!celebrityBoundaryNode["Left"].isNull())
			celebrityObject.celebrityBoundary.left = std::stoi(celebrityBoundaryNode["Left"].asString());
		if(!celebrityBoundaryNode["Top"].isNull())
			celebrityObject.celebrityBoundary.top = std::stoi(celebrityBoundaryNode["Top"].asString());
		if(!celebrityBoundaryNode["Width"].isNull())
			celebrityObject.celebrityBoundary.width = std::stoi(celebrityBoundaryNode["Width"].asString());
		if(!celebrityBoundaryNode["Height"].isNull())
			celebrityObject.celebrityBoundary.height = std::stoi(celebrityBoundaryNode["Height"].asString());
		celebrity_.push_back(celebrityObject);
	}
	if(!value["SetId"].isNull())
		setId_ = value["SetId"].asString();
	if(!value["ImageUri"].isNull())
		imageUri_ = value["ImageUri"].asString();
	if(!value["RemarksA"].isNull())
		remarksA_ = value["RemarksA"].asString();
	if(!value["RemarksB"].isNull())
		remarksB_ = value["RemarksB"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["ModifyTime"].isNull())
		modifyTime_ = value["ModifyTime"].asString();
	if(!value["ImageWidth"].isNull())
		imageWidth_ = std::stoi(value["ImageWidth"].asString());
	if(!value["ImageHeight"].isNull())
		imageHeight_ = std::stoi(value["ImageHeight"].asString());
	if(!value["ImageFormat"].isNull())
		imageFormat_ = value["ImageFormat"].asString();
	if(!value["Exif"].isNull())
		exif_ = value["Exif"].asString();
	if(!value["FileSize"].isNull())
		fileSize_ = std::stoi(value["FileSize"].asString());
	if(!value["ImageTime"].isNull())
		imageTime_ = value["ImageTime"].asString();
	if(!value["Orientation"].isNull())
		orientation_ = value["Orientation"].asString();
	if(!value["SourceType"].isNull())
		sourceType_ = value["SourceType"].asString();
	if(!value["SourceUri"].isNull())
		sourceUri_ = value["SourceUri"].asString();
	if(!value["SourcePosition"].isNull())
		sourcePosition_ = value["SourcePosition"].asString();
	if(!value["FacesStatus"].isNull())
		facesStatus_ = value["FacesStatus"].asString();
	if(!value["FacesModifyTime"].isNull())
		facesModifyTime_ = value["FacesModifyTime"].asString();
	if(!value["Location"].isNull())
		location_ = value["Location"].asString();
	if(!value["OCRStatus"].isNull())
		oCRStatus_ = value["OCRStatus"].asString();
	if(!value["OCRModifyTime"].isNull())
		oCRModifyTime_ = value["OCRModifyTime"].asString();
	if(!value["OCRFailReason"].isNull())
		oCRFailReason_ = value["OCRFailReason"].asString();
	if(!value["FacesFailReason"].isNull())
		facesFailReason_ = value["FacesFailReason"].asString();
	if(!value["TagsFailReason"].isNull())
		tagsFailReason_ = value["TagsFailReason"].asString();
	if(!value["TagsModifyTime"].isNull())
		tagsModifyTime_ = value["TagsModifyTime"].asString();
	if(!value["CelebrityStatus"].isNull())
		celebrityStatus_ = value["CelebrityStatus"].asString();
	if(!value["CelebrityModifyTime"].isNull())
		celebrityModifyTime_ = value["CelebrityModifyTime"].asString();
	if(!value["CelebrityFailReason"].isNull())
		celebrityFailReason_ = value["CelebrityFailReason"].asString();
	if(!value["TagsStatus"].isNull())
		tagsStatus_ = value["TagsStatus"].asString();
	if(!value["RemarksC"].isNull())
		remarksC_ = value["RemarksC"].asString();
	if(!value["RemarksD"].isNull())
		remarksD_ = value["RemarksD"].asString();
	if(!value["ExternalId"].isNull())
		externalId_ = value["ExternalId"].asString();

}

std::string GetImageResult::getModifyTime()const
{
	return modifyTime_;
}

std::string GetImageResult::getSourceType()const
{
	return sourceType_;
}

std::string GetImageResult::getSourceUri()const
{
	return sourceUri_;
}

std::string GetImageResult::getFacesFailReason()const
{
	return facesFailReason_;
}

std::string GetImageResult::getRemarksA()const
{
	return remarksA_;
}

std::string GetImageResult::getRemarksB()const
{
	return remarksB_;
}

std::string GetImageResult::getImageFormat()const
{
	return imageFormat_;
}

std::string GetImageResult::getTagsFailReason()const
{
	return tagsFailReason_;
}

std::string GetImageResult::getExif()const
{
	return exif_;
}

std::string GetImageResult::getFacesModifyTime()const
{
	return facesModifyTime_;
}

std::string GetImageResult::getRemarksC()const
{
	return remarksC_;
}

std::string GetImageResult::getRemarksD()const
{
	return remarksD_;
}

int GetImageResult::getImageWidth()const
{
	return imageWidth_;
}

std::vector<GetImageResult::CelebrityItem> GetImageResult::getCelebrity()const
{
	return celebrity_;
}

std::string GetImageResult::getSourcePosition()const
{
	return sourcePosition_;
}

std::vector<GetImageResult::FacesItem> GetImageResult::getFaces()const
{
	return faces_;
}

std::vector<GetImageResult::TagsItem> GetImageResult::getTags()const
{
	return tags_;
}

std::string GetImageResult::getFacesStatus()const
{
	return facesStatus_;
}

std::string GetImageResult::getCreateTime()const
{
	return createTime_;
}

std::string GetImageResult::getTagsModifyTime()const
{
	return tagsModifyTime_;
}

std::string GetImageResult::getExternalId()const
{
	return externalId_;
}

std::string GetImageResult::getImageUri()const
{
	return imageUri_;
}

std::string GetImageResult::getOrientation()const
{
	return orientation_;
}

std::string GetImageResult::getOCRStatus()const
{
	return oCRStatus_;
}

std::string GetImageResult::getOCRModifyTime()const
{
	return oCRModifyTime_;
}

std::string GetImageResult::getImageTime()const
{
	return imageTime_;
}

std::string GetImageResult::getCelebrityModifyTime()const
{
	return celebrityModifyTime_;
}

int GetImageResult::getImageHeight()const
{
	return imageHeight_;
}

std::string GetImageResult::getTagsStatus()const
{
	return tagsStatus_;
}

std::string GetImageResult::getOCRFailReason()const
{
	return oCRFailReason_;
}

std::string GetImageResult::getCelebrityFailReason()const
{
	return celebrityFailReason_;
}

std::string GetImageResult::getSetId()const
{
	return setId_;
}

std::string GetImageResult::getCelebrityStatus()const
{
	return celebrityStatus_;
}

std::vector<GetImageResult::OCRItem> GetImageResult::getOCR()const
{
	return oCR_;
}

int GetImageResult::getFileSize()const
{
	return fileSize_;
}

std::string GetImageResult::getLocation()const
{
	return location_;
}

