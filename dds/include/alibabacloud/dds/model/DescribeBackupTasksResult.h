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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEBACKUPTASKSRESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEBACKUPTASKSRESULT_H_

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
			class ALIBABACLOUD_DDS_EXPORT DescribeBackupTasksResult : public ServiceResult
			{
			public:
				struct BackupTask
				{
					std::string jobMode;
					std::string progress;
					std::string backupjobId;
					std::string backupStartTime;
					std::string backupSetStatus;
				};


				DescribeBackupTasksResult();
				explicit DescribeBackupTasksResult(const std::string &payload);
				~DescribeBackupTasksResult();
				std::vector<BackupTask> getBackupJobs()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<BackupTask> backupJobs_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEBACKUPTASKSRESULT_H_