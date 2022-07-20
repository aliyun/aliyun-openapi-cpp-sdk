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

#ifndef ALIBABACLOUD_IMM_MODEL_DETECTIMAGEFACESRESULT_H_
#define ALIBABACLOUD_IMM_MODEL_DETECTIMAGEFACESRESULT_H_

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
			class ALIBABACLOUD_IMM_EXPORT DetectImageFacesResult : public ServiceResult
			{
			public:
				struct FacesItem
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


				DetectImageFacesResult();
				explicit DetectImageFacesResult(const std::string &payload);
				~DetectImageFacesResult();
				std::vector<FacesItem> getFaces()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<FacesItem> faces_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMM_MODEL_DETECTIMAGEFACESRESULT_H_