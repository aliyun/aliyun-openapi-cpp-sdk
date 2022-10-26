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

#ifndef ALIBABACLOUD_POLARDB_MODEL_STARTSQLLOGDETAILARCHIVEREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_STARTSQLLOGDETAILARCHIVEREQUEST_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT StartSqlLogDetailArchiveRequest : public RpcServiceRequest
			{

			public:
				StartSqlLogDetailArchiveRequest();
				~StartSqlLogDetailArchiveRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getColumns()const;
				void setColumns(const std::string& columns);
				long getMinScanRows()const;
				void setMinScanRows(long minScanRows);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getHostAddress()const;
				void setHostAddress(const std::string& hostAddress);
				std::string getAccountName()const;
				void setAccountName(const std::string& accountName);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getState()const;
				void setState(const std::string& state);
				std::string getTableName()const;
				void setTableName(const std::string& tableName);
				std::string getSqlType()const;
				void setSqlType(const std::string& sqlType);
				long getMinConsume()const;
				void setMinConsume(long minConsume);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getQueryKeyword()const;
				void setQueryKeyword(const std::string& queryKeyword);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				long getMaxConsume()const;
				void setMaxConsume(long maxConsume);
				std::string getThreadID()const;
				void setThreadID(const std::string& threadID);
				std::string getLogicalOperator()const;
				void setLogicalOperator(const std::string& logicalOperator);
				std::string getChildDBInstanceIDs()const;
				void setChildDBInstanceIDs(const std::string& childDBInstanceIDs);
				std::string getDBName()const;
				void setDBName(const std::string& dBName);
				long getMaxScanRows()const;
				void setMaxScanRows(long maxScanRows);

            private:
				long resourceOwnerId_;
				std::string columns_;
				long minScanRows_;
				std::string startTime_;
				std::string accessKeyId_;
				std::string hostAddress_;
				std::string accountName_;
				std::string securityToken_;
				std::string dBInstanceId_;
				std::string state_;
				std::string tableName_;
				std::string sqlType_;
				long minConsume_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string queryKeyword_;
				std::string endTime_;
				long ownerId_;
				long maxConsume_;
				std::string threadID_;
				std::string logicalOperator_;
				std::string childDBInstanceIDs_;
				std::string dBName_;
				long maxScanRows_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_STARTSQLLOGDETAILARCHIVEREQUEST_H_