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

#ifndef ALIBABACLOUD_SLB_MODEL_DESCRIBEMASTERSLAVEVSERVERGROUPSRESULT_H_
#define ALIBABACLOUD_SLB_MODEL_DESCRIBEMASTERSLAVEVSERVERGROUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/slb/SlbExport.h>

namespace AlibabaCloud
{
	namespace Slb
	{
		namespace Model
		{
			class ALIBABACLOUD_SLB_EXPORT DescribeMasterSlaveVServerGroupsResult : public ServiceResult
			{
			public:
				struct MasterSlaveVServerGroup
				{
					std::string masterSlaveVServerGroupId;
					std::string masterSlaveVServerGroupName;
				};


				DescribeMasterSlaveVServerGroupsResult();
				explicit DescribeMasterSlaveVServerGroupsResult(const std::string &payload);
				~DescribeMasterSlaveVServerGroupsResult();
				std::vector<MasterSlaveVServerGroup> getMasterSlaveVServerGroups()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<MasterSlaveVServerGroup> masterSlaveVServerGroups_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBEMASTERSLAVEVSERVERGROUPSRESULT_H_