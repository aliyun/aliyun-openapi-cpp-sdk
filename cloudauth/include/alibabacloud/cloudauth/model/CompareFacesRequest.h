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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_COMPAREFACESREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_COMPAREFACESREQUEST_H_

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
			class ALIBABACLOUD_CLOUDAUTH_EXPORT CompareFacesRequest : public RpcServiceRequest
			{

			public:
				CompareFacesRequest();
				~CompareFacesRequest();

				std::string getSourceImageType()const;
				void setSourceImageType(const std::string& sourceImageType);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getTargetImageType()const;
				void setTargetImageType(const std::string& targetImageType);
				std::string getSourceImageValue()const;
				void setSourceImageValue(const std::string& sourceImageValue);
				std::string getTargetImageValue()const;
				void setTargetImageValue(const std::string& targetImageValue);

            private:
				std::string sourceImageType_;
				long resourceOwnerId_;
				std::string sourceIp_;
				std::string targetImageType_;
				std::string sourceImageValue_;
				std::string targetImageValue_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_COMPAREFACESREQUEST_H_