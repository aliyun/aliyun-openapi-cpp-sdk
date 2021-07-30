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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_ADDVIRTUALNUMBERRELATIONREQUEST_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_ADDVIRTUALNUMBERRELATIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dyvmsapi/DyvmsapiExport.h>

namespace AlibabaCloud
{
	namespace Dyvmsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYVMSAPI_EXPORT AddVirtualNumberRelationRequest : public RpcServiceRequest
			{

			public:
				AddVirtualNumberRelationRequest();
				~AddVirtualNumberRelationRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getNumberList()const;
				void setNumberList(const std::string& numberList);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getRouteType()const;
				void setRouteType(int routeType);
				std::string getCorpNameList()const;
				void setCorpNameList(const std::string& corpNameList);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getProdCode()const;
				void setProdCode(const std::string& prodCode);
				std::string getPhoneNum()const;
				void setPhoneNum(const std::string& phoneNum);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				long resourceOwnerId_;
				std::string numberList_;
				std::string accessKeyId_;
				int routeType_;
				std::string corpNameList_;
				std::string resourceOwnerAccount_;
				std::string prodCode_;
				std::string phoneNum_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_ADDVIRTUALNUMBERRELATIONREQUEST_H_