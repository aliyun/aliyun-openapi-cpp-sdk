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

#ifndef ALIBABACLOUD_DBS_MODEL_CONFIGUREBACKUPPLANREQUEST_H_
#define ALIBABACLOUD_DBS_MODEL_CONFIGUREBACKUPPLANREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dbs/DbsExport.h>

namespace AlibabaCloud
{
	namespace Dbs
	{
		namespace Model
		{
			class ALIBABACLOUD_DBS_EXPORT ConfigureBackupPlanRequest : public RpcServiceRequest
			{

			public:
				ConfigureBackupPlanRequest();
				~ConfigureBackupPlanRequest();

				std::string getSourceEndpointRegion()const;
				void setSourceEndpointRegion(const std::string& sourceEndpointRegion);
				long getBackupGatewayId()const;
				void setBackupGatewayId(long backupGatewayId);
				std::string getSourceEndpointInstanceID()const;
				void setSourceEndpointInstanceID(const std::string& sourceEndpointInstanceID);
				std::string getSourceEndpointUserName()const;
				void setSourceEndpointUserName(const std::string& sourceEndpointUserName);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getBackupPlanId()const;
				void setBackupPlanId(const std::string& backupPlanId);
				std::string getSourceEndpointDatabaseName()const;
				void setSourceEndpointDatabaseName(const std::string& sourceEndpointDatabaseName);
				int getDuplicationInfrequentAccessPeriod()const;
				void setDuplicationInfrequentAccessPeriod(int duplicationInfrequentAccessPeriod);
				std::string getBackupStartTime()const;
				void setBackupStartTime(const std::string& backupStartTime);
				std::string getSourceEndpointIP()const;
				void setSourceEndpointIP(const std::string& sourceEndpointIP);
				bool getEnableBackupLog()const;
				void setEnableBackupLog(bool enableBackupLog);
				std::string getBackupStorageType()const;
				void setBackupStorageType(const std::string& backupStorageType);
				int getDuplicationArchivePeriod()const;
				void setDuplicationArchivePeriod(int duplicationArchivePeriod);
				std::string getSourceEndpointPassword()const;
				void setSourceEndpointPassword(const std::string& sourceEndpointPassword);
				std::string getBackupObjects()const;
				void setBackupObjects(const std::string& backupObjects);
				std::string getOwnerId()const;
				void setOwnerId(const std::string& ownerId);
				int getSourceEndpointPort()const;
				void setSourceEndpointPort(int sourceEndpointPort);
				int getBackupRetentionPeriod()const;
				void setBackupRetentionPeriod(int backupRetentionPeriod);
				std::string getBackupPeriod()const;
				void setBackupPeriod(const std::string& backupPeriod);
				std::string getSourceEndpointInstanceType()const;
				void setSourceEndpointInstanceType(const std::string& sourceEndpointInstanceType);
				std::string getBackupPlanName()const;
				void setBackupPlanName(const std::string& backupPlanName);
				std::string getSourceEndpointOracleSID()const;
				void setSourceEndpointOracleSID(const std::string& sourceEndpointOracleSID);
				std::string getOSSBucketName()const;
				void setOSSBucketName(const std::string& oSSBucketName);

            private:
				std::string sourceEndpointRegion_;
				long backupGatewayId_;
				std::string sourceEndpointInstanceID_;
				std::string sourceEndpointUserName_;
				std::string clientToken_;
				std::string backupPlanId_;
				std::string sourceEndpointDatabaseName_;
				int duplicationInfrequentAccessPeriod_;
				std::string backupStartTime_;
				std::string sourceEndpointIP_;
				bool enableBackupLog_;
				std::string backupStorageType_;
				int duplicationArchivePeriod_;
				std::string sourceEndpointPassword_;
				std::string backupObjects_;
				std::string ownerId_;
				int sourceEndpointPort_;
				int backupRetentionPeriod_;
				std::string backupPeriod_;
				std::string sourceEndpointInstanceType_;
				std::string backupPlanName_;
				std::string sourceEndpointOracleSID_;
				std::string oSSBucketName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DBS_MODEL_CONFIGUREBACKUPPLANREQUEST_H_