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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEAUTOSNAPSHOTPOLICYEXRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEAUTOSNAPSHOTPOLICYEXRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeAutoSnapshotPolicyExResult : public ServiceResult
			{
			public:
				struct AutoSnapshotPolicy
				{
					std::string status;
					std::string timePoints;
					int volumeNums;
					std::string creationTime;
					std::string autoSnapshotPolicyId;
					int retentionDays;
					std::string regionId;
					std::string repeatWeekdays;
					std::string autoSnapshotPolicyName;
					int diskNums;
				};


				DescribeAutoSnapshotPolicyExResult();
				explicit DescribeAutoSnapshotPolicyExResult(const std::string &payload);
				~DescribeAutoSnapshotPolicyExResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<AutoSnapshotPolicy> getAutoSnapshotPolicies()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<AutoSnapshotPolicy> autoSnapshotPolicies_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEAUTOSNAPSHOTPOLICYEXRESULT_H_