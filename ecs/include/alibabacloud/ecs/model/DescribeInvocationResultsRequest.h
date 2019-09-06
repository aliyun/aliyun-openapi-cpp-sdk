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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEINVOCATIONRESULTSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEINVOCATIONRESULTSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeInvocationResultsRequest : public RpcServiceRequest
			{

			public:
				DescribeInvocationResultsRequest();
				~DescribeInvocationResultsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getCommandId()const;
				void setCommandId(const std::string& commandId);
				long getPageNumber()const;
				void setPageNumber(long pageNumber);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getInvokeId()const;
				void setInvokeId(const std::string& invokeId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getInvokeRecordStatus()const;
				void setInvokeRecordStatus(const std::string& invokeRecordStatus);
				bool getIncludeHistory()const;
				void setIncludeHistory(bool includeHistory);

            private:
				long resourceOwnerId_;
				std::string commandId_;
				long pageNumber_;
				std::string regionId_;
				long pageSize_;
				std::string invokeId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string instanceId_;
				std::string invokeRecordStatus_;
				bool includeHistory_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEINVOCATIONRESULTSREQUEST_H_