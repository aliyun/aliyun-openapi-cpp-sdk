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

#ifndef ALIBABACLOUD_DYPNSAPI_MODEL_CREATEVERIFYSCHEMEREQUEST_H_
#define ALIBABACLOUD_DYPNSAPI_MODEL_CREATEVERIFYSCHEMEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dypnsapi/DypnsapiExport.h>

namespace AlibabaCloud
{
	namespace Dypnsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYPNSAPI_EXPORT CreateVerifySchemeRequest : public RpcServiceRequest
			{

			public:
				CreateVerifySchemeRequest();
				~CreateVerifySchemeRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getBundleId()const;
				void setBundleId(const std::string& bundleId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getAppName()const;
				void setAppName(const std::string& appName);
				std::string getPackSign()const;
				void setPackSign(const std::string& packSign);
				std::string getPackName()const;
				void setPackName(const std::string& packName);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOsType()const;
				void setOsType(const std::string& osType);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSchemeName()const;
				void setSchemeName(const std::string& schemeName);

            private:
				long resourceOwnerId_;
				std::string bundleId_;
				std::string accessKeyId_;
				std::string appName_;
				std::string packSign_;
				std::string packName_;
				std::string resourceOwnerAccount_;
				std::string osType_;
				long ownerId_;
				std::string schemeName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYPNSAPI_MODEL_CREATEVERIFYSCHEMEREQUEST_H_