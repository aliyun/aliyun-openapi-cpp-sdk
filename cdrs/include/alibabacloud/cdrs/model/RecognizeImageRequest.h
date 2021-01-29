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

#ifndef ALIBABACLOUD_CDRS_MODEL_RECOGNIZEIMAGEREQUEST_H_
#define ALIBABACLOUD_CDRS_MODEL_RECOGNIZEIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cdrs/CDRSExport.h>

namespace AlibabaCloud
{
	namespace CDRS
	{
		namespace Model
		{
			class ALIBABACLOUD_CDRS_EXPORT RecognizeImageRequest : public RpcServiceRequest
			{

			public:
				RecognizeImageRequest();
				~RecognizeImageRequest();

				bool getRequireCropImage()const;
				void setRequireCropImage(bool requireCropImage);
				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				std::string getRecognizeType()const;
				void setRecognizeType(const std::string& recognizeType);
				std::string getVendor()const;
				void setVendor(const std::string& vendor);
				std::string getImageUrl()const;
				void setImageUrl(const std::string& imageUrl);
				std::string getImageContent()const;
				void setImageContent(const std::string& imageContent);

            private:
				bool requireCropImage_;
				std::string corpId_;
				std::string recognizeType_;
				std::string vendor_;
				std::string imageUrl_;
				std::string imageContent_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDRS_MODEL_RECOGNIZEIMAGEREQUEST_H_