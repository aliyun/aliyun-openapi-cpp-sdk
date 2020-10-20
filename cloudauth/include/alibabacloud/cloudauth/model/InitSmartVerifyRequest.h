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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_INITSMARTVERIFYREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_INITSMARTVERIFYREQUEST_H_

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
			class ALIBABACLOUD_CLOUDAUTH_EXPORT InitSmartVerifyRequest : public RpcServiceRequest
			{

			public:
				InitSmartVerifyRequest();
				~InitSmartVerifyRequest();

				std::string getUserId()const;
				void setUserId(const std::string& userId);
				std::string getCertifyId()const;
				void setCertifyId(const std::string& certifyId);
				std::string getFacePictureBase64()const;
				void setFacePictureBase64(const std::string& facePictureBase64);
				std::string getMode()const;
				void setMode(const std::string& mode);
				std::string getCertNo()const;
				void setCertNo(const std::string& certNo);
				std::string getOuterOrderNo()const;
				void setOuterOrderNo(const std::string& outerOrderNo);
				std::string getCertType()const;
				void setCertType(const std::string& certType);
				std::string getMetaInfo()const;
				void setMetaInfo(const std::string& metaInfo);
				std::string getOcr()const;
				void setOcr(const std::string& ocr);
				std::string getOssObjectName()const;
				void setOssObjectName(const std::string& ossObjectName);
				std::string getFacePictureUrl()const;
				void setFacePictureUrl(const std::string& facePictureUrl);
				std::string getIp()const;
				void setIp(const std::string& ip);
				std::string getCertName()const;
				void setCertName(const std::string& certName);
				std::string getMobile()const;
				void setMobile(const std::string& mobile);
				long getSceneId()const;
				void setSceneId(long sceneId);
				std::string getCallbackToken()const;
				void setCallbackToken(const std::string& callbackToken);
				std::string getOssBucketName()const;
				void setOssBucketName(const std::string& ossBucketName);
				std::string getCallbackUrl()const;
				void setCallbackUrl(const std::string& callbackUrl);

            private:
				std::string userId_;
				std::string certifyId_;
				std::string facePictureBase64_;
				std::string mode_;
				std::string certNo_;
				std::string outerOrderNo_;
				std::string certType_;
				std::string metaInfo_;
				std::string ocr_;
				std::string ossObjectName_;
				std::string facePictureUrl_;
				std::string ip_;
				std::string certName_;
				std::string mobile_;
				long sceneId_;
				std::string callbackToken_;
				std::string ossBucketName_;
				std::string callbackUrl_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_INITSMARTVERIFYREQUEST_H_