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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_INITFACEVERIFYREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_INITFACEVERIFYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudauth/CloudauthExport.h>

namespace AlibabaCloud
{
	namespace Cloudauth
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAUTH_EXPORT InitFaceVerifyRequest : public RpcServiceRequest
			{

			public:
				InitFaceVerifyRequest();
				~InitFaceVerifyRequest();

				std::string getProductCode()const;
				void setProductCode(const std::string& productCode);
				std::string getFaceContrastPicture()const;
				void setFaceContrastPicture(const std::string& faceContrastPicture);
				std::string getCertName()const;
				void setCertName(const std::string& certName);
				std::string getCertNo()const;
				void setCertNo(const std::string& certNo);
				std::string getOuterOrderNo()const;
				void setOuterOrderNo(const std::string& outerOrderNo);
				std::string getCertType()const;
				void setCertType(const std::string& certType);
				long getSceneId()const;
				void setSceneId(long sceneId);
				std::string getReturnUrl()const;
				void setReturnUrl(const std::string& returnUrl);
				std::string getMetaInfo()const;
				void setMetaInfo(const std::string& metaInfo);

            private:
				std::string productCode_;
				std::string faceContrastPicture_;
				std::string certName_;
				std::string certNo_;
				std::string outerOrderNo_;
				std::string certType_;
				long sceneId_;
				std::string returnUrl_;
				std::string metaInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_INITFACEVERIFYREQUEST_H_