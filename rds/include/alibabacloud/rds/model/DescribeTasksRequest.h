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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBETASKSREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBETASKSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeTasksRequest : public RpcServiceRequest
			{

			public:
				DescribeTasksRequest();
				~DescribeTasksRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getTaskAction()const;
				void setTaskAction(const std::string& taskAction);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string endTime_;
				std::string startTime_;
				long ownerId_;
				int pageNumber_;
				std::string accessKeyId_;
				int pageSize_;
				std::string dBInstanceId_;
				std::string taskAction_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBETASKSREQUEST_H_