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

#ifndef ALIBABACLOUD_DTS_MODEL_CONFIGUREMIGRATIONJOBREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_CONFIGUREMIGRATIONJOBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT ConfigureMigrationJobRequest : public RpcServiceRequest
			{

			public:
				ConfigureMigrationJobRequest();
				~ConfigureMigrationJobRequest();

				std::string getSourceEndpointInstanceID()const;
				void setSourceEndpointInstanceID(const std::string& sourceEndpointInstanceID);
				std::string getCheckpoint()const;
				void setCheckpoint(const std::string& checkpoint);
				std::string getSourceEndpointEngineName()const;
				void setSourceEndpointEngineName(const std::string& sourceEndpointEngineName);
				std::string getSourceEndpointOracleSID()const;
				void setSourceEndpointOracleSID(const std::string& sourceEndpointOracleSID);
				std::string getDestinationEndpointInstanceID()const;
				void setDestinationEndpointInstanceID(const std::string& destinationEndpointInstanceID);
				std::string getSourceEndpointIP()const;
				void setSourceEndpointIP(const std::string& sourceEndpointIP);
				std::string getDestinationEndpointPassword()const;
				void setDestinationEndpointPassword(const std::string& destinationEndpointPassword);
				std::string getMigrationObject()const;
				void setMigrationObject(const std::string& migrationObject);
				bool getMigrationModeDataIntialization()const;
				void setMigrationModeDataIntialization(bool migrationModeDataIntialization);
				std::string getMigrationJobId()const;
				void setMigrationJobId(const std::string& migrationJobId);
				std::string getSourceEndpointInstanceType()const;
				void setSourceEndpointInstanceType(const std::string& sourceEndpointInstanceType);
				std::string getDestinationEndpointEngineName()const;
				void setDestinationEndpointEngineName(const std::string& destinationEndpointEngineName);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getAccountId()const;
				void setAccountId(const std::string& accountId);
				bool getMigrationModeStructureIntialization()const;
				void setMigrationModeStructureIntialization(bool migrationModeStructureIntialization);
				bool getMigrationModeDataSynchronization()const;
				void setMigrationModeDataSynchronization(bool migrationModeDataSynchronization);
				std::string getDestinationEndpointRegion()const;
				void setDestinationEndpointRegion(const std::string& destinationEndpointRegion);
				std::string getSourceEndpointUserName()const;
				void setSourceEndpointUserName(const std::string& sourceEndpointUserName);
				std::string getSourceEndpointDatabaseName()const;
				void setSourceEndpointDatabaseName(const std::string& sourceEndpointDatabaseName);
				std::string getSourceEndpointPort()const;
				void setSourceEndpointPort(const std::string& sourceEndpointPort);
				std::string getSourceEndpointOwnerID()const;
				void setSourceEndpointOwnerID(const std::string& sourceEndpointOwnerID);
				std::string getDestinationEndpointUserName()const;
				void setDestinationEndpointUserName(const std::string& destinationEndpointUserName);
				std::string getDestinationEndpointOracleSID()const;
				void setDestinationEndpointOracleSID(const std::string& destinationEndpointOracleSID);
				std::string getDestinationEndpointPort()const;
				void setDestinationEndpointPort(const std::string& destinationEndpointPort);
				std::string getSourceEndpointRegion()const;
				void setSourceEndpointRegion(const std::string& sourceEndpointRegion);
				std::string getSourceEndpointRole()const;
				void setSourceEndpointRole(const std::string& sourceEndpointRole);
				std::string getOwnerId()const;
				void setOwnerId(const std::string& ownerId);
				std::string getDestinationEndpointDataBaseName()const;
				void setDestinationEndpointDataBaseName(const std::string& destinationEndpointDataBaseName);
				std::string getSourceEndpointPassword()const;
				void setSourceEndpointPassword(const std::string& sourceEndpointPassword);
				std::string getMigrationReserved()const;
				void setMigrationReserved(const std::string& migrationReserved);
				std::string getDestinationEndpointIP()const;
				void setDestinationEndpointIP(const std::string& destinationEndpointIP);
				std::string getMigrationJobName()const;
				void setMigrationJobName(const std::string& migrationJobName);
				std::string getDestinationEndpointInstanceType()const;
				void setDestinationEndpointInstanceType(const std::string& destinationEndpointInstanceType);

            private:
				std::string sourceEndpointInstanceID_;
				std::string checkpoint_;
				std::string sourceEndpointEngineName_;
				std::string sourceEndpointOracleSID_;
				std::string destinationEndpointInstanceID_;
				std::string sourceEndpointIP_;
				std::string destinationEndpointPassword_;
				std::string migrationObject_;
				bool migrationModeDataIntialization_;
				std::string migrationJobId_;
				std::string sourceEndpointInstanceType_;
				std::string destinationEndpointEngineName_;
				std::string accessKeyId_;
				std::string accountId_;
				bool migrationModeStructureIntialization_;
				bool migrationModeDataSynchronization_;
				std::string destinationEndpointRegion_;
				std::string sourceEndpointUserName_;
				std::string sourceEndpointDatabaseName_;
				std::string sourceEndpointPort_;
				std::string sourceEndpointOwnerID_;
				std::string destinationEndpointUserName_;
				std::string destinationEndpointOracleSID_;
				std::string destinationEndpointPort_;
				std::string sourceEndpointRegion_;
				std::string sourceEndpointRole_;
				std::string ownerId_;
				std::string destinationEndpointDataBaseName_;
				std::string sourceEndpointPassword_;
				std::string migrationReserved_;
				std::string destinationEndpointIP_;
				std::string migrationJobName_;
				std::string destinationEndpointInstanceType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_CONFIGUREMIGRATIONJOBREQUEST_H_