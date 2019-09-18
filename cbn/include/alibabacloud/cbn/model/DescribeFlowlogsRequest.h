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

#ifndef ALIBABACLOUD_CBN_MODEL_DESCRIBEFLOWLOGSREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_DESCRIBEFLOWLOGSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cbn/CbnExport.h>

namespace AlibabaCloud
{
	namespace Cbn
	{
		namespace Model
		{
			class ALIBABACLOUD_CBN_EXPORT DescribeFlowlogsRequest : public RpcServiceRequest
			{

			public:
				DescribeFlowlogsRequest();
				~DescribeFlowlogsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getCenId()const;
				void setCenId(const std::string& cenId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getProjectName()const;
				void setProjectName(const std::string& projectName);
				std::string getLogStoreName()const;
				void setLogStoreName(const std::string& logStoreName);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getFlowLogId()const;
				void setFlowLogId(const std::string& flowLogId);
				std::string getFlowLogName()const;
				void setFlowLogName(const std::string& flowLogName);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long resourceOwnerId_;
				std::string clientToken_;
				std::string cenId_;
				std::string description_;
				int pageNumber_;
				std::string regionId_;
				int pageSize_;
				std::string projectName_;
				std::string logStoreName_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string flowLogId_;
				std::string flowLogName_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_DESCRIBEFLOWLOGSREQUEST_H_