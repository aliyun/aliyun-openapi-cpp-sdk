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

#ifndef ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBEBACKUPPOLICYRESULT_H_
#define ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBEBACKUPPOLICYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/clickhouse/ClickhouseExport.h>

namespace AlibabaCloud
{
	namespace Clickhouse
	{
		namespace Model
		{
			class ALIBABACLOUD_CLICKHOUSE_EXPORT DescribeBackupPolicyResult : public ServiceResult
			{
			public:


				DescribeBackupPolicyResult();
				explicit DescribeBackupPolicyResult(const std::string &payload);
				~DescribeBackupPolicyResult();
				std::string getPreferredBackupPeriod()const;
				std::string get_Switch()const;
				std::string getPreferredBackupTime()const;
				std::string getBackupSize()const;
				int getBackupRetentionPeriod()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string preferredBackupPeriod_;
				std::string _switch_;
				std::string preferredBackupTime_;
				std::string backupSize_;
				int backupRetentionPeriod_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBEBACKUPPOLICYRESULT_H_