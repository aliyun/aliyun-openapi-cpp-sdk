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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEBACKUPPOLICYRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEBACKUPPOLICYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeBackupPolicyResult : public ServiceResult
			{
			public:


				DescribeBackupPolicyResult();
				explicit DescribeBackupPolicyResult(const std::string &payload);
				~DescribeBackupPolicyResult();
				std::string getPreferredBackupPeriod()const;
				std::string getDataLevel1BackupFrequency()const;
				std::string getDataLevel1BackupRetentionPeriod()const;
				std::string getDataLevel2BackupPeriod()const;
				std::string getPreferredBackupTime()const;
				std::string getBackupRetentionPolicyOnClusterDeletion()const;
				std::string getBackupFrequency()const;
				std::string getDataLevel1BackupTime()const;
				int getBackupRetentionPeriod()const;
				std::string getPreferredNextBackupTime()const;
				std::string getDataLevel1BackupPeriod()const;
				std::string getDataLevel2BackupRetentionPeriod()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string preferredBackupPeriod_;
				std::string dataLevel1BackupFrequency_;
				std::string dataLevel1BackupRetentionPeriod_;
				std::string dataLevel2BackupPeriod_;
				std::string preferredBackupTime_;
				std::string backupRetentionPolicyOnClusterDeletion_;
				std::string backupFrequency_;
				std::string dataLevel1BackupTime_;
				int backupRetentionPeriod_;
				std::string preferredNextBackupTime_;
				std::string dataLevel1BackupPeriod_;
				std::string dataLevel2BackupRetentionPeriod_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEBACKUPPOLICYRESULT_H_