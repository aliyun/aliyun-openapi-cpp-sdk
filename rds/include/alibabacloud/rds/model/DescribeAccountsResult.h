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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEACCOUNTSRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEACCOUNTSRESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeAccountsResult : public ServiceResult
			{
			public:
				struct DBInstanceAccount
				{
					struct DatabasePrivilege
					{
						std::string accountPrivilege;
						std::string dBName;
						std::string accountPrivilegeDetail;
					};
					std::string accountDescription;
					std::string createDB;
					bool checkPolicy;
					std::string accountType;
					std::string bypassRLS;
					std::string validUntil;
					std::string accountStatus;
					std::string passwordExpireTime;
					std::string privExceeded;
					std::string dBInstanceId;
					std::string replication;
					std::vector<DBInstanceAccount::DatabasePrivilege> databasePrivileges;
					std::string accountName;
					std::string createRole;
				};


				DescribeAccountsResult();
				explicit DescribeAccountsResult(const std::string &payload);
				~DescribeAccountsResult();
				int getTotalRecordCount()const;
				std::string getResourceGroupId()const;
				int getPageNumber()const;
				std::string getSystemAdminAccountStatus()const;
				std::vector<DBInstanceAccount> getAccounts()const;
				std::string getSystemAdminAccountFirstActivationTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				std::string resourceGroupId_;
				int pageNumber_;
				std::string systemAdminAccountStatus_;
				std::vector<DBInstanceAccount> accounts_;
				std::string systemAdminAccountFirstActivationTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEACCOUNTSRESULT_H_