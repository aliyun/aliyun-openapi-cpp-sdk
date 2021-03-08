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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBESQLLOGRECORDSREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBESQLLOGRECORDSREQUEST_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT DescribeSQLLogRecordsRequest : public RpcServiceRequest
			{

			public:
				DescribeSQLLogRecordsRequest();
				~DescribeSQLLogRecordsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getJobId()const;
				void setJobId(const std::string& jobId);
				std::string getAccountName()const;
				void setAccountName(const std::string& accountName);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getState()const;
				void setState(const std::string& state);
				long getMinConsume()const;
				void setMinConsume(long minConsume);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getLogicalOperator()const;
				void setLogicalOperator(const std::string& logicalOperator);
				std::string getDBName()const;
				void setDBName(const std::string& dBName);
				long getMinScanRows()const;
				void setMinScanRows(long minScanRows);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getHostAddress()const;
				void setHostAddress(const std::string& hostAddress);
				std::string getSortKey()const;
				void setSortKey(const std::string& sortKey);
				int getPageNumbers()const;
				void setPageNumbers(int pageNumbers);
				std::string getPagingID()const;
				void setPagingID(const std::string& pagingID);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getTableName()const;
				void setTableName(const std::string& tableName);
				std::string getSqlType()const;
				void setSqlType(const std::string& sqlType);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getMaxRecordsPerPage()const;
				void setMaxRecordsPerPage(int maxRecordsPerPage);
				std::string getQueryKeyword()const;
				void setQueryKeyword(const std::string& queryKeyword);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				long getMaxConsume()const;
				void setMaxConsume(long maxConsume);
				std::string getThreadID()const;
				void setThreadID(const std::string& threadID);
				std::string getChildDBInstanceIDs()const;
				void setChildDBInstanceIDs(const std::string& childDBInstanceIDs);
				std::string getSortMethod()const;
				void setSortMethod(const std::string& sortMethod);
				long getMaxScanRows()const;
				void setMaxScanRows(long maxScanRows);

            private:
				long resourceOwnerId_;
				std::string startTime_;
				std::string jobId_;
				std::string accountName_;
				std::string securityToken_;
				std::string state_;
				long minConsume_;
				long ownerId_;
				std::string logicalOperator_;
				std::string dBName_;
				long minScanRows_;
				std::string accessKeyId_;
				std::string hostAddress_;
				std::string sortKey_;
				int pageNumbers_;
				std::string pagingID_;
				std::string dBInstanceId_;
				std::string tableName_;
				std::string sqlType_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				int maxRecordsPerPage_;
				std::string queryKeyword_;
				std::string endTime_;
				long maxConsume_;
				std::string threadID_;
				std::string childDBInstanceIDs_;
				std::string sortMethod_;
				long maxScanRows_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBESQLLOGRECORDSREQUEST_H_