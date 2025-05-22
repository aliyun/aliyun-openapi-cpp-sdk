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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEDATABASESRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEDATABASESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeDatabasesResult : public ServiceResult
			{
			public:
				struct Database
				{
					struct AccountPrivilegeInfo
					{
						std::string account;
						std::string accountPrivilege;
						std::string accountPrivilegeDetail;
					};
					std::string connLimit;
					std::string characterSetName;
					int pageSize;
					std::string resourceGroupId;
					std::vector<std::string> runtimeInfo;
					std::string tablespace;
					std::string dBDescription;
					std::string collate;
					std::string dBStatus;
					std::vector<std::string> advancedInfo;
					int totalCount;
					std::string dBInstanceId;
					int pageNumber;
					std::string dBName;
					std::vector<std::string> basicInfo;
					std::string ctype;
					std::vector<Database::AccountPrivilegeInfo> accounts;
					std::string engine;
				};


				DescribeDatabasesResult();
				explicit DescribeDatabasesResult(const std::string &payload);
				~DescribeDatabasesResult();
				std::vector<Database> getDatabases()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Database> databases_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEDATABASESRESULT_H_