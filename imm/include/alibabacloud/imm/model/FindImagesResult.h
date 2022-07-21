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

#ifndef ALIBABACLOUD_IMM_MODEL_FINDIMAGESRESULT_H_
#define ALIBABACLOUD_IMM_MODEL_FINDIMAGESRESULT_H_

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
			class ALIBABACLOUD_IMM_EXPORT FindImagesResult : public ServiceResult
			{
			public:
				struct ImagesItem
				{
					struct Address
					{
						std::string township;
						std::string addressLine;
						std::string country;
						std::string city;
						std::string district;
						std::string province;
					};
					struct ImageQuality
					{
						float clarityScore;
						float compositionScore;
						float color;
						float contrastScore;
						float exposure;
						float overallScore;
						float contrast;
						float clarity;
						float colorScore;
						float exposureScore;
					};
					struct TagsItem
					{
						float centricScore;
						float tagConfidence;
						std::string tagName;
						int tagLevel;
						std::string parentTagName;
					};
					struct OCRItem
					{
						struct OCRBoundary
						{
							int left;
							int top;
							int height;
							int width;
						};
						OCRBoundary oCRBoundary;
						float oCRConfidence;
						std::string oCRContents;
					};
					struct FacesItem
					{
						struct FaceAttributes
						{
							struct FaceBoundary
							{
								int left;
								int top;
								int height;
								int width;
							};
							struct HeadPose
							{
								float pitch;
								float roll;
								float yaw;
							};
							FaceBoundary faceBoundary;
							std::string beard;
							float beardConfidence;
							HeadPose headPose;
							std::string glasses;
							std::string mask;
							float maskConfidence;
							float glassesConfidence;
						};
						struct EmotionDetails
						{
							float cALM;
							float sCARED;
							float hAPPY;
							float sURPRISED;
							float sAD;
							float dISGUSTED;
							float aNGRY;
						};
						EmotionDetails emotionDetails;
						std::string faceId;
						float faceConfidence;
						float faceQuality;
						float attractive;
						FaceAttributes faceAttributes;
						float genderConfidence;
						float emotionConfidence;
						std::string gender;
						std::string emotion;
						int age;
						std::string groupId;
					};
					struct CroppingSuggestionItem
					{
						struct CroppingBoundary
						{
							int left;
							int top;
							int height;
							int width;
						};
						std::string aspectRatio;
						float score;
						CroppingBoundary croppingBoundary;
					};
					ImageQuality imageQuality;
					std::string modifyTime;
					Address address;
					std::string sourceType;
					std::string sourceUri;
					std::string facesFailReason;
					std::string croppingSuggestionStatus;
					std::string croppingSuggestionFailReason;
					std::string addressFailReason;
					std::string remarksA;
					std::string addressModifyTime;
					std::string remarksB;
					std::string imageFormat;
					std::string tagsFailReason;
					std::string remarksArrayB;
					std::string facesModifyTime;
					std::string exif;
					std::string remarksC;
					std::string remarksD;
					int imageWidth;
					std::string remarksArrayA;
					std::string sourcePosition;
					std::vector<ImagesItem::TagsItem> tags;
					std::vector<ImagesItem::FacesItem> faces;
					std::string addressStatus;
					std::string facesStatus;
					std::string imageQualityModifyTime;
					std::vector<ImagesItem::CroppingSuggestionItem> croppingSuggestion;
					std::string createTime;
					std::string externalId;
					std::string tagsModifyTime;
					std::string imageQualityFailReason;
					std::string orientation;
					std::string imageUri;
					std::string oCRStatus;
					std::string oCRModifyTime;
					std::string imageTime;
					std::string croppingSuggestionModifyTime;
					int imageHeight;
					std::string imageQualityStatus;
					std::string tagsStatus;
					std::string oCRFailReason;
					std::vector<ImagesItem::OCRItem> oCR;
					int fileSize;
					std::string location;
				};


				FindImagesResult();
				explicit FindImagesResult(const std::string &payload);
				~FindImagesResult();
				std::vector<ImagesItem> getImages()const;
				std::string getNextMarker()const;
				std::string getSetId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ImagesItem> images_;
				std::string nextMarker_;
				std::string setId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMM_MODEL_FINDIMAGESRESULT_H_