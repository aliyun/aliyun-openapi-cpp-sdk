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

#include <alibabacloud/imm/model/GetFileMetaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

GetFileMetaResult::GetFileMetaResult() :
	ServiceResult()
{}

GetFileMetaResult::GetFileMetaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFileMetaResult::~GetFileMetaResult()
{}

void GetFileMetaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFilesNode = value["Files"]["FilesItem"];
	for (auto valueFilesFilesItem : allFilesNode)
	{
		FilesItem filesObject;
		if(!valueFilesFilesItem["OwnerId"].isNull())
			filesObject.ownerId = valueFilesFilesItem["OwnerId"].asString();
		if(!valueFilesFilesItem["ProjectName"].isNull())
			filesObject.projectName = valueFilesFilesItem["ProjectName"].asString();
		if(!valueFilesFilesItem["DatasetName"].isNull())
			filesObject.datasetName = valueFilesFilesItem["DatasetName"].asString();
		if(!valueFilesFilesItem["ObjectType"].isNull())
			filesObject.objectType = valueFilesFilesItem["ObjectType"].asString();
		if(!valueFilesFilesItem["ObjectId"].isNull())
			filesObject.objectId = valueFilesFilesItem["ObjectId"].asString();
		if(!valueFilesFilesItem["UpdateTime"].isNull())
			filesObject.updateTime = valueFilesFilesItem["UpdateTime"].asString();
		if(!valueFilesFilesItem["CreateTime"].isNull())
			filesObject.createTime = valueFilesFilesItem["CreateTime"].asString();
		if(!valueFilesFilesItem["URI"].isNull())
			filesObject.uRI = valueFilesFilesItem["URI"].asString();
		if(!valueFilesFilesItem["OSSURI"].isNull())
			filesObject.oSSURI = valueFilesFilesItem["OSSURI"].asString();
		if(!valueFilesFilesItem["Filename"].isNull())
			filesObject.filename = valueFilesFilesItem["Filename"].asString();
		if(!valueFilesFilesItem["MediaType"].isNull())
			filesObject.mediaType = valueFilesFilesItem["MediaType"].asString();
		if(!valueFilesFilesItem["ContentType"].isNull())
			filesObject.contentType = valueFilesFilesItem["ContentType"].asString();
		if(!valueFilesFilesItem["Size"].isNull())
			filesObject.size = std::stol(valueFilesFilesItem["Size"].asString());
		if(!valueFilesFilesItem["FileHash"].isNull())
			filesObject.fileHash = valueFilesFilesItem["FileHash"].asString();
		if(!valueFilesFilesItem["FileModifiedTime"].isNull())
			filesObject.fileModifiedTime = valueFilesFilesItem["FileModifiedTime"].asString();
		if(!valueFilesFilesItem["FileCreateTime"].isNull())
			filesObject.fileCreateTime = valueFilesFilesItem["FileCreateTime"].asString();
		if(!valueFilesFilesItem["FileAccessTime"].isNull())
			filesObject.fileAccessTime = valueFilesFilesItem["FileAccessTime"].asString();
		if(!valueFilesFilesItem["ProduceTime"].isNull())
			filesObject.produceTime = valueFilesFilesItem["ProduceTime"].asString();
		if(!valueFilesFilesItem["LatLong"].isNull())
			filesObject.latLong = valueFilesFilesItem["LatLong"].asString();
		if(!valueFilesFilesItem["Timezone"].isNull())
			filesObject.timezone = valueFilesFilesItem["Timezone"].asString();
		if(!valueFilesFilesItem["TravelClusterId"].isNull())
			filesObject.travelClusterId = valueFilesFilesItem["TravelClusterId"].asString();
		if(!valueFilesFilesItem["Orientation"].isNull())
			filesObject.orientation = std::stol(valueFilesFilesItem["Orientation"].asString());
		if(!valueFilesFilesItem["FigureCount"].isNull())
			filesObject.figureCount = std::stol(valueFilesFilesItem["FigureCount"].asString());
		if(!valueFilesFilesItem["Title"].isNull())
			filesObject.title = valueFilesFilesItem["Title"].asString();
		if(!valueFilesFilesItem["ImageWidth"].isNull())
			filesObject.imageWidth = std::stol(valueFilesFilesItem["ImageWidth"].asString());
		if(!valueFilesFilesItem["ImageHeight"].isNull())
			filesObject.imageHeight = std::stol(valueFilesFilesItem["ImageHeight"].asString());
		if(!valueFilesFilesItem["EXIF"].isNull())
			filesObject.eXIF = valueFilesFilesItem["EXIF"].asString();
		if(!valueFilesFilesItem["VideoWidth"].isNull())
			filesObject.videoWidth = std::stol(valueFilesFilesItem["VideoWidth"].asString());
		if(!valueFilesFilesItem["VideoHeight"].isNull())
			filesObject.videoHeight = std::stol(valueFilesFilesItem["VideoHeight"].asString());
		if(!valueFilesFilesItem["Artist"].isNull())
			filesObject.artist = valueFilesFilesItem["Artist"].asString();
		if(!valueFilesFilesItem["AlbumArtist"].isNull())
			filesObject.albumArtist = valueFilesFilesItem["AlbumArtist"].asString();
		if(!valueFilesFilesItem["Composer"].isNull())
			filesObject.composer = valueFilesFilesItem["Composer"].asString();
		if(!valueFilesFilesItem["Performer"].isNull())
			filesObject.performer = valueFilesFilesItem["Performer"].asString();
		if(!valueFilesFilesItem["Language"].isNull())
			filesObject.language = valueFilesFilesItem["Language"].asString();
		if(!valueFilesFilesItem["Album"].isNull())
			filesObject.album = valueFilesFilesItem["Album"].asString();
		if(!valueFilesFilesItem["PageCount"].isNull())
			filesObject.pageCount = std::stol(valueFilesFilesItem["PageCount"].asString());
		if(!valueFilesFilesItem["DocumentText"].isNull())
			filesObject.documentText = valueFilesFilesItem["DocumentText"].asString();
		if(!valueFilesFilesItem["ETag"].isNull())
			filesObject.eTag = valueFilesFilesItem["ETag"].asString();
		if(!valueFilesFilesItem["CacheControl"].isNull())
			filesObject.cacheControl = valueFilesFilesItem["CacheControl"].asString();
		if(!valueFilesFilesItem["ContentDisposition"].isNull())
			filesObject.contentDisposition = valueFilesFilesItem["ContentDisposition"].asString();
		if(!valueFilesFilesItem["ContentEncoding"].isNull())
			filesObject.contentEncoding = valueFilesFilesItem["ContentEncoding"].asString();
		if(!valueFilesFilesItem["ContentLanguage"].isNull())
			filesObject.contentLanguage = valueFilesFilesItem["ContentLanguage"].asString();
		if(!valueFilesFilesItem["AccessControlAllowOrigin"].isNull())
			filesObject.accessControlAllowOrigin = valueFilesFilesItem["AccessControlAllowOrigin"].asString();
		if(!valueFilesFilesItem["AccessControlRequestMethod"].isNull())
			filesObject.accessControlRequestMethod = valueFilesFilesItem["AccessControlRequestMethod"].asString();
		if(!valueFilesFilesItem["ServerSideEncryptionCustomerAlgorithm"].isNull())
			filesObject.serverSideEncryptionCustomerAlgorithm = valueFilesFilesItem["ServerSideEncryptionCustomerAlgorithm"].asString();
		if(!valueFilesFilesItem["ServerSideEncryption"].isNull())
			filesObject.serverSideEncryption = valueFilesFilesItem["ServerSideEncryption"].asString();
		if(!valueFilesFilesItem["ServerSideDataEncryption"].isNull())
			filesObject.serverSideDataEncryption = valueFilesFilesItem["ServerSideDataEncryption"].asString();
		if(!valueFilesFilesItem["ServerSideEncryptionKeyId"].isNull())
			filesObject.serverSideEncryptionKeyId = valueFilesFilesItem["ServerSideEncryptionKeyId"].asString();
		if(!valueFilesFilesItem["OSSStorageClass"].isNull())
			filesObject.oSSStorageClass = valueFilesFilesItem["OSSStorageClass"].asString();
		if(!valueFilesFilesItem["OSSCRC64"].isNull())
			filesObject.oSSCRC64 = valueFilesFilesItem["OSSCRC64"].asString();
		if(!valueFilesFilesItem["ObjectACL"].isNull())
			filesObject.objectACL = valueFilesFilesItem["ObjectACL"].asString();
		if(!valueFilesFilesItem["ContentMd5"].isNull())
			filesObject.contentMd5 = valueFilesFilesItem["ContentMd5"].asString();
		if(!valueFilesFilesItem["OSSUserMeta"].isNull())
			filesObject.oSSUserMeta = valueFilesFilesItem["OSSUserMeta"].asString();
		if(!valueFilesFilesItem["OSSTaggingCount"].isNull())
			filesObject.oSSTaggingCount = std::stol(valueFilesFilesItem["OSSTaggingCount"].asString());
		if(!valueFilesFilesItem["OSSTagging"].isNull())
			filesObject.oSSTagging = valueFilesFilesItem["OSSTagging"].asString();
		if(!valueFilesFilesItem["OSSExpiration"].isNull())
			filesObject.oSSExpiration = valueFilesFilesItem["OSSExpiration"].asString();
		if(!valueFilesFilesItem["OSSVersionId"].isNull())
			filesObject.oSSVersionId = valueFilesFilesItem["OSSVersionId"].asString();
		if(!valueFilesFilesItem["OSSDeleteMarker"].isNull())
			filesObject.oSSDeleteMarker = valueFilesFilesItem["OSSDeleteMarker"].asString();
		if(!valueFilesFilesItem["OSSObjectType"].isNull())
			filesObject.oSSObjectType = valueFilesFilesItem["OSSObjectType"].asString();
		if(!valueFilesFilesItem["CustomId"].isNull())
			filesObject.customId = valueFilesFilesItem["CustomId"].asString();
		if(!valueFilesFilesItem["CustomLabels"].isNull())
			filesObject.customLabels = valueFilesFilesItem["CustomLabels"].asString();
		if(!valueFilesFilesItem["StreamCount"].isNull())
			filesObject.streamCount = std::stol(valueFilesFilesItem["StreamCount"].asString());
		if(!valueFilesFilesItem["ProgramCount"].isNull())
			filesObject.programCount = std::stol(valueFilesFilesItem["ProgramCount"].asString());
		if(!valueFilesFilesItem["FormatName"].isNull())
			filesObject.formatName = valueFilesFilesItem["FormatName"].asString();
		if(!valueFilesFilesItem["FormatLongName"].isNull())
			filesObject.formatLongName = valueFilesFilesItem["FormatLongName"].asString();
		if(!valueFilesFilesItem["StartTime"].isNull())
			filesObject.startTime = valueFilesFilesItem["StartTime"].asString();
		if(!valueFilesFilesItem["Bitrate"].isNull())
			filesObject.bitrate = std::stol(valueFilesFilesItem["Bitrate"].asString());
		if(!valueFilesFilesItem["Duration"].isNull())
			filesObject.duration = valueFilesFilesItem["Duration"].asString();
		auto allAddressesNode = valueFilesFilesItem["Addresses"]["AddressesItem"];
		for (auto valueFilesFilesItemAddressesAddressesItem : allAddressesNode)
		{
			FilesItem::AddressesItem addressesObject;
			if(!valueFilesFilesItemAddressesAddressesItem["Language"].isNull())
				addressesObject.language = valueFilesFilesItemAddressesAddressesItem["Language"].asString();
			if(!valueFilesFilesItemAddressesAddressesItem["AddressLine"].isNull())
				addressesObject.addressLine = valueFilesFilesItemAddressesAddressesItem["AddressLine"].asString();
			if(!valueFilesFilesItemAddressesAddressesItem["Country"].isNull())
				addressesObject.country = valueFilesFilesItemAddressesAddressesItem["Country"].asString();
			if(!valueFilesFilesItemAddressesAddressesItem["Province"].isNull())
				addressesObject.province = valueFilesFilesItemAddressesAddressesItem["Province"].asString();
			if(!valueFilesFilesItemAddressesAddressesItem["City"].isNull())
				addressesObject.city = valueFilesFilesItemAddressesAddressesItem["City"].asString();
			if(!valueFilesFilesItemAddressesAddressesItem["District"].isNull())
				addressesObject.district = valueFilesFilesItemAddressesAddressesItem["District"].asString();
			if(!valueFilesFilesItemAddressesAddressesItem["Township"].isNull())
				addressesObject.township = valueFilesFilesItemAddressesAddressesItem["Township"].asString();
			filesObject.addresses.push_back(addressesObject);
		}
		auto allFiguresNode = valueFilesFilesItem["Figures"]["FiguresItem"];
		for (auto valueFilesFilesItemFiguresFiguresItem : allFiguresNode)
		{
			FilesItem::FiguresItem figuresObject;
			if(!valueFilesFilesItemFiguresFiguresItem["FigureId"].isNull())
				figuresObject.figureId = valueFilesFilesItemFiguresFiguresItem["FigureId"].asString();
			if(!valueFilesFilesItemFiguresFiguresItem["FigureConfidence"].isNull())
				figuresObject.figureConfidence = std::stof(valueFilesFilesItemFiguresFiguresItem["FigureConfidence"].asString());
			if(!valueFilesFilesItemFiguresFiguresItem["FigureClusterId"].isNull())
				figuresObject.figureClusterId = valueFilesFilesItemFiguresFiguresItem["FigureClusterId"].asString();
			if(!valueFilesFilesItemFiguresFiguresItem["FigureClusterConfidence"].isNull())
				figuresObject.figureClusterConfidence = std::stof(valueFilesFilesItemFiguresFiguresItem["FigureClusterConfidence"].asString());
			if(!valueFilesFilesItemFiguresFiguresItem["FigureType"].isNull())
				figuresObject.figureType = valueFilesFilesItemFiguresFiguresItem["FigureType"].asString();
			if(!valueFilesFilesItemFiguresFiguresItem["Age"].isNull())
				figuresObject.age = std::stol(valueFilesFilesItemFiguresFiguresItem["Age"].asString());
			if(!valueFilesFilesItemFiguresFiguresItem["AgeSD"].isNull())
				figuresObject.ageSD = std::stof(valueFilesFilesItemFiguresFiguresItem["AgeSD"].asString());
			if(!valueFilesFilesItemFiguresFiguresItem["Gender"].isNull())
				figuresObject.gender = valueFilesFilesItemFiguresFiguresItem["Gender"].asString();
			if(!valueFilesFilesItemFiguresFiguresItem["GenderConfidence"].isNull())
				figuresObject.genderConfidence = std::stof(valueFilesFilesItemFiguresFiguresItem["GenderConfidence"].asString());
			if(!valueFilesFilesItemFiguresFiguresItem["Emotion"].isNull())
				figuresObject.emotion = valueFilesFilesItemFiguresFiguresItem["Emotion"].asString();
			if(!valueFilesFilesItemFiguresFiguresItem["EmotionConfidence"].isNull())
				figuresObject.emotionConfidence = std::stof(valueFilesFilesItemFiguresFiguresItem["EmotionConfidence"].asString());
			if(!valueFilesFilesItemFiguresFiguresItem["FaceQuality"].isNull())
				figuresObject.faceQuality = std::stof(valueFilesFilesItemFiguresFiguresItem["FaceQuality"].asString());
			if(!valueFilesFilesItemFiguresFiguresItem["Mouth"].isNull())
				figuresObject.mouth = valueFilesFilesItemFiguresFiguresItem["Mouth"].asString();
			if(!valueFilesFilesItemFiguresFiguresItem["MouthConfidence"].isNull())
				figuresObject.mouthConfidence = std::stof(valueFilesFilesItemFiguresFiguresItem["MouthConfidence"].asString());
			if(!valueFilesFilesItemFiguresFiguresItem["Beard"].isNull())
				figuresObject.beard = valueFilesFilesItemFiguresFiguresItem["Beard"].asString();
			if(!valueFilesFilesItemFiguresFiguresItem["BeardConfidence"].isNull())
				figuresObject.beardConfidence = std::stof(valueFilesFilesItemFiguresFiguresItem["BeardConfidence"].asString());
			if(!valueFilesFilesItemFiguresFiguresItem["Hat"].isNull())
				figuresObject.hat = valueFilesFilesItemFiguresFiguresItem["Hat"].asString();
			if(!valueFilesFilesItemFiguresFiguresItem["HatConfidence"].isNull())
				figuresObject.hatConfidence = std::stof(valueFilesFilesItemFiguresFiguresItem["HatConfidence"].asString());
			if(!valueFilesFilesItemFiguresFiguresItem["Mask"].isNull())
				figuresObject.mask = valueFilesFilesItemFiguresFiguresItem["Mask"].asString();
			if(!valueFilesFilesItemFiguresFiguresItem["MaskConfidence"].isNull())
				figuresObject.maskConfidence = std::stof(valueFilesFilesItemFiguresFiguresItem["MaskConfidence"].asString());
			if(!valueFilesFilesItemFiguresFiguresItem["Glasses"].isNull())
				figuresObject.glasses = valueFilesFilesItemFiguresFiguresItem["Glasses"].asString();
			if(!valueFilesFilesItemFiguresFiguresItem["GlassesConfidence"].isNull())
				figuresObject.glassesConfidence = std::stof(valueFilesFilesItemFiguresFiguresItem["GlassesConfidence"].asString());
			if(!valueFilesFilesItemFiguresFiguresItem["Sharpness"].isNull())
				figuresObject.sharpness = std::stof(valueFilesFilesItemFiguresFiguresItem["Sharpness"].asString());
			if(!valueFilesFilesItemFiguresFiguresItem["Attractive"].isNull())
				figuresObject.attractive = std::stof(valueFilesFilesItemFiguresFiguresItem["Attractive"].asString());
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
			filesObject.figures.push_back(figuresObject);
		}
		auto allLabelsNode = valueFilesFilesItem["Labels"]["LabelsItem"];
		for (auto valueFilesFilesItemLabelsLabelsItem : allLabelsNode)
		{
			FilesItem::LabelsItem labelsObject;
			if(!valueFilesFilesItemLabelsLabelsItem["Language"].isNull())
				labelsObject.language = valueFilesFilesItemLabelsLabelsItem["Language"].asString();
			if(!valueFilesFilesItemLabelsLabelsItem["LabelName"].isNull())
				labelsObject.labelName = valueFilesFilesItemLabelsLabelsItem["LabelName"].asString();
			if(!valueFilesFilesItemLabelsLabelsItem["LabelLevel"].isNull())
				labelsObject.labelLevel = std::stol(valueFilesFilesItemLabelsLabelsItem["LabelLevel"].asString());
			if(!valueFilesFilesItemLabelsLabelsItem["LabelConfidence"].isNull())
				labelsObject.labelConfidence = std::stof(valueFilesFilesItemLabelsLabelsItem["LabelConfidence"].asString());
			if(!valueFilesFilesItemLabelsLabelsItem["ParentLabelName"].isNull())
				labelsObject.parentLabelName = valueFilesFilesItemLabelsLabelsItem["ParentLabelName"].asString();
			if(!valueFilesFilesItemLabelsLabelsItem["CentricScore"].isNull())
				labelsObject.centricScore = std::stof(valueFilesFilesItemLabelsLabelsItem["CentricScore"].asString());
			filesObject.labels.push_back(labelsObject);
		}
		auto allCroppingSuggestionsNode = valueFilesFilesItem["CroppingSuggestions"]["CroppingSuggestionsItem"];
		for (auto valueFilesFilesItemCroppingSuggestionsCroppingSuggestionsItem : allCroppingSuggestionsNode)
		{
			FilesItem::CroppingSuggestionsItem croppingSuggestionsObject;
			if(!valueFilesFilesItemCroppingSuggestionsCroppingSuggestionsItem["AspectRatio"].isNull())
				croppingSuggestionsObject.aspectRatio = valueFilesFilesItemCroppingSuggestionsCroppingSuggestionsItem["AspectRatio"].asString();
			if(!valueFilesFilesItemCroppingSuggestionsCroppingSuggestionsItem["Confidence"].isNull())
				croppingSuggestionsObject.confidence = std::stof(valueFilesFilesItemCroppingSuggestionsCroppingSuggestionsItem["Confidence"].asString());
			auto boundary1Node = value["Boundary"];
			if(!boundary1Node["Width"].isNull())
				croppingSuggestionsObject.boundary1.width = std::stol(boundary1Node["Width"].asString());
			if(!boundary1Node["Height"].isNull())
				croppingSuggestionsObject.boundary1.height = std::stol(boundary1Node["Height"].asString());
			if(!boundary1Node["Left"].isNull())
				croppingSuggestionsObject.boundary1.left = std::stol(boundary1Node["Left"].asString());
			if(!boundary1Node["Top"].isNull())
				croppingSuggestionsObject.boundary1.top = std::stol(boundary1Node["Top"].asString());
			filesObject.croppingSuggestions.push_back(croppingSuggestionsObject);
		}
		auto allOCRContentsNode = valueFilesFilesItem["OCRContents"]["OCRContentsItem"];
		for (auto valueFilesFilesItemOCRContentsOCRContentsItem : allOCRContentsNode)
		{
			FilesItem::OCRContentsItem oCRContentsObject;
			if(!valueFilesFilesItemOCRContentsOCRContentsItem["Language"].isNull())
				oCRContentsObject.language = valueFilesFilesItemOCRContentsOCRContentsItem["Language"].asString();
			if(!valueFilesFilesItemOCRContentsOCRContentsItem["Contents"].isNull())
				oCRContentsObject.contents = valueFilesFilesItemOCRContentsOCRContentsItem["Contents"].asString();
			if(!valueFilesFilesItemOCRContentsOCRContentsItem["Confidence"].isNull())
				oCRContentsObject.confidence = std::stof(valueFilesFilesItemOCRContentsOCRContentsItem["Confidence"].asString());
			auto boundary2Node = value["Boundary"];
			if(!boundary2Node["Width"].isNull())
				oCRContentsObject.boundary2.width = std::stol(boundary2Node["Width"].asString());
			if(!boundary2Node["Height"].isNull())
				oCRContentsObject.boundary2.height = std::stol(boundary2Node["Height"].asString());
			if(!boundary2Node["Left"].isNull())
				oCRContentsObject.boundary2.left = std::stol(boundary2Node["Left"].asString());
			if(!boundary2Node["Top"].isNull())
				oCRContentsObject.boundary2.top = std::stol(boundary2Node["Top"].asString());
			filesObject.oCRContents.push_back(oCRContentsObject);
		}
		auto allVideoStreamsNode = valueFilesFilesItem["VideoStreams"]["VideoStreamsItem"];
		for (auto valueFilesFilesItemVideoStreamsVideoStreamsItem : allVideoStreamsNode)
		{
			FilesItem::VideoStreamsItem videoStreamsObject;
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["Index"].isNull())
				videoStreamsObject.index = std::stol(valueFilesFilesItemVideoStreamsVideoStreamsItem["Index"].asString());
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["Language"].isNull())
				videoStreamsObject.language = valueFilesFilesItemVideoStreamsVideoStreamsItem["Language"].asString();
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["CodecName"].isNull())
				videoStreamsObject.codecName = valueFilesFilesItemVideoStreamsVideoStreamsItem["CodecName"].asString();
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["CodecLongName"].isNull())
				videoStreamsObject.codecLongName = valueFilesFilesItemVideoStreamsVideoStreamsItem["CodecLongName"].asString();
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["Profile"].isNull())
				videoStreamsObject.profile = valueFilesFilesItemVideoStreamsVideoStreamsItem["Profile"].asString();
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["CodecTimeBase"].isNull())
				videoStreamsObject.codecTimeBase = valueFilesFilesItemVideoStreamsVideoStreamsItem["CodecTimeBase"].asString();
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["CodecTagString"].isNull())
				videoStreamsObject.codecTagString = valueFilesFilesItemVideoStreamsVideoStreamsItem["CodecTagString"].asString();
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["CodecTag"].isNull())
				videoStreamsObject.codecTag = valueFilesFilesItemVideoStreamsVideoStreamsItem["CodecTag"].asString();
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["Width"].isNull())
				videoStreamsObject.width = std::stol(valueFilesFilesItemVideoStreamsVideoStreamsItem["Width"].asString());
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["Height"].isNull())
				videoStreamsObject.height = std::stol(valueFilesFilesItemVideoStreamsVideoStreamsItem["Height"].asString());
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["HasBFrames"].isNull())
				videoStreamsObject.hasBFrames = std::stol(valueFilesFilesItemVideoStreamsVideoStreamsItem["HasBFrames"].asString());
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["SampleAspectRatio"].isNull())
				videoStreamsObject.sampleAspectRatio = valueFilesFilesItemVideoStreamsVideoStreamsItem["SampleAspectRatio"].asString();
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["DisplayAspectRatio"].isNull())
				videoStreamsObject.displayAspectRatio = valueFilesFilesItemVideoStreamsVideoStreamsItem["DisplayAspectRatio"].asString();
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["PixelFormat"].isNull())
				videoStreamsObject.pixelFormat = valueFilesFilesItemVideoStreamsVideoStreamsItem["PixelFormat"].asString();
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["Level"].isNull())
				videoStreamsObject.level = std::stol(valueFilesFilesItemVideoStreamsVideoStreamsItem["Level"].asString());
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["FrameRate"].isNull())
				videoStreamsObject.frameRate = valueFilesFilesItemVideoStreamsVideoStreamsItem["FrameRate"].asString();
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["AverageFrameRate"].isNull())
				videoStreamsObject.averageFrameRate = valueFilesFilesItemVideoStreamsVideoStreamsItem["AverageFrameRate"].asString();
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["TimeBase"].isNull())
				videoStreamsObject.timeBase = valueFilesFilesItemVideoStreamsVideoStreamsItem["TimeBase"].asString();
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["StartTime"].isNull())
				videoStreamsObject.startTime = valueFilesFilesItemVideoStreamsVideoStreamsItem["StartTime"].asString();
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["Duration"].isNull())
				videoStreamsObject.duration = valueFilesFilesItemVideoStreamsVideoStreamsItem["Duration"].asString();
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["Bitrate"].isNull())
				videoStreamsObject.bitrate = std::stol(valueFilesFilesItemVideoStreamsVideoStreamsItem["Bitrate"].asString());
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["FrameCount"].isNull())
				videoStreamsObject.frameCount = std::stol(valueFilesFilesItemVideoStreamsVideoStreamsItem["FrameCount"].asString());
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["Rotate"].isNull())
				videoStreamsObject.rotate = valueFilesFilesItemVideoStreamsVideoStreamsItem["Rotate"].asString();
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["BitDepth"].isNull())
				videoStreamsObject.bitDepth = std::stol(valueFilesFilesItemVideoStreamsVideoStreamsItem["BitDepth"].asString());
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["ColorSpace"].isNull())
				videoStreamsObject.colorSpace = valueFilesFilesItemVideoStreamsVideoStreamsItem["ColorSpace"].asString();
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["ColorRange"].isNull())
				videoStreamsObject.colorRange = valueFilesFilesItemVideoStreamsVideoStreamsItem["ColorRange"].asString();
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["ColorTransfer"].isNull())
				videoStreamsObject.colorTransfer = valueFilesFilesItemVideoStreamsVideoStreamsItem["ColorTransfer"].asString();
			if(!valueFilesFilesItemVideoStreamsVideoStreamsItem["ColorPrimaries"].isNull())
				videoStreamsObject.colorPrimaries = valueFilesFilesItemVideoStreamsVideoStreamsItem["ColorPrimaries"].asString();
			filesObject.videoStreams.push_back(videoStreamsObject);
		}
		auto allSubtitlesNode = valueFilesFilesItem["Subtitles"]["SubtitlesItem"];
		for (auto valueFilesFilesItemSubtitlesSubtitlesItem : allSubtitlesNode)
		{
			FilesItem::SubtitlesItem subtitlesObject;
			if(!valueFilesFilesItemSubtitlesSubtitlesItem["Index"].isNull())
				subtitlesObject.index = std::stol(valueFilesFilesItemSubtitlesSubtitlesItem["Index"].asString());
			if(!valueFilesFilesItemSubtitlesSubtitlesItem["Language"].isNull())
				subtitlesObject.language = valueFilesFilesItemSubtitlesSubtitlesItem["Language"].asString();
			if(!valueFilesFilesItemSubtitlesSubtitlesItem["CodecName"].isNull())
				subtitlesObject.codecName = valueFilesFilesItemSubtitlesSubtitlesItem["CodecName"].asString();
			if(!valueFilesFilesItemSubtitlesSubtitlesItem["CodecLongName"].isNull())
				subtitlesObject.codecLongName = valueFilesFilesItemSubtitlesSubtitlesItem["CodecLongName"].asString();
			if(!valueFilesFilesItemSubtitlesSubtitlesItem["CodecTagString"].isNull())
				subtitlesObject.codecTagString = valueFilesFilesItemSubtitlesSubtitlesItem["CodecTagString"].asString();
			if(!valueFilesFilesItemSubtitlesSubtitlesItem["CodecTag"].isNull())
				subtitlesObject.codecTag = valueFilesFilesItemSubtitlesSubtitlesItem["CodecTag"].asString();
			if(!valueFilesFilesItemSubtitlesSubtitlesItem["StartTime"].isNull())
				subtitlesObject.startTime = valueFilesFilesItemSubtitlesSubtitlesItem["StartTime"].asString();
			if(!valueFilesFilesItemSubtitlesSubtitlesItem["Duration"].isNull())
				subtitlesObject.duration = valueFilesFilesItemSubtitlesSubtitlesItem["Duration"].asString();
			if(!valueFilesFilesItemSubtitlesSubtitlesItem["Bitrate"].isNull())
				subtitlesObject.bitrate = std::stol(valueFilesFilesItemSubtitlesSubtitlesItem["Bitrate"].asString());
			if(!valueFilesFilesItemSubtitlesSubtitlesItem["Content"].isNull())
				subtitlesObject.content = valueFilesFilesItemSubtitlesSubtitlesItem["Content"].asString();
			if(!valueFilesFilesItemSubtitlesSubtitlesItem["Width"].isNull())
				subtitlesObject.width = std::stol(valueFilesFilesItemSubtitlesSubtitlesItem["Width"].asString());
			if(!valueFilesFilesItemSubtitlesSubtitlesItem["Height"].isNull())
				subtitlesObject.height = std::stol(valueFilesFilesItemSubtitlesSubtitlesItem["Height"].asString());
			filesObject.subtitles.push_back(subtitlesObject);
		}
		auto allAudioStreamsNode = valueFilesFilesItem["AudioStreams"]["AudioStreamsItem"];
		for (auto valueFilesFilesItemAudioStreamsAudioStreamsItem : allAudioStreamsNode)
		{
			FilesItem::AudioStreamsItem audioStreamsObject;
			if(!valueFilesFilesItemAudioStreamsAudioStreamsItem["Index"].isNull())
				audioStreamsObject.index = std::stol(valueFilesFilesItemAudioStreamsAudioStreamsItem["Index"].asString());
			if(!valueFilesFilesItemAudioStreamsAudioStreamsItem["Language"].isNull())
				audioStreamsObject.language = valueFilesFilesItemAudioStreamsAudioStreamsItem["Language"].asString();
			if(!valueFilesFilesItemAudioStreamsAudioStreamsItem["CodecName"].isNull())
				audioStreamsObject.codecName = valueFilesFilesItemAudioStreamsAudioStreamsItem["CodecName"].asString();
			if(!valueFilesFilesItemAudioStreamsAudioStreamsItem["CodecLongName"].isNull())
				audioStreamsObject.codecLongName = valueFilesFilesItemAudioStreamsAudioStreamsItem["CodecLongName"].asString();
			if(!valueFilesFilesItemAudioStreamsAudioStreamsItem["CodecTimeBase"].isNull())
				audioStreamsObject.codecTimeBase = valueFilesFilesItemAudioStreamsAudioStreamsItem["CodecTimeBase"].asString();
			if(!valueFilesFilesItemAudioStreamsAudioStreamsItem["CodecTagString"].isNull())
				audioStreamsObject.codecTagString = valueFilesFilesItemAudioStreamsAudioStreamsItem["CodecTagString"].asString();
			if(!valueFilesFilesItemAudioStreamsAudioStreamsItem["CodecTag"].isNull())
				audioStreamsObject.codecTag = valueFilesFilesItemAudioStreamsAudioStreamsItem["CodecTag"].asString();
			if(!valueFilesFilesItemAudioStreamsAudioStreamsItem["TimeBase"].isNull())
				audioStreamsObject.timeBase = valueFilesFilesItemAudioStreamsAudioStreamsItem["TimeBase"].asString();
			if(!valueFilesFilesItemAudioStreamsAudioStreamsItem["StartTime"].isNull())
				audioStreamsObject.startTime = valueFilesFilesItemAudioStreamsAudioStreamsItem["StartTime"].asString();
			if(!valueFilesFilesItemAudioStreamsAudioStreamsItem["Duration"].isNull())
				audioStreamsObject.duration = valueFilesFilesItemAudioStreamsAudioStreamsItem["Duration"].asString();
			if(!valueFilesFilesItemAudioStreamsAudioStreamsItem["Bitrate"].isNull())
				audioStreamsObject.bitrate = std::stol(valueFilesFilesItemAudioStreamsAudioStreamsItem["Bitrate"].asString());
			if(!valueFilesFilesItemAudioStreamsAudioStreamsItem["FrameCount"].isNull())
				audioStreamsObject.frameCount = std::stol(valueFilesFilesItemAudioStreamsAudioStreamsItem["FrameCount"].asString());
			if(!valueFilesFilesItemAudioStreamsAudioStreamsItem["Lyric"].isNull())
				audioStreamsObject.lyric = valueFilesFilesItemAudioStreamsAudioStreamsItem["Lyric"].asString();
			if(!valueFilesFilesItemAudioStreamsAudioStreamsItem["SampleFormat"].isNull())
				audioStreamsObject.sampleFormat = valueFilesFilesItemAudioStreamsAudioStreamsItem["SampleFormat"].asString();
			if(!valueFilesFilesItemAudioStreamsAudioStreamsItem["SampleRate"].isNull())
				audioStreamsObject.sampleRate = std::stol(valueFilesFilesItemAudioStreamsAudioStreamsItem["SampleRate"].asString());
			if(!valueFilesFilesItemAudioStreamsAudioStreamsItem["Channels"].isNull())
				audioStreamsObject.channels = std::stol(valueFilesFilesItemAudioStreamsAudioStreamsItem["Channels"].asString());
			if(!valueFilesFilesItemAudioStreamsAudioStreamsItem["ChannelLayout"].isNull())
				audioStreamsObject.channelLayout = valueFilesFilesItemAudioStreamsAudioStreamsItem["ChannelLayout"].asString();
			filesObject.audioStreams.push_back(audioStreamsObject);
		}
		auto allAudioCoversNode = valueFilesFilesItem["AudioCovers"]["AudioCoversItem"];
		for (auto valueFilesFilesItemAudioCoversAudioCoversItem : allAudioCoversNode)
		{
			FilesItem::AudioCoversItem audioCoversObject;
			if(!valueFilesFilesItemAudioCoversAudioCoversItem["ImageWidth"].isNull())
				audioCoversObject.imageWidth = std::stol(valueFilesFilesItemAudioCoversAudioCoversItem["ImageWidth"].asString());
			if(!valueFilesFilesItemAudioCoversAudioCoversItem["ImageHeight"].isNull())
				audioCoversObject.imageHeight = std::stol(valueFilesFilesItemAudioCoversAudioCoversItem["ImageHeight"].asString());
			if(!valueFilesFilesItemAudioCoversAudioCoversItem["EXIF"].isNull())
				audioCoversObject.eXIF = valueFilesFilesItemAudioCoversAudioCoversItem["EXIF"].asString();
			auto allCroppingSuggestions4Node = valueFilesFilesItemAudioCoversAudioCoversItem["CroppingSuggestions"]["CroppingSuggestionsItem"];
			for (auto valueFilesFilesItemAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem : allCroppingSuggestions4Node)
			{
				FilesItem::AudioCoversItem::CroppingSuggestionsItem6 croppingSuggestions4Object;
				if(!valueFilesFilesItemAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem["AspectRatio"].isNull())
					croppingSuggestions4Object.aspectRatio = valueFilesFilesItemAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem["AspectRatio"].asString();
				if(!valueFilesFilesItemAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem["Confidence"].isNull())
					croppingSuggestions4Object.confidence = std::stof(valueFilesFilesItemAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem["Confidence"].asString());
				auto boundary7Node = value["Boundary"];
				if(!boundary7Node["Width"].isNull())
					croppingSuggestions4Object.boundary7.width = std::stol(boundary7Node["Width"].asString());
				if(!boundary7Node["Height"].isNull())
					croppingSuggestions4Object.boundary7.height = std::stol(boundary7Node["Height"].asString());
				if(!boundary7Node["Left"].isNull())
					croppingSuggestions4Object.boundary7.left = std::stol(boundary7Node["Left"].asString());
				if(!boundary7Node["Top"].isNull())
					croppingSuggestions4Object.boundary7.top = std::stol(boundary7Node["Top"].asString());
				audioCoversObject.croppingSuggestions4.push_back(croppingSuggestions4Object);
			}
			auto allOCRContents5Node = valueFilesFilesItemAudioCoversAudioCoversItem["OCRContents"]["OCRContentsItem"];
			for (auto valueFilesFilesItemAudioCoversAudioCoversItemOCRContentsOCRContentsItem : allOCRContents5Node)
			{
				FilesItem::AudioCoversItem::OCRContentsItem8 oCRContents5Object;
				if(!valueFilesFilesItemAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Language"].isNull())
					oCRContents5Object.language = valueFilesFilesItemAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Language"].asString();
				if(!valueFilesFilesItemAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Contents"].isNull())
					oCRContents5Object.contents = valueFilesFilesItemAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Contents"].asString();
				if(!valueFilesFilesItemAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Confidence"].isNull())
					oCRContents5Object.confidence = std::stof(valueFilesFilesItemAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Confidence"].asString());
				auto boundary9Node = value["Boundary"];
				if(!boundary9Node["Width"].isNull())
					oCRContents5Object.boundary9.width = std::stol(boundary9Node["Width"].asString());
				if(!boundary9Node["Height"].isNull())
					oCRContents5Object.boundary9.height = std::stol(boundary9Node["Height"].asString());
				if(!boundary9Node["Left"].isNull())
					oCRContents5Object.boundary9.left = std::stol(boundary9Node["Left"].asString());
				if(!boundary9Node["Top"].isNull())
					oCRContents5Object.boundary9.top = std::stol(boundary9Node["Top"].asString());
				audioCoversObject.oCRContents5.push_back(oCRContents5Object);
			}
			auto imageScore3Node = value["ImageScore"];
			if(!imageScore3Node["OverallQualityScore"].isNull())
				audioCoversObject.imageScore3.overallQualityScore = std::stof(imageScore3Node["OverallQualityScore"].asString());
			filesObject.audioCovers.push_back(audioCoversObject);
		}
		auto imageScoreNode = value["ImageScore"];
		if(!imageScoreNode["OverallQualityScore"].isNull())
			filesObject.imageScore.overallQualityScore = std::stof(imageScoreNode["OverallQualityScore"].asString());
		files_.push_back(filesObject);
	}

}

std::vector<GetFileMetaResult::FilesItem> GetFileMetaResult::getFiles()const
{
	return files_;
}

