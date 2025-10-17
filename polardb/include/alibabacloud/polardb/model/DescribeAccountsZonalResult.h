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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEACCOUNTSZONALRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEACCOUNTSZONALRESULT_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT DescribeAccountsZonalResult : public ServiceResult
			{
			public:
				struct DBAccount
				{
					struct DatabasePrivilege
					{
						std::string accountPrivilege;
						std::string dBName;
					};
					std::string accountDescription;
					std::string accountStatus;
					std::string privilegeExceeded;
					std::string dynamoDBAuthPassword;
					std::string accountLockState;
					std::string accountPasswordValidTime;
					std::string accountType;
					std::string tairPasswordSetted;
					std::vector<DBAccount::DatabasePrivilege> databasePrivileges;
					std::string accountName;
					std::string accountPassword;
				};


				DescribeAccountsZonalResult();
				explicit DescribeAccountsZonalResult(const std::string &payload);
				~DescribeAccountsZonalResult();
				int getPageRecordCount()const;
				std::string getNextToken()const;
				int getPageNumber()const;
				int getMaxResults()const;
				std::vector<DBAccount> getAccounts()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageRecordCount_;
				std::string nextToken_;
				int pageNumber_;
				int maxResults_;
				std::vector<DBAccount> accounts_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEACCOUNTSZONALRESULT_H_