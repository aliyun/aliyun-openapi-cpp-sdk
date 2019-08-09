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

#ifndef ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEACCOUNTSRESULT_H_
#define ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEACCOUNTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/yundun-ds/Yundun_dsExport.h>

namespace AlibabaCloud
{
	namespace Yundun_ds
	{
		namespace Model
		{
			class ALIBABACLOUD_YUNDUN_DS_EXPORT DescribeAccountsResult : public ServiceResult
			{
			public:
				struct Account
				{
					struct EventCount
					{
						struct Total
						{
							long totalCount;
							long excludeCount;
							long undealCount;
							long confirmCount;
						};
						Total total;
					};
					std::string loginName;
					std::string dataInstance;
					std::string email;
					EventCount eventCount;
					long firstLevelDepartId;
					long createTime;
					std::string deleteStatus;
					std::string activeStatus;
					std::string instanceName;
					std::string telephoneNum;
					long accountTypeId;
					std::string roleNames;
					long loginDataTime;
					long userId;
					std::string fullName;
					std::string loginPolicyName;
					long id;
					std::string cellphoneNum;
					std::string firstLevelDepartName;
					long aliUid;
				};


				DescribeAccountsResult();
				explicit DescribeAccountsResult(const std::string &payload);
				~DescribeAccountsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::vector<Account> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				std::vector<Account> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEACCOUNTSRESULT_H_