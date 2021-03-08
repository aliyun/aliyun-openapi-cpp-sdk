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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBESQLLOGTEMPLATESREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBESQLLOGTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeSQLLogTemplatesRequest : public RpcServiceRequest
			{

			public:
				DescribeSQLLogTemplatesRequest();
				~DescribeSQLLogTemplatesRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getJobId()const;
				void setJobId(const std::string& jobId);
				std::string getSortKey()const;
				void setSortKey(const std::string& sortKey);
				float getMinAvgScanRows()const;
				void setMinAvgScanRows(float minAvgScanRows);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				int getPageNumbers()const;
				void setPageNumbers(int pageNumbers);
				std::string getPagingId()const;
				void setPagingId(const std::string& pagingId);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				float getMaxAvgScanRows()const;
				void setMaxAvgScanRows(float maxAvgScanRows);
				std::string getSqlType()const;
				void setSqlType(const std::string& sqlType);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				float getMinAvgConsume()const;
				void setMinAvgConsume(float minAvgConsume);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getMaxRecordsPerPage()const;
				void setMaxRecordsPerPage(int maxRecordsPerPage);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				float getMaxAvgConsume()const;
				void setMaxAvgConsume(float maxAvgConsume);
				std::string getChildDBInstanceIDs()const;
				void setChildDBInstanceIDs(const std::string& childDBInstanceIDs);
				std::string getSortMethod()const;
				void setSortMethod(const std::string& sortMethod);

            private:
				long resourceOwnerId_;
				std::string startTime_;
				std::string accessKeyId_;
				std::string jobId_;
				std::string sortKey_;
				float minAvgScanRows_;
				std::string securityToken_;
				int pageNumbers_;
				std::string pagingId_;
				std::string dBInstanceId_;
				float maxAvgScanRows_;
				std::string sqlType_;
				std::string resourceOwnerAccount_;
				float minAvgConsume_;
				std::string ownerAccount_;
				int maxRecordsPerPage_;
				std::string endTime_;
				long ownerId_;
				float maxAvgConsume_;
				std::string childDBInstanceIDs_;
				std::string sortMethod_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBESQLLOGTEMPLATESREQUEST_H_