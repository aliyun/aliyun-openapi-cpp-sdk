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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEPROJECTREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEPROJECTREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT CreateProjectRequest : public RpcServiceRequest {
public:
	struct FullTransferConfig {
		bool nonePkUkTruncateDstTable;
		std::string fullVerifySpeedMode;
		std::string fullTransferSpeedMode;
		bool allowDestTableNotEmpty;
	};
	struct TransferMapping {
		std::string mode;
		struct DatabasesItem {
			std::string mappedName;
			struct SpecificViewsItem {
				std::string mappedName;
				std::string string;
				std::vector<std::string> filterColumns;
				struct AdbTableSchema {
					std::string string;
					std::vector<std::string> primaryKeys;
					std::string partitionStatement;
					std::string partitionLifeCycle;
					std::string string;
					std::vector<std::string> distributedKeys;
				};
				AdbTableSchema adbTableSchema;
				std::string name;
				std::string whereClause;
				std::string id;
				std::string string;
				std::vector<std::string> shardColumns;
			};
			SpecificViewsItem specificViewsItem;
			std::vector<SpecificViewsItem> specificViews;
			struct TablesItem {
				std::string mappedName;
				std::string string;
				std::vector<std::string> filterColumns;
				struct AdbTableSchema {
					std::string string;
					std::vector<std::string> primaryKeys;
					std::string partitionStatement;
					std::string partitionLifeCycle;
					std::string string;
					std::vector<std::string> distributedKeys;
				};
				AdbTableSchema adbTableSchema;
				std::string name;
				std::string whereClause;
				std::string id;
				std::string string;
				std::vector<std::string> shardColumns;
			};
			TablesItem tablesItem;
			std::vector<TablesItem> tables;
			std::string clusterName;
			std::string name;
			std::string tenantName;
			std::string id;
			struct SpecificTablesItem {
				std::string mappedName;
				std::string string;
				std::vector<std::string> filterColumns;
				struct AdbTableSchema {
					std::string string;
					std::vector<std::string> primaryKeys;
					std::string partitionStatement;
					std::string partitionLifeCycle;
					std::string string;
					std::vector<std::string> distributedKeys;
				};
				AdbTableSchema adbTableSchema;
				std::string name;
				std::string whereClause;
				std::string id;
				std::string string;
				std::vector<std::string> shardColumns;
			};
			SpecificTablesItem specificTablesItem;
			std::vector<SpecificTablesItem> specificTables;
			struct ViewsItem {
				std::string mappedName;
				std::string string;
				std::vector<std::string> filterColumns;
				struct AdbTableSchema {
					std::string string;
					std::vector<std::string> primaryKeys;
					std::string partitionStatement;
					std::string partitionLifeCycle;
					std::string string;
					std::vector<std::string> distributedKeys;
				};
				AdbTableSchema adbTableSchema;
				std::string name;
				std::string whereClause;
				std::string id;
				std::string string;
				std::vector<std::string> shardColumns;
			};
			ViewsItem viewsItem;
			std::vector<ViewsItem> views;
		};
		DatabasesItem databasesItem;
		std::vector<DatabasesItem> databases;
		std::string string;
		std::vector<std::string> tableAndViewBlackList;
		struct DatabasesBlackItem {
			std::string mappedName;
			struct SpecificViewsItem {
				std::string mappedName;
				std::string string;
				std::vector<std::string> filterColumns;
				struct AdbTableSchema {
					std::string string;
					std::vector<std::string> primaryKeys;
					std::string partitionStatement;
					std::string partitionLifeCycle;
					std::string string;
					std::vector<std::string> distributedKeys;
				};
				AdbTableSchema adbTableSchema;
				std::string name;
				std::string whereClause;
				std::string id;
				std::string string;
				std::vector<std::string> shardColumns;
			};
			SpecificViewsItem specificViewsItem;
			std::vector<SpecificViewsItem> specificViews;
			struct TablesItem {
				std::string mappedName;
				std::string string;
				std::vector<std::string> filterColumns;
				struct AdbTableSchema {
					std::string string;
					std::vector<std::string> primaryKeys;
					std::string partitionStatement;
					std::string partitionLifeCycle;
					std::string string;
					std::vector<std::string> distributedKeys;
				};
				AdbTableSchema adbTableSchema;
				std::string name;
				std::string whereClause;
				std::string id;
				std::string string;
				std::vector<std::string> shardColumns;
			};
			TablesItem tablesItem;
			std::vector<TablesItem> tables;
			std::string clusterName;
			std::string name;
			std::string tenantName;
			std::string id;
			struct SpecificTablesItem {
				std::string mappedName;
				std::string string;
				std::vector<std::string> filterColumns;
				struct AdbTableSchema {
					std::string string;
					std::vector<std::string> primaryKeys;
					std::string partitionStatement;
					std::string partitionLifeCycle;
					std::string string;
					std::vector<std::string> distributedKeys;
				};
				AdbTableSchema adbTableSchema;
				std::string name;
				std::string whereClause;
				std::string id;
				std::string string;
				std::vector<std::string> shardColumns;
			};
			SpecificTablesItem specificTablesItem;
			std::vector<SpecificTablesItem> specificTables;
			struct ViewsItem {
				std::string mappedName;
				std::string string;
				std::vector<std::string> filterColumns;
				struct AdbTableSchema {
					std::string string;
					std::vector<std::string> primaryKeys;
					std::string partitionStatement;
					std::string partitionLifeCycle;
					std::string string;
					std::vector<std::string> distributedKeys;
				};
				AdbTableSchema adbTableSchema;
				std::string name;
				std::string whereClause;
				std::string id;
				std::string string;
				std::vector<std::string> shardColumns;
			};
			ViewsItem viewsItem;
			std::vector<ViewsItem> views;
		};
		DatabasesBlackItem databasesBlackItem;
		std::vector<DatabasesBlackItem> databasesBlack;
		std::string string;
		std::vector<std::string> tableAndViewWhiteList;
	};
	struct CommonTransferConfig {
		long rocketMqSendMsgTimeout;
		int mqPartition;
		std::string tableCategory;
		bool activeActive;
		std::string datahubTopicType;
		std::string rocketMqMsgTags;
		bool rocketMqEnableMsgTrace;
		std::string dataWorksBusinessName;
		std::string rocketMqProducerGroup;
		std::string mqSerializerType;
		std::string mqPartitionMode;
	};
	struct StructTransferConfig {
		std::string byteCharConvertStrategy;
		bool deferIndexCreation;
	};
	struct IncrTransferConfig {
		bool enableSequencingWithinTxn;
		int storeLogKeptHour;
		std::string startTimestamp;
		std::string string;
		std::vector<std::string> recordTypeWhiteList;
		int incrSyncConcurrency;
		bool enableIncrSyncStatistics;
	};
	CreateProjectRequest();
	~CreateProjectRequest();
	std::string getSinkEndpointId() const;
	void setSinkEndpointId(const std::string &sinkEndpointId);
	bool getUseOss() const;
	void setUseOss(bool useOss);
	std::string getOssKey() const;
	void setOssKey(const std::string &ossKey);
	std::string getSourceEndpointId() const;
	void setSourceEndpointId(const std::string &sourceEndpointId);
	std::string getType() const;
	void setType(const std::string &type);
	FullTransferConfig getFullTransferConfig() const;
	void setFullTransferConfig(const FullTransferConfig &fullTransferConfig);
	bool getEnableStructTransfer() const;
	void setEnableStructTransfer(bool enableStructTransfer);
	TransferMapping getTransferMapping() const;
	void setTransferMapping(const TransferMapping &transferMapping);
	std::string getWorkerGradeId() const;
	void setWorkerGradeId(const std::string &workerGradeId);
	CommonTransferConfig getCommonTransferConfig() const;
	void setCommonTransferConfig(const CommonTransferConfig &commonTransferConfig);
	StructTransferConfig getStructTransferConfig() const;
	void setStructTransferConfig(const StructTransferConfig &structTransferConfig);
	bool getEnableIncrTransfer() const;
	void setEnableIncrTransfer(bool enableIncrTransfer);
	bool getEnableFullTransfer() const;
	void setEnableFullTransfer(bool enableFullTransfer);
	bool getEnableFullVerify() const;
	void setEnableFullVerify(bool enableFullVerify);
	std::string getName() const;
	void setName(const std::string &name);
	std::vector<std::string> getLabelIds() const;
	void setLabelIds(const std::vector<std::string> &labelIds);
	IncrTransferConfig getIncrTransferConfig() const;
	void setIncrTransferConfig(const IncrTransferConfig &incrTransferConfig);
	bool getEnableReverseIncrTransfer() const;
	void setEnableReverseIncrTransfer(bool enableReverseIncrTransfer);

private:
	std::string sinkEndpointId_;
	bool useOss_;
	std::string ossKey_;
	std::string sourceEndpointId_;
	std::string type_;
	FullTransferConfig fullTransferConfig_;
	bool enableStructTransfer_;
	TransferMapping transferMapping_;
	std::string workerGradeId_;
	CommonTransferConfig commonTransferConfig_;
	StructTransferConfig structTransferConfig_;
	bool enableIncrTransfer_;
	bool enableFullTransfer_;
	bool enableFullVerify_;
	std::string name_;
	std::vector<std::string> labelIds_;
	IncrTransferConfig incrTransferConfig_;
	bool enableReverseIncrTransfer_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEPROJECTREQUEST_H_
