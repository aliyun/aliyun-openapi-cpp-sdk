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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_QUERYCALLDETAILBYTASKIDREQUEST_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_QUERYCALLDETAILBYTASKIDREQUEST_H_

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
			class ALIBABACLOUD_DYVMSAPI_EXPORT QueryCallDetailByTaskIdRequest : public RpcServiceRequest
			{

			public:
				QueryCallDetailByTaskIdRequest();
				~QueryCallDetailByTaskIdRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				long getQueryDate()const;
				void setQueryDate(long queryDate);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getCallee()const;
				void setCallee(const std::string& callee);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTaskId()const;
				void setTaskId(const std::string& taskId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				long resourceOwnerId_;
				long queryDate_;
				std::string resourceOwnerAccount_;
				std::string callee_;
				long ownerId_;
				std::string taskId_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_QUERYCALLDETAILBYTASKIDREQUEST_H_