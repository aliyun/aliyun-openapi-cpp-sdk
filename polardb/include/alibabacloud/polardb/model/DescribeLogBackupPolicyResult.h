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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBELOGBACKUPPOLICYRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBELOGBACKUPPOLICYRESULT_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT DescribeLogBackupPolicyResult : public ServiceResult
			{
			public:


				DescribeLogBackupPolicyResult();
				explicit DescribeLogBackupPolicyResult(const std::string &payload);
				~DescribeLogBackupPolicyResult();
				std::string getLogBackupAnotherRegionRegion()const;
				int getLogBackupRetentionPeriod()const;
				std::string getLogBackupAnotherRegionRetentionPeriod()const;
				int getEnableBackupLog()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string logBackupAnotherRegionRegion_;
				int logBackupRetentionPeriod_;
				std::string logBackupAnotherRegionRetentionPeriod_;
				int enableBackupLog_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBELOGBACKUPPOLICYRESULT_H_