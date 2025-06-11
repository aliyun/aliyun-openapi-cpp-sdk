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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBETENANTUSERSRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBETENANTUSERSRESULT_H_

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
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeTenantUsersResult : public ServiceResult
			{
			public:
				struct TenantUsersItem
				{
					struct DatabasesItem
					{
						std::string role;
						std::string table;
						std::string privileges;
						std::string database;
					};
					std::string tenantId;
					std::vector<TenantUsersItem::DatabasesItem> databases;
					std::string description;
					std::string userName;
					std::string instanceId;
					std::string globalPermissions;
					std::string userType;
					std::string userStatus;
				};


				DescribeTenantUsersResult();
				explicit DescribeTenantUsersResult(const std::string &payload);
				~DescribeTenantUsersResult();
				int getTotalCount()const;
				std::vector<TenantUsersItem> getTenantUsers()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<TenantUsersItem> tenantUsers_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBETENANTUSERSRESULT_H_