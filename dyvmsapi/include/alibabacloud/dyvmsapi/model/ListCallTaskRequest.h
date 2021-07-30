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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_LISTCALLTASKREQUEST_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_LISTCALLTASKREQUEST_H_

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
			class ALIBABACLOUD_DYVMSAPI_EXPORT ListCallTaskRequest : public RpcServiceRequest
			{

			public:
				ListCallTaskRequest();
				~ListCallTaskRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getTaskName()const;
				void setTaskName(const std::string& taskName);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getTemplateName()const;
				void setTemplateName(const std::string& templateName);
				std::string getTaskId()const;
				void setTaskId(const std::string& taskId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getBizType()const;
				void setBizType(const std::string& bizType);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long resourceOwnerId_;
				std::string taskName_;
				int pageNumber_;
				std::string accessKeyId_;
				int pageSize_;
				std::string templateName_;
				std::string taskId_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string bizType_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_LISTCALLTASKREQUEST_H_