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

#include <alibabacloud/imm/model/GetStoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

GetStoryResult::GetStoryResult() :
	ServiceResult()
{}

GetStoryResult::GetStoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetStoryResult::~GetStoryResult()
{}

void GetStoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto storyNode = value["Story"];
	if(!storyNode["OwnerId"].isNull())
		story_.ownerId = storyNode["OwnerId"].asString();
	if(!storyNode["ProjectName"].isNull())
		story_.projectName = storyNode["ProjectName"].asString();
	if(!storyNode["DatasetName"].isNull())
		story_.datasetName = storyNode["DatasetName"].asString();
	if(!storyNode["ObjectId"].isNull())
		story_.objectId = storyNode["ObjectId"].asString();
	if(!storyNode["ObjectType"].isNull())
		story_.objectType = storyNode["ObjectType"].asString();
	if(!storyNode["UpdateTime"].isNull())
		story_.updateTime = storyNode["UpdateTime"].asString();
	if(!storyNode["CreateTime"].isNull())
		story_.createTime = storyNode["CreateTime"].asString();
	if(!storyNode["StoryName"].isNull())
		story_.storyName = storyNode["StoryName"].asString();
	if(!storyNode["StoryType"].isNull())
		story_.storyType = storyNode["StoryType"].asString();
	if(!storyNode["StorySubType"].isNull())
		story_.storySubType = storyNode["StorySubType"].asString();
	if(!storyNode["StoryStartTime"].isNull())
		story_.storyStartTime = storyNode["StoryStartTime"].asString();
	if(!storyNode["StoryEndTime"].isNull())
		story_.storyEndTime = storyNode["StoryEndTime"].asString();
	if(!storyNode["CustomId"].isNull())
		story_.customId = storyNode["CustomId"].asString();
	if(!storyNode["CustomLabels"].isNull())
		story_.customLabels = storyNode["CustomLabels"].asString();
	auto allFilesNode = storyNode["Files"]["FilesItem"];
	for (auto storyNodeFilesFilesItem : allFilesNode)
	{
		Story::FilesItem filesItemObject;
		if(!storyNodeFilesFilesItem["OwnerId"].isNull())
			filesItemObject.ownerId = storyNodeFilesFilesItem["OwnerId"].asString();
		if(!storyNodeFilesFilesItem["ProjectName"].isNull())
			filesItemObject.projectName = storyNodeFilesFilesItem["ProjectName"].asString();
		if(!storyNodeFilesFilesItem["DatasetName"].isNull())
			filesItemObject.datasetName = storyNodeFilesFilesItem["DatasetName"].asString();
		if(!storyNodeFilesFilesItem["ObjectType"].isNull())
			filesItemObject.objectType = storyNodeFilesFilesItem["ObjectType"].asString();
		if(!storyNodeFilesFilesItem["ObjectId"].isNull())
			filesItemObject.objectId = storyNodeFilesFilesItem["ObjectId"].asString();
		if(!storyNodeFilesFilesItem["UpdateTime"].isNull())
			filesItemObject.updateTime = storyNodeFilesFilesItem["UpdateTime"].asString();
		if(!storyNodeFilesFilesItem["CreateTime"].isNull())
			filesItemObject.createTime = storyNodeFilesFilesItem["CreateTime"].asString();
		if(!storyNodeFilesFilesItem["URI"].isNull())
			filesItemObject.uRI = storyNodeFilesFilesItem["URI"].asString();
		if(!storyNodeFilesFilesItem["OSSURI"].isNull())
			filesItemObject.oSSURI = storyNodeFilesFilesItem["OSSURI"].asString();
		if(!storyNodeFilesFilesItem["Filename"].isNull())
			filesItemObject.filename = storyNodeFilesFilesItem["Filename"].asString();
		if(!storyNodeFilesFilesItem["MediaType"].isNull())
			filesItemObject.mediaType = storyNodeFilesFilesItem["MediaType"].asString();
		if(!storyNodeFilesFilesItem["ContentType"].isNull())
			filesItemObject.contentType = storyNodeFilesFilesItem["ContentType"].asString();
		if(!storyNodeFilesFilesItem["Size"].isNull())
			filesItemObject.size = std::stol(storyNodeFilesFilesItem["Size"].asString());
		if(!storyNodeFilesFilesItem["FileHash"].isNull())
			filesItemObject.fileHash = storyNodeFilesFilesItem["FileHash"].asString();
		if(!storyNodeFilesFilesItem["FileModifiedTime"].isNull())
			filesItemObject.fileModifiedTime = storyNodeFilesFilesItem["FileModifiedTime"].asString();
		if(!storyNodeFilesFilesItem["FileCreateTime"].isNull())
			filesItemObject.fileCreateTime = storyNodeFilesFilesItem["FileCreateTime"].asString();
		if(!storyNodeFilesFilesItem["FileAccessTime"].isNull())
			filesItemObject.fileAccessTime = storyNodeFilesFilesItem["FileAccessTime"].asString();
		if(!storyNodeFilesFilesItem["ProduceTime"].isNull())
			filesItemObject.produceTime = storyNodeFilesFilesItem["ProduceTime"].asString();
		if(!storyNodeFilesFilesItem["LatLong"].isNull())
			filesItemObject.latLong = storyNodeFilesFilesItem["LatLong"].asString();
		if(!storyNodeFilesFilesItem["Timezone"].isNull())
			filesItemObject.timezone = storyNodeFilesFilesItem["Timezone"].asString();
		if(!storyNodeFilesFilesItem["TravelClusterId"].isNull())
			filesItemObject.travelClusterId = storyNodeFilesFilesItem["TravelClusterId"].asString();
		if(!storyNodeFilesFilesItem["Orientation"].isNull())
			filesItemObject.orientation = std::stol(storyNodeFilesFilesItem["Orientation"].asString());
		if(!storyNodeFilesFilesItem["FigureCount"].isNull())
			filesItemObject.figureCount = std::stol(storyNodeFilesFilesItem["FigureCount"].asString());
		if(!storyNodeFilesFilesItem["Title"].isNull())
			filesItemObject.title = storyNodeFilesFilesItem["Title"].asString();
		if(!storyNodeFilesFilesItem["ImageWidth"].isNull())
			filesItemObject.imageWidth = std::stol(storyNodeFilesFilesItem["ImageWidth"].asString());
		if(!storyNodeFilesFilesItem["ImageHeight"].isNull())
			filesItemObject.imageHeight = std::stol(storyNodeFilesFilesItem["ImageHeight"].asString());
		if(!storyNodeFilesFilesItem["EXIF"].isNull())
			filesItemObject.eXIF = storyNodeFilesFilesItem["EXIF"].asString();
		if(!storyNodeFilesFilesItem["VideoWidth"].isNull())
			filesItemObject.videoWidth = std::stol(storyNodeFilesFilesItem["VideoWidth"].asString());
		if(!storyNodeFilesFilesItem["VideoHeight"].isNull())
			filesItemObject.videoHeight = std::stol(storyNodeFilesFilesItem["VideoHeight"].asString());
		if(!storyNodeFilesFilesItem["Artist"].isNull())
			filesItemObject.artist = storyNodeFilesFilesItem["Artist"].asString();
		if(!storyNodeFilesFilesItem["AlbumArtist"].isNull())
			filesItemObject.albumArtist = storyNodeFilesFilesItem["AlbumArtist"].asString();
		if(!storyNodeFilesFilesItem["Composer"].isNull())
			filesItemObject.composer = storyNodeFilesFilesItem["Composer"].asString();
		if(!storyNodeFilesFilesItem["Performer"].isNull())
			filesItemObject.performer = storyNodeFilesFilesItem["Performer"].asString();
		if(!storyNodeFilesFilesItem["Language"].isNull())
			filesItemObject.language = storyNodeFilesFilesItem["Language"].asString();
		if(!storyNodeFilesFilesItem["Album"].isNull())
			filesItemObject.album = storyNodeFilesFilesItem["Album"].asString();
		if(!storyNodeFilesFilesItem["PageCount"].isNull())
			filesItemObject.pageCount = std::stol(storyNodeFilesFilesItem["PageCount"].asString());
		if(!storyNodeFilesFilesItem["DocumentText"].isNull())
			filesItemObject.documentText = storyNodeFilesFilesItem["DocumentText"].asString();
		if(!storyNodeFilesFilesItem["ETag"].isNull())
			filesItemObject.eTag = storyNodeFilesFilesItem["ETag"].asString();
		if(!storyNodeFilesFilesItem["CacheControl"].isNull())
			filesItemObject.cacheControl = storyNodeFilesFilesItem["CacheControl"].asString();
		if(!storyNodeFilesFilesItem["ContentDisposition"].isNull())
			filesItemObject.contentDisposition = storyNodeFilesFilesItem["ContentDisposition"].asString();
		if(!storyNodeFilesFilesItem["ContentEncoding"].isNull())
			filesItemObject.contentEncoding = storyNodeFilesFilesItem["ContentEncoding"].asString();
		if(!storyNodeFilesFilesItem["ContentLanguage"].isNull())
			filesItemObject.contentLanguage = storyNodeFilesFilesItem["ContentLanguage"].asString();
		if(!storyNodeFilesFilesItem["AccessControlAllowOrigin"].isNull())
			filesItemObject.accessControlAllowOrigin = storyNodeFilesFilesItem["AccessControlAllowOrigin"].asString();
		if(!storyNodeFilesFilesItem["AccessControlRequestMethod"].isNull())
			filesItemObject.accessControlRequestMethod = storyNodeFilesFilesItem["AccessControlRequestMethod"].asString();
		if(!storyNodeFilesFilesItem["ServerSideEncryptionCustomerAlgorithm"].isNull())
			filesItemObject.serverSideEncryptionCustomerAlgorithm = storyNodeFilesFilesItem["ServerSideEncryptionCustomerAlgorithm"].asString();
		if(!storyNodeFilesFilesItem["ServerSideEncryption"].isNull())
			filesItemObject.serverSideEncryption = storyNodeFilesFilesItem["ServerSideEncryption"].asString();
		if(!storyNodeFilesFilesItem["ServerSideDataEncryption"].isNull())
			filesItemObject.serverSideDataEncryption = storyNodeFilesFilesItem["ServerSideDataEncryption"].asString();
		if(!storyNodeFilesFilesItem["ServerSideEncryptionKeyId"].isNull())
			filesItemObject.serverSideEncryptionKeyId = storyNodeFilesFilesItem["ServerSideEncryptionKeyId"].asString();
		if(!storyNodeFilesFilesItem["OSSStorageClass"].isNull())
			filesItemObject.oSSStorageClass = storyNodeFilesFilesItem["OSSStorageClass"].asString();
		if(!storyNodeFilesFilesItem["OSSCRC64"].isNull())
			filesItemObject.oSSCRC64 = storyNodeFilesFilesItem["OSSCRC64"].asString();
		if(!storyNodeFilesFilesItem["ObjectACL"].isNull())
			filesItemObject.objectACL = storyNodeFilesFilesItem["ObjectACL"].asString();
		if(!storyNodeFilesFilesItem["ContentMd5"].isNull())
			filesItemObject.contentMd5 = storyNodeFilesFilesItem["ContentMd5"].asString();
		if(!storyNodeFilesFilesItem["OSSUserMeta"].isNull())
			filesItemObject.oSSUserMeta = storyNodeFilesFilesItem["OSSUserMeta"].asString();
		if(!storyNodeFilesFilesItem["OSSTaggingCount"].isNull())
			filesItemObject.oSSTaggingCount = std::stol(storyNodeFilesFilesItem["OSSTaggingCount"].asString());
		if(!storyNodeFilesFilesItem["OSSTagging"].isNull())
			filesItemObject.oSSTagging = storyNodeFilesFilesItem["OSSTagging"].asString();
		if(!storyNodeFilesFilesItem["OSSExpiration"].isNull())
			filesItemObject.oSSExpiration = storyNodeFilesFilesItem["OSSExpiration"].asString();
		if(!storyNodeFilesFilesItem["OSSVersionId"].isNull())
			filesItemObject.oSSVersionId = storyNodeFilesFilesItem["OSSVersionId"].asString();
		if(!storyNodeFilesFilesItem["OSSDeleteMarker"].isNull())
			filesItemObject.oSSDeleteMarker = storyNodeFilesFilesItem["OSSDeleteMarker"].asString();
		if(!storyNodeFilesFilesItem["OSSObjectType"].isNull())
			filesItemObject.oSSObjectType = storyNodeFilesFilesItem["OSSObjectType"].asString();
		if(!storyNodeFilesFilesItem["CustomId"].isNull())
			filesItemObject.customId = storyNodeFilesFilesItem["CustomId"].asString();
		if(!storyNodeFilesFilesItem["CustomLabels"].isNull())
			filesItemObject.customLabels = storyNodeFilesFilesItem["CustomLabels"].asString();
		if(!storyNodeFilesFilesItem["StreamCount"].isNull())
			filesItemObject.streamCount = std::stol(storyNodeFilesFilesItem["StreamCount"].asString());
		if(!storyNodeFilesFilesItem["ProgramCount"].isNull())
			filesItemObject.programCount = std::stol(storyNodeFilesFilesItem["ProgramCount"].asString());
		if(!storyNodeFilesFilesItem["FormatName"].isNull())
			filesItemObject.formatName = storyNodeFilesFilesItem["FormatName"].asString();
		if(!storyNodeFilesFilesItem["FormatLongName"].isNull())
			filesItemObject.formatLongName = storyNodeFilesFilesItem["FormatLongName"].asString();
		if(!storyNodeFilesFilesItem["StartTime"].isNull())
			filesItemObject.startTime = storyNodeFilesFilesItem["StartTime"].asString();
		if(!storyNodeFilesFilesItem["Bitrate"].isNull())
			filesItemObject.bitrate = std::stol(storyNodeFilesFilesItem["Bitrate"].asString());
		if(!storyNodeFilesFilesItem["Duration"].isNull())
			filesItemObject.duration = storyNodeFilesFilesItem["Duration"].asString();
		auto allAddresses1Node = storyNodeFilesFilesItem["Addresses"]["AddressesItem"];
		for (auto storyNodeFilesFilesItemAddressesAddressesItem : allAddresses1Node)
		{
			Story::FilesItem::AddressesItem addresses1Object;
			if(!storyNodeFilesFilesItemAddressesAddressesItem["Language"].isNull())
				addresses1Object.language = storyNodeFilesFilesItemAddressesAddressesItem["Language"].asString();
			if(!storyNodeFilesFilesItemAddressesAddressesItem["AddressLine"].isNull())
				addresses1Object.addressLine = storyNodeFilesFilesItemAddressesAddressesItem["AddressLine"].asString();
			if(!storyNodeFilesFilesItemAddressesAddressesItem["Country"].isNull())
				addresses1Object.country = storyNodeFilesFilesItemAddressesAddressesItem["Country"].asString();
			if(!storyNodeFilesFilesItemAddressesAddressesItem["Province"].isNull())
				addresses1Object.province = storyNodeFilesFilesItemAddressesAddressesItem["Province"].asString();
			if(!storyNodeFilesFilesItemAddressesAddressesItem["City"].isNull())
				addresses1Object.city = storyNodeFilesFilesItemAddressesAddressesItem["City"].asString();
			if(!storyNodeFilesFilesItemAddressesAddressesItem["District"].isNull())
				addresses1Object.district = storyNodeFilesFilesItemAddressesAddressesItem["District"].asString();
			if(!storyNodeFilesFilesItemAddressesAddressesItem["Township"].isNull())
				addresses1Object.township = storyNodeFilesFilesItemAddressesAddressesItem["Township"].asString();
			filesItemObject.addresses1.push_back(addresses1Object);
		}
		auto allFiguresNode = storyNodeFilesFilesItem["Figures"]["FiguresItem"];
		for (auto storyNodeFilesFilesItemFiguresFiguresItem : allFiguresNode)
		{
			Story::FilesItem::FiguresItem figuresObject;
			if(!storyNodeFilesFilesItemFiguresFiguresItem["FigureId"].isNull())
				figuresObject.figureId = storyNodeFilesFilesItemFiguresFiguresItem["FigureId"].asString();
			if(!storyNodeFilesFilesItemFiguresFiguresItem["FigureConfidence"].isNull())
				figuresObject.figureConfidence = std::stof(storyNodeFilesFilesItemFiguresFiguresItem["FigureConfidence"].asString());
			if(!storyNodeFilesFilesItemFiguresFiguresItem["FigureClusterId"].isNull())
				figuresObject.figureClusterId = storyNodeFilesFilesItemFiguresFiguresItem["FigureClusterId"].asString();
			if(!storyNodeFilesFilesItemFiguresFiguresItem["FigureClusterConfidence"].isNull())
				figuresObject.figureClusterConfidence = std::stof(storyNodeFilesFilesItemFiguresFiguresItem["FigureClusterConfidence"].asString());
			if(!storyNodeFilesFilesItemFiguresFiguresItem["FigureType"].isNull())
				figuresObject.figureType = storyNodeFilesFilesItemFiguresFiguresItem["FigureType"].asString();
			if(!storyNodeFilesFilesItemFiguresFiguresItem["Age"].isNull())
				figuresObject.age = std::stol(storyNodeFilesFilesItemFiguresFiguresItem["Age"].asString());
			if(!storyNodeFilesFilesItemFiguresFiguresItem["AgeSD"].isNull())
				figuresObject.ageSD = std::stof(storyNodeFilesFilesItemFiguresFiguresItem["AgeSD"].asString());
			if(!storyNodeFilesFilesItemFiguresFiguresItem["Gender"].isNull())
				figuresObject.gender = storyNodeFilesFilesItemFiguresFiguresItem["Gender"].asString();
			if(!storyNodeFilesFilesItemFiguresFiguresItem["GenderConfidence"].isNull())
				figuresObject.genderConfidence = std::stof(storyNodeFilesFilesItemFiguresFiguresItem["GenderConfidence"].asString());
			if(!storyNodeFilesFilesItemFiguresFiguresItem["Emotion"].isNull())
				figuresObject.emotion = storyNodeFilesFilesItemFiguresFiguresItem["Emotion"].asString();
			if(!storyNodeFilesFilesItemFiguresFiguresItem["EmotionConfidence"].isNull())
				figuresObject.emotionConfidence = std::stof(storyNodeFilesFilesItemFiguresFiguresItem["EmotionConfidence"].asString());
			if(!storyNodeFilesFilesItemFiguresFiguresItem["FaceQuality"].isNull())
				figuresObject.faceQuality = std::stof(storyNodeFilesFilesItemFiguresFiguresItem["FaceQuality"].asString());
			if(!storyNodeFilesFilesItemFiguresFiguresItem["Mouth"].isNull())
				figuresObject.mouth = storyNodeFilesFilesItemFiguresFiguresItem["Mouth"].asString();
			if(!storyNodeFilesFilesItemFiguresFiguresItem["MouthConfidence"].isNull())
				figuresObject.mouthConfidence = std::stof(storyNodeFilesFilesItemFiguresFiguresItem["MouthConfidence"].asString());
			if(!storyNodeFilesFilesItemFiguresFiguresItem["Beard"].isNull())
				figuresObject.beard = storyNodeFilesFilesItemFiguresFiguresItem["Beard"].asString();
			if(!storyNodeFilesFilesItemFiguresFiguresItem["BeardConfidence"].isNull())
				figuresObject.beardConfidence = std::stof(storyNodeFilesFilesItemFiguresFiguresItem["BeardConfidence"].asString());
			if(!storyNodeFilesFilesItemFiguresFiguresItem["Hat"].isNull())
				figuresObject.hat = storyNodeFilesFilesItemFiguresFiguresItem["Hat"].asString();
			if(!storyNodeFilesFilesItemFiguresFiguresItem["HatConfidence"].isNull())
				figuresObject.hatConfidence = std::stof(storyNodeFilesFilesItemFiguresFiguresItem["HatConfidence"].asString());
			if(!storyNodeFilesFilesItemFiguresFiguresItem["Mask"].isNull())
				figuresObject.mask = storyNodeFilesFilesItemFiguresFiguresItem["Mask"].asString();
			if(!storyNodeFilesFilesItemFiguresFiguresItem["MaskConfidence"].isNull())
				figuresObject.maskConfidence = std::stof(storyNodeFilesFilesItemFiguresFiguresItem["MaskConfidence"].asString());
			if(!storyNodeFilesFilesItemFiguresFiguresItem["Glasses"].isNull())
				figuresObject.glasses = storyNodeFilesFilesItemFiguresFiguresItem["Glasses"].asString();
			if(!storyNodeFilesFilesItemFiguresFiguresItem["GlassesConfidence"].isNull())
				figuresObject.glassesConfidence = std::stof(storyNodeFilesFilesItemFiguresFiguresItem["GlassesConfidence"].asString());
			if(!storyNodeFilesFilesItemFiguresFiguresItem["Sharpness"].isNull())
				figuresObject.sharpness = std::stof(storyNodeFilesFilesItemFiguresFiguresItem["Sharpness"].asString());
			if(!storyNodeFilesFilesItemFiguresFiguresItem["Attractive"].isNull())
				figuresObject.attractive = std::stof(storyNodeFilesFilesItemFiguresFiguresItem["Attractive"].asString());
			auto boundaryNode = value["Boundary"];
			if(!boundaryNode["Width"].isNull())
				figuresObject.boundary.width = std::stol(boundaryNode["Width"].asString());
			if(!boundaryNode["Height"].isNull())
				figuresObject.boundary.height = std::stol(boundaryNode["Height"].asString());
			if(!boundaryNode["Left"].isNull())
				figuresObject.boundary.left = std::stol(boundaryNode["Left"].asString());
			if(!boundaryNode["Top"].isNull())
				figuresObject.boundary.top = std::stol(boundaryNode["Top"].asString());
			auto headPoseNode = value["HeadPose"];
			if(!headPoseNode["Pitch"].isNull())
				figuresObject.headPose.pitch = std::stof(headPoseNode["Pitch"].asString());
			if(!headPoseNode["Roll"].isNull())
				figuresObject.headPose.roll = std::stof(headPoseNode["Roll"].asString());
			if(!headPoseNode["Yaw"].isNull())
				figuresObject.headPose.yaw = std::stof(headPoseNode["Yaw"].asString());
			filesItemObject.figures.push_back(figuresObject);
		}
		auto allLabelsNode = storyNodeFilesFilesItem["Labels"]["LabelsItem"];
		for (auto storyNodeFilesFilesItemLabelsLabelsItem : allLabelsNode)
		{
			Story::FilesItem::LabelsItem labelsObject;
			if(!storyNodeFilesFilesItemLabelsLabelsItem["Language"].isNull())
				labelsObject.language = storyNodeFilesFilesItemLabelsLabelsItem["Language"].asString();
			if(!storyNodeFilesFilesItemLabelsLabelsItem["LabelName"].isNull())
				labelsObject.labelName = storyNodeFilesFilesItemLabelsLabelsItem["LabelName"].asString();
			if(!storyNodeFilesFilesItemLabelsLabelsItem["LabelLevel"].isNull())
				labelsObject.labelLevel = std::stol(storyNodeFilesFilesItemLabelsLabelsItem["LabelLevel"].asString());
			if(!storyNodeFilesFilesItemLabelsLabelsItem["LabelConfidence"].isNull())
				labelsObject.labelConfidence = std::stof(storyNodeFilesFilesItemLabelsLabelsItem["LabelConfidence"].asString());
			if(!storyNodeFilesFilesItemLabelsLabelsItem["ParentLabelName"].isNull())
				labelsObject.parentLabelName = storyNodeFilesFilesItemLabelsLabelsItem["ParentLabelName"].asString();
			if(!storyNodeFilesFilesItemLabelsLabelsItem["CentricScore"].isNull())
				labelsObject.centricScore = std::stof(storyNodeFilesFilesItemLabelsLabelsItem["CentricScore"].asString());
			filesItemObject.labels.push_back(labelsObject);
		}
		auto allCroppingSuggestionsNode = storyNodeFilesFilesItem["CroppingSuggestions"]["CroppingSuggestionsItem"];
		for (auto storyNodeFilesFilesItemCroppingSuggestionsCroppingSuggestionsItem : allCroppingSuggestionsNode)
		{
			Story::FilesItem::CroppingSuggestionsItem croppingSuggestionsObject;
			if(!storyNodeFilesFilesItemCroppingSuggestionsCroppingSuggestionsItem["AspectRatio"].isNull())
				croppingSuggestionsObject.aspectRatio = storyNodeFilesFilesItemCroppingSuggestionsCroppingSuggestionsItem["AspectRatio"].asString();
			if(!storyNodeFilesFilesItemCroppingSuggestionsCroppingSuggestionsItem["Confidence"].isNull())
				croppingSuggestionsObject.confidence = std::stof(storyNodeFilesFilesItemCroppingSuggestionsCroppingSuggestionsItem["Confidence"].asString());
			auto boundary2Node = value["Boundary"];
			if(!boundary2Node["Width"].isNull())
				croppingSuggestionsObject.boundary2.width = std::stol(boundary2Node["Width"].asString());
			if(!boundary2Node["Height"].isNull())
				croppingSuggestionsObject.boundary2.height = std::stol(boundary2Node["Height"].asString());
			if(!boundary2Node["Left"].isNull())
				croppingSuggestionsObject.boundary2.left = std::stol(boundary2Node["Left"].asString());
			if(!boundary2Node["Top"].isNull())
				croppingSuggestionsObject.boundary2.top = std::stol(boundary2Node["Top"].asString());
			filesItemObject.croppingSuggestions.push_back(croppingSuggestionsObject);
		}
		auto allOCRContentsNode = storyNodeFilesFilesItem["OCRContents"]["OCRContentsItem"];
		for (auto storyNodeFilesFilesItemOCRContentsOCRContentsItem : allOCRContentsNode)
		{
			Story::FilesItem::OCRContentsItem oCRContentsObject;
			if(!storyNodeFilesFilesItemOCRContentsOCRContentsItem["Language"].isNull())
				oCRContentsObject.language = storyNodeFilesFilesItemOCRContentsOCRContentsItem["Language"].asString();
			if(!storyNodeFilesFilesItemOCRContentsOCRContentsItem["Contents"].isNull())
				oCRContentsObject.contents = storyNodeFilesFilesItemOCRContentsOCRContentsItem["Contents"].asString();
			if(!storyNodeFilesFilesItemOCRContentsOCRContentsItem["Confidence"].isNull())
				oCRContentsObject.confidence = std::stof(storyNodeFilesFilesItemOCRContentsOCRContentsItem["Confidence"].asString());
			auto boundary3Node = value["Boundary"];
			if(!boundary3Node["Width"].isNull())
				oCRContentsObject.boundary3.width = std::stol(boundary3Node["Width"].asString());
			if(!boundary3Node["Height"].isNull())
				oCRContentsObject.boundary3.height = std::stol(boundary3Node["Height"].asString());
			if(!boundary3Node["Left"].isNull())
				oCRContentsObject.boundary3.left = std::stol(boundary3Node["Left"].asString());
			if(!boundary3Node["Top"].isNull())
				oCRContentsObject.boundary3.top = std::stol(boundary3Node["Top"].asString());
			filesItemObject.oCRContents.push_back(oCRContentsObject);
		}
		auto allVideoStreamsNode = storyNodeFilesFilesItem["VideoStreams"]["VideoStreamsItem"];
		for (auto storyNodeFilesFilesItemVideoStreamsVideoStreamsItem : allVideoStreamsNode)
		{
			Story::FilesItem::VideoStreamsItem videoStreamsObject;
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["Index"].isNull())
				videoStreamsObject.index = std::stol(storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["Index"].asString());
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["Language"].isNull())
				videoStreamsObject.language = storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["Language"].asString();
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["CodecName"].isNull())
				videoStreamsObject.codecName = storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["CodecName"].asString();
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["CodecLongName"].isNull())
				videoStreamsObject.codecLongName = storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["CodecLongName"].asString();
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["Profile"].isNull())
				videoStreamsObject.profile = storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["Profile"].asString();
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["CodecTimeBase"].isNull())
				videoStreamsObject.codecTimeBase = storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["CodecTimeBase"].asString();
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["CodecTagString"].isNull())
				videoStreamsObject.codecTagString = storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["CodecTagString"].asString();
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["CodecTag"].isNull())
				videoStreamsObject.codecTag = storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["CodecTag"].asString();
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["Width"].isNull())
				videoStreamsObject.width = std::stol(storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["Width"].asString());
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["Height"].isNull())
				videoStreamsObject.height = std::stol(storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["Height"].asString());
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["HasBFrames"].isNull())
				videoStreamsObject.hasBFrames = std::stol(storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["HasBFrames"].asString());
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["SampleAspectRatio"].isNull())
				videoStreamsObject.sampleAspectRatio = storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["SampleAspectRatio"].asString();
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["DisplayAspectRatio"].isNull())
				videoStreamsObject.displayAspectRatio = storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["DisplayAspectRatio"].asString();
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["PixelFormat"].isNull())
				videoStreamsObject.pixelFormat = storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["PixelFormat"].asString();
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["Level"].isNull())
				videoStreamsObject.level = std::stol(storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["Level"].asString());
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["FrameRate"].isNull())
				videoStreamsObject.frameRate = storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["FrameRate"].asString();
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["AverageFrameRate"].isNull())
				videoStreamsObject.averageFrameRate = storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["AverageFrameRate"].asString();
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["TimeBase"].isNull())
				videoStreamsObject.timeBase = storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["TimeBase"].asString();
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["StartTime"].isNull())
				videoStreamsObject.startTime = storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["StartTime"].asString();
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["Duration"].isNull())
				videoStreamsObject.duration = storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["Duration"].asString();
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["Bitrate"].isNull())
				videoStreamsObject.bitrate = std::stol(storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["Bitrate"].asString());
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["FrameCount"].isNull())
				videoStreamsObject.frameCount = std::stol(storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["FrameCount"].asString());
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["Rotate"].isNull())
				videoStreamsObject.rotate = storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["Rotate"].asString();
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["BitDepth"].isNull())
				videoStreamsObject.bitDepth = std::stol(storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["BitDepth"].asString());
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["ColorSpace"].isNull())
				videoStreamsObject.colorSpace = storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["ColorSpace"].asString();
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["ColorRange"].isNull())
				videoStreamsObject.colorRange = storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["ColorRange"].asString();
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["ColorTransfer"].isNull())
				videoStreamsObject.colorTransfer = storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["ColorTransfer"].asString();
			if(!storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["ColorPrimaries"].isNull())
				videoStreamsObject.colorPrimaries = storyNodeFilesFilesItemVideoStreamsVideoStreamsItem["ColorPrimaries"].asString();
			filesItemObject.videoStreams.push_back(videoStreamsObject);
		}
		auto allSubtitlesNode = storyNodeFilesFilesItem["Subtitles"]["SubtitlesItem"];
		for (auto storyNodeFilesFilesItemSubtitlesSubtitlesItem : allSubtitlesNode)
		{
			Story::FilesItem::SubtitlesItem subtitlesObject;
			if(!storyNodeFilesFilesItemSubtitlesSubtitlesItem["Index"].isNull())
				subtitlesObject.index = std::stol(storyNodeFilesFilesItemSubtitlesSubtitlesItem["Index"].asString());
			if(!storyNodeFilesFilesItemSubtitlesSubtitlesItem["Language"].isNull())
				subtitlesObject.language = storyNodeFilesFilesItemSubtitlesSubtitlesItem["Language"].asString();
			if(!storyNodeFilesFilesItemSubtitlesSubtitlesItem["CodecName"].isNull())
				subtitlesObject.codecName = storyNodeFilesFilesItemSubtitlesSubtitlesItem["CodecName"].asString();
			if(!storyNodeFilesFilesItemSubtitlesSubtitlesItem["CodecLongName"].isNull())
				subtitlesObject.codecLongName = storyNodeFilesFilesItemSubtitlesSubtitlesItem["CodecLongName"].asString();
			if(!storyNodeFilesFilesItemSubtitlesSubtitlesItem["CodecTagString"].isNull())
				subtitlesObject.codecTagString = storyNodeFilesFilesItemSubtitlesSubtitlesItem["CodecTagString"].asString();
			if(!storyNodeFilesFilesItemSubtitlesSubtitlesItem["CodecTag"].isNull())
				subtitlesObject.codecTag = storyNodeFilesFilesItemSubtitlesSubtitlesItem["CodecTag"].asString();
			if(!storyNodeFilesFilesItemSubtitlesSubtitlesItem["StartTime"].isNull())
				subtitlesObject.startTime = storyNodeFilesFilesItemSubtitlesSubtitlesItem["StartTime"].asString();
			if(!storyNodeFilesFilesItemSubtitlesSubtitlesItem["Duration"].isNull())
				subtitlesObject.duration = storyNodeFilesFilesItemSubtitlesSubtitlesItem["Duration"].asString();
			if(!storyNodeFilesFilesItemSubtitlesSubtitlesItem["Bitrate"].isNull())
				subtitlesObject.bitrate = std::stol(storyNodeFilesFilesItemSubtitlesSubtitlesItem["Bitrate"].asString());
			if(!storyNodeFilesFilesItemSubtitlesSubtitlesItem["Content"].isNull())
				subtitlesObject.content = storyNodeFilesFilesItemSubtitlesSubtitlesItem["Content"].asString();
			if(!storyNodeFilesFilesItemSubtitlesSubtitlesItem["Width"].isNull())
				subtitlesObject.width = std::stol(storyNodeFilesFilesItemSubtitlesSubtitlesItem["Width"].asString());
			if(!storyNodeFilesFilesItemSubtitlesSubtitlesItem["Height"].isNull())
				subtitlesObject.height = std::stol(storyNodeFilesFilesItemSubtitlesSubtitlesItem["Height"].asString());
			filesItemObject.subtitles.push_back(subtitlesObject);
		}
		auto allAudioStreamsNode = storyNodeFilesFilesItem["AudioStreams"]["AudioStreamsItem"];
		for (auto storyNodeFilesFilesItemAudioStreamsAudioStreamsItem : allAudioStreamsNode)
		{
			Story::FilesItem::AudioStreamsItem audioStreamsObject;
			if(!storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["Index"].isNull())
				audioStreamsObject.index = std::stol(storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["Index"].asString());
			if(!storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["Language"].isNull())
				audioStreamsObject.language = storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["Language"].asString();
			if(!storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["CodecName"].isNull())
				audioStreamsObject.codecName = storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["CodecName"].asString();
			if(!storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["CodecLongName"].isNull())
				audioStreamsObject.codecLongName = storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["CodecLongName"].asString();
			if(!storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["CodecTimeBase"].isNull())
				audioStreamsObject.codecTimeBase = storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["CodecTimeBase"].asString();
			if(!storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["CodecTagString"].isNull())
				audioStreamsObject.codecTagString = storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["CodecTagString"].asString();
			if(!storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["CodecTag"].isNull())
				audioStreamsObject.codecTag = storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["CodecTag"].asString();
			if(!storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["TimeBase"].isNull())
				audioStreamsObject.timeBase = storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["TimeBase"].asString();
			if(!storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["StartTime"].isNull())
				audioStreamsObject.startTime = storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["StartTime"].asString();
			if(!storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["Duration"].isNull())
				audioStreamsObject.duration = storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["Duration"].asString();
			if(!storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["Bitrate"].isNull())
				audioStreamsObject.bitrate = std::stol(storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["Bitrate"].asString());
			if(!storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["FrameCount"].isNull())
				audioStreamsObject.frameCount = std::stol(storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["FrameCount"].asString());
			if(!storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["Lyric"].isNull())
				audioStreamsObject.lyric = storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["Lyric"].asString();
			if(!storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["SampleFormat"].isNull())
				audioStreamsObject.sampleFormat = storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["SampleFormat"].asString();
			if(!storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["SampleRate"].isNull())
				audioStreamsObject.sampleRate = std::stol(storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["SampleRate"].asString());
			if(!storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["Channels"].isNull())
				audioStreamsObject.channels = std::stol(storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["Channels"].asString());
			if(!storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["ChannelLayout"].isNull())
				audioStreamsObject.channelLayout = storyNodeFilesFilesItemAudioStreamsAudioStreamsItem["ChannelLayout"].asString();
			filesItemObject.audioStreams.push_back(audioStreamsObject);
		}
		auto allAudioCoversNode = storyNodeFilesFilesItem["AudioCovers"]["AudioCoversItem"];
		for (auto storyNodeFilesFilesItemAudioCoversAudioCoversItem : allAudioCoversNode)
		{
			Story::FilesItem::AudioCoversItem audioCoversObject;
			if(!storyNodeFilesFilesItemAudioCoversAudioCoversItem["ImageWidth"].isNull())
				audioCoversObject.imageWidth = std::stol(storyNodeFilesFilesItemAudioCoversAudioCoversItem["ImageWidth"].asString());
			if(!storyNodeFilesFilesItemAudioCoversAudioCoversItem["ImageHeight"].isNull())
				audioCoversObject.imageHeight = std::stol(storyNodeFilesFilesItemAudioCoversAudioCoversItem["ImageHeight"].asString());
			if(!storyNodeFilesFilesItemAudioCoversAudioCoversItem["EXIF"].isNull())
				audioCoversObject.eXIF = storyNodeFilesFilesItemAudioCoversAudioCoversItem["EXIF"].asString();
			auto allCroppingSuggestions5Node = storyNodeFilesFilesItemAudioCoversAudioCoversItem["CroppingSuggestions"]["CroppingSuggestionsItem"];
			for (auto storyNodeFilesFilesItemAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem : allCroppingSuggestions5Node)
			{
				Story::FilesItem::AudioCoversItem::CroppingSuggestionsItem7 croppingSuggestions5Object;
				if(!storyNodeFilesFilesItemAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem["AspectRatio"].isNull())
					croppingSuggestions5Object.aspectRatio = storyNodeFilesFilesItemAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem["AspectRatio"].asString();
				if(!storyNodeFilesFilesItemAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem["Confidence"].isNull())
					croppingSuggestions5Object.confidence = std::stof(storyNodeFilesFilesItemAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem["Confidence"].asString());
				auto boundary8Node = value["Boundary"];
				if(!boundary8Node["Width"].isNull())
					croppingSuggestions5Object.boundary8.width = std::stol(boundary8Node["Width"].asString());
				if(!boundary8Node["Height"].isNull())
					croppingSuggestions5Object.boundary8.height = std::stol(boundary8Node["Height"].asString());
				if(!boundary8Node["Left"].isNull())
					croppingSuggestions5Object.boundary8.left = std::stol(boundary8Node["Left"].asString());
				if(!boundary8Node["Top"].isNull())
					croppingSuggestions5Object.boundary8.top = std::stol(boundary8Node["Top"].asString());
				audioCoversObject.croppingSuggestions5.push_back(croppingSuggestions5Object);
			}
			auto allOCRContents6Node = storyNodeFilesFilesItemAudioCoversAudioCoversItem["OCRContents"]["OCRContentsItem"];
			for (auto storyNodeFilesFilesItemAudioCoversAudioCoversItemOCRContentsOCRContentsItem : allOCRContents6Node)
			{
				Story::FilesItem::AudioCoversItem::OCRContentsItem9 oCRContents6Object;
				if(!storyNodeFilesFilesItemAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Language"].isNull())
					oCRContents6Object.language = storyNodeFilesFilesItemAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Language"].asString();
				if(!storyNodeFilesFilesItemAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Contents"].isNull())
					oCRContents6Object.contents = storyNodeFilesFilesItemAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Contents"].asString();
				if(!storyNodeFilesFilesItemAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Confidence"].isNull())
					oCRContents6Object.confidence = std::stof(storyNodeFilesFilesItemAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Confidence"].asString());
				auto boundary10Node = value["Boundary"];
				if(!boundary10Node["Width"].isNull())
					oCRContents6Object.boundary10.width = std::stol(boundary10Node["Width"].asString());
				if(!boundary10Node["Height"].isNull())
					oCRContents6Object.boundary10.height = std::stol(boundary10Node["Height"].asString());
				if(!boundary10Node["Left"].isNull())
					oCRContents6Object.boundary10.left = std::stol(boundary10Node["Left"].asString());
				if(!boundary10Node["Top"].isNull())
					oCRContents6Object.boundary10.top = std::stol(boundary10Node["Top"].asString());
				audioCoversObject.oCRContents6.push_back(oCRContents6Object);
			}
			auto imageScore4Node = value["ImageScore"];
			if(!imageScore4Node["OverallQualityScore"].isNull())
				audioCoversObject.imageScore4.overallQualityScore = std::stof(imageScore4Node["OverallQualityScore"].asString());
			filesItemObject.audioCovers.push_back(audioCoversObject);
		}
		auto imageScoreNode = value["ImageScore"];
		if(!imageScoreNode["OverallQualityScore"].isNull())
			filesItemObject.imageScore.overallQualityScore = std::stof(imageScoreNode["OverallQualityScore"].asString());
		story_.files.push_back(filesItemObject);
	}
	auto allAddressesNode = storyNode["Addresses"]["AddressesItem"];
	for (auto storyNodeAddressesAddressesItem : allAddressesNode)
	{
		Story::AddressesItem11 addressesItem11Object;
		if(!storyNodeAddressesAddressesItem["Language"].isNull())
			addressesItem11Object.language = storyNodeAddressesAddressesItem["Language"].asString();
		if(!storyNodeAddressesAddressesItem["AddressLine"].isNull())
			addressesItem11Object.addressLine = storyNodeAddressesAddressesItem["AddressLine"].asString();
		if(!storyNodeAddressesAddressesItem["Country"].isNull())
			addressesItem11Object.country = storyNodeAddressesAddressesItem["Country"].asString();
		if(!storyNodeAddressesAddressesItem["Province"].isNull())
			addressesItem11Object.province = storyNodeAddressesAddressesItem["Province"].asString();
		if(!storyNodeAddressesAddressesItem["City"].isNull())
			addressesItem11Object.city = storyNodeAddressesAddressesItem["City"].asString();
		if(!storyNodeAddressesAddressesItem["District"].isNull())
			addressesItem11Object.district = storyNodeAddressesAddressesItem["District"].asString();
		if(!storyNodeAddressesAddressesItem["Township"].isNull())
			addressesItem11Object.township = storyNodeAddressesAddressesItem["Township"].asString();
		story_.addresses.push_back(addressesItem11Object);
	}
	auto coverNode = storyNode["Cover"];
	if(!coverNode["OwnerId"].isNull())
		story_.cover.ownerId = coverNode["OwnerId"].asString();
	if(!coverNode["ProjectName"].isNull())
		story_.cover.projectName = coverNode["ProjectName"].asString();
	if(!coverNode["DatasetName"].isNull())
		story_.cover.datasetName = coverNode["DatasetName"].asString();
	if(!coverNode["ObjectType"].isNull())
		story_.cover.objectType = coverNode["ObjectType"].asString();
	if(!coverNode["ObjectId"].isNull())
		story_.cover.objectId = coverNode["ObjectId"].asString();
	if(!coverNode["UpdateTime"].isNull())
		story_.cover.updateTime = coverNode["UpdateTime"].asString();
	if(!coverNode["CreateTime"].isNull())
		story_.cover.createTime = coverNode["CreateTime"].asString();
	if(!coverNode["URI"].isNull())
		story_.cover.uRI = coverNode["URI"].asString();
	if(!coverNode["OSSURI"].isNull())
		story_.cover.oSSURI = coverNode["OSSURI"].asString();
	if(!coverNode["Filename"].isNull())
		story_.cover.filename = coverNode["Filename"].asString();
	if(!coverNode["MediaType"].isNull())
		story_.cover.mediaType = coverNode["MediaType"].asString();
	if(!coverNode["ContentType"].isNull())
		story_.cover.contentType = coverNode["ContentType"].asString();
	if(!coverNode["Size"].isNull())
		story_.cover.size = std::stol(coverNode["Size"].asString());
	if(!coverNode["FileHash"].isNull())
		story_.cover.fileHash = coverNode["FileHash"].asString();
	if(!coverNode["FileModifiedTime"].isNull())
		story_.cover.fileModifiedTime = coverNode["FileModifiedTime"].asString();
	if(!coverNode["FileCreateTime"].isNull())
		story_.cover.fileCreateTime = coverNode["FileCreateTime"].asString();
	if(!coverNode["FileAccessTime"].isNull())
		story_.cover.fileAccessTime = coverNode["FileAccessTime"].asString();
	if(!coverNode["ProduceTime"].isNull())
		story_.cover.produceTime = coverNode["ProduceTime"].asString();
	if(!coverNode["LatLong"].isNull())
		story_.cover.latLong = coverNode["LatLong"].asString();
	if(!coverNode["Timezone"].isNull())
		story_.cover.timezone = coverNode["Timezone"].asString();
	if(!coverNode["TravelClusterId"].isNull())
		story_.cover.travelClusterId = coverNode["TravelClusterId"].asString();
	if(!coverNode["Orientation"].isNull())
		story_.cover.orientation = std::stol(coverNode["Orientation"].asString());
	if(!coverNode["FigureCount"].isNull())
		story_.cover.figureCount = std::stol(coverNode["FigureCount"].asString());
	if(!coverNode["Title"].isNull())
		story_.cover.title = coverNode["Title"].asString();
	if(!coverNode["ImageWidth"].isNull())
		story_.cover.imageWidth = std::stol(coverNode["ImageWidth"].asString());
	if(!coverNode["ImageHeight"].isNull())
		story_.cover.imageHeight = std::stol(coverNode["ImageHeight"].asString());
	if(!coverNode["EXIF"].isNull())
		story_.cover.eXIF = coverNode["EXIF"].asString();
	if(!coverNode["VideoWidth"].isNull())
		story_.cover.videoWidth = std::stol(coverNode["VideoWidth"].asString());
	if(!coverNode["VideoHeight"].isNull())
		story_.cover.videoHeight = std::stol(coverNode["VideoHeight"].asString());
	if(!coverNode["Artist"].isNull())
		story_.cover.artist = coverNode["Artist"].asString();
	if(!coverNode["AlbumArtist"].isNull())
		story_.cover.albumArtist = coverNode["AlbumArtist"].asString();
	if(!coverNode["Composer"].isNull())
		story_.cover.composer = coverNode["Composer"].asString();
	if(!coverNode["Performer"].isNull())
		story_.cover.performer = coverNode["Performer"].asString();
	if(!coverNode["Language"].isNull())
		story_.cover.language = coverNode["Language"].asString();
	if(!coverNode["Album"].isNull())
		story_.cover.album = coverNode["Album"].asString();
	if(!coverNode["PageCount"].isNull())
		story_.cover.pageCount = std::stol(coverNode["PageCount"].asString());
	if(!coverNode["DocumentText"].isNull())
		story_.cover.documentText = coverNode["DocumentText"].asString();
	if(!coverNode["ETag"].isNull())
		story_.cover.eTag = coverNode["ETag"].asString();
	if(!coverNode["CacheControl"].isNull())
		story_.cover.cacheControl = coverNode["CacheControl"].asString();
	if(!coverNode["ContentDisposition"].isNull())
		story_.cover.contentDisposition = coverNode["ContentDisposition"].asString();
	if(!coverNode["ContentEncoding"].isNull())
		story_.cover.contentEncoding = coverNode["ContentEncoding"].asString();
	if(!coverNode["ContentLanguage"].isNull())
		story_.cover.contentLanguage = coverNode["ContentLanguage"].asString();
	if(!coverNode["AccessControlAllowOrigin"].isNull())
		story_.cover.accessControlAllowOrigin = coverNode["AccessControlAllowOrigin"].asString();
	if(!coverNode["AccessControlRequestMethod"].isNull())
		story_.cover.accessControlRequestMethod = coverNode["AccessControlRequestMethod"].asString();
	if(!coverNode["ServerSideEncryptionCustomerAlgorithm"].isNull())
		story_.cover.serverSideEncryptionCustomerAlgorithm = coverNode["ServerSideEncryptionCustomerAlgorithm"].asString();
	if(!coverNode["ServerSideEncryption"].isNull())
		story_.cover.serverSideEncryption = coverNode["ServerSideEncryption"].asString();
	if(!coverNode["ServerSideDataEncryption"].isNull())
		story_.cover.serverSideDataEncryption = coverNode["ServerSideDataEncryption"].asString();
	if(!coverNode["ServerSideEncryptionKeyId"].isNull())
		story_.cover.serverSideEncryptionKeyId = coverNode["ServerSideEncryptionKeyId"].asString();
	if(!coverNode["OSSStorageClass"].isNull())
		story_.cover.oSSStorageClass = coverNode["OSSStorageClass"].asString();
	if(!coverNode["OSSCRC64"].isNull())
		story_.cover.oSSCRC64 = coverNode["OSSCRC64"].asString();
	if(!coverNode["ObjectACL"].isNull())
		story_.cover.objectACL = coverNode["ObjectACL"].asString();
	if(!coverNode["ContentMd5"].isNull())
		story_.cover.contentMd5 = coverNode["ContentMd5"].asString();
	if(!coverNode["OSSUserMeta"].isNull())
		story_.cover.oSSUserMeta = coverNode["OSSUserMeta"].asString();
	if(!coverNode["OSSTaggingCount"].isNull())
		story_.cover.oSSTaggingCount = std::stol(coverNode["OSSTaggingCount"].asString());
	if(!coverNode["OSSTagging"].isNull())
		story_.cover.oSSTagging = coverNode["OSSTagging"].asString();
	if(!coverNode["OSSExpiration"].isNull())
		story_.cover.oSSExpiration = coverNode["OSSExpiration"].asString();
	if(!coverNode["OSSVersionId"].isNull())
		story_.cover.oSSVersionId = coverNode["OSSVersionId"].asString();
	if(!coverNode["OSSDeleteMarker"].isNull())
		story_.cover.oSSDeleteMarker = coverNode["OSSDeleteMarker"].asString();
	if(!coverNode["OSSObjectType"].isNull())
		story_.cover.oSSObjectType = coverNode["OSSObjectType"].asString();
	if(!coverNode["CustomId"].isNull())
		story_.cover.customId = coverNode["CustomId"].asString();
	if(!coverNode["CustomLabels"].isNull())
		story_.cover.customLabels = coverNode["CustomLabels"].asString();
	if(!coverNode["StreamCount"].isNull())
		story_.cover.streamCount = std::stol(coverNode["StreamCount"].asString());
	if(!coverNode["ProgramCount"].isNull())
		story_.cover.programCount = std::stol(coverNode["ProgramCount"].asString());
	if(!coverNode["FormatName"].isNull())
		story_.cover.formatName = coverNode["FormatName"].asString();
	if(!coverNode["FormatLongName"].isNull())
		story_.cover.formatLongName = coverNode["FormatLongName"].asString();
	if(!coverNode["StartTime"].isNull())
		story_.cover.startTime = coverNode["StartTime"].asString();
	if(!coverNode["Bitrate"].isNull())
		story_.cover.bitrate = std::stol(coverNode["Bitrate"].asString());
	if(!coverNode["Duration"].isNull())
		story_.cover.duration = coverNode["Duration"].asString();
	auto allAddresses13Node = coverNode["Addresses"]["AddressesItem"];
	for (auto coverNodeAddressesAddressesItem : allAddresses13Node)
	{
		Story::Cover::AddressesItem22 addressesItem22Object;
		if(!coverNodeAddressesAddressesItem["Language"].isNull())
			addressesItem22Object.language = coverNodeAddressesAddressesItem["Language"].asString();
		if(!coverNodeAddressesAddressesItem["AddressLine"].isNull())
			addressesItem22Object.addressLine = coverNodeAddressesAddressesItem["AddressLine"].asString();
		if(!coverNodeAddressesAddressesItem["Country"].isNull())
			addressesItem22Object.country = coverNodeAddressesAddressesItem["Country"].asString();
		if(!coverNodeAddressesAddressesItem["Province"].isNull())
			addressesItem22Object.province = coverNodeAddressesAddressesItem["Province"].asString();
		if(!coverNodeAddressesAddressesItem["City"].isNull())
			addressesItem22Object.city = coverNodeAddressesAddressesItem["City"].asString();
		if(!coverNodeAddressesAddressesItem["District"].isNull())
			addressesItem22Object.district = coverNodeAddressesAddressesItem["District"].asString();
		if(!coverNodeAddressesAddressesItem["Township"].isNull())
			addressesItem22Object.township = coverNodeAddressesAddressesItem["Township"].asString();
		story_.cover.addresses13.push_back(addressesItem22Object);
	}
	auto allFigures14Node = coverNode["Figures"]["FiguresItem"];
	for (auto coverNodeFiguresFiguresItem : allFigures14Node)
	{
		Story::Cover::FiguresItem23 figuresItem23Object;
		if(!coverNodeFiguresFiguresItem["FigureId"].isNull())
			figuresItem23Object.figureId = coverNodeFiguresFiguresItem["FigureId"].asString();
		if(!coverNodeFiguresFiguresItem["FigureConfidence"].isNull())
			figuresItem23Object.figureConfidence = std::stof(coverNodeFiguresFiguresItem["FigureConfidence"].asString());
		if(!coverNodeFiguresFiguresItem["FigureClusterId"].isNull())
			figuresItem23Object.figureClusterId = coverNodeFiguresFiguresItem["FigureClusterId"].asString();
		if(!coverNodeFiguresFiguresItem["FigureClusterConfidence"].isNull())
			figuresItem23Object.figureClusterConfidence = std::stof(coverNodeFiguresFiguresItem["FigureClusterConfidence"].asString());
		if(!coverNodeFiguresFiguresItem["FigureType"].isNull())
			figuresItem23Object.figureType = coverNodeFiguresFiguresItem["FigureType"].asString();
		if(!coverNodeFiguresFiguresItem["Age"].isNull())
			figuresItem23Object.age = std::stol(coverNodeFiguresFiguresItem["Age"].asString());
		if(!coverNodeFiguresFiguresItem["AgeSD"].isNull())
			figuresItem23Object.ageSD = std::stof(coverNodeFiguresFiguresItem["AgeSD"].asString());
		if(!coverNodeFiguresFiguresItem["Gender"].isNull())
			figuresItem23Object.gender = coverNodeFiguresFiguresItem["Gender"].asString();
		if(!coverNodeFiguresFiguresItem["GenderConfidence"].isNull())
			figuresItem23Object.genderConfidence = std::stof(coverNodeFiguresFiguresItem["GenderConfidence"].asString());
		if(!coverNodeFiguresFiguresItem["Emotion"].isNull())
			figuresItem23Object.emotion = coverNodeFiguresFiguresItem["Emotion"].asString();
		if(!coverNodeFiguresFiguresItem["EmotionConfidence"].isNull())
			figuresItem23Object.emotionConfidence = std::stof(coverNodeFiguresFiguresItem["EmotionConfidence"].asString());
		if(!coverNodeFiguresFiguresItem["FaceQuality"].isNull())
			figuresItem23Object.faceQuality = std::stof(coverNodeFiguresFiguresItem["FaceQuality"].asString());
		if(!coverNodeFiguresFiguresItem["Mouth"].isNull())
			figuresItem23Object.mouth = coverNodeFiguresFiguresItem["Mouth"].asString();
		if(!coverNodeFiguresFiguresItem["MouthConfidence"].isNull())
			figuresItem23Object.mouthConfidence = std::stof(coverNodeFiguresFiguresItem["MouthConfidence"].asString());
		if(!coverNodeFiguresFiguresItem["Beard"].isNull())
			figuresItem23Object.beard = coverNodeFiguresFiguresItem["Beard"].asString();
		if(!coverNodeFiguresFiguresItem["BeardConfidence"].isNull())
			figuresItem23Object.beardConfidence = std::stof(coverNodeFiguresFiguresItem["BeardConfidence"].asString());
		if(!coverNodeFiguresFiguresItem["Hat"].isNull())
			figuresItem23Object.hat = coverNodeFiguresFiguresItem["Hat"].asString();
		if(!coverNodeFiguresFiguresItem["HatConfidence"].isNull())
			figuresItem23Object.hatConfidence = std::stof(coverNodeFiguresFiguresItem["HatConfidence"].asString());
		if(!coverNodeFiguresFiguresItem["Mask"].isNull())
			figuresItem23Object.mask = coverNodeFiguresFiguresItem["Mask"].asString();
		if(!coverNodeFiguresFiguresItem["MaskConfidence"].isNull())
			figuresItem23Object.maskConfidence = std::stof(coverNodeFiguresFiguresItem["MaskConfidence"].asString());
		if(!coverNodeFiguresFiguresItem["Glasses"].isNull())
			figuresItem23Object.glasses = coverNodeFiguresFiguresItem["Glasses"].asString();
		if(!coverNodeFiguresFiguresItem["GlassesConfidence"].isNull())
			figuresItem23Object.glassesConfidence = std::stof(coverNodeFiguresFiguresItem["GlassesConfidence"].asString());
		if(!coverNodeFiguresFiguresItem["Sharpness"].isNull())
			figuresItem23Object.sharpness = std::stof(coverNodeFiguresFiguresItem["Sharpness"].asString());
		if(!coverNodeFiguresFiguresItem["Attractive"].isNull())
			figuresItem23Object.attractive = std::stof(coverNodeFiguresFiguresItem["Attractive"].asString());
		auto boundary24Node = value["Boundary"];
		if(!boundary24Node["Width"].isNull())
			figuresItem23Object.boundary24.width = std::stol(boundary24Node["Width"].asString());
		if(!boundary24Node["Height"].isNull())
			figuresItem23Object.boundary24.height = std::stol(boundary24Node["Height"].asString());
		if(!boundary24Node["Left"].isNull())
			figuresItem23Object.boundary24.left = std::stol(boundary24Node["Left"].asString());
		if(!boundary24Node["Top"].isNull())
			figuresItem23Object.boundary24.top = std::stol(boundary24Node["Top"].asString());
		auto headPose25Node = value["HeadPose"];
		if(!headPose25Node["Pitch"].isNull())
			figuresItem23Object.headPose25.pitch = std::stof(headPose25Node["Pitch"].asString());
		if(!headPose25Node["Roll"].isNull())
			figuresItem23Object.headPose25.roll = std::stof(headPose25Node["Roll"].asString());
		if(!headPose25Node["Yaw"].isNull())
			figuresItem23Object.headPose25.yaw = std::stof(headPose25Node["Yaw"].asString());
		story_.cover.figures14.push_back(figuresItem23Object);
	}
	auto allLabels15Node = coverNode["Labels"]["LabelsItem"];
	for (auto coverNodeLabelsLabelsItem : allLabels15Node)
	{
		Story::Cover::LabelsItem26 labelsItem26Object;
		if(!coverNodeLabelsLabelsItem["Language"].isNull())
			labelsItem26Object.language = coverNodeLabelsLabelsItem["Language"].asString();
		if(!coverNodeLabelsLabelsItem["LabelName"].isNull())
			labelsItem26Object.labelName = coverNodeLabelsLabelsItem["LabelName"].asString();
		if(!coverNodeLabelsLabelsItem["LabelLevel"].isNull())
			labelsItem26Object.labelLevel = std::stol(coverNodeLabelsLabelsItem["LabelLevel"].asString());
		if(!coverNodeLabelsLabelsItem["LabelConfidence"].isNull())
			labelsItem26Object.labelConfidence = std::stof(coverNodeLabelsLabelsItem["LabelConfidence"].asString());
		if(!coverNodeLabelsLabelsItem["ParentLabelName"].isNull())
			labelsItem26Object.parentLabelName = coverNodeLabelsLabelsItem["ParentLabelName"].asString();
		if(!coverNodeLabelsLabelsItem["CentricScore"].isNull())
			labelsItem26Object.centricScore = std::stof(coverNodeLabelsLabelsItem["CentricScore"].asString());
		story_.cover.labels15.push_back(labelsItem26Object);
	}
	auto allCroppingSuggestions16Node = coverNode["CroppingSuggestions"]["CroppingSuggestionsItem"];
	for (auto coverNodeCroppingSuggestionsCroppingSuggestionsItem : allCroppingSuggestions16Node)
	{
		Story::Cover::CroppingSuggestionsItem27 croppingSuggestionsItem27Object;
		if(!coverNodeCroppingSuggestionsCroppingSuggestionsItem["AspectRatio"].isNull())
			croppingSuggestionsItem27Object.aspectRatio = coverNodeCroppingSuggestionsCroppingSuggestionsItem["AspectRatio"].asString();
		if(!coverNodeCroppingSuggestionsCroppingSuggestionsItem["Confidence"].isNull())
			croppingSuggestionsItem27Object.confidence = std::stof(coverNodeCroppingSuggestionsCroppingSuggestionsItem["Confidence"].asString());
		auto boundary28Node = value["Boundary"];
		if(!boundary28Node["Width"].isNull())
			croppingSuggestionsItem27Object.boundary28.width = std::stol(boundary28Node["Width"].asString());
		if(!boundary28Node["Height"].isNull())
			croppingSuggestionsItem27Object.boundary28.height = std::stol(boundary28Node["Height"].asString());
		if(!boundary28Node["Left"].isNull())
			croppingSuggestionsItem27Object.boundary28.left = std::stol(boundary28Node["Left"].asString());
		if(!boundary28Node["Top"].isNull())
			croppingSuggestionsItem27Object.boundary28.top = std::stol(boundary28Node["Top"].asString());
		story_.cover.croppingSuggestions16.push_back(croppingSuggestionsItem27Object);
	}
	auto allOCRContents17Node = coverNode["OCRContents"]["OCRContentsItem"];
	for (auto coverNodeOCRContentsOCRContentsItem : allOCRContents17Node)
	{
		Story::Cover::OCRContentsItem29 oCRContentsItem29Object;
		if(!coverNodeOCRContentsOCRContentsItem["Language"].isNull())
			oCRContentsItem29Object.language = coverNodeOCRContentsOCRContentsItem["Language"].asString();
		if(!coverNodeOCRContentsOCRContentsItem["Contents"].isNull())
			oCRContentsItem29Object.contents = coverNodeOCRContentsOCRContentsItem["Contents"].asString();
		if(!coverNodeOCRContentsOCRContentsItem["Confidence"].isNull())
			oCRContentsItem29Object.confidence = std::stof(coverNodeOCRContentsOCRContentsItem["Confidence"].asString());
		auto boundary30Node = value["Boundary"];
		if(!boundary30Node["Width"].isNull())
			oCRContentsItem29Object.boundary30.width = std::stol(boundary30Node["Width"].asString());
		if(!boundary30Node["Height"].isNull())
			oCRContentsItem29Object.boundary30.height = std::stol(boundary30Node["Height"].asString());
		if(!boundary30Node["Left"].isNull())
			oCRContentsItem29Object.boundary30.left = std::stol(boundary30Node["Left"].asString());
		if(!boundary30Node["Top"].isNull())
			oCRContentsItem29Object.boundary30.top = std::stol(boundary30Node["Top"].asString());
		story_.cover.oCRContents17.push_back(oCRContentsItem29Object);
	}
	auto allVideoStreams18Node = coverNode["VideoStreams"]["VideoStreamsItem"];
	for (auto coverNodeVideoStreamsVideoStreamsItem : allVideoStreams18Node)
	{
		Story::Cover::VideoStreamsItem31 videoStreamsItem31Object;
		if(!coverNodeVideoStreamsVideoStreamsItem["Index"].isNull())
			videoStreamsItem31Object.index = std::stol(coverNodeVideoStreamsVideoStreamsItem["Index"].asString());
		if(!coverNodeVideoStreamsVideoStreamsItem["Language"].isNull())
			videoStreamsItem31Object.language = coverNodeVideoStreamsVideoStreamsItem["Language"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["CodecName"].isNull())
			videoStreamsItem31Object.codecName = coverNodeVideoStreamsVideoStreamsItem["CodecName"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["CodecLongName"].isNull())
			videoStreamsItem31Object.codecLongName = coverNodeVideoStreamsVideoStreamsItem["CodecLongName"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["Profile"].isNull())
			videoStreamsItem31Object.profile = coverNodeVideoStreamsVideoStreamsItem["Profile"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["CodecTimeBase"].isNull())
			videoStreamsItem31Object.codecTimeBase = coverNodeVideoStreamsVideoStreamsItem["CodecTimeBase"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["CodecTagString"].isNull())
			videoStreamsItem31Object.codecTagString = coverNodeVideoStreamsVideoStreamsItem["CodecTagString"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["CodecTag"].isNull())
			videoStreamsItem31Object.codecTag = coverNodeVideoStreamsVideoStreamsItem["CodecTag"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["Width"].isNull())
			videoStreamsItem31Object.width = std::stol(coverNodeVideoStreamsVideoStreamsItem["Width"].asString());
		if(!coverNodeVideoStreamsVideoStreamsItem["Height"].isNull())
			videoStreamsItem31Object.height = std::stol(coverNodeVideoStreamsVideoStreamsItem["Height"].asString());
		if(!coverNodeVideoStreamsVideoStreamsItem["HasBFrames"].isNull())
			videoStreamsItem31Object.hasBFrames = std::stol(coverNodeVideoStreamsVideoStreamsItem["HasBFrames"].asString());
		if(!coverNodeVideoStreamsVideoStreamsItem["SampleAspectRatio"].isNull())
			videoStreamsItem31Object.sampleAspectRatio = coverNodeVideoStreamsVideoStreamsItem["SampleAspectRatio"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["DisplayAspectRatio"].isNull())
			videoStreamsItem31Object.displayAspectRatio = coverNodeVideoStreamsVideoStreamsItem["DisplayAspectRatio"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["PixelFormat"].isNull())
			videoStreamsItem31Object.pixelFormat = coverNodeVideoStreamsVideoStreamsItem["PixelFormat"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["Level"].isNull())
			videoStreamsItem31Object.level = std::stol(coverNodeVideoStreamsVideoStreamsItem["Level"].asString());
		if(!coverNodeVideoStreamsVideoStreamsItem["FrameRate"].isNull())
			videoStreamsItem31Object.frameRate = coverNodeVideoStreamsVideoStreamsItem["FrameRate"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["AverageFrameRate"].isNull())
			videoStreamsItem31Object.averageFrameRate = coverNodeVideoStreamsVideoStreamsItem["AverageFrameRate"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["TimeBase"].isNull())
			videoStreamsItem31Object.timeBase = coverNodeVideoStreamsVideoStreamsItem["TimeBase"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["StartTime"].isNull())
			videoStreamsItem31Object.startTime = coverNodeVideoStreamsVideoStreamsItem["StartTime"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["Duration"].isNull())
			videoStreamsItem31Object.duration = coverNodeVideoStreamsVideoStreamsItem["Duration"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["Bitrate"].isNull())
			videoStreamsItem31Object.bitrate = std::stol(coverNodeVideoStreamsVideoStreamsItem["Bitrate"].asString());
		if(!coverNodeVideoStreamsVideoStreamsItem["FrameCount"].isNull())
			videoStreamsItem31Object.frameCount = std::stol(coverNodeVideoStreamsVideoStreamsItem["FrameCount"].asString());
		if(!coverNodeVideoStreamsVideoStreamsItem["Rotate"].isNull())
			videoStreamsItem31Object.rotate = coverNodeVideoStreamsVideoStreamsItem["Rotate"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["BitDepth"].isNull())
			videoStreamsItem31Object.bitDepth = std::stol(coverNodeVideoStreamsVideoStreamsItem["BitDepth"].asString());
		if(!coverNodeVideoStreamsVideoStreamsItem["ColorSpace"].isNull())
			videoStreamsItem31Object.colorSpace = coverNodeVideoStreamsVideoStreamsItem["ColorSpace"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["ColorRange"].isNull())
			videoStreamsItem31Object.colorRange = coverNodeVideoStreamsVideoStreamsItem["ColorRange"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["ColorTransfer"].isNull())
			videoStreamsItem31Object.colorTransfer = coverNodeVideoStreamsVideoStreamsItem["ColorTransfer"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["ColorPrimaries"].isNull())
			videoStreamsItem31Object.colorPrimaries = coverNodeVideoStreamsVideoStreamsItem["ColorPrimaries"].asString();
		story_.cover.videoStreams18.push_back(videoStreamsItem31Object);
	}
	auto allSubtitles19Node = coverNode["Subtitles"]["SubtitlesItem"];
	for (auto coverNodeSubtitlesSubtitlesItem : allSubtitles19Node)
	{
		Story::Cover::SubtitlesItem32 subtitlesItem32Object;
		if(!coverNodeSubtitlesSubtitlesItem["Index"].isNull())
			subtitlesItem32Object.index = std::stol(coverNodeSubtitlesSubtitlesItem["Index"].asString());
		if(!coverNodeSubtitlesSubtitlesItem["Language"].isNull())
			subtitlesItem32Object.language = coverNodeSubtitlesSubtitlesItem["Language"].asString();
		if(!coverNodeSubtitlesSubtitlesItem["CodecName"].isNull())
			subtitlesItem32Object.codecName = coverNodeSubtitlesSubtitlesItem["CodecName"].asString();
		if(!coverNodeSubtitlesSubtitlesItem["CodecLongName"].isNull())
			subtitlesItem32Object.codecLongName = coverNodeSubtitlesSubtitlesItem["CodecLongName"].asString();
		if(!coverNodeSubtitlesSubtitlesItem["CodecTagString"].isNull())
			subtitlesItem32Object.codecTagString = coverNodeSubtitlesSubtitlesItem["CodecTagString"].asString();
		if(!coverNodeSubtitlesSubtitlesItem["CodecTag"].isNull())
			subtitlesItem32Object.codecTag = coverNodeSubtitlesSubtitlesItem["CodecTag"].asString();
		if(!coverNodeSubtitlesSubtitlesItem["StartTime"].isNull())
			subtitlesItem32Object.startTime = coverNodeSubtitlesSubtitlesItem["StartTime"].asString();
		if(!coverNodeSubtitlesSubtitlesItem["Duration"].isNull())
			subtitlesItem32Object.duration = coverNodeSubtitlesSubtitlesItem["Duration"].asString();
		if(!coverNodeSubtitlesSubtitlesItem["Bitrate"].isNull())
			subtitlesItem32Object.bitrate = std::stol(coverNodeSubtitlesSubtitlesItem["Bitrate"].asString());
		if(!coverNodeSubtitlesSubtitlesItem["Content"].isNull())
			subtitlesItem32Object.content = coverNodeSubtitlesSubtitlesItem["Content"].asString();
		if(!coverNodeSubtitlesSubtitlesItem["Width"].isNull())
			subtitlesItem32Object.width = std::stol(coverNodeSubtitlesSubtitlesItem["Width"].asString());
		if(!coverNodeSubtitlesSubtitlesItem["Height"].isNull())
			subtitlesItem32Object.height = std::stol(coverNodeSubtitlesSubtitlesItem["Height"].asString());
		story_.cover.subtitles19.push_back(subtitlesItem32Object);
	}
	auto allAudioStreams20Node = coverNode["AudioStreams"]["AudioStreamsItem"];
	for (auto coverNodeAudioStreamsAudioStreamsItem : allAudioStreams20Node)
	{
		Story::Cover::AudioStreamsItem33 audioStreamsItem33Object;
		if(!coverNodeAudioStreamsAudioStreamsItem["Index"].isNull())
			audioStreamsItem33Object.index = std::stol(coverNodeAudioStreamsAudioStreamsItem["Index"].asString());
		if(!coverNodeAudioStreamsAudioStreamsItem["Language"].isNull())
			audioStreamsItem33Object.language = coverNodeAudioStreamsAudioStreamsItem["Language"].asString();
		if(!coverNodeAudioStreamsAudioStreamsItem["CodecName"].isNull())
			audioStreamsItem33Object.codecName = coverNodeAudioStreamsAudioStreamsItem["CodecName"].asString();
		if(!coverNodeAudioStreamsAudioStreamsItem["CodecLongName"].isNull())
			audioStreamsItem33Object.codecLongName = coverNodeAudioStreamsAudioStreamsItem["CodecLongName"].asString();
		if(!coverNodeAudioStreamsAudioStreamsItem["CodecTimeBase"].isNull())
			audioStreamsItem33Object.codecTimeBase = coverNodeAudioStreamsAudioStreamsItem["CodecTimeBase"].asString();
		if(!coverNodeAudioStreamsAudioStreamsItem["CodecTagString"].isNull())
			audioStreamsItem33Object.codecTagString = coverNodeAudioStreamsAudioStreamsItem["CodecTagString"].asString();
		if(!coverNodeAudioStreamsAudioStreamsItem["CodecTag"].isNull())
			audioStreamsItem33Object.codecTag = coverNodeAudioStreamsAudioStreamsItem["CodecTag"].asString();
		if(!coverNodeAudioStreamsAudioStreamsItem["TimeBase"].isNull())
			audioStreamsItem33Object.timeBase = coverNodeAudioStreamsAudioStreamsItem["TimeBase"].asString();
		if(!coverNodeAudioStreamsAudioStreamsItem["StartTime"].isNull())
			audioStreamsItem33Object.startTime = coverNodeAudioStreamsAudioStreamsItem["StartTime"].asString();
		if(!coverNodeAudioStreamsAudioStreamsItem["Duration"].isNull())
			audioStreamsItem33Object.duration = coverNodeAudioStreamsAudioStreamsItem["Duration"].asString();
		if(!coverNodeAudioStreamsAudioStreamsItem["Bitrate"].isNull())
			audioStreamsItem33Object.bitrate = std::stol(coverNodeAudioStreamsAudioStreamsItem["Bitrate"].asString());
		if(!coverNodeAudioStreamsAudioStreamsItem["FrameCount"].isNull())
			audioStreamsItem33Object.frameCount = std::stol(coverNodeAudioStreamsAudioStreamsItem["FrameCount"].asString());
		if(!coverNodeAudioStreamsAudioStreamsItem["Lyric"].isNull())
			audioStreamsItem33Object.lyric = coverNodeAudioStreamsAudioStreamsItem["Lyric"].asString();
		if(!coverNodeAudioStreamsAudioStreamsItem["SampleFormat"].isNull())
			audioStreamsItem33Object.sampleFormat = coverNodeAudioStreamsAudioStreamsItem["SampleFormat"].asString();
		if(!coverNodeAudioStreamsAudioStreamsItem["SampleRate"].isNull())
			audioStreamsItem33Object.sampleRate = std::stol(coverNodeAudioStreamsAudioStreamsItem["SampleRate"].asString());
		if(!coverNodeAudioStreamsAudioStreamsItem["Channels"].isNull())
			audioStreamsItem33Object.channels = std::stol(coverNodeAudioStreamsAudioStreamsItem["Channels"].asString());
		if(!coverNodeAudioStreamsAudioStreamsItem["ChannelLayout"].isNull())
			audioStreamsItem33Object.channelLayout = coverNodeAudioStreamsAudioStreamsItem["ChannelLayout"].asString();
		story_.cover.audioStreams20.push_back(audioStreamsItem33Object);
	}
	auto allAudioCovers21Node = coverNode["AudioCovers"]["AudioCoversItem"];
	for (auto coverNodeAudioCoversAudioCoversItem : allAudioCovers21Node)
	{
		Story::Cover::AudioCoversItem34 audioCoversItem34Object;
		if(!coverNodeAudioCoversAudioCoversItem["ImageWidth"].isNull())
			audioCoversItem34Object.imageWidth = std::stol(coverNodeAudioCoversAudioCoversItem["ImageWidth"].asString());
		if(!coverNodeAudioCoversAudioCoversItem["ImageHeight"].isNull())
			audioCoversItem34Object.imageHeight = std::stol(coverNodeAudioCoversAudioCoversItem["ImageHeight"].asString());
		if(!coverNodeAudioCoversAudioCoversItem["EXIF"].isNull())
			audioCoversItem34Object.eXIF = coverNodeAudioCoversAudioCoversItem["EXIF"].asString();
		auto allCroppingSuggestions36Node = coverNodeAudioCoversAudioCoversItem["CroppingSuggestions"]["CroppingSuggestionsItem"];
		for (auto coverNodeAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem : allCroppingSuggestions36Node)
		{
			Story::Cover::AudioCoversItem34::CroppingSuggestionsItem38 croppingSuggestions36Object;
			if(!coverNodeAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem["AspectRatio"].isNull())
				croppingSuggestions36Object.aspectRatio = coverNodeAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem["AspectRatio"].asString();
			if(!coverNodeAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem["Confidence"].isNull())
				croppingSuggestions36Object.confidence = std::stof(coverNodeAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem["Confidence"].asString());
			auto boundary39Node = value["Boundary"];
			if(!boundary39Node["Width"].isNull())
				croppingSuggestions36Object.boundary39.width = std::stol(boundary39Node["Width"].asString());
			if(!boundary39Node["Height"].isNull())
				croppingSuggestions36Object.boundary39.height = std::stol(boundary39Node["Height"].asString());
			if(!boundary39Node["Left"].isNull())
				croppingSuggestions36Object.boundary39.left = std::stol(boundary39Node["Left"].asString());
			if(!boundary39Node["Top"].isNull())
				croppingSuggestions36Object.boundary39.top = std::stol(boundary39Node["Top"].asString());
			audioCoversItem34Object.croppingSuggestions36.push_back(croppingSuggestions36Object);
		}
		auto allOCRContents37Node = coverNodeAudioCoversAudioCoversItem["OCRContents"]["OCRContentsItem"];
		for (auto coverNodeAudioCoversAudioCoversItemOCRContentsOCRContentsItem : allOCRContents37Node)
		{
			Story::Cover::AudioCoversItem34::OCRContentsItem40 oCRContents37Object;
			if(!coverNodeAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Language"].isNull())
				oCRContents37Object.language = coverNodeAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Language"].asString();
			if(!coverNodeAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Contents"].isNull())
				oCRContents37Object.contents = coverNodeAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Contents"].asString();
			if(!coverNodeAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Confidence"].isNull())
				oCRContents37Object.confidence = std::stof(coverNodeAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Confidence"].asString());
			auto boundary41Node = value["Boundary"];
			if(!boundary41Node["Width"].isNull())
				oCRContents37Object.boundary41.width = std::stol(boundary41Node["Width"].asString());
			if(!boundary41Node["Height"].isNull())
				oCRContents37Object.boundary41.height = std::stol(boundary41Node["Height"].asString());
			if(!boundary41Node["Left"].isNull())
				oCRContents37Object.boundary41.left = std::stol(boundary41Node["Left"].asString());
			if(!boundary41Node["Top"].isNull())
				oCRContents37Object.boundary41.top = std::stol(boundary41Node["Top"].asString());
			audioCoversItem34Object.oCRContents37.push_back(oCRContents37Object);
		}
		auto imageScore35Node = value["ImageScore"];
		if(!imageScore35Node["OverallQualityScore"].isNull())
			audioCoversItem34Object.imageScore35.overallQualityScore = std::stof(imageScore35Node["OverallQualityScore"].asString());
		story_.cover.audioCovers21.push_back(audioCoversItem34Object);
	}
	auto imageScore12Node = coverNode["ImageScore"];
	if(!imageScore12Node["OverallQualityScore"].isNull())
		story_.cover.imageScore12.overallQualityScore = std::stof(imageScore12Node["OverallQualityScore"].asString());
		auto allFigureClusterIds = storyNode["FigureClusterIds"]["null"];
		for (auto value : allFigureClusterIds)
			story_.figureClusterIds.push_back(value.asString());

}

GetStoryResult::Story GetStoryResult::getStory()const
{
	return story_;
}

