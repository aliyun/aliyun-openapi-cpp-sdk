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

#ifndef ALIBABACLOUD_EDS_USER_MODEL_LOCKUSERSRESULT_H_
#define ALIBABACLOUD_EDS_USER_MODEL_LOCKUSERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eds-user/Eds_userExport.h>

namespace AlibabaCloud
{
	namespace Eds_user
	{
		namespace Model
		{
			class ALIBABACLOUD_EDS_USER_EXPORT LockUsersResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct FailedUsersItem
					{
						std::string endUserId;
						std::string errorCode;
						std::string errorMessage;
					};
					std::vector<FailedUsersItem> failedUsers;
					std::vector<std::string> lockedUsers;
				};


				LockUsersResult();
				explicit LockUsersResult(const std::string &payload);
				~LockUsersResult();
				Result getLockUsersResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				Result lockUsersResult_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDS_USER_MODEL_LOCKUSERSRESULT_H_