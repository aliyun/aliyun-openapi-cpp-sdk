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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEBACKUPPOLICYRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEBACKUPPOLICYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeBackupPolicyResult : public ServiceResult
			{
			public:


				DescribeBackupPolicyResult();
				explicit DescribeBackupPolicyResult(const std::string &payload);
				~DescribeBackupPolicyResult();
				std::string getPreferredBackupPeriod()const;
				void setPreferredBackupPeriod(const std::string& preferredBackupPeriod);
				int getLogBackupRetentionPeriod()const;
				void setLogBackupRetentionPeriod(int logBackupRetentionPeriod);
				std::string getPreferredBackupTime()const;
				void setPreferredBackupTime(const std::string& preferredBackupTime);
				std::string getBackupLog()const;
				void setBackupLog(const std::string& backupLog);
				int getBackupRetentionPeriod()const;
				void setBackupRetentionPeriod(int backupRetentionPeriod);
				std::string getPreferredNextBackupTime()const;
				void setPreferredNextBackupTime(const std::string& preferredNextBackupTime);

			protected:
				void parse(const std::string &payload);
			private:
				std::string preferredBackupPeriod_;
				int logBackupRetentionPeriod_;
				std::string preferredBackupTime_;
				std::string backupLog_;
				int backupRetentionPeriod_;
				std::string preferredNextBackupTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEBACKUPPOLICYRESULT_H_