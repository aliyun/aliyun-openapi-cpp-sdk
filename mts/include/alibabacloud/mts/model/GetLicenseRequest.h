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

#ifndef ALIBABACLOUD_MTS_MODEL_GETLICENSEREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_GETLICENSEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/mts/MtsExport.h>

namespace AlibabaCloud
{
	namespace Mts
	{
		namespace Model
		{
			class ALIBABACLOUD_MTS_EXPORT GetLicenseRequest : public RpcServiceRequest
			{

			public:
				GetLicenseRequest();
				~GetLicenseRequest();

				std::string getResourceOwnerId()const;
				void setResourceOwnerId(const std::string& resourceOwnerId);
				std::string getData()const;
				void setData(const std::string& data);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getHeader()const;
				void setHeader(const std::string& header);
				std::string getOwnerId()const;
				void setOwnerId(const std::string& ownerId);
				std::string getMediaId()const;
				void setMediaId(const std::string& mediaId);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getLicenseUrl()const;
				void setLicenseUrl(const std::string& licenseUrl);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string resourceOwnerId_;
				std::string data_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string header_;
				std::string ownerId_;
				std::string mediaId_;
				std::string type_;
				std::string licenseUrl_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_GETLICENSEREQUEST_H_