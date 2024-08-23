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

#ifndef ALIBABACLOUD_GOVERNANCE_MODEL_LISTENROLLEDACCOUNTSRESULT_H_
#define ALIBABACLOUD_GOVERNANCE_MODEL_LISTENROLLEDACCOUNTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/governance/GovernanceExport.h>

namespace AlibabaCloud
{
	namespace Governance
	{
		namespace Model
		{
			class ALIBABACLOUD_GOVERNANCE_EXPORT ListEnrolledAccountsResult : public ServiceResult
			{
			public:
				struct EnrolledAccountsItem
				{
					std::string baselineId;
					std::string status;
					std::string createTime;
					std::string displayName;
					std::string updateTime;
					std::string folderId;
					long accountUid;
					long payerAccountUid;
				};


				ListEnrolledAccountsResult();
				explicit ListEnrolledAccountsResult(const std::string &payload);
				~ListEnrolledAccountsResult();
				std::string getNextToken()const;
				std::vector<EnrolledAccountsItem> getEnrolledAccounts()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<EnrolledAccountsItem> enrolledAccounts_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GOVERNANCE_MODEL_LISTENROLLEDACCOUNTSRESULT_H_