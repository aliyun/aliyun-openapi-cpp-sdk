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

#include <alibabacloud/imm/model/ListVideoFramesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListVideoFramesResult::ListVideoFramesResult() :
	ServiceResult()
{}

ListVideoFramesResult::ListVideoFramesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVideoFramesResult::~ListVideoFramesResult()
{}

void ListVideoFramesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFramesNode = value["Frames"]["FramesItem"];
	for (auto valueFramesFramesItem : allFramesNode)
	{
		FramesItem framesObject;
		if(!valueFramesFramesItem["FacesModifyTime"].isNull())
			framesObject.facesModifyTime = valueFramesFramesItem["FacesModifyTime"].asString();
		if(!valueFramesFramesItem["OCRModifyTime"].isNull())
			framesObject.oCRModifyTime = valueFramesFramesItem["OCRModifyTime"].asString();
		if(!valueFramesFramesItem["OCRStatus"].isNull())
			framesObject.oCRStatus = valueFramesFramesItem["OCRStatus"].asString();
		if(!valueFramesFramesItem["SourcePosition"].isNull())
			framesObject.sourcePosition = valueFramesFramesItem["SourcePosition"].asString();
		if(!valueFramesFramesItem["Exif"].isNull())
			framesObject.exif = valueFramesFramesItem["Exif"].asString();
		if(!valueFramesFramesItem["ImageUri"].isNull())
			framesObject.imageUri = valueFramesFramesItem["ImageUri"].asString();
		if(!valueFramesFramesItem["ImageWidth"].isNull())
			framesObject.imageWidth = std::stoi(valueFramesFramesItem["ImageWidth"].asString());
		if(!valueFramesFramesItem["ImageFormat"].isNull())
			framesObject.imageFormat = valueFramesFramesItem["ImageFormat"].asString();
		if(!valueFramesFramesItem["SourceType"].isNull())
			framesObject.sourceType = valueFramesFramesItem["SourceType"].asString();
		if(!valueFramesFramesItem["ModifyTime"].isNull())
			framesObject.modifyTime = valueFramesFramesItem["ModifyTime"].asString();
		if(!valueFramesFramesItem["FileSize"].isNull())
			framesObject.fileSize = std::stoi(valueFramesFramesItem["FileSize"].asString());
		if(!valueFramesFramesItem["SourceUri"].isNull())
			framesObject.sourceUri = valueFramesFramesItem["SourceUri"].asString();
		if(!valueFramesFramesItem["CreateTime"].isNull())
			framesObject.createTime = valueFramesFramesItem["CreateTime"].asString();
		if(!valueFramesFramesItem["FacesStatus"].isNull())
			framesObject.facesStatus = valueFramesFramesItem["FacesStatus"].asString();
		if(!valueFramesFramesItem["RemarksA"].isNull())
			framesObject.remarksA = valueFramesFramesItem["RemarksA"].asString();
		if(!valueFramesFramesItem["ImageHeight"].isNull())
			framesObject.imageHeight = std::stoi(valueFramesFramesItem["ImageHeight"].asString());
		if(!valueFramesFramesItem["RemarksB"].isNull())
			framesObject.remarksB = valueFramesFramesItem["RemarksB"].asString();
		if(!valueFramesFramesItem["ImageTime"].isNull())
			framesObject.imageTime = valueFramesFramesItem["ImageTime"].asString();
		if(!valueFramesFramesItem["Orientation"].isNull())
			framesObject.orientation = valueFramesFramesItem["Orientation"].asString();
		if(!valueFramesFramesItem["Location"].isNull())
			framesObject.location = valueFramesFramesItem["Location"].asString();
		if(!valueFramesFramesItem["OCRFailReason"].isNull())
			framesObject.oCRFailReason = valueFramesFramesItem["OCRFailReason"].asString();
		if(!valueFramesFramesItem["FacesFailReason"].isNull())
			framesObject.facesFailReason = valueFramesFramesItem["FacesFailReason"].asString();
		if(!valueFramesFramesItem["TagsFailReason"].isNull())
			framesObject.tagsFailReason = valueFramesFramesItem["TagsFailReason"].asString();
		if(!valueFramesFramesItem["TagsModifyTime"].isNull())
			framesObject.tagsModifyTime = valueFramesFramesItem["TagsModifyTime"].asString();
		if(!valueFramesFramesItem["CelebrityStatus"].isNull())
			framesObject.celebrityStatus = valueFramesFramesItem["CelebrityStatus"].asString();
		if(!valueFramesFramesItem["CelebrityModifyTime"].isNull())
			framesObject.celebrityModifyTime = valueFramesFramesItem["CelebrityModifyTime"].asString();
		if(!valueFramesFramesItem["CelebrityFailReason"].isNull())
			framesObject.celebrityFailReason = valueFramesFramesItem["CelebrityFailReason"].asString();
		if(!valueFramesFramesItem["TagsStatus"].isNull())
			framesObject.tagsStatus = valueFramesFramesItem["TagsStatus"].asString();
		if(!valueFramesFramesItem["RemarksC"].isNull())
			framesObject.remarksC = valueFramesFramesItem["RemarksC"].asString();
		if(!valueFramesFramesItem["RemarksD"].isNull())
			framesObject.remarksD = valueFramesFramesItem["RemarksD"].asString();
		if(!valueFramesFramesItem["ExternalId"].isNull())
			framesObject.externalId = valueFramesFramesItem["ExternalId"].asString();
		auto allFacesNode = allFramesNode["Faces"]["FacesItem"];
		for (auto allFramesNodeFacesFacesItem : allFacesNode)
		{
			FramesItem::FacesItem facesObject;
			if(!allFramesNodeFacesFacesItem["Age"].isNull())
				facesObject.age = std::stoi(allFramesNodeFacesFacesItem["Age"].asString());
			if(!allFramesNodeFacesFacesItem["GenderConfidence"].isNull())
				facesObject.genderConfidence = std::stof(allFramesNodeFacesFacesItem["GenderConfidence"].asString());
			if(!allFramesNodeFacesFacesItem["Attractive"].isNull())
				facesObject.attractive = std::stof(allFramesNodeFacesFacesItem["Attractive"].asString());
			if(!allFramesNodeFacesFacesItem["Gender"].isNull())
				facesObject.gender = allFramesNodeFacesFacesItem["Gender"].asString();
			if(!allFramesNodeFacesFacesItem["FaceConfidence"].isNull())
				facesObject.faceConfidence = std::stof(allFramesNodeFacesFacesItem["FaceConfidence"].asString());
			if(!allFramesNodeFacesFacesItem["Emotion"].isNull())
				facesObject.emotion = allFramesNodeFacesFacesItem["Emotion"].asString();
			if(!allFramesNodeFacesFacesItem["FaceId"].isNull())
				facesObject.faceId = allFramesNodeFacesFacesItem["FaceId"].asString();
			if(!allFramesNodeFacesFacesItem["EmotionConfidence"].isNull())
				facesObject.emotionConfidence = std::stof(allFramesNodeFacesFacesItem["EmotionConfidence"].asString());
			if(!allFramesNodeFacesFacesItem["GroupId"].isNull())
				facesObject.groupId = allFramesNodeFacesFacesItem["GroupId"].asString();
			if(!allFramesNodeFacesFacesItem["FaceQuality"].isNull())
				facesObject.faceQuality = std::stof(allFramesNodeFacesFacesItem["FaceQuality"].asString());
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
			framesObject.faces.push_back(facesObject);
		}
		auto allTagsNode = allFramesNode["Tags"]["TagsItem"];
		for (auto allFramesNodeTagsTagsItem : allTagsNode)
		{
			FramesItem::TagsItem tagsObject;
			if(!allFramesNodeTagsTagsItem["TagConfidence"].isNull())
				tagsObject.tagConfidence = std::stof(allFramesNodeTagsTagsItem["TagConfidence"].asString());
			if(!allFramesNodeTagsTagsItem["TagLevel"].isNull())
				tagsObject.tagLevel = std::stoi(allFramesNodeTagsTagsItem["TagLevel"].asString());
			if(!allFramesNodeTagsTagsItem["TagName"].isNull())
				tagsObject.tagName = allFramesNodeTagsTagsItem["TagName"].asString();
			if(!allFramesNodeTagsTagsItem["ParentTagName"].isNull())
				tagsObject.parentTagName = allFramesNodeTagsTagsItem["ParentTagName"].asString();
			framesObject.tags.push_back(tagsObject);
		}
		auto allOCRNode = allFramesNode["OCR"]["OCRItem"];
		for (auto allFramesNodeOCROCRItem : allOCRNode)
		{
			FramesItem::OCRItem oCRObject;
			if(!allFramesNodeOCROCRItem["OCRContents"].isNull())
				oCRObject.oCRContents = allFramesNodeOCROCRItem["OCRContents"].asString();
			if(!allFramesNodeOCROCRItem["OCRConfidence"].isNull())
				oCRObject.oCRConfidence = std::stof(allFramesNodeOCROCRItem["OCRConfidence"].asString());
			auto oCRBoundaryNode = value["OCRBoundary"];
			if(!oCRBoundaryNode["Left"].isNull())
				oCRObject.oCRBoundary.left = std::stoi(oCRBoundaryNode["Left"].asString());
			if(!oCRBoundaryNode["Left"].isNull())
				oCRObject.oCRBoundary.left1 = std::stoi(oCRBoundaryNode["Left"].asString());
			if(!oCRBoundaryNode["Width"].isNull())
				oCRObject.oCRBoundary.width = std::stoi(oCRBoundaryNode["Width"].asString());
			if(!oCRBoundaryNode["Height"].isNull())
				oCRObject.oCRBoundary.height = std::stoi(oCRBoundaryNode["Height"].asString());
			framesObject.oCR.push_back(oCRObject);
		}
		auto allCelebrityNode = allFramesNode["Celebrity"]["CelebrityItem"];
		for (auto allFramesNodeCelebrityCelebrityItem : allCelebrityNode)
		{
			FramesItem::CelebrityItem celebrityObject;
			if(!allFramesNodeCelebrityCelebrityItem["CelebrityName"].isNull())
				celebrityObject.celebrityName = allFramesNodeCelebrityCelebrityItem["CelebrityName"].asString();
			if(!allFramesNodeCelebrityCelebrityItem["CelebrityGender"].isNull())
				celebrityObject.celebrityGender = allFramesNodeCelebrityCelebrityItem["CelebrityGender"].asString();
			if(!allFramesNodeCelebrityCelebrityItem["CelebrityConfidence"].isNull())
				celebrityObject.celebrityConfidence = std::stof(allFramesNodeCelebrityCelebrityItem["CelebrityConfidence"].asString());
			if(!allFramesNodeCelebrityCelebrityItem["CelebrityLibraryName"].isNull())
				celebrityObject.celebrityLibraryName = allFramesNodeCelebrityCelebrityItem["CelebrityLibraryName"].asString();
			auto celebrityBoundaryNode = value["CelebrityBoundary"];
			if(!celebrityBoundaryNode["Left"].isNull())
				celebrityObject.celebrityBoundary.left = std::stoi(celebrityBoundaryNode["Left"].asString());
			if(!celebrityBoundaryNode["Top"].isNull())
				celebrityObject.celebrityBoundary.top = std::stoi(celebrityBoundaryNode["Top"].asString());
			if(!celebrityBoundaryNode["Width"].isNull())
				celebrityObject.celebrityBoundary.width = std::stoi(celebrityBoundaryNode["Width"].asString());
			if(!celebrityBoundaryNode["Height"].isNull())
				celebrityObject.celebrityBoundary.height = std::stoi(celebrityBoundaryNode["Height"].asString());
			framesObject.celebrity.push_back(celebrityObject);
		}
		frames_.push_back(framesObject);
	}
	if(!value["SetId"].isNull())
		setId_ = value["SetId"].asString();
	if(!value["VideoUri"].isNull())
		videoUri_ = value["VideoUri"].asString();
	if(!value["NextMarker"].isNull())
		nextMarker_ = value["NextMarker"].asString();

}

std::vector<ListVideoFramesResult::FramesItem> ListVideoFramesResult::getFrames()const
{
	return frames_;
}

std::string ListVideoFramesResult::getVideoUri()const
{
	return videoUri_;
}

std::string ListVideoFramesResult::getSetId()const
{
	return setId_;
}

std::string ListVideoFramesResult::getNextMarker()const
{
	return nextMarker_;
}

