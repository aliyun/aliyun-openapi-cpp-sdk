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

#ifndef ALIBABACLOUD_IMM_MODEL_LISTVIDEOFRAMESRESULT_H_
#define ALIBABACLOUD_IMM_MODEL_LISTVIDEOFRAMESRESULT_H_

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
			class ALIBABACLOUD_IMM_EXPORT ListVideoFramesResult : public ServiceResult
			{
			public:
				struct FramesItem
				{
					struct TagsItem
					{
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
					std::string modifyTime;
					std::string sourceType;
					std::string sourceUri;
					std::string facesFailReason;
					std::string remarksA;
					std::string remarksB;
					std::string imageFormat;
					std::string tagsFailReason;
					std::string facesModifyTime;
					std::string exif;
					std::string remarksC;
					std::string remarksD;
					int imageWidth;
					std::string sourcePosition;
					std::vector<FramesItem::TagsItem> tags;
					std::vector<FramesItem::FacesItem> faces;
					std::string facesStatus;
					std::string createTime;
					std::string externalId;
					std::string tagsModifyTime;
					std::string orientation;
					std::string imageUri;
					std::string oCRStatus;
					std::string oCRModifyTime;
					std::string imageTime;
					int imageHeight;
					std::string tagsStatus;
					std::string oCRFailReason;
					std::vector<FramesItem::OCRItem> oCR;
					int fileSize;
					std::string location;
				};


				ListVideoFramesResult();
				explicit ListVideoFramesResult(const std::string &payload);
				~ListVideoFramesResult();
				std::vector<FramesItem> getFrames()const;
				std::string getVideoUri()const;
				std::string getNextMarker()const;
				std::string getSetId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<FramesItem> frames_;
				std::string videoUri_;
				std::string nextMarker_;
				std::string setId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMM_MODEL_LISTVIDEOFRAMESRESULT_H_