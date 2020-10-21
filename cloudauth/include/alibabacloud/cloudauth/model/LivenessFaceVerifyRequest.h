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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_LIVENESSFACEVERIFYREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_LIVENESSFACEVERIFYREQUEST_H_

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
			class ALIBABACLOUD_CLOUDAUTH_EXPORT LivenessFaceVerifyRequest : public RpcServiceRequest
			{

			public:
				LivenessFaceVerifyRequest();
				~LivenessFaceVerifyRequest();

				std::string getProductCode()const;
				void setProductCode(const std::string& productCode);
				std::string getOssObjectName()const;
				void setOssObjectName(const std::string& ossObjectName);
				std::string getFaceContrastPicture()const;
				void setFaceContrastPicture(const std::string& faceContrastPicture);
				std::string getIp()const;
				void setIp(const std::string& ip);
				std::string getMobile()const;
				void setMobile(const std::string& mobile);
				std::string getDeviceToken()const;
				void setDeviceToken(const std::string& deviceToken);
				std::string getUserId()const;
				void setUserId(const std::string& userId);
				std::string getCertifyId()const;
				void setCertifyId(const std::string& certifyId);
				std::string getOuterOrderNo()const;
				void setOuterOrderNo(const std::string& outerOrderNo);
				std::string getFaceContrastPictureUrl()const;
				void setFaceContrastPictureUrl(const std::string& faceContrastPictureUrl);
				long getSceneId()const;
				void setSceneId(long sceneId);
				std::string getOssBucketName()const;
				void setOssBucketName(const std::string& ossBucketName);
				std::string getModel()const;
				void setModel(const std::string& model);

            private:
				std::string productCode_;
				std::string ossObjectName_;
				std::string faceContrastPicture_;
				std::string ip_;
				std::string mobile_;
				std::string deviceToken_;
				std::string userId_;
				std::string certifyId_;
				std::string outerOrderNo_;
				std::string faceContrastPictureUrl_;
				long sceneId_;
				std::string ossBucketName_;
				std::string model_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_LIVENESSFACEVERIFYREQUEST_H_