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

#ifndef ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBEALLDATASOURCERESULT_H_
#define ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBEALLDATASOURCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/clickhouse/ClickhouseExport.h>

namespace AlibabaCloud
{
	namespace Clickhouse
	{
		namespace Model
		{
			class ALIBABACLOUD_CLICKHOUSE_EXPORT DescribeAllDataSourceResult : public ServiceResult
			{
			public:
				struct Table
				{
					std::string tableName;
					std::string dBClusterId;
					std::string schemaName;
				};
				struct Column
				{
					std::string columnName;
					std::string tableName;
					std::string type;
					bool autoIncrementColumn;
					std::string dBClusterId;
					bool primaryKey;
					std::string schemaName;
				};
				struct Schema
				{
					std::string dBClusterId;
					std::string schemaName;
				};


				DescribeAllDataSourceResult();
				explicit DescribeAllDataSourceResult(const std::string &payload);
				~DescribeAllDataSourceResult();
				std::vector<Table> getTables()const;
				std::vector<Column> getColumns()const;
				std::vector<Schema> getSchemas()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Table> tables_;
				std::vector<Column> columns_;
				std::vector<Schema> schemas_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBEALLDATASOURCERESULT_H_