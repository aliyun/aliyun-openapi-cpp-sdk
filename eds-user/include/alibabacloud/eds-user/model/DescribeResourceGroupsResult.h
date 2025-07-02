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

#ifndef ALIBABACLOUD_EDS_USER_MODEL_DESCRIBERESOURCEGROUPSRESULT_H_
#define ALIBABACLOUD_EDS_USER_MODEL_DESCRIBERESOURCEGROUPSRESULT_H_

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
			class ALIBABACLOUD_EDS_USER_EXPORT DescribeResourceGroupsResult : public ServiceResult
			{
			public:
				struct ResourceGroupItem
				{
					struct Policy
					{
						bool isDefault;
						std::string id;
						std::string name;
					};
					struct Timer
					{
						std::string timerStatus;
						std::string id;
						std::string bindStatus;
						std::string name;
					};
					struct AppRule
					{
						int type;
						std::string id;
						std::string name;
					};
					std::vector<ResourceGroupItem::Policy> policies;
					std::string resourceGroupId;
					std::string resourceCount;
					std::string createTime;
					std::vector<ResourceGroupItem::AppRule> appRules;
					std::vector<ResourceGroupItem::Timer> timers;
					std::string resourceGroupName;
					std::string authCount;
				};


				DescribeResourceGroupsResult();
				explicit DescribeResourceGroupsResult(const std::string &payload);
				~DescribeResourceGroupsResult();
				std::string getTotalCount()const;
				std::vector<ResourceGroupItem> getResourceGroup()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalCount_;
				std::vector<ResourceGroupItem> resourceGroup_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDS_USER_MODEL_DESCRIBERESOURCEGROUPSRESULT_H_