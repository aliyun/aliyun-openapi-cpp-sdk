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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERESOURCEUSAGERESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERESOURCEUSAGERESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeResourceUsageResult : public ServiceResult
			{
			public:


				DescribeResourceUsageResult();
				explicit DescribeResourceUsageResult(const std::string &payload);
				~DescribeResourceUsageResult();
				long getLogSize()const;
				long getBackupOssLogSize()const;
				std::string getDBInstanceId()const;
				long getDataSize()const;
				long getBackupSize()const;
				long getBackupOssDataSize()const;
				long getSQLSize()const;
				long getDiskUsed()const;
				std::string getEngine()const;
				long getColdBackupSize()const;

			protected:
				void parse(const std::string &payload);
			private:
				long logSize_;
				long backupOssLogSize_;
				std::string dBInstanceId_;
				long dataSize_;
				long backupSize_;
				long backupOssDataSize_;
				long sQLSize_;
				long diskUsed_;
				std::string engine_;
				long coldBackupSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERESOURCEUSAGERESULT_H_