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

#include <alibabacloud/imm/model/ListImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListImagesResult::ListImagesResult() :
	ServiceResult()
{}

ListImagesResult::ListImagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListImagesResult::~ListImagesResult()
{}

void ListImagesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allImages = value["Images"]["ImagesItem"];
	for (auto value : allImages)
	{
		ImagesItem imagesObject;
		if(!value["FacesModifyTime"].isNull())
			imagesObject.facesModifyTime = value["FacesModifyTime"].asString();
		if(!value["OCRModifyTime"].isNull())
			imagesObject.oCRModifyTime = value["OCRModifyTime"].asString();
		if(!value["OCRStatus"].isNull())
			imagesObject.oCRStatus = value["OCRStatus"].asString();
		if(!value["SourcePosition"].isNull())
			imagesObject.sourcePosition = value["SourcePosition"].asString();
		if(!value["Exif"].isNull())
			imagesObject.exif = value["Exif"].asString();
		if(!value["ImageUri"].isNull())
			imagesObject.imageUri = value["ImageUri"].asString();
		if(!value["ImageWidth"].isNull())
			imagesObject.imageWidth = std::stoi(value["ImageWidth"].asString());
		if(!value["ImageFormat"].isNull())
			imagesObject.imageFormat = value["ImageFormat"].asString();
		if(!value["SourceType"].isNull())
			imagesObject.sourceType = value["SourceType"].asString();
		if(!value["ModifyTime"].isNull())
			imagesObject.modifyTime = value["ModifyTime"].asString();
		if(!value["FileSize"].isNull())
			imagesObject.fileSize = std::stoi(value["FileSize"].asString());
		if(!value["SourceUri"].isNull())
			imagesObject.sourceUri = value["SourceUri"].asString();
		if(!value["CreateTime"].isNull())
			imagesObject.createTime = value["CreateTime"].asString();
		if(!value["FacesStatus"].isNull())
			imagesObject.facesStatus = value["FacesStatus"].asString();
		if(!value["RemarksA"].isNull())
			imagesObject.remarksA = value["RemarksA"].asString();
		if(!value["ImageHeight"].isNull())
			imagesObject.imageHeight = std::stoi(value["ImageHeight"].asString());
		if(!value["RemarksB"].isNull())
			imagesObject.remarksB = value["RemarksB"].asString();
		if(!value["ImageTime"].isNull())
			imagesObject.imageTime = value["ImageTime"].asString();
		if(!value["Orientation"].isNull())
			imagesObject.orientation = value["Orientation"].asString();
		if(!value["Location"].isNull())
			imagesObject.location = value["Location"].asString();
		if(!value["OCRFailReason"].isNull())
			imagesObject.oCRFailReason = value["OCRFailReason"].asString();
		if(!value["FacesFailReason"].isNull())
			imagesObject.facesFailReason = value["FacesFailReason"].asString();
		if(!value["TagsFailReason"].isNull())
			imagesObject.tagsFailReason = value["TagsFailReason"].asString();
		if(!value["TagsModifyTime"].isNull())
			imagesObject.tagsModifyTime = value["TagsModifyTime"].asString();
		if(!value["CelebrityStatus"].isNull())
			imagesObject.celebrityStatus = value["CelebrityStatus"].asString();
		if(!value["CelebrityModifyTime"].isNull())
			imagesObject.celebrityModifyTime = value["CelebrityModifyTime"].asString();
		if(!value["CelebrityFailReason"].isNull())
			imagesObject.celebrityFailReason = value["CelebrityFailReason"].asString();
		if(!value["TagsStatus"].isNull())
			imagesObject.tagsStatus = value["TagsStatus"].asString();
		if(!value["RemarksC"].isNull())
			imagesObject.remarksC = value["RemarksC"].asString();
		if(!value["RemarksD"].isNull())
			imagesObject.remarksD = value["RemarksD"].asString();
		if(!value["ExternalId"].isNull())
			imagesObject.externalId = value["ExternalId"].asString();
		auto allFaces = value["Faces"]["FacesItem"];
		for (auto value : allFaces)
		{
			ImagesItem::FacesItem facesObject;
			if(!value["Age"].isNull())
				facesObject.age = std::stoi(value["Age"].asString());
			if(!value["GenderConfidence"].isNull())
				facesObject.genderConfidence = std::stof(value["GenderConfidence"].asString());
			if(!value["Attractive"].isNull())
				facesObject.attractive = std::stof(value["Attractive"].asString());
			if(!value["Gender"].isNull())
				facesObject.gender = value["Gender"].asString();
			if(!value["FaceConfidence"].isNull())
				facesObject.faceConfidence = std::stof(value["FaceConfidence"].asString());
			if(!value["Emotion"].isNull())
				facesObject.emotion = value["Emotion"].asString();
			if(!value["FaceId"].isNull())
				facesObject.faceId = value["FaceId"].asString();
			if(!value["EmotionConfidence"].isNull())
				facesObject.emotionConfidence = std::stof(value["EmotionConfidence"].asString());
			if(!value["GroupId"].isNull())
				facesObject.groupId = value["GroupId"].asString();
			if(!value["FaceQuality"].isNull())
				facesObject.faceQuality = std::stof(value["FaceQuality"].asString());
			auto emotionDetailsNode = value["EmotionDetails"];
			if(!emotionDetailsNode["SAD"].isNull())
				facesObject.emotionDetails.sAD = std::stof(emotionDetailsNode["SAD"].asString());
			if(!emotionDetailsNode["CALM"].isNull())
				facesObject.emotionDetails.cALM = std::stof(emotionDetailsNode["CALM"].asString());
			if(!emotionDetailsNode["ANGRY"].isNull())
				facesObject.emotionDetails.aNGRY = std::stof(emotionDetailsNode["ANGRY"].asString());
			if(!emotionDetailsNode["HAPPY"].isNull())
				facesObject.emotionDetails.hAPPY = std::stof(emotionDetailsNode["HAPPY"].asString());
			if(!emotionDetailsNode["SCARED"].isNull())
				facesObject.emotionDetails.sCARED = std::stof(emotionDetailsNode["SCARED"].asString());
			if(!emotionDetailsNode["DISGUSTED"].isNull())
				facesObject.emotionDetails.dISGUSTED = std::stof(emotionDetailsNode["DISGUSTED"].asString());
			if(!emotionDetailsNode["SURPRISED"].isNull())
				facesObject.emotionDetails.sURPRISED = std::stof(emotionDetailsNode["SURPRISED"].asString());
			auto faceAttributesNode = value["FaceAttributes"];
			if(!faceAttributesNode["GlassesConfidence"].isNull())
				facesObject.faceAttributes.glassesConfidence = std::stof(faceAttributesNode["GlassesConfidence"].asString());
			if(!faceAttributesNode["Glasses"].isNull())
				facesObject.faceAttributes.glasses = faceAttributesNode["Glasses"].asString();
			if(!faceAttributesNode["RaceConfidence"].isNull())
				facesObject.faceAttributes.raceConfidence = std::stof(faceAttributesNode["RaceConfidence"].asString());
			if(!faceAttributesNode["Beard"].isNull())
				facesObject.faceAttributes.beard = faceAttributesNode["Beard"].asString();
			if(!faceAttributesNode["MaskConfidence"].isNull())
				facesObject.faceAttributes.maskConfidence = std::stof(faceAttributesNode["MaskConfidence"].asString());
			if(!faceAttributesNode["Race"].isNull())
				facesObject.faceAttributes.race = faceAttributesNode["Race"].asString();
			if(!faceAttributesNode["BeardConfidence"].isNull())
				facesObject.faceAttributes.beardConfidence = std::stof(faceAttributesNode["BeardConfidence"].asString());
			if(!faceAttributesNode["Mask"].isNull())
				facesObject.faceAttributes.mask = faceAttributesNode["Mask"].asString();
			auto faceBoundaryNode = faceAttributesNode["FaceBoundary"];
			if(!faceBoundaryNode["Top"].isNull())
				facesObject.faceAttributes.faceBoundary.top = std::stoi(faceBoundaryNode["Top"].asString());
			if(!faceBoundaryNode["Height"].isNull())
				facesObject.faceAttributes.faceBoundary.height = std::stoi(faceBoundaryNode["Height"].asString());
			if(!faceBoundaryNode["Width"].isNull())
				facesObject.faceAttributes.faceBoundary.width = std::stoi(faceBoundaryNode["Width"].asString());
			if(!faceBoundaryNode["Left"].isNull())
				facesObject.faceAttributes.faceBoundary.left = std::stoi(faceBoundaryNode["Left"].asString());
			auto headPoseNode = faceAttributesNode["HeadPose"];
			if(!headPoseNode["Pitch"].isNull())
				facesObject.faceAttributes.headPose.pitch = std::stof(headPoseNode["Pitch"].asString());
			if(!headPoseNode["Roll"].isNull())
				facesObject.faceAttributes.headPose.roll = std::stof(headPoseNode["Roll"].asString());
			if(!headPoseNode["Yaw"].isNull())
				facesObject.faceAttributes.headPose.yaw = std::stof(headPoseNode["Yaw"].asString());
			imagesObject.faces.push_back(facesObject);
		}
		auto allTags = value["Tags"]["TagsItem"];
		for (auto value : allTags)
		{
			ImagesItem::TagsItem tagsObject;
			if(!value["TagConfidence"].isNull())
				tagsObject.tagConfidence = std::stof(value["TagConfidence"].asString());
			if(!value["TagLevel"].isNull())
				tagsObject.tagLevel = std::stoi(value["TagLevel"].asString());
			if(!value["TagName"].isNull())
				tagsObject.tagName = value["TagName"].asString();
			if(!value["ParentTagName"].isNull())
				tagsObject.parentTagName = value["ParentTagName"].asString();
			imagesObject.tags.push_back(tagsObject);
		}
		auto allOCR = value["OCR"]["OCRItem"];
		for (auto value : allOCR)
		{
			ImagesItem::OCRItem oCRObject;
			if(!value["OCRContents"].isNull())
				oCRObject.oCRContents = value["OCRContents"].asString();
			if(!value["OCRConfidence"].isNull())
				oCRObject.oCRConfidence = std::stof(value["OCRConfidence"].asString());
			auto oCRBoundaryNode = value["OCRBoundary"];
			if(!oCRBoundaryNode["Left"].isNull())
				oCRObject.oCRBoundary.left = std::stoi(oCRBoundaryNode["Left"].asString());
			if(!oCRBoundaryNode["Left"].isNull())
				oCRObject.oCRBoundary.left1 = std::stoi(oCRBoundaryNode["Left"].asString());
			if(!oCRBoundaryNode["Width"].isNull())
				oCRObject.oCRBoundary.width = std::stoi(oCRBoundaryNode["Width"].asString());
			if(!oCRBoundaryNode["Height"].isNull())
				oCRObject.oCRBoundary.height = std::stoi(oCRBoundaryNode["Height"].asString());
			imagesObject.oCR.push_back(oCRObject);
		}
		auto allCelebrity = value["Celebrity"]["CelebrityItem"];
		for (auto value : allCelebrity)
		{
			ImagesItem::CelebrityItem celebrityObject;
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
			imagesObject.celebrity.push_back(celebrityObject);
		}
		images_.push_back(imagesObject);
	}
	if(!value["SetId"].isNull())
		setId_ = value["SetId"].asString();
	if(!value["NextMarker"].isNull())
		nextMarker_ = value["NextMarker"].asString();

}

std::vector<ListImagesResult::ImagesItem> ListImagesResult::getImages()const
{
	return images_;
}

std::string ListImagesResult::getSetId()const
{
	return setId_;
}

std::string ListImagesResult::getNextMarker()const
{
	return nextMarker_;
}

