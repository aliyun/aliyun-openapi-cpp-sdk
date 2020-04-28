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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_COMPAREFACEVERIFYREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_COMPAREFACEVERIFYREQUEST_H_

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
			class ALIBABACLOUD_CLOUDAUTH_EXPORT CompareFaceVerifyRequest : public RpcServiceRequest
			{

			public:
				CompareFaceVerifyRequest();
				~CompareFaceVerifyRequest();

				std::string getTargetFaceContrastPictureUrl()const;
				void setTargetFaceContrastPictureUrl(const std::string& targetFaceContrastPictureUrl);
				std::string getProductCode()const;
				void setProductCode(const std::string& productCode);
				std::string getTargetCertifyId()const;
				void setTargetCertifyId(const std::string& targetCertifyId);
				std::string getSourceOssObjectName()const;
				void setSourceOssObjectName(const std::string& sourceOssObjectName);
				std::string getTargetFaceContrastPicture()const;
				void setTargetFaceContrastPicture(const std::string& targetFaceContrastPicture);
				std::string getTargetOssBucketName()const;
				void setTargetOssBucketName(const std::string& targetOssBucketName);
				std::string getSourceOssBucketName()const;
				void setSourceOssBucketName(const std::string& sourceOssBucketName);
				std::string getOuterOrderNo()const;
				void setOuterOrderNo(const std::string& outerOrderNo);
				std::string getTargetOssObjectName()const;
				void setTargetOssObjectName(const std::string& targetOssObjectName);
				std::string getSourceFaceContrastPicture()const;
				void setSourceFaceContrastPicture(const std::string& sourceFaceContrastPicture);
				long getSceneId()const;
				void setSceneId(long sceneId);
				std::string getSourceFaceContrastPictureUrl()const;
				void setSourceFaceContrastPictureUrl(const std::string& sourceFaceContrastPictureUrl);
				std::string getSourceCertifyId()const;
				void setSourceCertifyId(const std::string& sourceCertifyId);

            private:
				std::string targetFaceContrastPictureUrl_;
				std::string productCode_;
				std::string targetCertifyId_;
				std::string sourceOssObjectName_;
				std::string targetFaceContrastPicture_;
				std::string targetOssBucketName_;
				std::string sourceOssBucketName_;
				std::string outerOrderNo_;
				std::string targetOssObjectName_;
				std::string sourceFaceContrastPicture_;
				long sceneId_;
				std::string sourceFaceContrastPictureUrl_;
				std::string sourceCertifyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_COMPAREFACEVERIFYREQUEST_H_