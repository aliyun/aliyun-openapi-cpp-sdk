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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEADVANCEDBACKUPPOLICYRESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEADVANCEDBACKUPPOLICYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeAdvancedBackupPolicyResult : public ServiceResult
			{
			public:
				struct AdvancedBackupPolicy
				{
					std::string destType;
					std::string preferredBackupPeriod;
					std::string actionType;
					std::string srcRegion;
					bool preserveOneEachHour;
					std::string srcType;
					int retentionPeriod;
					std::string destRegion;
					std::string policyId;
					std::string backupPolicy;
					std::string retentionType;
				};
				struct AdvancedBackupLogPolicy
				{
					std::string destType;
					std::string srcRegion;
					int enableLogBackup;
					std::string srcType;
					std::string retentionPeriod;
					std::string destRegion;
					std::string policyId;
					std::string retentionType;
				};


				DescribeAdvancedBackupPolicyResult();
				explicit DescribeAdvancedBackupPolicyResult(const std::string &payload);
				~DescribeAdvancedBackupPolicyResult();
				std::vector<AdvancedBackupPolicy> getAdvancedBackupDataPolicies()const;
				std::string getDBInstanceId()const;
				std::string getSnapshotBackupType()const;
				int getBackupRetentionPolicyOnClusterDeletion()const;
				std::string getPreferredBackupTime()const;
				bool getBackupTamperProofEnabled()const;
				std::string getPreferredNextBackupTime()const;
				std::vector<AdvancedBackupLogPolicy> getAdvancedBackupLogPolicies()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<AdvancedBackupPolicy> advancedBackupDataPolicies_;
				std::string dBInstanceId_;
				std::string snapshotBackupType_;
				int backupRetentionPolicyOnClusterDeletion_;
				std::string preferredBackupTime_;
				bool backupTamperProofEnabled_;
				std::string preferredNextBackupTime_;
				std::vector<AdvancedBackupLogPolicy> advancedBackupLogPolicies_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEADVANCEDBACKUPPOLICYRESULT_H_