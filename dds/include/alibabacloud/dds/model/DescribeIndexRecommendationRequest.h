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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEINDEXRECOMMENDATIONREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEINDEXRECOMMENDATIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeIndexRecommendationRequest : public RpcServiceRequest
			{

			public:
				DescribeIndexRecommendationRequest();
				~DescribeIndexRecommendationRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getCollection()const;
				void setCollection(const std::string& collection);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getOperationType()const;
				void setOperationType(const std::string& operationType);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getDatabase()const;
				void setDatabase(const std::string& database);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getNodeId()const;
				void setNodeId(const std::string& nodeId);
				std::string getTaskId()const;
				void setTaskId(const std::string& taskId);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string endTime_;
				std::string collection_;
				std::string startTime_;
				std::string operationType_;
				long ownerId_;
				int pageNumber_;
				std::string accessKeyId_;
				std::string database_;
				std::string instanceId_;
				std::string securityToken_;
				std::string regionId_;
				int pageSize_;
				std::string nodeId_;
				std::string taskId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEINDEXRECOMMENDATIONREQUEST_H_