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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEPROJECTMODIFYRECORDSREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEPROJECTMODIFYRECORDSREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT CreateProjectModifyRecordsRequest : public RpcServiceRequest {
public:
	struct Databases {
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
		std::string name;
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
	CreateProjectModifyRecordsRequest();
	~CreateProjectModifyRecordsRequest();
	std::vector<Databases> getDatabases() const;
	void setDatabases(const std::vector<Databases> &databases);
	std::string getId() const;
	void setId(const std::string &id);

private:
	std::vector<Databases> databases_;
	std::string id_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEPROJECTMODIFYRECORDSREQUEST_H_
