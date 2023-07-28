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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBEMIGRATIONJOBSTATUSRESULT_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBEMIGRATIONJOBSTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT DescribeMigrationJobStatusResult : public ServiceResult
			{
			public:
				struct SourceEndpoint
				{
					std::string oracleSID;
					std::string userName;
					std::string instanceId;
					std::string iP;
					std::string port;
					std::string databaseName;
					std::string instanceType;
					std::string engineName;
				};
				struct DestinationEndpoint
				{
					std::string oracleSID;
					std::string userName;
					std::string instanceId;
					std::string iP;
					std::string port;
					std::string databaseName;
					std::string instanceType;
					std::string engineName;
				};
				struct MigrationMode
				{
					bool dataInitialization;
					bool dataSynchronization;
					bool structureInitialization;
				};
				struct PrecheckStatus
				{
					struct CheckItem
					{
						std::string repairMethod;
						std::string checkStatus;
						std::string itemName;
						std::string errorMessage;
					};
					std::string status;
					std::string percent;
					std::vector<CheckItem> detail;
				};
				struct StructureInitializationStatus
				{
					std::string status;
					std::string progress;
					std::string percent;
					std::string errorMessage;
				};
				struct DataInitializationStatus
				{
					std::string status;
					std::string progress;
					std::string percent;
					std::string errorMessage;
				};
				struct DataSynchronizationStatus
				{
					std::string status;
					std::string percent;
					std::string errorMessage;
					std::string delay;
				};


				DescribeMigrationJobStatusResult();
				explicit DescribeMigrationJobStatusResult(const std::string &payload);
				~DescribeMigrationJobStatusResult();
				DataInitializationStatus getDataInitializationStatus()const;
				std::string getMigrationJobName()const;
				std::string getPayType()const;
				MigrationMode getMigrationMode()const;
				std::string getMigrationJobStatus()const;
				std::string getMigrationJobId()const;
				PrecheckStatus getPrecheckStatus()const;
				std::string getMigrationObject()const;
				DestinationEndpoint getDestinationEndpoint()const;
				SourceEndpoint getSourceEndpoint()const;
				std::string getMigrationJobClass()const;
				StructureInitializationStatus getStructureInitializationStatus()const;
				DataSynchronizationStatus getDataSynchronizationStatus()const;

			protected:
				void parse(const std::string &payload);
			private:
				DataInitializationStatus dataInitializationStatus_;
				std::string migrationJobName_;
				std::string payType_;
				MigrationMode migrationMode_;
				std::string migrationJobStatus_;
				std::string migrationJobId_;
				PrecheckStatus precheckStatus_;
				std::string migrationObject_;
				DestinationEndpoint destinationEndpoint_;
				SourceEndpoint sourceEndpoint_;
				std::string migrationJobClass_;
				StructureInitializationStatus structureInitializationStatus_;
				DataSynchronizationStatus dataSynchronizationStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBEMIGRATIONJOBSTATUSRESULT_H_