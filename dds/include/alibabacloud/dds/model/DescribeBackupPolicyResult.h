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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEBACKUPPOLICYRESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEBACKUPPOLICYRESULT_H_

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
			class ALIBABACLOUD_DDS_EXPORT DescribeBackupPolicyResult : public ServiceResult
			{
			public:


				DescribeBackupPolicyResult();
				explicit DescribeBackupPolicyResult(const std::string &payload);
				~DescribeBackupPolicyResult();
				std::string getHighFrequencyBackupRetention()const;
				int getBackupRetentionPolicyOnClusterDeletion()const;
				std::string getPreferredBackupTime()const;
				std::string getCrossBackupPeriod()const;
				std::string getPreferredNextBackupTime()const;
				std::string getCrossLogRetentionType()const;
				std::string getPreferredBackupPeriod()const;
				int getCrossRetentionValue()const;
				int getLogBackupRetentionPeriod()const;
				int getCrossLogRetentionValue()const;
				std::string getCrossRetentionType()const;
				std::string getSrcRegion()const;
				int getEnableCrossLogBackup()const;
				bool getPreserveOneEachHour()const;
				std::string getSnapshotBackupType()const;
				int getEnableBackupLog()const;
				std::string getBackupRetentionPeriod()const;
				bool getBackupTamperProofEnabled()const;
				std::string getDestRegion()const;
				int getBackupInterval()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string highFrequencyBackupRetention_;
				int backupRetentionPolicyOnClusterDeletion_;
				std::string preferredBackupTime_;
				std::string crossBackupPeriod_;
				std::string preferredNextBackupTime_;
				std::string crossLogRetentionType_;
				std::string preferredBackupPeriod_;
				int crossRetentionValue_;
				int logBackupRetentionPeriod_;
				int crossLogRetentionValue_;
				std::string crossRetentionType_;
				std::string srcRegion_;
				int enableCrossLogBackup_;
				bool preserveOneEachHour_;
				std::string snapshotBackupType_;
				int enableBackupLog_;
				std::string backupRetentionPeriod_;
				bool backupTamperProofEnabled_;
				std::string destRegion_;
				int backupInterval_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEBACKUPPOLICYRESULT_H_