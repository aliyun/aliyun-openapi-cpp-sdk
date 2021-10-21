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

#ifndef ALIBABACLOUD_FACEBODY_MODEL_RECOGNIZEFACEREQUEST_H_
#define ALIBABACLOUD_FACEBODY_MODEL_RECOGNIZEFACEREQUEST_H_

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
			class ALIBABACLOUD_FACEBODY_EXPORT RecognizeFaceRequest : public RpcServiceRequest
			{

			public:
				RecognizeFaceRequest();
				~RecognizeFaceRequest();

				bool getGender()const;
				void setGender(bool gender);
				bool getBeauty()const;
				void setBeauty(bool beauty);
				long getMaxFaceNumber()const;
				void setMaxFaceNumber(long maxFaceNumber);
				bool getHat()const;
				void setHat(bool hat);
				bool getMask()const;
				void setMask(bool mask);
				int getImageType()const;
				void setImageType(int imageType);
				bool getGlass()const;
				void setGlass(bool glass);
				bool getExpression()const;
				void setExpression(bool expression);
				bool getQuality()const;
				void setQuality(bool quality);
				std::string getImageURL()const;
				void setImageURL(const std::string& imageURL);
				bool getAge()const;
				void setAge(bool age);

            private:
				bool gender_;
				bool beauty_;
				long maxFaceNumber_;
				bool hat_;
				bool mask_;
				int imageType_;
				bool glass_;
				bool expression_;
				bool quality_;
				std::string imageURL_;
				bool age_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FACEBODY_MODEL_RECOGNIZEFACEREQUEST_H_