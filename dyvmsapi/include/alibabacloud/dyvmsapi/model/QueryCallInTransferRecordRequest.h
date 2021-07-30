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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_QUERYCALLINTRANSFERRECORDREQUEST_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_QUERYCALLINTRANSFERRECORDREQUEST_H_

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
			class ALIBABACLOUD_DYVMSAPI_EXPORT QueryCallInTransferRecordRequest : public RpcServiceRequest
			{

			public:
				QueryCallInTransferRecordRequest();
				~QueryCallInTransferRecordRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getPhoneNumber()const;
				void setPhoneNumber(const std::string& phoneNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getQueryDate()const;
				void setQueryDate(const std::string& queryDate);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				long getPageNo()const;
				void setPageNo(long pageNo);
				std::string getCallInCaller()const;
				void setCallInCaller(const std::string& callInCaller);

            private:
				long resourceOwnerId_;
				std::string phoneNumber_;
				std::string accessKeyId_;
				long pageSize_;
				std::string queryDate_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				long pageNo_;
				std::string callInCaller_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_QUERYCALLINTRANSFERRECORDREQUEST_H_