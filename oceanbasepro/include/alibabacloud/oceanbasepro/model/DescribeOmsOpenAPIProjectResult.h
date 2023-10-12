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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEOMSOPENAPIPROJECTRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEOMSOPENAPIPROJECTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>

namespace AlibabaCloud
{
	namespace OceanBasePro
	{
		namespace Model
		{
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeOmsOpenAPIProjectResult : public ServiceResult
			{
			public:
				struct ErrorDetail
				{
					std::string message;
					std::string level;
					std::string code;
					std::string proposal;
				};
				struct Data
				{
					struct SourceConfig
					{
						int partition;
						std::string topicType;
						long sendMsgTimeout;
						std::string producerGroup;
						std::string endpointId;
						std::string endpointType;
						std::string partitionMode;
						bool sequenceEnable;
						std::string msgTags;
						long sequenceStartTimestamp;
						bool enableMsgTrace;
						std::string serializerType;
					};
					struct DestConfig
					{
						int partition;
						std::string topicType;
						long sendMsgTimeout;
						std::string producerGroup;
						std::string endpointId;
						std::string endpointType;
						std::string partitionMode;
						bool sequenceEnable;
						std::string msgTags;
						long sequenceStartTimestamp;
						bool enableMsgTrace;
						std::string serializerType;
					};
					struct TransferMapping
					{
						struct Database
						{
							struct Table
							{
								struct AdbTableSchema
								{
									std::vector<std::string> primaryKeys;
									std::vector<std::string> distributedKeys;
									int partitionLifeCycle;
									std::string partitionStatement;
								};
								std::string tableId;
								std::string tableName;
								std::string type;
								std::vector<std::string> shardColumns;
								std::string whereClause;
								std::vector<std::string> filterColumns;
								AdbTableSchema adbTableSchema;
								std::string mappedName;
							};
							std::string type;
							std::string tenantName;
							std::string databaseName;
							std::vector<Database::Table> tables;
							std::string databaseId;
							std::string mappedName;
						};
						std::vector<Database> databases;
						std::string mode;
					};
					struct TransferStepConfig
					{
						struct IncrSyncStepTransferConfig
						{
							long storeLogKeptHour;
							long startTimestamp;
							std::vector<std::string> recordTypeList;
							std::string transferStepType;
							bool storeTransactionEnabled;
						};
						bool enableStructSync;
						bool enableFullSync;
						IncrSyncStepTransferConfig incrSyncStepTransferConfig;
						bool enableIncrSync;
					};
					struct Label
					{
						std::string id;
						std::string creator;
						int count;
						std::string name;
					};
					struct Step
					{
						struct StepInfo
						{
							struct ConnectorFullProgressOverview
							{
								int progress;
								long finishedCount;
								long estimatedRemainingTimeOfSec;
								long estimatedTotalCount;
							};
							long srcRt;
							ConnectorFullProgressOverview connectorFullProgressOverview;
							bool validated;
							long dstRps;
							long dstIops;
							long dstRtRef;
							long inconsistencies;
							bool skipped;
							long srcRps;
							std::string deployId;
							long srcIopsRef;
							long srcIops;
							long srcRpsRef;
							long gmt;
							long processedRecords;
							std::string checkpoint;
							long dstRt;
							long capacity;
							long dstRpsRef;
							long incrTimestampCheckpoint;
							long srcRtRef;
							std::string jobId;
						};
						struct ExtraInfo
						{
							struct ErrorDetail1
							{
								std::string message;
								std::string level;
								std::string code;
								std::string proposal;
							};
							std::string errorMsg;
							std::string errorParam;
							std::vector<ErrorDetail1> errorDetails;
							std::string errorCode;
							std::string failedTime;
						};
						StepInfo stepInfo;
						std::string finishTime;
						long estimatedRemainingSeconds;
						bool interactive;
						std::string startTime;
						int stepOrder;
						ExtraInfo extraInfo;
						std::string stepName;
						std::string stepDescription;
						std::string stepStatus;
						int stepProgress;
					};
					std::vector<Step> steps;
					TransferStepConfig transferStepConfig;
					DestConfig destConfig;
					TransferMapping transferMapping;
					std::string businessName;
					std::string projectName;
					std::string projectOwner;
					SourceConfig sourceConfig;
					std::string projectId;
					std::vector<Label> labels;
				};


				DescribeOmsOpenAPIProjectResult();
				explicit DescribeOmsOpenAPIProjectResult(const std::string &payload);
				~DescribeOmsOpenAPIProjectResult();
				ErrorDetail getErrorDetail()const;
				long getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				Data getData()const;
				std::string getAdvice()const;
				std::string getCode()const;
				std::string getCost()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				ErrorDetail errorDetail_;
				long totalCount_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				Data data_;
				std::string advice_;
				std::string code_;
				std::string cost_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEOMSOPENAPIPROJECTRESULT_H_