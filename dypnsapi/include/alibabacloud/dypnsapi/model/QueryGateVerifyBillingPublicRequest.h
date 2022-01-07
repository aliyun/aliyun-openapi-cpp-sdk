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

#ifndef ALIBABACLOUD_DYPNSAPI_MODEL_QUERYGATEVERIFYBILLINGPUBLICREQUEST_H_
#define ALIBABACLOUD_DYPNSAPI_MODEL_QUERYGATEVERIFYBILLINGPUBLICREQUEST_H_

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
			class ALIBABACLOUD_DYPNSAPI_EXPORT QueryGateVerifyBillingPublicRequest : public RpcServiceRequest
			{

			public:
				QueryGateVerifyBillingPublicRequest();
				~QueryGateVerifyBillingPublicRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getAuthenticationType()const;
				void setAuthenticationType(int authenticationType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getProdCode()const;
				void setProdCode(const std::string& prodCode);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getMonth()const;
				void setMonth(const std::string& month);

            private:
				long resourceOwnerId_;
				int authenticationType_;
				std::string accessKeyId_;
				std::string resourceOwnerAccount_;
				std::string prodCode_;
				long ownerId_;
				std::string month_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYPNSAPI_MODEL_QUERYGATEVERIFYBILLINGPUBLICREQUEST_H_