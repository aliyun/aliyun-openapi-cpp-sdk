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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEFACEVERIFYREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEFACEVERIFYREQUEST_H_

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
			class ALIBABACLOUD_CLOUDAUTH_EXPORT DescribeFaceVerifyRequest : public RpcServiceRequest
			{

			public:
				DescribeFaceVerifyRequest();
				~DescribeFaceVerifyRequest();

				std::string getCertifyId()const;
				void setCertifyId(const std::string& certifyId);
				std::string getPictureReturnType()const;
				void setPictureReturnType(const std::string& pictureReturnType);
				long getSceneId()const;
				void setSceneId(long sceneId);

            private:
				std::string certifyId_;
				std::string pictureReturnType_;
				long sceneId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEFACEVERIFYREQUEST_H_