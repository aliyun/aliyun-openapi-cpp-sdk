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
				int getDuplicationArchivePeriod()const;
				void setDuplicationArchivePeriod(int duplicationArchivePeriod);
				long getBackupGatewayId()const;
				void setBackupGatewayId(long backupGatewayId);
				std::string getSourceEndpointInstanceID()const;
				void setSourceEndpointInstanceID(const std::string& sourceEndpointInstanceID);
				std::string getSourceEndpointUserName()const;
				void setSourceEndpointUserName(const std::string& sourceEndpointUserName);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getSourceEndpointPassword()const;
				void setSourceEndpointPassword(const std::string& sourceEndpointPassword);
				std::string getBackupPlanId()const;
				void setBackupPlanId(const std::string& backupPlanId);
				std::string getBackupObjects()const;
				void setBackupObjects(const std::string& backupObjects);
				std::string getOwnerId()const;
				void setOwnerId(const std::string& ownerId);
				int getSourceEndpointPort()const;
				void setSourceEndpointPort(int sourceEndpointPort);
				std::string getSourceEndpointDatabaseName()const;
				void setSourceEndpointDatabaseName(const std::string& sourceEndpointDatabaseName);
				int getBackupRetentionPeriod()const;
				void setBackupRetentionPeriod(int backupRetentionPeriod);
				int getDuplicationInfrequentAccessPeriod()const;
				void setDuplicationInfrequentAccessPeriod(int duplicationInfrequentAccessPeriod);
				std::string getBackupPeriod()const;
				void setBackupPeriod(const std::string& backupPeriod);
				std::string getBackupStartTime()const;
				void setBackupStartTime(const std::string& backupStartTime);
				std::string getSourceEndpointInstanceType()const;
				void setSourceEndpointInstanceType(const std::string& sourceEndpointInstanceType);
				std::string getSourceEndpointIP()const;
				void setSourceEndpointIP(const std::string& sourceEndpointIP);
				std::string getBackupPlanName()const;
				void setBackupPlanName(const std::string& backupPlanName);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getSourceEndpointOracleSID()const;
				void setSourceEndpointOracleSID(const std::string& sourceEndpointOracleSID);
				std::string getOSSBucketName()const;
				void setOSSBucketName(const std::string& oSSBucketName);
				bool getEnableBackupLog()const;
				void setEnableBackupLog(bool enableBackupLog);

            private:
				std::string sourceEndpointRegion_;
				int duplicationArchivePeriod_;
				long backupGatewayId_;
				std::string sourceEndpointInstanceID_;
				std::string sourceEndpointUserName_;
				std::string clientToken_;
				std::string sourceEndpointPassword_;
				std::string backupPlanId_;
				std::string backupObjects_;
				std::string ownerId_;
				int sourceEndpointPort_;
				std::string sourceEndpointDatabaseName_;
				int backupRetentionPeriod_;
				int duplicationInfrequentAccessPeriod_;
				std::string backupPeriod_;
				std::string backupStartTime_;
				std::string sourceEndpointInstanceType_;
				std::string sourceEndpointIP_;
				std::string backupPlanName_;
				std::string regionId_;
				std::string sourceEndpointOracleSID_;
				std::string oSSBucketName_;
				bool enableBackupLog_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DBS_MODEL_CONFIGUREBACKUPPLANREQUEST_H_