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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_LISTCALLTASKDETAILREQUEST_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_LISTCALLTASKDETAILREQUEST_H_

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
			class ALIBABACLOUD_DYVMSAPI_EXPORT ListCallTaskDetailRequest : public RpcServiceRequest
			{

			public:
				ListCallTaskDetailRequest();
				~ListCallTaskDetailRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getCalledNum()const;
				void setCalledNum(const std::string& calledNum);
				long getTaskId()const;
				void setTaskId(long taskId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long resourceOwnerId_;
				int pageNumber_;
				std::string accessKeyId_;
				int pageSize_;
				std::string calledNum_;
				long taskId_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_LISTCALLTASKDETAILREQUEST_H_