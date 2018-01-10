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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEAUTOSNAPSHOTPOLICYRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEAUTOSNAPSHOTPOLICYRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeAutoSnapshotPolicyResult : public ServiceResult
			{
			public:
				struct AutoSnapshotPolicy
				{
					std::string systemDiskPolicyTimePeriod;
					std::string systemDiskPolicyEnabled;
					std::string dataDiskPolicyTimePeriod;
					std::string systemDiskPolicyRetentionLastWeek;
					std::string systemDiskPolicyRetentionDays;
					std::string dataDiskPolicyRetentionDays;
					std::string dataDiskPolicyRetentionLastWeek;
					std::string dataDiskPolicyEnabled;
				};
				struct AutoSnapshotExcutionStatus
				{
					std::string systemDiskExcutionStatus;
					std::string dataDiskExcutionStatus;
				};


				DescribeAutoSnapshotPolicyResult();
				explicit DescribeAutoSnapshotPolicyResult(const std::string &payload);
				~DescribeAutoSnapshotPolicyResult();
				int getAutoSnapshotOccupation()const;
				void setAutoSnapshotOccupation(int autoSnapshotOccupation);
				std::vector<AutoSnapshotExcutionStatus> getAutoSnapshotExcutionStatus()const;
				void setAutoSnapshotExcutionStatus(const std::vector<AutoSnapshotExcutionStatus>& autoSnapshotExcutionStatus);
				std::vector<AutoSnapshotPolicy> getAutoSnapshotPolicy()const;
				void setAutoSnapshotPolicy(const std::vector<AutoSnapshotPolicy>& autoSnapshotPolicy);

			protected:
				void parse(const std::string &payload);
			private:
				int autoSnapshotOccupation_;
				std::vector<AutoSnapshotExcutionStatus> autoSnapshotExcutionStatus_;
				std::vector<AutoSnapshotPolicy> autoSnapshotPolicy_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEAUTOSNAPSHOTPOLICYRESULT_H_