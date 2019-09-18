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

#ifndef ALIBABACLOUD_EMR_MODEL_GETFLOWAUDITLOGSREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_GETFLOWAUDITLOGSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT GetFlowAuditLogsRequest : public RpcServiceRequest
			{

			public:
				GetFlowAuditLogsRequest();
				~GetFlowAuditLogsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getPageCount()const;
				void setPageCount(int pageCount);
				std::string getOrderMode()const;
				void setOrderMode(const std::string& orderMode);
				std::string getEntityId()const;
				void setEntityId(const std::string& entityId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getLimit()const;
				void setLimit(int limit);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getCurrentSize()const;
				void setCurrentSize(int currentSize);
				std::string getOrderField()const;
				void setOrderField(const std::string& orderField);
				std::string getEntityGroupId()const;
				void setEntityGroupId(const std::string& entityGroupId);
				std::string getEntityType()const;
				void setEntityType(const std::string& entityType);
				std::string getOperatorId()const;
				void setOperatorId(const std::string& operatorId);
				std::string getOperation()const;
				void setOperation(const std::string& operation);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long resourceOwnerId_;
				int pageCount_;
				std::string orderMode_;
				std::string entityId_;
				int pageNumber_;
				std::string accessKeyId_;
				std::string regionId_;
				int limit_;
				int pageSize_;
				int currentSize_;
				std::string orderField_;
				std::string entityGroupId_;
				std::string entityType_;
				std::string operatorId_;
				std::string operation_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_GETFLOWAUDITLOGSREQUEST_H_