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

#ifndef ALIBABACLOUD_FACEBODY_MODEL_BEAUTIFYBODYREQUEST_H_
#define ALIBABACLOUD_FACEBODY_MODEL_BEAUTIFYBODYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/facebody/FacebodyExport.h>

namespace AlibabaCloud
{
	namespace Facebody
	{
		namespace Model
		{
			class ALIBABACLOUD_FACEBODY_EXPORT BeautifyBodyRequest : public RpcServiceRequest
			{

			public:
				BeautifyBodyRequest();
				~BeautifyBodyRequest();

				Array getBodyBoxes()const;
				void setBodyBoxes(const Array& bodyBoxes);
				float getLengthenDegree()const;
				void setLengthenDegree(float lengthenDegree);
				float getMaleLiquifyDegree()const;
				void setMaleLiquifyDegree(float maleLiquifyDegree);
				long getOriginalWidth()const;
				void setOriginalWidth(long originalWidth);
				bool getIsPregnant()const;
				void setIsPregnant(bool isPregnant);
				Array getFaceList()const;
				void setFaceList(const Array& faceList);
				Struct getAgeRange()const;
				void setAgeRange(const Struct& ageRange);
				long getCustom()const;
				void setCustom(long custom);
				long getOriginalHeight()const;
				void setOriginalHeight(long originalHeight);
				std::string getImageURL()const;
				void setImageURL(const std::string& imageURL);
				float getFemaleLiquifyDegree()const;
				void setFemaleLiquifyDegree(float femaleLiquifyDegree);
				Array getPoseList()const;
				void setPoseList(const Array& poseList);

            private:
				Array bodyBoxes_;
				float lengthenDegree_;
				float maleLiquifyDegree_;
				long originalWidth_;
				bool isPregnant_;
				Array faceList_;
				Struct ageRange_;
				long custom_;
				long originalHeight_;
				std::string imageURL_;
				float femaleLiquifyDegree_;
				Array poseList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FACEBODY_MODEL_BEAUTIFYBODYREQUEST_H_