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

#include <alibabacloud/imm/model/QueryStoriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

QueryStoriesResult::QueryStoriesResult() :
	ServiceResult()
{}

QueryStoriesResult::QueryStoriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryStoriesResult::~QueryStoriesResult()
{}

void QueryStoriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStoriesNode = value["Stories"]["StoriesItem"];
	for (auto valueStoriesStoriesItem : allStoriesNode)
	{
		StoriesItem storiesObject;
		if(!valueStoriesStoriesItem["OwnerId"].isNull())
			storiesObject.ownerId = valueStoriesStoriesItem["OwnerId"].asString();
		if(!valueStoriesStoriesItem["ProjectName"].isNull())
			storiesObject.projectName = valueStoriesStoriesItem["ProjectName"].asString();
		if(!valueStoriesStoriesItem["DatasetName"].isNull())
			storiesObject.datasetName = valueStoriesStoriesItem["DatasetName"].asString();
		if(!valueStoriesStoriesItem["ObjectId"].isNull())
			storiesObject.objectId = valueStoriesStoriesItem["ObjectId"].asString();
		if(!valueStoriesStoriesItem["ObjectType"].isNull())
			storiesObject.objectType = valueStoriesStoriesItem["ObjectType"].asString();
		if(!valueStoriesStoriesItem["UpdateTime"].isNull())
			storiesObject.updateTime = valueStoriesStoriesItem["UpdateTime"].asString();
		if(!valueStoriesStoriesItem["CreateTime"].isNull())
			storiesObject.createTime = valueStoriesStoriesItem["CreateTime"].asString();
		if(!valueStoriesStoriesItem["StoryName"].isNull())
			storiesObject.storyName = valueStoriesStoriesItem["StoryName"].asString();
		if(!valueStoriesStoriesItem["StoryType"].isNull())
			storiesObject.storyType = valueStoriesStoriesItem["StoryType"].asString();
		if(!valueStoriesStoriesItem["StorySubType"].isNull())
			storiesObject.storySubType = valueStoriesStoriesItem["StorySubType"].asString();
		if(!valueStoriesStoriesItem["StoryStartTime"].isNull())
			storiesObject.storyStartTime = valueStoriesStoriesItem["StoryStartTime"].asString();
		if(!valueStoriesStoriesItem["StoryEndTime"].isNull())
			storiesObject.storyEndTime = valueStoriesStoriesItem["StoryEndTime"].asString();
		if(!valueStoriesStoriesItem["CustomId"].isNull())
			storiesObject.customId = valueStoriesStoriesItem["CustomId"].asString();
		if(!valueStoriesStoriesItem["CustomLabels"].isNull())
			storiesObject.customLabels = valueStoriesStoriesItem["CustomLabels"].asString();
		auto allFilesNode = valueStoriesStoriesItem["Files"]["FilesItem"];
		for (auto valueStoriesStoriesItemFilesFilesItem : allFilesNode)
		{
			StoriesItem::FilesItem filesObject;
			if(!valueStoriesStoriesItemFilesFilesItem["OwnerId"].isNull())
				filesObject.ownerId = valueStoriesStoriesItemFilesFilesItem["OwnerId"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["ProjectName"].isNull())
				filesObject.projectName = valueStoriesStoriesItemFilesFilesItem["ProjectName"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["DatasetName"].isNull())
				filesObject.datasetName = valueStoriesStoriesItemFilesFilesItem["DatasetName"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["ObjectType"].isNull())
				filesObject.objectType = valueStoriesStoriesItemFilesFilesItem["ObjectType"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["ObjectId"].isNull())
				filesObject.objectId = valueStoriesStoriesItemFilesFilesItem["ObjectId"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["UpdateTime"].isNull())
				filesObject.updateTime = valueStoriesStoriesItemFilesFilesItem["UpdateTime"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["CreateTime"].isNull())
				filesObject.createTime = valueStoriesStoriesItemFilesFilesItem["CreateTime"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["URI"].isNull())
				filesObject.uRI = valueStoriesStoriesItemFilesFilesItem["URI"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["OSSURI"].isNull())
				filesObject.oSSURI = valueStoriesStoriesItemFilesFilesItem["OSSURI"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["Filename"].isNull())
				filesObject.filename = valueStoriesStoriesItemFilesFilesItem["Filename"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["MediaType"].isNull())
				filesObject.mediaType = valueStoriesStoriesItemFilesFilesItem["MediaType"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["ContentType"].isNull())
				filesObject.contentType = valueStoriesStoriesItemFilesFilesItem["ContentType"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["Size"].isNull())
				filesObject.size = std::stol(valueStoriesStoriesItemFilesFilesItem["Size"].asString());
			if(!valueStoriesStoriesItemFilesFilesItem["FileHash"].isNull())
				filesObject.fileHash = valueStoriesStoriesItemFilesFilesItem["FileHash"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["FileModifiedTime"].isNull())
				filesObject.fileModifiedTime = valueStoriesStoriesItemFilesFilesItem["FileModifiedTime"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["FileCreateTime"].isNull())
				filesObject.fileCreateTime = valueStoriesStoriesItemFilesFilesItem["FileCreateTime"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["FileAccessTime"].isNull())
				filesObject.fileAccessTime = valueStoriesStoriesItemFilesFilesItem["FileAccessTime"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["ProduceTime"].isNull())
				filesObject.produceTime = valueStoriesStoriesItemFilesFilesItem["ProduceTime"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["LatLong"].isNull())
				filesObject.latLong = valueStoriesStoriesItemFilesFilesItem["LatLong"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["Timezone"].isNull())
				filesObject.timezone = valueStoriesStoriesItemFilesFilesItem["Timezone"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["TravelClusterId"].isNull())
				filesObject.travelClusterId = valueStoriesStoriesItemFilesFilesItem["TravelClusterId"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["Orientation"].isNull())
				filesObject.orientation = std::stol(valueStoriesStoriesItemFilesFilesItem["Orientation"].asString());
			if(!valueStoriesStoriesItemFilesFilesItem["FigureCount"].isNull())
				filesObject.figureCount = std::stol(valueStoriesStoriesItemFilesFilesItem["FigureCount"].asString());
			if(!valueStoriesStoriesItemFilesFilesItem["Title"].isNull())
				filesObject.title = valueStoriesStoriesItemFilesFilesItem["Title"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["ImageWidth"].isNull())
				filesObject.imageWidth = std::stol(valueStoriesStoriesItemFilesFilesItem["ImageWidth"].asString());
			if(!valueStoriesStoriesItemFilesFilesItem["ImageHeight"].isNull())
				filesObject.imageHeight = std::stol(valueStoriesStoriesItemFilesFilesItem["ImageHeight"].asString());
			if(!valueStoriesStoriesItemFilesFilesItem["EXIF"].isNull())
				filesObject.eXIF = valueStoriesStoriesItemFilesFilesItem["EXIF"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["VideoWidth"].isNull())
				filesObject.videoWidth = std::stol(valueStoriesStoriesItemFilesFilesItem["VideoWidth"].asString());
			if(!valueStoriesStoriesItemFilesFilesItem["VideoHeight"].isNull())
				filesObject.videoHeight = std::stol(valueStoriesStoriesItemFilesFilesItem["VideoHeight"].asString());
			if(!valueStoriesStoriesItemFilesFilesItem["Artist"].isNull())
				filesObject.artist = valueStoriesStoriesItemFilesFilesItem["Artist"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["AlbumArtist"].isNull())
				filesObject.albumArtist = valueStoriesStoriesItemFilesFilesItem["AlbumArtist"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["Composer"].isNull())
				filesObject.composer = valueStoriesStoriesItemFilesFilesItem["Composer"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["Performer"].isNull())
				filesObject.performer = valueStoriesStoriesItemFilesFilesItem["Performer"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["Language"].isNull())
				filesObject.language = valueStoriesStoriesItemFilesFilesItem["Language"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["Album"].isNull())
				filesObject.album = valueStoriesStoriesItemFilesFilesItem["Album"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["PageCount"].isNull())
				filesObject.pageCount = std::stol(valueStoriesStoriesItemFilesFilesItem["PageCount"].asString());
			if(!valueStoriesStoriesItemFilesFilesItem["DocumentText"].isNull())
				filesObject.documentText = valueStoriesStoriesItemFilesFilesItem["DocumentText"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["ETag"].isNull())
				filesObject.eTag = valueStoriesStoriesItemFilesFilesItem["ETag"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["CacheControl"].isNull())
				filesObject.cacheControl = valueStoriesStoriesItemFilesFilesItem["CacheControl"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["ContentDisposition"].isNull())
				filesObject.contentDisposition = valueStoriesStoriesItemFilesFilesItem["ContentDisposition"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["ContentEncoding"].isNull())
				filesObject.contentEncoding = valueStoriesStoriesItemFilesFilesItem["ContentEncoding"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["ContentLanguage"].isNull())
				filesObject.contentLanguage = valueStoriesStoriesItemFilesFilesItem["ContentLanguage"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["AccessControlAllowOrigin"].isNull())
				filesObject.accessControlAllowOrigin = valueStoriesStoriesItemFilesFilesItem["AccessControlAllowOrigin"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["AccessControlRequestMethod"].isNull())
				filesObject.accessControlRequestMethod = valueStoriesStoriesItemFilesFilesItem["AccessControlRequestMethod"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["ServerSideEncryptionCustomerAlgorithm"].isNull())
				filesObject.serverSideEncryptionCustomerAlgorithm = valueStoriesStoriesItemFilesFilesItem["ServerSideEncryptionCustomerAlgorithm"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["ServerSideEncryption"].isNull())
				filesObject.serverSideEncryption = valueStoriesStoriesItemFilesFilesItem["ServerSideEncryption"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["ServerSideDataEncryption"].isNull())
				filesObject.serverSideDataEncryption = valueStoriesStoriesItemFilesFilesItem["ServerSideDataEncryption"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["ServerSideEncryptionKeyId"].isNull())
				filesObject.serverSideEncryptionKeyId = valueStoriesStoriesItemFilesFilesItem["ServerSideEncryptionKeyId"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["OSSStorageClass"].isNull())
				filesObject.oSSStorageClass = valueStoriesStoriesItemFilesFilesItem["OSSStorageClass"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["OSSCRC64"].isNull())
				filesObject.oSSCRC64 = valueStoriesStoriesItemFilesFilesItem["OSSCRC64"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["ObjectACL"].isNull())
				filesObject.objectACL = valueStoriesStoriesItemFilesFilesItem["ObjectACL"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["ContentMd5"].isNull())
				filesObject.contentMd5 = valueStoriesStoriesItemFilesFilesItem["ContentMd5"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["OSSUserMeta"].isNull())
				filesObject.oSSUserMeta = valueStoriesStoriesItemFilesFilesItem["OSSUserMeta"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["OSSTaggingCount"].isNull())
				filesObject.oSSTaggingCount = std::stol(valueStoriesStoriesItemFilesFilesItem["OSSTaggingCount"].asString());
			if(!valueStoriesStoriesItemFilesFilesItem["OSSTagging"].isNull())
				filesObject.oSSTagging = valueStoriesStoriesItemFilesFilesItem["OSSTagging"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["OSSExpiration"].isNull())
				filesObject.oSSExpiration = valueStoriesStoriesItemFilesFilesItem["OSSExpiration"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["OSSVersionId"].isNull())
				filesObject.oSSVersionId = valueStoriesStoriesItemFilesFilesItem["OSSVersionId"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["OSSDeleteMarker"].isNull())
				filesObject.oSSDeleteMarker = valueStoriesStoriesItemFilesFilesItem["OSSDeleteMarker"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["OSSObjectType"].isNull())
				filesObject.oSSObjectType = valueStoriesStoriesItemFilesFilesItem["OSSObjectType"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["CustomId"].isNull())
				filesObject.customId = valueStoriesStoriesItemFilesFilesItem["CustomId"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["CustomLabels"].isNull())
				filesObject.customLabels = valueStoriesStoriesItemFilesFilesItem["CustomLabels"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["StreamCount"].isNull())
				filesObject.streamCount = std::stol(valueStoriesStoriesItemFilesFilesItem["StreamCount"].asString());
			if(!valueStoriesStoriesItemFilesFilesItem["ProgramCount"].isNull())
				filesObject.programCount = std::stol(valueStoriesStoriesItemFilesFilesItem["ProgramCount"].asString());
			if(!valueStoriesStoriesItemFilesFilesItem["FormatName"].isNull())
				filesObject.formatName = valueStoriesStoriesItemFilesFilesItem["FormatName"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["FormatLongName"].isNull())
				filesObject.formatLongName = valueStoriesStoriesItemFilesFilesItem["FormatLongName"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["StartTime"].isNull())
				filesObject.startTime = valueStoriesStoriesItemFilesFilesItem["StartTime"].asString();
			if(!valueStoriesStoriesItemFilesFilesItem["Bitrate"].isNull())
				filesObject.bitrate = std::stol(valueStoriesStoriesItemFilesFilesItem["Bitrate"].asString());
			if(!valueStoriesStoriesItemFilesFilesItem["Duration"].isNull())
				filesObject.duration = valueStoriesStoriesItemFilesFilesItem["Duration"].asString();
			auto allAddresses1Node = valueStoriesStoriesItemFilesFilesItem["Addresses"]["AddressesItem"];
			for (auto valueStoriesStoriesItemFilesFilesItemAddressesAddressesItem : allAddresses1Node)
			{
				StoriesItem::FilesItem::AddressesItem addresses1Object;
				if(!valueStoriesStoriesItemFilesFilesItemAddressesAddressesItem["Language"].isNull())
					addresses1Object.language = valueStoriesStoriesItemFilesFilesItemAddressesAddressesItem["Language"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemAddressesAddressesItem["AddressLine"].isNull())
					addresses1Object.addressLine = valueStoriesStoriesItemFilesFilesItemAddressesAddressesItem["AddressLine"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemAddressesAddressesItem["Country"].isNull())
					addresses1Object.country = valueStoriesStoriesItemFilesFilesItemAddressesAddressesItem["Country"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemAddressesAddressesItem["Province"].isNull())
					addresses1Object.province = valueStoriesStoriesItemFilesFilesItemAddressesAddressesItem["Province"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemAddressesAddressesItem["City"].isNull())
					addresses1Object.city = valueStoriesStoriesItemFilesFilesItemAddressesAddressesItem["City"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemAddressesAddressesItem["District"].isNull())
					addresses1Object.district = valueStoriesStoriesItemFilesFilesItemAddressesAddressesItem["District"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemAddressesAddressesItem["Township"].isNull())
					addresses1Object.township = valueStoriesStoriesItemFilesFilesItemAddressesAddressesItem["Township"].asString();
				filesObject.addresses1.push_back(addresses1Object);
			}
			auto allFiguresNode = valueStoriesStoriesItemFilesFilesItem["Figures"]["FiguresItem"];
			for (auto valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem : allFiguresNode)
			{
				StoriesItem::FilesItem::FiguresItem figuresObject;
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["FigureId"].isNull())
					figuresObject.figureId = valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["FigureId"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["FigureConfidence"].isNull())
					figuresObject.figureConfidence = std::stof(valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["FigureConfidence"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["FigureClusterId"].isNull())
					figuresObject.figureClusterId = valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["FigureClusterId"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["FigureClusterConfidence"].isNull())
					figuresObject.figureClusterConfidence = std::stof(valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["FigureClusterConfidence"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["FigureType"].isNull())
					figuresObject.figureType = valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["FigureType"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["Age"].isNull())
					figuresObject.age = std::stol(valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["Age"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["AgeSD"].isNull())
					figuresObject.ageSD = std::stof(valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["AgeSD"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["Gender"].isNull())
					figuresObject.gender = valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["Gender"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["GenderConfidence"].isNull())
					figuresObject.genderConfidence = std::stof(valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["GenderConfidence"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["Emotion"].isNull())
					figuresObject.emotion = valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["Emotion"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["EmotionConfidence"].isNull())
					figuresObject.emotionConfidence = std::stof(valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["EmotionConfidence"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["FaceQuality"].isNull())
					figuresObject.faceQuality = std::stof(valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["FaceQuality"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["Mouth"].isNull())
					figuresObject.mouth = valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["Mouth"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["MouthConfidence"].isNull())
					figuresObject.mouthConfidence = std::stof(valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["MouthConfidence"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["Beard"].isNull())
					figuresObject.beard = valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["Beard"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["BeardConfidence"].isNull())
					figuresObject.beardConfidence = std::stof(valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["BeardConfidence"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["Hat"].isNull())
					figuresObject.hat = valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["Hat"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["HatConfidence"].isNull())
					figuresObject.hatConfidence = std::stof(valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["HatConfidence"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["Mask"].isNull())
					figuresObject.mask = valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["Mask"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["MaskConfidence"].isNull())
					figuresObject.maskConfidence = std::stof(valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["MaskConfidence"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["Glasses"].isNull())
					figuresObject.glasses = valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["Glasses"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["GlassesConfidence"].isNull())
					figuresObject.glassesConfidence = std::stof(valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["GlassesConfidence"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["Sharpness"].isNull())
					figuresObject.sharpness = std::stof(valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["Sharpness"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["Attractive"].isNull())
					figuresObject.attractive = std::stof(valueStoriesStoriesItemFilesFilesItemFiguresFiguresItem["Attractive"].asString());
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
			auto allLabelsNode = valueStoriesStoriesItemFilesFilesItem["Labels"]["LabelsItem"];
			for (auto valueStoriesStoriesItemFilesFilesItemLabelsLabelsItem : allLabelsNode)
			{
				StoriesItem::FilesItem::LabelsItem labelsObject;
				if(!valueStoriesStoriesItemFilesFilesItemLabelsLabelsItem["Language"].isNull())
					labelsObject.language = valueStoriesStoriesItemFilesFilesItemLabelsLabelsItem["Language"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemLabelsLabelsItem["LabelName"].isNull())
					labelsObject.labelName = valueStoriesStoriesItemFilesFilesItemLabelsLabelsItem["LabelName"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemLabelsLabelsItem["LabelLevel"].isNull())
					labelsObject.labelLevel = std::stol(valueStoriesStoriesItemFilesFilesItemLabelsLabelsItem["LabelLevel"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemLabelsLabelsItem["LabelConfidence"].isNull())
					labelsObject.labelConfidence = std::stof(valueStoriesStoriesItemFilesFilesItemLabelsLabelsItem["LabelConfidence"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemLabelsLabelsItem["ParentLabelName"].isNull())
					labelsObject.parentLabelName = valueStoriesStoriesItemFilesFilesItemLabelsLabelsItem["ParentLabelName"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemLabelsLabelsItem["CentricScore"].isNull())
					labelsObject.centricScore = std::stof(valueStoriesStoriesItemFilesFilesItemLabelsLabelsItem["CentricScore"].asString());
				filesObject.labels.push_back(labelsObject);
			}
			auto allCroppingSuggestionsNode = valueStoriesStoriesItemFilesFilesItem["CroppingSuggestions"]["CroppingSuggestionsItem"];
			for (auto valueStoriesStoriesItemFilesFilesItemCroppingSuggestionsCroppingSuggestionsItem : allCroppingSuggestionsNode)
			{
				StoriesItem::FilesItem::CroppingSuggestionsItem croppingSuggestionsObject;
				if(!valueStoriesStoriesItemFilesFilesItemCroppingSuggestionsCroppingSuggestionsItem["AspectRatio"].isNull())
					croppingSuggestionsObject.aspectRatio = valueStoriesStoriesItemFilesFilesItemCroppingSuggestionsCroppingSuggestionsItem["AspectRatio"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemCroppingSuggestionsCroppingSuggestionsItem["Confidence"].isNull())
					croppingSuggestionsObject.confidence = std::stof(valueStoriesStoriesItemFilesFilesItemCroppingSuggestionsCroppingSuggestionsItem["Confidence"].asString());
				auto boundary2Node = value["Boundary"];
				if(!boundary2Node["Width"].isNull())
					croppingSuggestionsObject.boundary2.width = std::stol(boundary2Node["Width"].asString());
				if(!boundary2Node["Height"].isNull())
					croppingSuggestionsObject.boundary2.height = std::stol(boundary2Node["Height"].asString());
				if(!boundary2Node["Left"].isNull())
					croppingSuggestionsObject.boundary2.left = std::stol(boundary2Node["Left"].asString());
				if(!boundary2Node["Top"].isNull())
					croppingSuggestionsObject.boundary2.top = std::stol(boundary2Node["Top"].asString());
				filesObject.croppingSuggestions.push_back(croppingSuggestionsObject);
			}
			auto allOCRContentsNode = valueStoriesStoriesItemFilesFilesItem["OCRContents"]["OCRContentsItem"];
			for (auto valueStoriesStoriesItemFilesFilesItemOCRContentsOCRContentsItem : allOCRContentsNode)
			{
				StoriesItem::FilesItem::OCRContentsItem oCRContentsObject;
				if(!valueStoriesStoriesItemFilesFilesItemOCRContentsOCRContentsItem["Language"].isNull())
					oCRContentsObject.language = valueStoriesStoriesItemFilesFilesItemOCRContentsOCRContentsItem["Language"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemOCRContentsOCRContentsItem["Contents"].isNull())
					oCRContentsObject.contents = valueStoriesStoriesItemFilesFilesItemOCRContentsOCRContentsItem["Contents"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemOCRContentsOCRContentsItem["Confidence"].isNull())
					oCRContentsObject.confidence = std::stof(valueStoriesStoriesItemFilesFilesItemOCRContentsOCRContentsItem["Confidence"].asString());
				auto boundary3Node = value["Boundary"];
				if(!boundary3Node["Width"].isNull())
					oCRContentsObject.boundary3.width = std::stol(boundary3Node["Width"].asString());
				if(!boundary3Node["Height"].isNull())
					oCRContentsObject.boundary3.height = std::stol(boundary3Node["Height"].asString());
				if(!boundary3Node["Left"].isNull())
					oCRContentsObject.boundary3.left = std::stol(boundary3Node["Left"].asString());
				if(!boundary3Node["Top"].isNull())
					oCRContentsObject.boundary3.top = std::stol(boundary3Node["Top"].asString());
				filesObject.oCRContents.push_back(oCRContentsObject);
			}
			auto allVideoStreamsNode = valueStoriesStoriesItemFilesFilesItem["VideoStreams"]["VideoStreamsItem"];
			for (auto valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem : allVideoStreamsNode)
			{
				StoriesItem::FilesItem::VideoStreamsItem videoStreamsObject;
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["Index"].isNull())
					videoStreamsObject.index = std::stol(valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["Index"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["Language"].isNull())
					videoStreamsObject.language = valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["Language"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["CodecName"].isNull())
					videoStreamsObject.codecName = valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["CodecName"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["CodecLongName"].isNull())
					videoStreamsObject.codecLongName = valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["CodecLongName"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["Profile"].isNull())
					videoStreamsObject.profile = valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["Profile"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["CodecTimeBase"].isNull())
					videoStreamsObject.codecTimeBase = valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["CodecTimeBase"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["CodecTagString"].isNull())
					videoStreamsObject.codecTagString = valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["CodecTagString"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["CodecTag"].isNull())
					videoStreamsObject.codecTag = valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["CodecTag"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["Width"].isNull())
					videoStreamsObject.width = std::stol(valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["Width"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["Height"].isNull())
					videoStreamsObject.height = std::stol(valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["Height"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["HasBFrames"].isNull())
					videoStreamsObject.hasBFrames = std::stol(valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["HasBFrames"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["SampleAspectRatio"].isNull())
					videoStreamsObject.sampleAspectRatio = valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["SampleAspectRatio"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["DisplayAspectRatio"].isNull())
					videoStreamsObject.displayAspectRatio = valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["DisplayAspectRatio"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["PixelFormat"].isNull())
					videoStreamsObject.pixelFormat = valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["PixelFormat"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["Level"].isNull())
					videoStreamsObject.level = std::stol(valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["Level"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["FrameRate"].isNull())
					videoStreamsObject.frameRate = valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["FrameRate"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["AverageFrameRate"].isNull())
					videoStreamsObject.averageFrameRate = valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["AverageFrameRate"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["TimeBase"].isNull())
					videoStreamsObject.timeBase = valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["TimeBase"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["StartTime"].isNull())
					videoStreamsObject.startTime = valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["StartTime"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["Duration"].isNull())
					videoStreamsObject.duration = valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["Duration"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["Bitrate"].isNull())
					videoStreamsObject.bitrate = std::stol(valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["Bitrate"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["FrameCount"].isNull())
					videoStreamsObject.frameCount = std::stol(valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["FrameCount"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["Rotate"].isNull())
					videoStreamsObject.rotate = valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["Rotate"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["BitDepth"].isNull())
					videoStreamsObject.bitDepth = std::stol(valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["BitDepth"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["ColorSpace"].isNull())
					videoStreamsObject.colorSpace = valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["ColorSpace"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["ColorRange"].isNull())
					videoStreamsObject.colorRange = valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["ColorRange"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["ColorTransfer"].isNull())
					videoStreamsObject.colorTransfer = valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["ColorTransfer"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["ColorPrimaries"].isNull())
					videoStreamsObject.colorPrimaries = valueStoriesStoriesItemFilesFilesItemVideoStreamsVideoStreamsItem["ColorPrimaries"].asString();
				filesObject.videoStreams.push_back(videoStreamsObject);
			}
			auto allSubtitlesNode = valueStoriesStoriesItemFilesFilesItem["Subtitles"]["SubtitlesItem"];
			for (auto valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem : allSubtitlesNode)
			{
				StoriesItem::FilesItem::SubtitlesItem subtitlesObject;
				if(!valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["Index"].isNull())
					subtitlesObject.index = std::stol(valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["Index"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["Language"].isNull())
					subtitlesObject.language = valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["Language"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["CodecName"].isNull())
					subtitlesObject.codecName = valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["CodecName"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["CodecLongName"].isNull())
					subtitlesObject.codecLongName = valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["CodecLongName"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["CodecTagString"].isNull())
					subtitlesObject.codecTagString = valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["CodecTagString"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["CodecTag"].isNull())
					subtitlesObject.codecTag = valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["CodecTag"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["StartTime"].isNull())
					subtitlesObject.startTime = valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["StartTime"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["Duration"].isNull())
					subtitlesObject.duration = valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["Duration"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["Bitrate"].isNull())
					subtitlesObject.bitrate = std::stol(valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["Bitrate"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["Content"].isNull())
					subtitlesObject.content = valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["Content"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["Width"].isNull())
					subtitlesObject.width = std::stol(valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["Width"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["Height"].isNull())
					subtitlesObject.height = std::stol(valueStoriesStoriesItemFilesFilesItemSubtitlesSubtitlesItem["Height"].asString());
				filesObject.subtitles.push_back(subtitlesObject);
			}
			auto allAudioStreamsNode = valueStoriesStoriesItemFilesFilesItem["AudioStreams"]["AudioStreamsItem"];
			for (auto valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem : allAudioStreamsNode)
			{
				StoriesItem::FilesItem::AudioStreamsItem audioStreamsObject;
				if(!valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["Index"].isNull())
					audioStreamsObject.index = std::stol(valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["Index"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["Language"].isNull())
					audioStreamsObject.language = valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["Language"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["CodecName"].isNull())
					audioStreamsObject.codecName = valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["CodecName"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["CodecLongName"].isNull())
					audioStreamsObject.codecLongName = valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["CodecLongName"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["CodecTimeBase"].isNull())
					audioStreamsObject.codecTimeBase = valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["CodecTimeBase"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["CodecTagString"].isNull())
					audioStreamsObject.codecTagString = valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["CodecTagString"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["CodecTag"].isNull())
					audioStreamsObject.codecTag = valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["CodecTag"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["TimeBase"].isNull())
					audioStreamsObject.timeBase = valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["TimeBase"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["StartTime"].isNull())
					audioStreamsObject.startTime = valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["StartTime"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["Duration"].isNull())
					audioStreamsObject.duration = valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["Duration"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["Bitrate"].isNull())
					audioStreamsObject.bitrate = std::stol(valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["Bitrate"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["FrameCount"].isNull())
					audioStreamsObject.frameCount = std::stol(valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["FrameCount"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["Lyric"].isNull())
					audioStreamsObject.lyric = valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["Lyric"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["SampleFormat"].isNull())
					audioStreamsObject.sampleFormat = valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["SampleFormat"].asString();
				if(!valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["SampleRate"].isNull())
					audioStreamsObject.sampleRate = std::stol(valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["SampleRate"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["Channels"].isNull())
					audioStreamsObject.channels = std::stol(valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["Channels"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["ChannelLayout"].isNull())
					audioStreamsObject.channelLayout = valueStoriesStoriesItemFilesFilesItemAudioStreamsAudioStreamsItem["ChannelLayout"].asString();
				filesObject.audioStreams.push_back(audioStreamsObject);
			}
			auto allAudioCoversNode = valueStoriesStoriesItemFilesFilesItem["AudioCovers"]["AudioCoversItem"];
			for (auto valueStoriesStoriesItemFilesFilesItemAudioCoversAudioCoversItem : allAudioCoversNode)
			{
				StoriesItem::FilesItem::AudioCoversItem audioCoversObject;
				if(!valueStoriesStoriesItemFilesFilesItemAudioCoversAudioCoversItem["ImageWidth"].isNull())
					audioCoversObject.imageWidth = std::stol(valueStoriesStoriesItemFilesFilesItemAudioCoversAudioCoversItem["ImageWidth"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemAudioCoversAudioCoversItem["ImageHeight"].isNull())
					audioCoversObject.imageHeight = std::stol(valueStoriesStoriesItemFilesFilesItemAudioCoversAudioCoversItem["ImageHeight"].asString());
				if(!valueStoriesStoriesItemFilesFilesItemAudioCoversAudioCoversItem["EXIF"].isNull())
					audioCoversObject.eXIF = valueStoriesStoriesItemFilesFilesItemAudioCoversAudioCoversItem["EXIF"].asString();
				auto allCroppingSuggestions5Node = valueStoriesStoriesItemFilesFilesItemAudioCoversAudioCoversItem["CroppingSuggestions"]["CroppingSuggestionsItem"];
				for (auto valueStoriesStoriesItemFilesFilesItemAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem : allCroppingSuggestions5Node)
				{
					StoriesItem::FilesItem::AudioCoversItem::CroppingSuggestionsItem7 croppingSuggestions5Object;
					if(!valueStoriesStoriesItemFilesFilesItemAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem["AspectRatio"].isNull())
						croppingSuggestions5Object.aspectRatio = valueStoriesStoriesItemFilesFilesItemAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem["AspectRatio"].asString();
					if(!valueStoriesStoriesItemFilesFilesItemAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem["Confidence"].isNull())
						croppingSuggestions5Object.confidence = std::stof(valueStoriesStoriesItemFilesFilesItemAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem["Confidence"].asString());
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
				auto allOCRContents6Node = valueStoriesStoriesItemFilesFilesItemAudioCoversAudioCoversItem["OCRContents"]["OCRContentsItem"];
				for (auto valueStoriesStoriesItemFilesFilesItemAudioCoversAudioCoversItemOCRContentsOCRContentsItem : allOCRContents6Node)
				{
					StoriesItem::FilesItem::AudioCoversItem::OCRContentsItem9 oCRContents6Object;
					if(!valueStoriesStoriesItemFilesFilesItemAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Language"].isNull())
						oCRContents6Object.language = valueStoriesStoriesItemFilesFilesItemAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Language"].asString();
					if(!valueStoriesStoriesItemFilesFilesItemAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Contents"].isNull())
						oCRContents6Object.contents = valueStoriesStoriesItemFilesFilesItemAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Contents"].asString();
					if(!valueStoriesStoriesItemFilesFilesItemAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Confidence"].isNull())
						oCRContents6Object.confidence = std::stof(valueStoriesStoriesItemFilesFilesItemAudioCoversAudioCoversItemOCRContentsOCRContentsItem["Confidence"].asString());
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
				filesObject.audioCovers.push_back(audioCoversObject);
			}
			auto imageScoreNode = value["ImageScore"];
			if(!imageScoreNode["OverallQualityScore"].isNull())
				filesObject.imageScore.overallQualityScore = std::stof(imageScoreNode["OverallQualityScore"].asString());
			storiesObject.files.push_back(filesObject);
		}
		auto allAddressesNode = valueStoriesStoriesItem["Addresses"]["AddressesItem"];
		for (auto valueStoriesStoriesItemAddressesAddressesItem : allAddressesNode)
		{
			StoriesItem::AddressesItem11 addressesObject;
			if(!valueStoriesStoriesItemAddressesAddressesItem["Language"].isNull())
				addressesObject.language = valueStoriesStoriesItemAddressesAddressesItem["Language"].asString();
			if(!valueStoriesStoriesItemAddressesAddressesItem["AddressLine"].isNull())
				addressesObject.addressLine = valueStoriesStoriesItemAddressesAddressesItem["AddressLine"].asString();
			if(!valueStoriesStoriesItemAddressesAddressesItem["Country"].isNull())
				addressesObject.country = valueStoriesStoriesItemAddressesAddressesItem["Country"].asString();
			if(!valueStoriesStoriesItemAddressesAddressesItem["Province"].isNull())
				addressesObject.province = valueStoriesStoriesItemAddressesAddressesItem["Province"].asString();
			if(!valueStoriesStoriesItemAddressesAddressesItem["City"].isNull())
				addressesObject.city = valueStoriesStoriesItemAddressesAddressesItem["City"].asString();
			if(!valueStoriesStoriesItemAddressesAddressesItem["District"].isNull())
				addressesObject.district = valueStoriesStoriesItemAddressesAddressesItem["District"].asString();
			if(!valueStoriesStoriesItemAddressesAddressesItem["Township"].isNull())
				addressesObject.township = valueStoriesStoriesItemAddressesAddressesItem["Township"].asString();
			storiesObject.addresses.push_back(addressesObject);
		}
		auto coverNode = value["Cover"];
		if(!coverNode["OwnerId"].isNull())
			storiesObject.cover.ownerId = coverNode["OwnerId"].asString();
		if(!coverNode["ProjectName"].isNull())
			storiesObject.cover.projectName = coverNode["ProjectName"].asString();
		if(!coverNode["DatasetName"].isNull())
			storiesObject.cover.datasetName = coverNode["DatasetName"].asString();
		if(!coverNode["ObjectType"].isNull())
			storiesObject.cover.objectType = coverNode["ObjectType"].asString();
		if(!coverNode["ObjectId"].isNull())
			storiesObject.cover.objectId = coverNode["ObjectId"].asString();
		if(!coverNode["UpdateTime"].isNull())
			storiesObject.cover.updateTime = coverNode["UpdateTime"].asString();
		if(!coverNode["CreateTime"].isNull())
			storiesObject.cover.createTime = coverNode["CreateTime"].asString();
		if(!coverNode["URI"].isNull())
			storiesObject.cover.uRI = coverNode["URI"].asString();
		if(!coverNode["OSSURI"].isNull())
			storiesObject.cover.oSSURI = coverNode["OSSURI"].asString();
		if(!coverNode["Filename"].isNull())
			storiesObject.cover.filename = coverNode["Filename"].asString();
		if(!coverNode["MediaType"].isNull())
			storiesObject.cover.mediaType = coverNode["MediaType"].asString();
		if(!coverNode["ContentType"].isNull())
			storiesObject.cover.contentType = coverNode["ContentType"].asString();
		if(!coverNode["Size"].isNull())
			storiesObject.cover.size = std::stol(coverNode["Size"].asString());
		if(!coverNode["FileHash"].isNull())
			storiesObject.cover.fileHash = coverNode["FileHash"].asString();
		if(!coverNode["FileModifiedTime"].isNull())
			storiesObject.cover.fileModifiedTime = coverNode["FileModifiedTime"].asString();
		if(!coverNode["FileCreateTime"].isNull())
			storiesObject.cover.fileCreateTime = coverNode["FileCreateTime"].asString();
		if(!coverNode["FileAccessTime"].isNull())
			storiesObject.cover.fileAccessTime = coverNode["FileAccessTime"].asString();
		if(!coverNode["ProduceTime"].isNull())
			storiesObject.cover.produceTime = coverNode["ProduceTime"].asString();
		if(!coverNode["LatLong"].isNull())
			storiesObject.cover.latLong = coverNode["LatLong"].asString();
		if(!coverNode["Timezone"].isNull())
			storiesObject.cover.timezone = coverNode["Timezone"].asString();
		if(!coverNode["TravelClusterId"].isNull())
			storiesObject.cover.travelClusterId = coverNode["TravelClusterId"].asString();
		if(!coverNode["Orientation"].isNull())
			storiesObject.cover.orientation = std::stol(coverNode["Orientation"].asString());
		if(!coverNode["FigureCount"].isNull())
			storiesObject.cover.figureCount = std::stol(coverNode["FigureCount"].asString());
		if(!coverNode["Title"].isNull())
			storiesObject.cover.title = coverNode["Title"].asString();
		if(!coverNode["ImageWidth"].isNull())
			storiesObject.cover.imageWidth = std::stol(coverNode["ImageWidth"].asString());
		if(!coverNode["ImageHeight"].isNull())
			storiesObject.cover.imageHeight = std::stol(coverNode["ImageHeight"].asString());
		if(!coverNode["EXIF"].isNull())
			storiesObject.cover.eXIF = coverNode["EXIF"].asString();
		if(!coverNode["VideoWidth"].isNull())
			storiesObject.cover.videoWidth = std::stol(coverNode["VideoWidth"].asString());
		if(!coverNode["VideoHeight"].isNull())
			storiesObject.cover.videoHeight = std::stol(coverNode["VideoHeight"].asString());
		if(!coverNode["Artist"].isNull())
			storiesObject.cover.artist = coverNode["Artist"].asString();
		if(!coverNode["AlbumArtist"].isNull())
			storiesObject.cover.albumArtist = coverNode["AlbumArtist"].asString();
		if(!coverNode["Composer"].isNull())
			storiesObject.cover.composer = coverNode["Composer"].asString();
		if(!coverNode["Performer"].isNull())
			storiesObject.cover.performer = coverNode["Performer"].asString();
		if(!coverNode["Language"].isNull())
			storiesObject.cover.language = coverNode["Language"].asString();
		if(!coverNode["Album"].isNull())
			storiesObject.cover.album = coverNode["Album"].asString();
		if(!coverNode["PageCount"].isNull())
			storiesObject.cover.pageCount = std::stol(coverNode["PageCount"].asString());
		if(!coverNode["DocumentText"].isNull())
			storiesObject.cover.documentText = coverNode["DocumentText"].asString();
		if(!coverNode["ETag"].isNull())
			storiesObject.cover.eTag = coverNode["ETag"].asString();
		if(!coverNode["CacheControl"].isNull())
			storiesObject.cover.cacheControl = coverNode["CacheControl"].asString();
		if(!coverNode["ContentDisposition"].isNull())
			storiesObject.cover.contentDisposition = coverNode["ContentDisposition"].asString();
		if(!coverNode["ContentEncoding"].isNull())
			storiesObject.cover.contentEncoding = coverNode["ContentEncoding"].asString();
		if(!coverNode["ContentLanguage"].isNull())
			storiesObject.cover.contentLanguage = coverNode["ContentLanguage"].asString();
		if(!coverNode["AccessControlAllowOrigin"].isNull())
			storiesObject.cover.accessControlAllowOrigin = coverNode["AccessControlAllowOrigin"].asString();
		if(!coverNode["AccessControlRequestMethod"].isNull())
			storiesObject.cover.accessControlRequestMethod = coverNode["AccessControlRequestMethod"].asString();
		if(!coverNode["ServerSideEncryptionCustomerAlgorithm"].isNull())
			storiesObject.cover.serverSideEncryptionCustomerAlgorithm = coverNode["ServerSideEncryptionCustomerAlgorithm"].asString();
		if(!coverNode["ServerSideEncryption"].isNull())
			storiesObject.cover.serverSideEncryption = coverNode["ServerSideEncryption"].asString();
		if(!coverNode["ServerSideDataEncryption"].isNull())
			storiesObject.cover.serverSideDataEncryption = coverNode["ServerSideDataEncryption"].asString();
		if(!coverNode["ServerSideEncryptionKeyId"].isNull())
			storiesObject.cover.serverSideEncryptionKeyId = coverNode["ServerSideEncryptionKeyId"].asString();
		if(!coverNode["OSSStorageClass"].isNull())
			storiesObject.cover.oSSStorageClass = coverNode["OSSStorageClass"].asString();
		if(!coverNode["OSSCRC64"].isNull())
			storiesObject.cover.oSSCRC64 = coverNode["OSSCRC64"].asString();
		if(!coverNode["ObjectACL"].isNull())
			storiesObject.cover.objectACL = coverNode["ObjectACL"].asString();
		if(!coverNode["ContentMd5"].isNull())
			storiesObject.cover.contentMd5 = coverNode["ContentMd5"].asString();
		if(!coverNode["OSSUserMeta"].isNull())
			storiesObject.cover.oSSUserMeta = coverNode["OSSUserMeta"].asString();
		if(!coverNode["OSSTaggingCount"].isNull())
			storiesObject.cover.oSSTaggingCount = std::stol(coverNode["OSSTaggingCount"].asString());
		if(!coverNode["OSSTagging"].isNull())
			storiesObject.cover.oSSTagging = coverNode["OSSTagging"].asString();
		if(!coverNode["OSSExpiration"].isNull())
			storiesObject.cover.oSSExpiration = coverNode["OSSExpiration"].asString();
		if(!coverNode["OSSVersionId"].isNull())
			storiesObject.cover.oSSVersionId = coverNode["OSSVersionId"].asString();
		if(!coverNode["OSSDeleteMarker"].isNull())
			storiesObject.cover.oSSDeleteMarker = coverNode["OSSDeleteMarker"].asString();
		if(!coverNode["OSSObjectType"].isNull())
			storiesObject.cover.oSSObjectType = coverNode["OSSObjectType"].asString();
		if(!coverNode["CustomId"].isNull())
			storiesObject.cover.customId = coverNode["CustomId"].asString();
		if(!coverNode["CustomLabels"].isNull())
			storiesObject.cover.customLabels = coverNode["CustomLabels"].asString();
		if(!coverNode["StreamCount"].isNull())
			storiesObject.cover.streamCount = std::stol(coverNode["StreamCount"].asString());
		if(!coverNode["ProgramCount"].isNull())
			storiesObject.cover.programCount = std::stol(coverNode["ProgramCount"].asString());
		if(!coverNode["FormatName"].isNull())
			storiesObject.cover.formatName = coverNode["FormatName"].asString();
		if(!coverNode["FormatLongName"].isNull())
			storiesObject.cover.formatLongName = coverNode["FormatLongName"].asString();
		if(!coverNode["StartTime"].isNull())
			storiesObject.cover.startTime = coverNode["StartTime"].asString();
		if(!coverNode["Bitrate"].isNull())
			storiesObject.cover.bitrate = std::stol(coverNode["Bitrate"].asString());
		if(!coverNode["Duration"].isNull())
			storiesObject.cover.duration = coverNode["Duration"].asString();
		auto allAddresses13Node = coverNode["Addresses"]["AddressesItem"];
		for (auto coverNodeAddressesAddressesItem : allAddresses13Node)
		{
			StoriesItem::Cover::AddressesItem22 addressesItem22Object;
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
			storiesObject.cover.addresses13.push_back(addressesItem22Object);
		}
		auto allFigures14Node = coverNode["Figures"]["FiguresItem"];
		for (auto coverNodeFiguresFiguresItem : allFigures14Node)
		{
			StoriesItem::Cover::FiguresItem23 figuresItem23Object;
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
			storiesObject.cover.figures14.push_back(figuresItem23Object);
		}
		auto allLabels15Node = coverNode["Labels"]["LabelsItem"];
		for (auto coverNodeLabelsLabelsItem : allLabels15Node)
		{
			StoriesItem::Cover::LabelsItem26 labelsItem26Object;
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
			storiesObject.cover.labels15.push_back(labelsItem26Object);
		}
		auto allCroppingSuggestions16Node = coverNode["CroppingSuggestions"]["CroppingSuggestionsItem"];
		for (auto coverNodeCroppingSuggestionsCroppingSuggestionsItem : allCroppingSuggestions16Node)
		{
			StoriesItem::Cover::CroppingSuggestionsItem27 croppingSuggestionsItem27Object;
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
			storiesObject.cover.croppingSuggestions16.push_back(croppingSuggestionsItem27Object);
		}
		auto allOCRContents17Node = coverNode["OCRContents"]["OCRContentsItem"];
		for (auto coverNodeOCRContentsOCRContentsItem : allOCRContents17Node)
		{
			StoriesItem::Cover::OCRContentsItem29 oCRContentsItem29Object;
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
			storiesObject.cover.oCRContents17.push_back(oCRContentsItem29Object);
		}
		auto allVideoStreams18Node = coverNode["VideoStreams"]["VideoStreamsItem"];
		for (auto coverNodeVideoStreamsVideoStreamsItem : allVideoStreams18Node)
		{
			StoriesItem::Cover::VideoStreamsItem31 videoStreamsItem31Object;
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
			storiesObject.cover.videoStreams18.push_back(videoStreamsItem31Object);
		}
		auto allSubtitles19Node = coverNode["Subtitles"]["SubtitlesItem"];
		for (auto coverNodeSubtitlesSubtitlesItem : allSubtitles19Node)
		{
			StoriesItem::Cover::SubtitlesItem32 subtitlesItem32Object;
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
			storiesObject.cover.subtitles19.push_back(subtitlesItem32Object);
		}
		auto allAudioStreams20Node = coverNode["AudioStreams"]["AudioStreamsItem"];
		for (auto coverNodeAudioStreamsAudioStreamsItem : allAudioStreams20Node)
		{
			StoriesItem::Cover::AudioStreamsItem33 audioStreamsItem33Object;
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
			storiesObject.cover.audioStreams20.push_back(audioStreamsItem33Object);
		}
		auto allAudioCovers21Node = coverNode["AudioCovers"]["AudioCoversItem"];
		for (auto coverNodeAudioCoversAudioCoversItem : allAudioCovers21Node)
		{
			StoriesItem::Cover::AudioCoversItem34 audioCoversItem34Object;
			if(!coverNodeAudioCoversAudioCoversItem["ImageWidth"].isNull())
				audioCoversItem34Object.imageWidth = std::stol(coverNodeAudioCoversAudioCoversItem["ImageWidth"].asString());
			if(!coverNodeAudioCoversAudioCoversItem["ImageHeight"].isNull())
				audioCoversItem34Object.imageHeight = std::stol(coverNodeAudioCoversAudioCoversItem["ImageHeight"].asString());
			if(!coverNodeAudioCoversAudioCoversItem["EXIF"].isNull())
				audioCoversItem34Object.eXIF = coverNodeAudioCoversAudioCoversItem["EXIF"].asString();
			auto allCroppingSuggestions36Node = coverNodeAudioCoversAudioCoversItem["CroppingSuggestions"]["CroppingSuggestionsItem"];
			for (auto coverNodeAudioCoversAudioCoversItemCroppingSuggestionsCroppingSuggestionsItem : allCroppingSuggestions36Node)
			{
				StoriesItem::Cover::AudioCoversItem34::CroppingSuggestionsItem38 croppingSuggestions36Object;
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
				StoriesItem::Cover::AudioCoversItem34::OCRContentsItem40 oCRContents37Object;
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
			storiesObject.cover.audioCovers21.push_back(audioCoversItem34Object);
		}
		auto imageScore12Node = coverNode["ImageScore"];
		if(!imageScore12Node["OverallQualityScore"].isNull())
			storiesObject.cover.imageScore12.overallQualityScore = std::stof(imageScore12Node["OverallQualityScore"].asString());
		auto allFigureClusterIds = value["FigureClusterIds"]["null"];
		for (auto value : allFigureClusterIds)
			storiesObject.figureClusterIds.push_back(value.asString());
		stories_.push_back(storiesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string QueryStoriesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<QueryStoriesResult::StoriesItem> QueryStoriesResult::getStories()const
{
	return stories_;
}

