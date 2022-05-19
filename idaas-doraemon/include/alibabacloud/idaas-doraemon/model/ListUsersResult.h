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

#ifndef ALIBABACLOUD_IDAAS_DORAEMON_MODEL_LISTUSERSRESULT_H_
#define ALIBABACLOUD_IDAAS_DORAEMON_MODEL_LISTUSERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/idaas-doraemon/Idaas_doraemonExport.h>

namespace AlibabaCloud
{
	namespace Idaas_doraemon
	{
		namespace Model
		{
			class ALIBABACLOUD_IDAAS_DORAEMON_EXPORT ListUsersResult : public ServiceResult
			{
			public:
				struct UsersItem
				{
					std::string userName;
					std::string userId;
					std::string userDisplayName;
				};


				ListUsersResult();
				explicit ListUsersResult(const std::string &payload);
				~ListUsersResult();
				long getTotalCount()const;
				std::vector<UsersItem> getUsers()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::vector<UsersItem> users_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IDAAS_DORAEMON_MODEL_LISTUSERSRESULT_H_