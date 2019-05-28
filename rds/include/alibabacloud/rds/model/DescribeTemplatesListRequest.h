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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBETEMPLATESLISTREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBETEMPLATESLISTREQUEST_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeTemplatesListRequest : public RpcServiceRequest
			{

			public:
				DescribeTemplatesListRequest();
				~DescribeTemplatesListRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				int getMinAvgConsume()const;
				void setMinAvgConsume(int minAvgConsume);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getMaxRecordsPerPage()const;
				void setMaxRecordsPerPage(int maxRecordsPerPage);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getMaxAvgConsume()const;
				void setMaxAvgConsume(int maxAvgConsume);
				std::string getSortKey()const;
				void setSortKey(const std::string& sortKey);
				int getMinAvgScanRows()const;
				void setMinAvgScanRows(int minAvgScanRows);
				std::string getSqType()const;
				void setSqType(const std::string& sqType);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getSortMethod()const;
				void setSortMethod(const std::string& sortMethod);
				int getPageNumbers()const;
				void setPageNumbers(int pageNumbers);
				std::string getPagingId()const;
				void setPagingId(const std::string& pagingId);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				int getMaxAvgScanRows()const;
				void setMaxAvgScanRows(int maxAvgScanRows);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				int minAvgConsume_;
				std::string ownerAccount_;
				int maxRecordsPerPage_;
				std::string endTime_;
				std::string startTime_;
				long ownerId_;
				std::string accessKeyId_;
				int maxAvgConsume_;
				std::string sortKey_;
				int minAvgScanRows_;
				std::string sqType_;
				std::string securityToken_;
				std::string regionId_;
				std::string sortMethod_;
				int pageNumbers_;
				std::string pagingId_;
				std::string dBInstanceId_;
				int maxAvgScanRows_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBETEMPLATESLISTREQUEST_H_