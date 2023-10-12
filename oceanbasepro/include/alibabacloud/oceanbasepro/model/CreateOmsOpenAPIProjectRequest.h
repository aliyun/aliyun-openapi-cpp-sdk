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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEOMSOPENAPIPROJECTREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEOMSOPENAPIPROJECTREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT CreateOmsOpenAPIProjectRequest : public RpcServiceRequest {
public:
	struct DestConfig {
		long sendMsgTimeout;
		long sequenceStartTimestamp;
		int partition;
		std::string serializerType;
		std::string endpointType;
		std::string endpointId;
		bool sequenceEnable;
		std::string partitionMode;
		bool enableMsgTrace;
		std::string topicType;
		std::string msgTags;
		std::string producerGroup;
	};
	struct TransferMapping {
		std::string mode;
		struct DatabasesItem {
			std::string mappedName;
			struct TablesItem {
				std::string mappedName;
				std::string string;
				std::vector<std::string> filterColumns;
				struct AdbTableSchema {
					std::string string;
					std::vector<std::string> primaryKeys;
					std::string partitionStatement;
					int partitionLifeCycle;
					std::string string;
					std::vector<std::string> distributedKeys;
				};
				AdbTableSchema adbTableSchema;
				std::string tableId;
				std::string whereClause;
				std::string string;
				std::vector<std::string> shardColumns;
				std::string tableName;
				std::string type;
			};
			TablesItem tablesItem;
			std::vector<TablesItem> tables;
			std::string databaseName;
			std::string tenantName;
			std::string databaseId;
			std::string type;
		};
		DatabasesItem databasesItem;
		std::vector<DatabasesItem> databases;
	};
	struct TransferStepConfig {
		struct IncrSyncStepTransferConfig {
			bool storeTransactionEnabled;
			std::string string;
			std::vector<std::string> recordTypeList;
			std::string transferStepType;
			long storeLogKeptHour;
			long startTimestamp;
		};
		IncrSyncStepTransferConfig incrSyncStepTransferConfig;
		bool enableFullSync;
		bool enableIncrSync;
		bool enableStructSync;
	};
	struct SourceConfig {
		long sendMsgTimeout;
		long sequenceStartTimestamp;
		int partition;
		std::string serializerType;
		std::string endpointType;
		std::string endpointId;
		bool sequenceEnable;
		std::string partitionMode;
		bool enableMsgTrace;
		std::string topicType;
		std::string msgTags;
		std::string producerGroup;
	};
	CreateOmsOpenAPIProjectRequest();
	~CreateOmsOpenAPIProjectRequest();
	DestConfig getDestConfig() const;
	void setDestConfig(const DestConfig &destConfig);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getPageSize() const;
	void setPageSize(int pageSize);
	TransferMapping getTransferMapping() const;
	void setTransferMapping(const TransferMapping &transferMapping);
	TransferStepConfig getTransferStepConfig() const;
	void setTransferStepConfig(const TransferStepConfig &transferStepConfig);
	std::string getWorkerGradeId() const;
	void setWorkerGradeId(const std::string &workerGradeId);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	SourceConfig getSourceConfig() const;
	void setSourceConfig(const SourceConfig &sourceConfig);
	std::string getBusinessName() const;
	void setBusinessName(const std::string &businessName);
	std::vector<std::string> getLabelIds() const;
	void setLabelIds(const std::vector<std::string> &labelIds);

private:
	DestConfig destConfig_;
	int pageNumber_;
	int pageSize_;
	TransferMapping transferMapping_;
	TransferStepConfig transferStepConfig_;
	std::string workerGradeId_;
	std::string projectName_;
	SourceConfig sourceConfig_;
	std::string businessName_;
	std::vector<std::string> labelIds_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEOMSOPENAPIPROJECTREQUEST_H_
