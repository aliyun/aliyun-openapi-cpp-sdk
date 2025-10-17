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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDATABASESZONALRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDATABASESZONALRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeDatabasesZonalResult : public ServiceResult
			{
			public:
				struct Database
				{
					struct Account
					{
						std::string accountStatus;
						std::string accountPrivilege;
						std::string privilegeStatus;
						std::string accountName;
					};
					std::string characterSetName;
					std::string dBDescription;
					std::string dBName;
					std::string masterID;
					std::string dBStatus;
					std::vector<Database::Account> accounts;
					std::string engine;
				};


				DescribeDatabasesZonalResult();
				explicit DescribeDatabasesZonalResult(const std::string &payload);
				~DescribeDatabasesZonalResult();
				std::vector<Database> getDatabases()const;
				int getPageRecordCount()const;
				std::string getNextToken()const;
				int getPageNumber()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Database> databases_;
				int pageRecordCount_;
				std::string nextToken_;
				int pageNumber_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDATABASESZONALRESULT_H_