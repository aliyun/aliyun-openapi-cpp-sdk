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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEDATABASESRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEDATABASESRESULT_H_

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
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeDatabasesResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct UsersItem
					{
						std::string role;
						std::string userName;
						std::string privileges;
						std::string userType;
					};
					struct TablesItem
					{
						std::string tableName;
					};
					std::string status;
					std::string description;
					std::string instanceId;
					std::string tenantName;
					std::string createTime;
					std::string databaseName;
					std::string encoding;
					std::vector<Data::UsersItem> users;
					std::string collation;
					std::string dbType;
					std::string tenantId;
					double requiredSize;
					double dataSize;
					std::vector<Data::TablesItem> tables;
				};


				DescribeDatabasesResult();
				explicit DescribeDatabasesResult(const std::string &payload);
				~DescribeDatabasesResult();
				int getTotalCount()const;
				std::vector<Data> getDatabases()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<Data> databases_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEDATABASESRESULT_H_