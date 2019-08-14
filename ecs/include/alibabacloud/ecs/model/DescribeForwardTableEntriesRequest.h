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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEFORWARDTABLEENTRIESREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEFORWARDTABLEENTRIESREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeForwardTableEntriesRequest : public RpcServiceRequest
			{

			public:
				DescribeForwardTableEntriesRequest();
				~DescribeForwardTableEntriesRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getForwardEntryId()const;
				void setForwardEntryId(const std::string& forwardEntryId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getForwardTableId()const;
				void setForwardTableId(const std::string& forwardTableId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string regionId_;
				std::string forwardEntryId_;
				std::string ownerAccount_;
				std::string forwardTableId_;
				int pageSize_;
				long ownerId_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEFORWARDTABLEENTRIESREQUEST_H_