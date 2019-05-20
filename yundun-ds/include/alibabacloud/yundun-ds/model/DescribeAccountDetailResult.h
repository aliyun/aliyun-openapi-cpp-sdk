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

#ifndef ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEACCOUNTDETAILRESULT_H_
#define ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEACCOUNTDETAILRESULT_H_

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
			class ALIBABACLOUD_YUNDUN_DS_EXPORT DescribeAccountDetailResult : public ServiceResult
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
					struct Privilege
					{
						int useAccountType;
						std::string productName;
						long useAccountCreateTime;
						std::string useAccountId;
						std::string useAccountName;
						std::string useAccountTypeName;
					};
					std::string loginName;
					std::string dataInstance;
					std::string email;
					EventCount eventCount;
					long firstLevelDepartId;
					long createTime;
					std::string deleteStatus;
					std::string activeStatus;
					std::string telephoneNum;
					std::string roleNames;
					long loginDataTime;
					long userId;
					std::string fullName;
					std::string loginPolicyName;
					long id;
					std::string cellphoneNum;
					std::vector<Privilege> privilegeList;
					std::string firstLevelDepartName;
					long aliUid;
				};


				DescribeAccountDetailResult();
				explicit DescribeAccountDetailResult(const std::string &payload);
				~DescribeAccountDetailResult();
				Account getAccount()const;

			protected:
				void parse(const std::string &payload);
			private:
				Account account_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEACCOUNTDETAILRESULT_H_