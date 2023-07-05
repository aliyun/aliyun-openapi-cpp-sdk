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

#ifndef ALIBABACLOUD_IMM_MODEL_SEMANTICQUERYRESULT_H_
#define ALIBABACLOUD_IMM_MODEL_SEMANTICQUERYRESULT_H_

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
			class ALIBABACLOUD_IMM_EXPORT SemanticQueryResult : public ServiceResult
			{
			public:
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
						struct Boundary1
						{
							long left;
							long top;
							long height;
							long width;
						};
						std::string aspectRatio;
						Boundary1 boundary1;
						float confidence;
					};
					struct OCRContentsItem
					{
						struct Boundary2
						{
							long left;
							long top;
							long height;
							long width;
						};
						std::string contents;
						std::string language;
						float confidence;
						Boundary2 boundary2;
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
						struct ImageScore3
						{
							float overallQualityScore;
						};
						struct CroppingSuggestionsItem6
						{
							struct Boundary7
							{
								long left;
								long top;
								long height;
								long width;
							};
							std::string aspectRatio;
							float confidence;
							Boundary7 boundary7;
						};
						struct OCRContentsItem8
						{
							struct Boundary9
							{
								long left;
								long top;
								long height;
								long width;
							};
							std::string contents;
							std::string language;
							float confidence;
							Boundary9 boundary9;
						};
						std::string eXIF;
						std::vector<AudioCoversItem::CroppingSuggestionsItem6> croppingSuggestions4;
						long imageHeight;
						long imageWidth;
						std::vector<AudioCoversItem::OCRContentsItem8> oCRContents5;
						ImageScore3 imageScore3;
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
					std::vector<FilesItem::AddressesItem> addresses;
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


				SemanticQueryResult();
				explicit SemanticQueryResult(const std::string &payload);
				~SemanticQueryResult();
				std::string getNextToken()const;
				std::vector<FilesItem> getFiles()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<FilesItem> files_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMM_MODEL_SEMANTICQUERYRESULT_H_