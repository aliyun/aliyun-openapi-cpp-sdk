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

#ifndef ALIBABACLOUD_DYSMSAPI_MODEL_QUERYSENDDETAILSREQUEST_H_
#define ALIBABACLOUD_DYSMSAPI_MODEL_QUERYSENDDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dysmsapi/DysmsapiExport.h>

namespace AlibabaCloud
{
	namespace Dysmsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYSMSAPI_EXPORT QuerySendDetailsRequest : public RpcServiceRequest
			{

			public:
				QuerySendDetailsRequest();
				~QuerySendDetailsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getSendDate()const;
				void setSendDate(const std::string& sendDate);
				std::string getPhoneNumber()const;
				void setPhoneNumber(const std::string& phoneNumber);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				long getPageSize()const;
				void setPageSize(long pageSize);
				long getCurrentPage()const;
				void setCurrentPage(long currentPage);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string sendDate_;
				std::string phoneNumber_;
				std::string bizId_;
				long pageSize_;
				long currentPage_;
				long ownerId_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYSMSAPI_MODEL_QUERYSENDDETAILSREQUEST_H_