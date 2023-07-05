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

#ifndef ALIBABACLOUD_IMM_MODEL_GETSTORYRESULT_H_
#define ALIBABACLOUD_IMM_MODEL_GETSTORYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imm/ImmExport.h>

namespace AlibabaCloud
{
	namespace Imm
	{
		namespace Model
		{
			class ALIBABACLOUD_IMM_EXPORT GetStoryResult : public ServiceResult
			{
			public:
				struct Story
				{
					struct Cover
					{
						struct ImageScore12
						{
							float overallQualityScore;
						};
						struct AddressesItem22
						{
							std::string language;
							std::string township;
							std::string addressLine;
							std::string country;
							std::string city;
							std::string district;
							std::string province;
						};
						struct FiguresItem23
						{
							struct Boundary24
							{
								long left;
								long top;
								long height;
								long width;
							};
							struct HeadPose25
							{
								float pitch;
								float roll;
								float yaw;
							};
							std::string beard;
							float maskConfidence;
							HeadPose25 headPose25;
							std::string gender;
							float figureClusterConfidence;
							float beardConfidence;
							std::string figureId;
							std::string mouth;
							std::string emotion;
							long age;
							float mouthConfidence;
							std::string figureType;
							float genderConfidence;
							std::string mask;
							float emotionConfidence;
							float hatConfidence;
							float glassesConfidence;
							float sharpness;
							Boundary24 boundary24;
							std::string figureClusterId;
							float faceQuality;
							float attractive;
							float ageSD;
							std::string glasses;
							float figureConfidence;
							std::string hat;
						};
						struct LabelsItem26
						{
							float centricScore;
							std::string language;
							float labelConfidence;
							std::string labelName;
							long labelLevel;
							std::string parentLabelName;
						};
						struct CroppingSuggestionsItem27
						{
							struct Boundary28
							{
								long left;
								long top;
								long height;
								long width;
							};
							std::string aspectRatio;
							Boundary28 boundary28;
							float confidence;
						};
						struct OCRContentsItem29
						{
							struct Boundary30
							{
								long left;
								long top;
								long height;
								long width;
							};
							std::string contents;
							Boundary30 boundary30;
							std::string language;
							float confidence;
						};
						struct VideoStreamsItem31
						{
							std::string codecTimeBase;
							std::string rotate;
							std::string sampleAspectRatio;
							std::string colorSpace;
							long index;
							std::string colorRange;
							std::string codecName;
							long bitDepth;
							std::string profile;
							std::string colorPrimaries;
							std::string language;
							long height;
							std::string pixelFormat;
							long width;
							std::string timeBase;
							std::string colorTransfer;
							std::string codecTag;
							std::string frameRate;
							long frameCount;
							double startTime;
							double duration;
							long bitrate;
							std::string displayAspectRatio;
							std::string codecTagString;
							long hasBFrames;
							std::string averageFrameRate;
							std::string codecLongName;
							long level;
						};
						struct SubtitlesItem32
						{
							std::string codecTag;
							std::string codecTagString;
							std::string language;
							std::string content;
							std::string codecLongName;
							double startTime;
							long index;
							double duration;
							long height;
							std::string codecName;
							long bitrate;
							long width;
						};
						struct AudioStreamsItem33
						{
							std::string codecTag;
							std::string codecTimeBase;
							std::string channelLayout;
							long frameCount;
							double startTime;
							long index;
							double duration;
							std::string codecName;
							long bitrate;
							std::string sampleFormat;
							long channels;
							std::string codecTagString;
							long sampleRate;
							std::string language;
							std::string codecLongName;
							std::string lyric;
							std::string timeBase;
						};
						struct AudioCoversItem34
						{
							struct ImageScore35
							{
								float overallQualityScore;
							};
							struct CroppingSuggestionsItem38
							{
								struct Boundary39
								{
									long left;
									long top;
									long height;
									long width;
								};
								std::string aspectRatio;
								Boundary39 boundary39;
								float confidence;
							};
							struct OCRContentsItem40
							{
								struct Boundary41
								{
									long left;
									long top;
									long height;
									long width;
								};
								std::string contents;
								Boundary41 boundary41;
								std::string language;
								float confidence;
							};
							std::string eXIF;
							long imageHeight;
							long imageWidth;
							ImageScore35 imageScore35;
							std::vector<AudioCoversItem34::CroppingSuggestionsItem38> croppingSuggestions36;
							std::vector<AudioCoversItem34::OCRContentsItem40> oCRContents37;
						};
						std::string produceTime;
						std::string timezone;
						std::string artist;
						std::vector<FiguresItem23> figures14;
						std::string objectACL;
						std::string contentType;
						std::string accessControlRequestMethod;
						std::vector<AudioStreamsItem33> audioStreams20;
						long size;
						std::string album;
						std::string contentLanguage;
						std::string oSSTagging;
						std::vector<LabelsItem26> labels15;
						long streamCount;
						std::string customLabels;
						long videoHeight;
						long imageWidth;
						std::string oSSStorageClass;
						std::string mediaType;
						std::string oSSDeleteMarker;
						std::vector<OCRContentsItem29> oCRContents17;
						std::string formatLongName;
						long programCount;
						double startTime;
						std::string filename;
						double duration;
						long orientation;
						std::string eXIF;
						std::string performer;
						long imageHeight;
						long pageCount;
						long figureCount;
						std::string eTag;
						std::string datasetName;
						std::string fileHash;
						std::string cacheControl;
						std::string oSSVersionId;
						std::string fileAccessTime;
						std::string projectName;
						long videoWidth;
						std::vector<AudioCoversItem34> audioCovers21;
						std::string contentEncoding;
						std::string uRI;
						std::vector<SubtitlesItem32> subtitles19;
						std::string objectType;
						std::string serverSideEncryptionKeyId;
						std::string ownerId;
						std::string fileModifiedTime;
						std::string language;
						std::string fileCreateTime;
						ImageScore12 imageScore12;
						std::string serverSideEncryption;
						std::string formatName;
						std::string composer;
						std::string objectId;
						std::vector<VideoStreamsItem31> videoStreams18;
						std::string createTime;
						std::string title;
						std::string travelClusterId;
						std::string oSSExpiration;
						std::string serverSideEncryptionCustomerAlgorithm;
						long bitrate;
						std::string albumArtist;
						std::string documentText;
						std::string contentMd5;
						std::string contentDisposition;
						std::string customId;
						std::string updateTime;
						std::string oSSUserMeta;
						std::string accessControlAllowOrigin;
						std::string oSSCRC64;
						long oSSTaggingCount;
						std::vector<CroppingSuggestionsItem27> croppingSuggestions16;
						std::string oSSURI;
						std::string serverSideDataEncryption;
						std::vector<AddressesItem22> addresses13;
						std::string latLong;
						std::string oSSObjectType;
					};
					struct FilesItem
					{
						struct ImageScore
						{
							float overallQualityScore;
						};
						struct AddressesItem
						{
							std::string language;
							std::string township;
							std::string addressLine;
							std::string country;
							std::string city;
							std::string district;
							std::string province;
						};
						struct FiguresItem
						{
							struct Boundary
							{
								long left;
								long top;
								long height;
								long width;
							};
							struct HeadPose
							{
								float pitch;
								float roll;
								float yaw;
							};
							std::string beard;
							float maskConfidence;
							std::string gender;
							float figureClusterConfidence;
							Boundary boundary;
							float beardConfidence;
							std::string figureId;
							std::string mouth;
							std::string emotion;
							long age;
							float mouthConfidence;
							HeadPose headPose;
							std::string figureType;
							float genderConfidence;
							std::string mask;
							float emotionConfidence;
							float hatConfidence;
							float glassesConfidence;
							float sharpness;
							std::string figureClusterId;
							float faceQuality;
							float attractive;
							float ageSD;
							std::string glasses;
							float figureConfidence;
							std::string hat;
						};
						struct LabelsItem
						{
							float centricScore;
							std::string language;
							float labelConfidence;
							std::string labelName;
							long labelLevel;
							std::string parentLabelName;
						};
						struct CroppingSuggestionsItem
						{
							struct Boundary2
							{
								long left;
								long top;
								long height;
								long width;
							};
							std::string aspectRatio;
							float confidence;
							Boundary2 boundary2;
						};
						struct OCRContentsItem
						{
							struct Boundary3
							{
								long left;
								long top;
								long height;
								long width;
							};
							std::string contents;
							std::string language;
							float confidence;
							Boundary3 boundary3;
						};
						struct VideoStreamsItem
						{
							std::string codecTimeBase;
							std::string rotate;
							std::string sampleAspectRatio;
							std::string colorSpace;
							long index;
							std::string colorRange;
							std::string codecName;
							long bitDepth;
							std::string profile;
							std::string colorPrimaries;
							std::string language;
							long height;
							std::string pixelFormat;
							long width;
							std::string timeBase;
							std::string colorTransfer;
							std::string codecTag;
							std::string frameRate;
							long frameCount;
							double startTime;
							double duration;
							long bitrate;
							std::string displayAspectRatio;
							std::string codecTagString;
							long hasBFrames;
							std::string averageFrameRate;
							std::string codecLongName;
							long level;
						};
						struct SubtitlesItem
						{
							std::string codecTag;
							std::string codecTagString;
							std::string language;
							std::string content;
							std::string codecLongName;
							double startTime;
							long index;
							double duration;
							long height;
							std::string codecName;
							long bitrate;
							long width;
						};
						struct AudioStreamsItem
						{
							std::string codecTag;
							std::string codecTimeBase;
							std::string channelLayout;
							long frameCount;
							double startTime;
							long index;
							double duration;
							std::string codecName;
							long bitrate;
							std::string sampleFormat;
							long channels;
							std::string codecTagString;
							long sampleRate;
							std::string language;
							std::string codecLongName;
							std::string lyric;
							std::string timeBase;
						};
						struct AudioCoversItem
						{
							struct ImageScore4
							{
								float overallQualityScore;
							};
							struct CroppingSuggestionsItem7
							{
								struct Boundary8
								{
									long left;
									long top;
									long height;
									long width;
								};
								std::string aspectRatio;
								float confidence;
								Boundary8 boundary8;
							};
							struct OCRContentsItem9
							{
								struct Boundary10
								{
									long left;
									long top;
									long height;
									long width;
								};
								std::string contents;
								std::string language;
								float confidence;
								Boundary10 boundary10;
							};
							std::string eXIF;
							long imageHeight;
							long imageWidth;
							std::vector<AudioCoversItem::CroppingSuggestionsItem7> croppingSuggestions5;
							ImageScore4 imageScore4;
							std::vector<AudioCoversItem::OCRContentsItem9> oCRContents6;
						};
						std::string produceTime;
						std::string timezone;
						std::string artist;
						std::string objectACL;
						std::string contentType;
						std::string accessControlRequestMethod;
						long size;
						std::string album;
						std::string contentLanguage;
						std::string oSSTagging;
						long streamCount;
						std::string customLabels;
						long videoHeight;
						long imageWidth;
						std::vector<FilesItem::SubtitlesItem> subtitles;
						std::string oSSStorageClass;
						std::string mediaType;
						std::string oSSDeleteMarker;
						std::string formatLongName;
						long programCount;
						double startTime;
						std::string filename;
						std::vector<FilesItem::LabelsItem> labels;
						double duration;
						long orientation;
						std::vector<FilesItem::AddressesItem> addresses1;
						std::vector<FilesItem::CroppingSuggestionsItem> croppingSuggestions;
						std::string eXIF;
						std::string performer;
						long imageHeight;
						long pageCount;
						ImageScore imageScore;
						long figureCount;
						std::string eTag;
						std::string datasetName;
						std::string fileHash;
						std::string cacheControl;
						std::string oSSVersionId;
						std::vector<FilesItem::VideoStreamsItem> videoStreams;
						std::string fileAccessTime;
						std::string projectName;
						std::vector<FilesItem::AudioCoversItem> audioCovers;
						long videoWidth;
						std::string contentEncoding;
						std::string uRI;
						std::vector<FilesItem::AudioStreamsItem> audioStreams;
						std::string objectType;
						std::string serverSideEncryptionKeyId;
						std::string ownerId;
						std::string fileModifiedTime;
						std::string language;
						std::string fileCreateTime;
						std::string serverSideEncryption;
						std::string formatName;
						std::string composer;
						std::string objectId;
						std::string createTime;
						std::string title;
						std::string travelClusterId;
						std::string oSSExpiration;
						std::vector<FilesItem::FiguresItem> figures;
						std::string serverSideEncryptionCustomerAlgorithm;
						long bitrate;
						std::string albumArtist;
						std::string documentText;
						std::string contentMd5;
						std::string contentDisposition;
						std::string customId;
						std::string updateTime;
						std::string oSSUserMeta;
						std::vector<FilesItem::OCRContentsItem> oCRContents;
						std::string accessControlAllowOrigin;
						std::string oSSCRC64;
						long oSSTaggingCount;
						std::string oSSURI;
						std::string serverSideDataEncryption;
						std::string latLong;
						std::string oSSObjectType;
					};
					struct AddressesItem11
					{
						std::string language;
						std::string township;
						std::string addressLine;
						std::string country;
						std::string city;
						std::string district;
						std::string province;
					};
					std::string storyName;
					std::string projectName;
					std::string objectId;
					std::string createTime;
					std::string storyType;
					std::vector<AddressesItem11> addresses;
					std::string objectType;
					Cover cover;
					std::string customLabels;
					std::string ownerId;
					std::string datasetName;
					std::string storyEndTime;
					std::string storySubType;
					std::string customId;
					std::string updateTime;
					std::string storyStartTime;
					std::vector<std::string> figureClusterIds;
					std::vector<FilesItem> files;
				};


				GetStoryResult();
				explicit GetStoryResult(const std::string &payload);
				~GetStoryResult();
				Story getStory()const;

			protected:
				void parse(const std::string &payload);
			private:
				Story story_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMM_MODEL_GETSTORYRESULT_H_