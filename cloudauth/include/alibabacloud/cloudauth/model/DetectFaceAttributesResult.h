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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_DETECTFACEATTRIBUTESRESULT_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_DETECTFACEATTRIBUTESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudauth/CloudauthExport.h>

namespace AlibabaCloud
{
	namespace Cloudauth
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAUTH_EXPORT DetectFaceAttributesResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct FaceAttributesDetectInfo
					{
						struct FaceRect
						{
							int left;
							int top;
							int height;
							int width;
						};
						struct FaceAttributes
						{
							struct Gender
							{
								float score;
								std::string value;
							};
							struct Smiling
							{
								float value;
								float threshold;
							};
							struct Headpose
							{
								float pitchAngle;
								float rollAngle;
								float yawAngle;
							};
							std::string facetype;
							Headpose headpose;
							std::string respirator;
							std::string glasses;
							float blur;
							Smiling smiling;
							Gender gender;
							float appearanceScore;
							float facequal;
							int age;
							int integrity;
						};
						FaceAttributes faceAttributes;
						FaceRect faceRect;
					};
					int imgWidth;
					int imgHeight;
					std::vector<FaceAttributesDetectInfo> faceInfos;
				};


				DetectFaceAttributesResult();
				explicit DetectFaceAttributesResult(const std::string &payload);
				~DetectFaceAttributesResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_DETECTFACEATTRIBUTESRESULT_H_