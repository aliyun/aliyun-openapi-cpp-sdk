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

#include <alibabacloud/imm/model/GetFigureClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

GetFigureClusterResult::GetFigureClusterResult() :
	ServiceResult()
{}

GetFigureClusterResult::GetFigureClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFigureClusterResult::~GetFigureClusterResult()
{}

void GetFigureClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto figureClusterNode = value["FigureCluster"];
	if(!figureClusterNode["OwnerId"].isNull())
		figureCluster_.ownerId = figureClusterNode["OwnerId"].asString();
	if(!figureClusterNode["ProjectName"].isNull())
		figureCluster_.projectName = figureClusterNode["ProjectName"].asString();
	if(!figureClusterNode["DatasetName"].isNull())
		figureCluster_.datasetName = figureClusterNode["DatasetName"].asString();
	if(!figureClusterNode["ObjectType"].isNull())
		figureCluster_.objectType = figureClusterNode["ObjectType"].asString();
	if(!figureClusterNode["ObjectId"].isNull())
		figureCluster_.objectId = figureClusterNode["ObjectId"].asString();
	if(!figureClusterNode["UpdateTime"].isNull())
		figureCluster_.updateTime = figureClusterNode["UpdateTime"].asString();
	if(!figureClusterNode["CreateTime"].isNull())
		figureCluster_.createTime = figureClusterNode["CreateTime"].asString();
	if(!figureClusterNode["Name"].isNull())
		figureCluster_.name = figureClusterNode["Name"].asString();
	if(!figureClusterNode["Gender"].isNull())
		figureCluster_.gender = figureClusterNode["Gender"].asString();
	if(!figureClusterNode["FaceCount"].isNull())
		figureCluster_.faceCount = std::stol(figureClusterNode["FaceCount"].asString());
	if(!figureClusterNode["ImageCount"].isNull())
		figureCluster_.imageCount = std::stol(figureClusterNode["ImageCount"].asString());
	if(!figureClusterNode["VideoCount"].isNull())
		figureCluster_.videoCount = std::stol(figureClusterNode["VideoCount"].asString());
	if(!figureClusterNode["AverageAge"].isNull())
		figureCluster_.averageAge = std::stof(figureClusterNode["AverageAge"].asString());
	if(!figureClusterNode["MinAge"].isNull())
		figureCluster_.minAge = std::stof(figureClusterNode["MinAge"].asString());
	if(!figureClusterNode["MaxAge"].isNull())
		figureCluster_.maxAge = std::stof(figureClusterNode["MaxAge"].asString());
	if(!figureClusterNode["CustomId"].isNull())
		figureCluster_.customId = figureClusterNode["CustomId"].asString();
	if(!figureClusterNode["CustomLabels"].isNull())
		figureCluster_.customLabels = figureClusterNode["CustomLabels"].asString();
	if(!figureClusterNode["MetaLockVersion"].isNull())
		figureCluster_.metaLockVersion = std::stol(figureClusterNode["MetaLockVersion"].asString());
	auto coverNode = figureClusterNode["Cover"];
	if(!coverNode["OwnerId"].isNull())
		figureCluster_.cover.ownerId = coverNode["OwnerId"].asString();
	if(!coverNode["ProjectName"].isNull())
		figureCluster_.cover.projectName = coverNode["ProjectName"].asString();
	if(!coverNode["DatasetName"].isNull())
		figureCluster_.cover.datasetName = coverNode["DatasetName"].asString();
	if(!coverNode["ObjectType"].isNull())
		figureCluster_.cover.objectType = coverNode["ObjectType"].asString();
	if(!coverNode["ObjectId"].isNull())
		figureCluster_.cover.objectId = coverNode["ObjectId"].asString();
	if(!coverNode["UpdateTime"].isNull())
		figureCluster_.cover.updateTime = coverNode["UpdateTime"].asString();
	if(!coverNode["CreateTime"].isNull())
		figureCluster_.cover.createTime = coverNode["CreateTime"].asString();
	if(!coverNode["URI"].isNull())
		figureCluster_.cover.uRI = coverNode["URI"].asString();
	if(!coverNode["OSSURI"].isNull())
		figureCluster_.cover.oSSURI = coverNode["OSSURI"].asString();
	if(!coverNode["Filename"].isNull())
		figureCluster_.cover.filename = coverNode["Filename"].asString();
	if(!coverNode["MediaType"].isNull())
		figureCluster_.cover.mediaType = coverNode["MediaType"].asString();
	if(!coverNode["ContentType"].isNull())
		figureCluster_.cover.contentType = coverNode["ContentType"].asString();
	if(!coverNode["Size"].isNull())
		figureCluster_.cover.size = std::stol(coverNode["Size"].asString());
	if(!coverNode["FileHash"].isNull())
		figureCluster_.cover.fileHash = coverNode["FileHash"].asString();
	if(!coverNode["FileModifiedTime"].isNull())
		figureCluster_.cover.fileModifiedTime = coverNode["FileModifiedTime"].asString();
	if(!coverNode["FileCreateTime"].isNull())
		figureCluster_.cover.fileCreateTime = coverNode["FileCreateTime"].asString();
	if(!coverNode["FileAccessTime"].isNull())
		figureCluster_.cover.fileAccessTime = coverNode["FileAccessTime"].asString();
	if(!coverNode["ProduceTime"].isNull())
		figureCluster_.cover.produceTime = coverNode["ProduceTime"].asString();
	if(!coverNode["LatLong"].isNull())
		figureCluster_.cover.latLong = coverNode["LatLong"].asString();
	if(!coverNode["Timezone"].isNull())
		figureCluster_.cover.timezone = coverNode["Timezone"].asString();
	if(!coverNode["TravelClusterId"].isNull())
		figureCluster_.cover.travelClusterId = coverNode["TravelClusterId"].asString();
	if(!coverNode["Orientation"].isNull())
		figureCluster_.cover.orientation = std::stol(coverNode["Orientation"].asString());
	if(!coverNode["FigureCount"].isNull())
		figureCluster_.cover.figureCount = std::stol(coverNode["FigureCount"].asString());
	if(!coverNode["Title"].isNull())
		figureCluster_.cover.title = coverNode["Title"].asString();
	if(!coverNode["ImageWidth"].isNull())
		figureCluster_.cover.imageWidth = std::stol(coverNode["ImageWidth"].asString());
	if(!coverNode["ImageHeight"].isNull())
		figureCluster_.cover.imageHeight = std::stol(coverNode["ImageHeight"].asString());
	if(!coverNode["EXIF"].isNull())
		figureCluster_.cover.eXIF = coverNode["EXIF"].asString();
	if(!coverNode["VideoWidth"].isNull())
		figureCluster_.cover.videoWidth = std::stol(coverNode["VideoWidth"].asString());
	if(!coverNode["VideoHeight"].isNull())
		figureCluster_.cover.videoHeight = std::stol(coverNode["VideoHeight"].asString());
	if(!coverNode["Artist"].isNull())
		figureCluster_.cover.artist = coverNode["Artist"].asString();
	if(!coverNode["AlbumArtist"].isNull())
		figureCluster_.cover.albumArtist = coverNode["AlbumArtist"].asString();
	if(!coverNode["Composer"].isNull())
		figureCluster_.cover.composer = coverNode["Composer"].asString();
	if(!coverNode["Performer"].isNull())
		figureCluster_.cover.performer = coverNode["Performer"].asString();
	if(!coverNode["Language"].isNull())
		figureCluster_.cover.language = coverNode["Language"].asString();
	if(!coverNode["Album"].isNull())
		figureCluster_.cover.album = coverNode["Album"].asString();
	if(!coverNode["PageCount"].isNull())
		figureCluster_.cover.pageCount = std::stol(coverNode["PageCount"].asString());
	if(!coverNode["DocumentText"].isNull())
		figureCluster_.cover.documentText = coverNode["DocumentText"].asString();
	if(!coverNode["ETag"].isNull())
		figureCluster_.cover.eTag = coverNode["ETag"].asString();
	if(!coverNode["CacheControl"].isNull())
		figureCluster_.cover.cacheControl = coverNode["CacheControl"].asString();
	if(!coverNode["ContentDisposition"].isNull())
		figureCluster_.cover.contentDisposition = coverNode["ContentDisposition"].asString();
	if(!coverNode["ContentEncoding"].isNull())
		figureCluster_.cover.contentEncoding = coverNode["ContentEncoding"].asString();
	if(!coverNode["ContentLanguage"].isNull())
		figureCluster_.cover.contentLanguage = coverNode["ContentLanguage"].asString();
	if(!coverNode["AccessControlAllowOrigin"].isNull())
		figureCluster_.cover.accessControlAllowOrigin = coverNode["AccessControlAllowOrigin"].asString();
	if(!coverNode["AccessControlRequestMethod"].isNull())
		figureCluster_.cover.accessControlRequestMethod = coverNode["AccessControlRequestMethod"].asString();
	if(!coverNode["ServerSideEncryptionCustomerAlgorithm"].isNull())
		figureCluster_.cover.serverSideEncryptionCustomerAlgorithm = coverNode["ServerSideEncryptionCustomerAlgorithm"].asString();
	if(!coverNode["ServerSideEncryption"].isNull())
		figureCluster_.cover.serverSideEncryption = coverNode["ServerSideEncryption"].asString();
	if(!coverNode["ServerSideDataEncryption"].isNull())
		figureCluster_.cover.serverSideDataEncryption = coverNode["ServerSideDataEncryption"].asString();
	if(!coverNode["ServerSideEncryptionKeyId"].isNull())
		figureCluster_.cover.serverSideEncryptionKeyId = coverNode["ServerSideEncryptionKeyId"].asString();
	if(!coverNode["OSSStorageClass"].isNull())
		figureCluster_.cover.oSSStorageClass = coverNode["OSSStorageClass"].asString();
	if(!coverNode["OSSCRC64"].isNull())
		figureCluster_.cover.oSSCRC64 = coverNode["OSSCRC64"].asString();
	if(!coverNode["ObjectACL"].isNull())
		figureCluster_.cover.objectACL = coverNode["ObjectACL"].asString();
	if(!coverNode["ContentMd5"].isNull())
		figureCluster_.cover.contentMd5 = coverNode["ContentMd5"].asString();
	if(!coverNode["OSSUserMeta"].isNull())
		figureCluster_.cover.oSSUserMeta = coverNode["OSSUserMeta"].asString();
	if(!coverNode["OSSTaggingCount"].isNull())
		figureCluster_.cover.oSSTaggingCount = std::stol(coverNode["OSSTaggingCount"].asString());
	if(!coverNode["OSSTagging"].isNull())
		figureCluster_.cover.oSSTagging = coverNode["OSSTagging"].asString();
	if(!coverNode["OSSExpiration"].isNull())
		figureCluster_.cover.oSSExpiration = coverNode["OSSExpiration"].asString();
	if(!coverNode["OSSVersionId"].isNull())
		figureCluster_.cover.oSSVersionId = coverNode["OSSVersionId"].asString();
	if(!coverNode["OSSDeleteMarker"].isNull())
		figureCluster_.cover.oSSDeleteMarker = coverNode["OSSDeleteMarker"].asString();
	if(!coverNode["OSSObjectType"].isNull())
		figureCluster_.cover.oSSObjectType = coverNode["OSSObjectType"].asString();
	if(!coverNode["CustomId"].isNull())
		figureCluster_.cover.customId = coverNode["CustomId"].asString();
	if(!coverNode["CustomLabels"].isNull())
		figureCluster_.cover.customLabels = coverNode["CustomLabels"].asString();
	if(!coverNode["StreamCount"].isNull())
		figureCluster_.cover.streamCount = std::stol(coverNode["StreamCount"].asString());
	if(!coverNode["ProgramCount"].isNull())
		figureCluster_.cover.programCount = std::stol(coverNode["ProgramCount"].asString());
	if(!coverNode["FormatName"].isNull())
		figureCluster_.cover.formatName = coverNode["FormatName"].asString();
	if(!coverNode["FormatLongName"].isNull())
		figureCluster_.cover.formatLongName = coverNode["FormatLongName"].asString();
	if(!coverNode["StartTime"].isNull())
		figureCluster_.cover.startTime = coverNode["StartTime"].asString();
	if(!coverNode["Bitrate"].isNull())
		figureCluster_.cover.bitrate = std::stol(coverNode["Bitrate"].asString());
	if(!coverNode["Duration"].isNull())
		figureCluster_.cover.duration = coverNode["Duration"].asString();
	auto allAddressesNode = coverNode["Addresses"]["AddressesItem"];
	for (auto coverNodeAddressesAddressesItem : allAddressesNode)
	{
		FigureCluster::Cover::AddressesItem addressesItemObject;
		if(!coverNodeAddressesAddressesItem["Language"].isNull())
			addressesItemObject.language = coverNodeAddressesAddressesItem["Language"].asString();
		if(!coverNodeAddressesAddressesItem["AddressLine"].isNull())
			addressesItemObject.addressLine = coverNodeAddressesAddressesItem["AddressLine"].asString();
		if(!coverNodeAddressesAddressesItem["Country"].isNull())
			addressesItemObject.country = coverNodeAddressesAddressesItem["Country"].asString();
		if(!coverNodeAddressesAddressesItem["Province"].isNull())
			addressesItemObject.province = coverNodeAddressesAddressesItem["Province"].asString();
		if(!coverNodeAddressesAddressesItem["City"].isNull())
			addressesItemObject.city = coverNodeAddressesAddressesItem["City"].asString();
		if(!coverNodeAddressesAddressesItem["District"].isNull())
			addressesItemObject.district = coverNodeAddressesAddressesItem["District"].asString();
		if(!coverNodeAddressesAddressesItem["Township"].isNull())
			addressesItemObject.township = coverNodeAddressesAddressesItem["Township"].asString();
		figureCluster_.cover.addresses.push_back(addressesItemObject);
	}
	auto allFiguresNode = coverNode["Figures"]["FiguresItem"];
	for (auto coverNodeFiguresFiguresItem : allFiguresNode)
	{
		FigureCluster::Cover::FiguresItem figuresItemObject;
		if(!coverNodeFiguresFiguresItem["FigureId"].isNull())
			figuresItemObject.figureId = coverNodeFiguresFiguresItem["FigureId"].asString();
		if(!coverNodeFiguresFiguresItem["FigureConfidence"].isNull())
			figuresItemObject.figureConfidence = std::stof(coverNodeFiguresFiguresItem["FigureConfidence"].asString());
		if(!coverNodeFiguresFiguresItem["FigureClusterId"].isNull())
			figuresItemObject.figureClusterId = coverNodeFiguresFiguresItem["FigureClusterId"].asString();
		if(!coverNodeFiguresFiguresItem["FigureClusterConfidence"].isNull())
			figuresItemObject.figureClusterConfidence = std::stof(coverNodeFiguresFiguresItem["FigureClusterConfidence"].asString());
		if(!coverNodeFiguresFiguresItem["FigureType"].isNull())
			figuresItemObject.figureType = coverNodeFiguresFiguresItem["FigureType"].asString();
		if(!coverNodeFiguresFiguresItem["Age"].isNull())
			figuresItemObject.age = std::stol(coverNodeFiguresFiguresItem["Age"].asString());
		if(!coverNodeFiguresFiguresItem["AgeSD"].isNull())
			figuresItemObject.ageSD = std::stof(coverNodeFiguresFiguresItem["AgeSD"].asString());
		if(!coverNodeFiguresFiguresItem["Gender"].isNull())
			figuresItemObject.gender = coverNodeFiguresFiguresItem["Gender"].asString();
		if(!coverNodeFiguresFiguresItem["GenderConfidence"].isNull())
			figuresItemObject.genderConfidence = std::stof(coverNodeFiguresFiguresItem["GenderConfidence"].asString());
		if(!coverNodeFiguresFiguresItem["Emotion"].isNull())
			figuresItemObject.emotion = coverNodeFiguresFiguresItem["Emotion"].asString();
		if(!coverNodeFiguresFiguresItem["EmotionConfidence"].isNull())
			figuresItemObject.emotionConfidence = std::stof(coverNodeFiguresFiguresItem["EmotionConfidence"].asString());
		if(!coverNodeFiguresFiguresItem["FaceQuality"].isNull())
			figuresItemObject.faceQuality = std::stof(coverNodeFiguresFiguresItem["FaceQuality"].asString());
		if(!coverNodeFiguresFiguresItem["Mouth"].isNull())
			figuresItemObject.mouth = coverNodeFiguresFiguresItem["Mouth"].asString();
		if(!coverNodeFiguresFiguresItem["MouthConfidence"].isNull())
			figuresItemObject.mouthConfidence = std::stof(coverNodeFiguresFiguresItem["MouthConfidence"].asString());
		if(!coverNodeFiguresFiguresItem["Beard"].isNull())
			figuresItemObject.beard = coverNodeFiguresFiguresItem["Beard"].asString();
		if(!coverNodeFiguresFiguresItem["BeardConfidence"].isNull())
			figuresItemObject.beardConfidence = std::stof(coverNodeFiguresFiguresItem["BeardConfidence"].asString());
		if(!coverNodeFiguresFiguresItem["Hat"].isNull())
			figuresItemObject.hat = coverNodeFiguresFiguresItem["Hat"].asString();
		if(!coverNodeFiguresFiguresItem["HatConfidence"].isNull())
			figuresItemObject.hatConfidence = std::stof(coverNodeFiguresFiguresItem["HatConfidence"].asString());
		if(!coverNodeFiguresFiguresItem["Mask"].isNull())
			figuresItemObject.mask = coverNodeFiguresFiguresItem["Mask"].asString();
		if(!coverNodeFiguresFiguresItem["MaskConfidence"].isNull())
			figuresItemObject.maskConfidence = std::stof(coverNodeFiguresFiguresItem["MaskConfidence"].asString());
		if(!coverNodeFiguresFiguresItem["Glasses"].isNull())
			figuresItemObject.glasses = coverNodeFiguresFiguresItem["Glasses"].asString();
		if(!coverNodeFiguresFiguresItem["GlassesConfidence"].isNull())
			figuresItemObject.glassesConfidence = std::stof(coverNodeFiguresFiguresItem["GlassesConfidence"].asString());
		if(!coverNodeFiguresFiguresItem["Sharpness"].isNull())
			figuresItemObject.sharpness = std::stof(coverNodeFiguresFiguresItem["Sharpness"].asString());
		if(!coverNodeFiguresFiguresItem["Attractive"].isNull())
			figuresItemObject.attractive = std::stof(coverNodeFiguresFiguresItem["Attractive"].asString());
		auto boundaryNode = value["Boundary"];
		if(!boundaryNode["Width"].isNull())
			figuresItemObject.boundary.width = std::stol(boundaryNode["Width"].asString());
		if(!boundaryNode["Height"].isNull())
			figuresItemObject.boundary.height = std::stol(boundaryNode["Height"].asString());
		if(!boundaryNode["Left"].isNull())
			figuresItemObject.boundary.left = std::stol(boundaryNode["Left"].asString());
		if(!boundaryNode["Top"].isNull())
			figuresItemObject.boundary.top = std::stol(boundaryNode["Top"].asString());
		auto headPoseNode = value["HeadPose"];
		if(!headPoseNode["Pitch"].isNull())
			figuresItemObject.headPose.pitch = std::stof(headPoseNode["Pitch"].asString());
		if(!headPoseNode["Roll"].isNull())
			figuresItemObject.headPose.roll = std::stof(headPoseNode["Roll"].asString());
		if(!headPoseNode["Yaw"].isNull())
			figuresItemObject.headPose.yaw = std::stof(headPoseNode["Yaw"].asString());
		figureCluster_.cover.figures.push_back(figuresItemObject);
	}
	auto allLabelsNode = coverNode["Labels"]["LabelsItem"];
	for (auto coverNodeLabelsLabelsItem : allLabelsNode)
	{
		FigureCluster::Cover::LabelsItem labelsItemObject;
		if(!coverNodeLabelsLabelsItem["Language"].isNull())
			labelsItemObject.language = coverNodeLabelsLabelsItem["Language"].asString();
		if(!coverNodeLabelsLabelsItem["LabelName"].isNull())
			labelsItemObject.labelName = coverNodeLabelsLabelsItem["LabelName"].asString();
		if(!coverNodeLabelsLabelsItem["LabelLevel"].isNull())
			labelsItemObject.labelLevel = std::stol(coverNodeLabelsLabelsItem["LabelLevel"].asString());
		if(!coverNodeLabelsLabelsItem["LabelConfidence"].isNull())
			labelsItemObject.labelConfidence = std::stof(coverNodeLabelsLabelsItem["LabelConfidence"].asString());
		if(!coverNodeLabelsLabelsItem["ParentLabelName"].isNull())
			labelsItemObject.parentLabelName = coverNodeLabelsLabelsItem["ParentLabelName"].asString();
		if(!coverNodeLabelsLabelsItem["CentricScore"].isNull())
			labelsItemObject.centricScore = std::stof(coverNodeLabelsLabelsItem["CentricScore"].asString());
		figureCluster_.cover.labels.push_back(labelsItemObject);
	}
	auto allCroppingSuggestionsNode = coverNode["CroppingSuggestions"]["CroppingSuggestionsItem"];
	for (auto coverNodeCroppingSuggestionsCroppingSuggestionsItem : allCroppingSuggestionsNode)
	{
		FigureCluster::Cover::CroppingSuggestionsItem croppingSuggestionsItemObject;
		if(!coverNodeCroppingSuggestionsCroppingSuggestionsItem["AspectRatio"].isNull())
			croppingSuggestionsItemObject.aspectRatio = coverNodeCroppingSuggestionsCroppingSuggestionsItem["AspectRatio"].asString();
		if(!coverNodeCroppingSuggestionsCroppingSuggestionsItem["Confidence"].isNull())
			croppingSuggestionsItemObject.confidence = std::stof(coverNodeCroppingSuggestionsCroppingSuggestionsItem["Confidence"].asString());
		auto boundary1Node = value["Boundary"];
		if(!boundary1Node["Width"].isNull())
			croppingSuggestionsItemObject.boundary1.width = std::stol(boundary1Node["Width"].asString());
		if(!boundary1Node["Height"].isNull())
			croppingSuggestionsItemObject.boundary1.height = std::stol(boundary1Node["Height"].asString());
		if(!boundary1Node["Left"].isNull())
			croppingSuggestionsItemObject.boundary1.left = std::stol(boundary1Node["Left"].asString());
		if(!boundary1Node["Top"].isNull())
			croppingSuggestionsItemObject.boundary1.top = std::stol(boundary1Node["Top"].asString());
		figureCluster_.cover.croppingSuggestions.push_back(croppingSuggestionsItemObject);
	}
	auto allOCRContentsNode = coverNode["OCRContents"]["OCRContentsItem"];
	for (auto coverNodeOCRContentsOCRContentsItem : allOCRContentsNode)
	{
		FigureCluster::Cover::OCRContentsItem oCRContentsItemObject;
		if(!coverNodeOCRContentsOCRContentsItem["Language"].isNull())
			oCRContentsItemObject.language = coverNodeOCRContentsOCRContentsItem["Language"].asString();
		if(!coverNodeOCRContentsOCRContentsItem["Contents"].isNull())
			oCRContentsItemObject.contents = coverNodeOCRContentsOCRContentsItem["Contents"].asString();
		if(!coverNodeOCRContentsOCRContentsItem["Confidence"].isNull())
			oCRContentsItemObject.confidence = std::stof(coverNodeOCRContentsOCRContentsItem["Confidence"].asString());
		auto boundary2Node = value["Boundary"];
		if(!boundary2Node["Width"].isNull())
			oCRContentsItemObject.boundary2.width = std::stol(boundary2Node["Width"].asString());
		if(!boundary2Node["Height"].isNull())
			oCRContentsItemObject.boundary2.height = std::stol(boundary2Node["Height"].asString());
		if(!boundary2Node["Left"].isNull())
			oCRContentsItemObject.boundary2.left = std::stol(boundary2Node["Left"].asString());
		if(!boundary2Node["Top"].isNull())
			oCRContentsItemObject.boundary2.top = std::stol(boundary2Node["Top"].asString());
		figureCluster_.cover.oCRContents.push_back(oCRContentsItemObject);
	}
	auto allVideoStreamsNode = coverNode["VideoStreams"]["VideoStreamsItem"];
	for (auto coverNodeVideoStreamsVideoStreamsItem : allVideoStreamsNode)
	{
		FigureCluster::Cover::VideoStreamsItem videoStreamsItemObject;
		if(!coverNodeVideoStreamsVideoStreamsItem["Index"].isNull())
			videoStreamsItemObject.index = std::stol(coverNodeVideoStreamsVideoStreamsItem["Index"].asString());
		if(!coverNodeVideoStreamsVideoStreamsItem["Language"].isNull())
			videoStreamsItemObject.language = coverNodeVideoStreamsVideoStreamsItem["Language"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["CodecName"].isNull())
			videoStreamsItemObject.codecName = coverNodeVideoStreamsVideoStreamsItem["CodecName"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["CodecLongName"].isNull())
			videoStreamsItemObject.codecLongName = coverNodeVideoStreamsVideoStreamsItem["CodecLongName"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["Profile"].isNull())
			videoStreamsItemObject.profile = coverNodeVideoStreamsVideoStreamsItem["Profile"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["CodecTimeBase"].isNull())
			videoStreamsItemObject.codecTimeBase = coverNodeVideoStreamsVideoStreamsItem["CodecTimeBase"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["CodecTagString"].isNull())
			videoStreamsItemObject.codecTagString = coverNodeVideoStreamsVideoStreamsItem["CodecTagString"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["CodecTag"].isNull())
			videoStreamsItemObject.codecTag = coverNodeVideoStreamsVideoStreamsItem["CodecTag"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["Width"].isNull())
			videoStreamsItemObject.width = std::stol(coverNodeVideoStreamsVideoStreamsItem["Width"].asString());
		if(!coverNodeVideoStreamsVideoStreamsItem["Height"].isNull())
			videoStreamsItemObject.height = std::stol(coverNodeVideoStreamsVideoStreamsItem["Height"].asString());
		if(!coverNodeVideoStreamsVideoStreamsItem["HasBFrames"].isNull())
			videoStreamsItemObject.hasBFrames = std::stol(coverNodeVideoStreamsVideoStreamsItem["HasBFrames"].asString());
		if(!coverNodeVideoStreamsVideoStreamsItem["SampleAspectRatio"].isNull())
			videoStreamsItemObject.sampleAspectRatio = coverNodeVideoStreamsVideoStreamsItem["SampleAspectRatio"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["DisplayAspectRatio"].isNull())
			videoStreamsItemObject.displayAspectRatio = coverNodeVideoStreamsVideoStreamsItem["DisplayAspectRatio"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["PixelFormat"].isNull())
			videoStreamsItemObject.pixelFormat = coverNodeVideoStreamsVideoStreamsItem["PixelFormat"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["Level"].isNull())
			videoStreamsItemObject.level = std::stol(coverNodeVideoStreamsVideoStreamsItem["Level"].asString());
		if(!coverNodeVideoStreamsVideoStreamsItem["FrameRate"].isNull())
			videoStreamsItemObject.frameRate = coverNodeVideoStreamsVideoStreamsItem["FrameRate"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["AverageFrameRate"].isNull())
			videoStreamsItemObject.averageFrameRate = coverNodeVideoStreamsVideoStreamsItem["AverageFrameRate"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["TimeBase"].isNull())
			videoStreamsItemObject.timeBase = coverNodeVideoStreamsVideoStreamsItem["TimeBase"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["StartTime"].isNull())
			videoStreamsItemObject.startTime = coverNodeVideoStreamsVideoStreamsItem["StartTime"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["Duration"].isNull())
			videoStreamsItemObject.duration = coverNodeVideoStreamsVideoStreamsItem["Duration"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["Bitrate"].isNull())
			videoStreamsItemObject.bitrate = std::stol(coverNodeVideoStreamsVideoStreamsItem["Bitrate"].asString());
		if(!coverNodeVideoStreamsVideoStreamsItem["FrameCount"].isNull())
			videoStreamsItemObject.frameCount = std::stol(coverNodeVideoStreamsVideoStreamsItem["FrameCount"].asString());
		if(!coverNodeVideoStreamsVideoStreamsItem["Rotate"].isNull())
			videoStreamsItemObject.rotate = coverNodeVideoStreamsVideoStreamsItem["Rotate"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["BitDepth"].isNull())
			videoStreamsItemObject.bitDepth = std::stol(coverNodeVideoStreamsVideoStreamsItem["BitDepth"].asString());
		if(!coverNodeVideoStreamsVideoStreamsItem["ColorSpace"].isNull())
			videoStreamsItemObject.colorSpace = coverNodeVideoStreamsVideoStreamsItem["ColorSpace"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["ColorRange"].isNull())
			videoStreamsItemObject.colorRange = coverNodeVideoStreamsVideoStreamsItem["ColorRange"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["ColorTransfer"].isNull())
			videoStreamsItemObject.colorTransfer = coverNodeVideoStreamsVideoStreamsItem["ColorTransfer"].asString();
		if(!coverNodeVideoStreamsVideoStreamsItem["ColorPrimaries"].isNull())
			videoStreamsItemObject.colorPrimaries = coverNodeVideoStreamsVideoStreamsItem["ColorPrimaries"].asString();
		figureCluster_.cover.videoStreams.push_back(videoStreamsItemObject);
	}
	auto allSubtitlesNode = coverNode["Subtitles"]["SubtitlesItem"];
	for (auto coverNodeSubtitlesSubtitlesItem : allSubtitlesNode)
	{
		FigureCluster::Cover::SubtitlesItem subtitlesItemObject;
		if(!coverNodeSubtitlesSubtitlesItem["Index"].isNull())
			subtitlesItemObject.index = std::stol(coverNodeSubtitlesSubtitlesItem["Index"].asString());
		if(!coverNodeSubtitlesSubtitlesItem["Language"].isNull())
			subtitlesItemObject.language = coverNodeSubtitlesSubtitlesItem["Language"].asString();
		if(!coverNodeSubtitlesSubtitlesItem["CodecName"].isNull())
			subtitlesItemObject.codecName = coverNodeSubtitlesSubtitlesItem["CodecName"].asString();
		if(!coverNodeSubtitlesSubtitlesItem["CodecLongName"].isNull())
			subtitlesItemObject.codecLongName = coverNodeSubtitlesSubtitlesItem["CodecLongName"].asString();
		if(!coverNodeSubtitlesSubtitlesItem["CodecTagString"].isNull())
			subtitlesItemObject.codecTagString = coverNodeSubtitlesSubtitlesItem["CodecTagString"].asString();
		if(!coverNodeSubtitlesSubtitlesItem["CodecTag"].isNull())
			subtitlesItemObject.codecTag = coverNodeSubtitlesSubtitlesItem["CodecTag"].asString();
		if(!coverNodeSubtitlesSubtitlesItem["StartTime"].isNull())
			subtitlesItemObject.startTime = coverNodeSubtitlesSubtitlesItem["StartTime"].asString();
		if(!coverNodeSubtitlesSubtitlesItem["Duration"].isNull())
			subtitlesItemObject.duration = coverNodeSubtitlesSubtitlesItem["Duration"].asString();
		if(!coverNodeSubtitlesSubtitlesItem["Bitrate"].isNull())
			subtitlesItemObject.bitrate = std::stol(coverNodeSubtitlesSubtitlesItem["Bitrate"].asString());
		if(!coverNodeSubtitlesSubtitlesItem["Content"].isNull())
			subtitlesItemObject.content = coverNodeSubtitlesSubtitlesItem["Content"].asString();
		if(!coverNodeSubtitlesSubtitlesItem["Width"].isNull())
			subtitlesItemObject.width = std::stol(coverNodeSubtitlesSubtitlesItem["Width"].asString());
		if(!coverNodeSubtitlesSubtitlesItem["Height"].isNull())
			subtitlesItemObject.height = std::stol(coverNodeSubtitlesSubtitlesItem["Height"].asString());
		figureCluster_.cover.subtitles.push_back(subtitlesItemObject);
	}
	auto allAudioStreamsNode = coverNode["AudioStreams"]["AudioStreamsItem"];
	for (auto coverNodeAudioStreamsAudioStreamsItem : allAudioStreamsNode)
	{
		FigureCluster::Cover::AudioStreamsItem audioStreamsItemObject;
		if(!coverNodeAudioStreamsAudioStreamsItem["Index"].isNull())
			audioStreamsItemObject.index = std::stol(coverNodeAudioStreamsAudioStreamsItem["Index"].asString());
		if(!coverNodeAudioStreamsAudioStreamsItem["Language"].isNull())
			audioStreamsItemObject.language = coverNodeAudioStreamsAudioStreamsItem["Language"].asString();
		if(!coverNodeAudioStreamsAudioStreamsItem["CodecName"].isNull())
			audioStreamsItemObject.codecName = coverNodeAudioStreamsAudioStreamsItem["CodecName"].asString();
		if(!coverNodeAudioStreamsAudioStreamsItem["CodecLongName"].isNull())
			audioStreamsItemObject.codecLongName = coverNodeAudioStreamsAudioStreamsItem["CodecLongName"].asString();
		if(!coverNodeAudioStreamsAudioStreamsItem["CodecTimeBase"].isNull())
			audioStreamsItemObject.codecTimeBase = coverNodeAudioStreamsAudioStreamsItem["CodecTimeBase"].asString();
		if(!coverNodeAudioStreamsAudioStreamsItem["CodecTagString"].isNull())
			audioStreamsItemObject.codecTagString = coverNodeAudioStreamsAudioStreamsItem["CodecTagString"].asString();
		if(!coverNodeAudioStreamsAudioStreamsItem["CodecTag"].isNull())
			audioStreamsItemObject.codecTag = coverNodeAudioStreamsAudioStreamsItem["CodecTag"].asString();
		if(!coverNodeAudioStreamsAudioStreamsItem["TimeBase"].isNull())
			audioStreamsItemObject.timeBase = coverNodeAudioStreamsAudioStreamsItem["TimeBase"].asString();
		if(!coverNodeAudioStreamsAudioStreamsItem["StartTime"].isNull())
			audioStreamsItemObject.startTime = coverNodeAudioStreamsAudioStreamsItem["StartTime"].asString();
		if(!coverNodeAudioStreamsAudioStreamsItem["Duration"].isNull())
			audioStreamsItemObject.duration = coverNodeAudioStreamsAudioStreamsItem["Duration"].asString();
		if(!coverNodeAudioStreamsAudioStreamsItem["Bitrate"].isNull())
			audioStreamsItemObject.bitrate = std::stol(coverNodeAudioStreamsAudioStreamsItem["Bitrate"].asString());
		if(!coverNodeAudioStreamsAudioStreamsItem["FrameCount"].isNull())
			audioStreamsItemObject.frameCount = std::stol(coverNodeAudioStreamsAudioStreamsItem["FrameCount"].asString());
		if(!coverNodeAudioStreamsAudioStreamsItem["Lyric"].isNull())
			audioStreamsItemObject.lyric = coverNodeAudioStreamsAudioStreamsItem["Lyric"].asString();
		if(!coverNodeAudioStreamsAudioStreamsItem["SampleFormat"].isNull())
			audioStreamsItemObject.sampleFormat = coverNodeAudioStreamsAudioStreamsItem["SampleFormat"].asString();
		if(!coverNodeAudioStreamsAudioStreamsItem["SampleRate"].isNull())
			audioStreamsItemObject.sampleRate = std::stol(coverNodeAudioStreamsAudioStreamsItem["SampleRate"].asString());
		if(!coverNodeAudioStreamsAudioStreamsItem["Channels"].isNull())
			audioStreamsItemObject.channels = std::stol(coverNodeAudioStreamsAudioStreamsItem["Channels"].asString());
		if(!coverNodeAudioStreamsAudioStreamsItem["ChannelLayout"].isNull())
			audioStreamsItemObject.channelLayout = coverNodeAudioStreamsAudioStreamsItem["ChannelLayout"].asString();
		figureCluster_.cover.audioStreams.push_back(audioStreamsItemObject);
	}
	auto allAudioCoversNode = coverNode["AudioCovers"]["AudioCoversItem"];
	for (auto coverNodeAudioCoversAudioCoversItem : allAudioCoversNode)
	{
		FigureCluster::Cover::AudioCoversItem audioCoversItemObject;
		if(!coverNodeAudioCoversAudioCoversItem["ImageWidth"].isNull())
			audioCoversItemObject.imageWidth = std::stol(coverNodeAudioCoversAudioCoversItem["ImageWidth"].asString());
		if(!coverNodeAudioCoversAudioCoversItem["ImageHeight"].isNull())
			audioCoversItemObject.imageHeight = std::stol(coverNodeAudioCoversAudioCoversItem["ImageHeight"].asString());
		if(!coverNodeAudioCoversAudioCoversItem["EXIF"].isNull())
			audioCoversItemObject.eXIF = coverNodeAudioCoversAudioCoversItem["EXIF"].asString();
		auto allCroppingSuggestions4Node = coverNodeAudioCoversAudioCoversItem["CroppingSuggestions"]["CroppingSuggestionsItem"];
		for (auto coverNodeAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem : allCroppingSuggestions4Node)
		{
			FigureCluster::Cover::AudioCoversItem::CroppingSuggestionsItem6 croppingSuggestions4Object;
			if(!coverNodeAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem["AspectRatio"].isNull())
				croppingSuggestions4Object.aspectRatio = coverNodeAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem["AspectRatio"].asString();
			if(!coverNodeAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem["Confidence"].isNull())
				croppingSuggestions4Object.confidence = std::stof(coverNodeAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem["Confidence"].asString());
			auto boundary7Node = value["Boundary"];
			if(!boundary7Node["Width"].isNull())
				croppingSuggestions4Object.boundary7.width = std::stol(boundary7Node["Width"].asString());
			if(!boundary7Node["Height"].isNull())
				croppingSuggestions4Object.boundary7.height = std::stol(boundary7Node["Height"].asString());
			if(!boundary7Node["Left"].isNull())
				croppingSuggestions4Object.boundary7.left = std::stol(boundary7Node["Left"].asString());
			if(!boundary7Node["Top"].isNull())
				croppingSuggestions4Object.boundary7.top = std::stol(boundary7Node["Top"].asString());
			audioCoversItemObject.croppingSuggestions4.push_back(croppingSuggestions4Object);
		}
		auto allOCRContents5Node = coverNodeAudioCoversAudioCoversItem["OCRContents"]["OCRContentsItem"];
		for (auto coverNodeAudioCoversAudioCoversItemOCRContentsOCRContentsItem : allOCRContents5Node)
		{
			FigureCluster::Cover::AudioCoversItem::OCRContentsItem8 oCRContents5Object;
			if(!coverNodeAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Language"].isNull())
				oCRContents5Object.language = coverNodeAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Language"].asString();
			if(!coverNodeAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Contents"].isNull())
				oCRContents5Object.contents = coverNodeAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Contents"].asString();
			if(!coverNodeAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Confidence"].isNull())
				oCRContents5Object.confidence = std::stof(coverNodeAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Confidence"].asString());
			auto boundary9Node = value["Boundary"];
			if(!boundary9Node["Width"].isNull())
				oCRContents5Object.boundary9.width = std::stol(boundary9Node["Width"].asString());
			if(!boundary9Node["Height"].isNull())
				oCRContents5Object.boundary9.height = std::stol(boundary9Node["Height"].asString());
			if(!boundary9Node["Left"].isNull())
				oCRContents5Object.boundary9.left = std::stol(boundary9Node["Left"].asString());
			if(!boundary9Node["Top"].isNull())
				oCRContents5Object.boundary9.top = std::stol(boundary9Node["Top"].asString());
			audioCoversItemObject.oCRContents5.push_back(oCRContents5Object);
		}
		auto imageScore3Node = value["ImageScore"];
		if(!imageScore3Node["OverallQualityScore"].isNull())
			audioCoversItemObject.imageScore3.overallQualityScore = std::stof(imageScore3Node["OverallQualityScore"].asString());
		figureCluster_.cover.audioCovers.push_back(audioCoversItemObject);
	}
	auto imageScoreNode = coverNode["ImageScore"];
	if(!imageScoreNode["OverallQualityScore"].isNull())
		figureCluster_.cover.imageScore.overallQualityScore = std::stof(imageScoreNode["OverallQualityScore"].asString());

}

GetFigureClusterResult::FigureCluster GetFigureClusterResult::getFigureCluster()const
{
	return figureCluster_;
}

