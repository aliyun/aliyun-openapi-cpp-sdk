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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBESYNCHRONIZATIONJOBSRESULT_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBESYNCHRONIZATIONJOBSRESULT_H_

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
			class ALIBABACLOUD_DTS_EXPORT DescribeSynchronizationJobsResult : public ServiceResult
			{
			public:
				struct SynchronizationInstance
				{
					struct SourceEndpoint
					{
						std::string instanceId;
						std::string instanceType;
					};
					struct DestinationEndpoint
					{
						std::string instanceId;
						std::string instanceType;
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
					struct Performance
					{
						std::string rPS;
						std::string fLOW;
					};
					struct SynchronizationObject
					{
						struct TableInclude
						{
							std::string tableName;
						};
						struct TableExclude
						{
							std::string tableName;
						};
						std::vector<SynchronizationObject::TableInclude> tableIncludes;
						std::vector<SynchronizationObject::TableExclude> tableExcludes;
						std::string schemaName;
						std::string newSchemaName;
					};
					std::string status;
					DataInitializationStatus dataInitializationStatus;
					std::vector<SynchronizationInstance::SynchronizationObject> synchronizationObjects;
					std::string synchronizationJobName;
					std::string payType;
					std::string delay;
					PrecheckStatus precheckStatus;
					std::string synchronizationJobId;
					std::string dataInitialization;
					DestinationEndpoint destinationEndpoint;
					SourceEndpoint sourceEndpoint;
					std::string structureInitialization;
					Performance performance;
					std::string errorMessage;
					std::string expireTime;
					std::string synchronizationJobClass;
					StructureInitializationStatus structureInitializationStatus;
					DataSynchronizationStatus dataSynchronizationStatus;
				};


				DescribeSynchronizationJobsResult();
				explicit DescribeSynchronizationJobsResult(const std::string &payload);
				~DescribeSynchronizationJobsResult();
				long getTotalRecordCount()const;
				std::vector<SynchronizationInstance> getSynchronizationInstances()const;
				int getPageRecordCount()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalRecordCount_;
				std::vector<SynchronizationInstance> synchronizationInstances_;
				int pageRecordCount_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBESYNCHRONIZATIONJOBSRESULT_H_