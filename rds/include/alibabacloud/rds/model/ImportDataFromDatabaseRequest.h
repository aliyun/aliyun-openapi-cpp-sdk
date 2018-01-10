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

#ifndef ALIBABACLOUD_RDS_MODEL_IMPORTDATAFROMDATABASEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_IMPORTDATAFROMDATABASEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/rds/RdsRequest.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT ImportDataFromDatabaseRequest : public RdsRequest
			{

			public:
				ImportDataFromDatabaseRequest();
				~ImportDataFromDatabaseRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getImportDataType()const;
				void setImportDataType(const std::string& importDataType);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getIsLockTable()const;
				void setIsLockTable(const std::string& isLockTable);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getSourceDatabaseDBNames()const;
				void setSourceDatabaseDBNames(const std::string& sourceDatabaseDBNames);
				std::string getSourceDatabaseIp()const;
				void setSourceDatabaseIp(const std::string& sourceDatabaseIp);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSourceDatabasePassword()const;
				void setSourceDatabasePassword(const std::string& sourceDatabasePassword);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSourceDatabasePort()const;
				void setSourceDatabasePort(const std::string& sourceDatabasePort);
				std::string getSourceDatabaseUserName()const;
				void setSourceDatabaseUserName(const std::string& sourceDatabaseUserName);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);

            private:
				long resourceOwnerId_;
				std::string importDataType_;
				std::string resourceOwnerAccount_;
				std::string isLockTable_;
				std::string ownerAccount_;
				std::string sourceDatabaseDBNames_;
				std::string sourceDatabaseIp_;
				long ownerId_;
				std::string sourceDatabasePassword_;
				std::string accessKeyId_;
				std::string sourceDatabasePort_;
				std::string sourceDatabaseUserName_;
				std::string dBInstanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_IMPORTDATAFROMDATABASEREQUEST_H_