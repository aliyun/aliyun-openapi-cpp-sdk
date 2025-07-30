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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEBACKUPTASKSRESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEBACKUPTASKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>

namespace AlibabaCloud
{
	namespace R_kvstore
	{
		namespace Model
		{
			class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeBackupTasksResult : public ServiceResult
			{
			public:
				struct AccessDeniedDetail
				{
					std::string policyType;
					std::string authPrincipalOwnerId;
					std::string encodedDiagnosticMessage;
					std::string authPrincipalType;
					std::string authPrincipalDisplayName;
					std::string noPermissionType;
					std::string authAction;
				};
				struct BackupJob
				{
					std::string jobMode;
					std::string progress;
					std::string taskAction;
					std::string startTime;
					std::string nodeId;
					std::string backupProgressStatus;
					std::string process;
					long backupJobID;
				};


				DescribeBackupTasksResult();
				explicit DescribeBackupTasksResult(const std::string &payload);
				~DescribeBackupTasksResult();
				AccessDeniedDetail getAccessDeniedDetail()const;
				std::string getInstanceId()const;
				std::vector<BackupJob> getBackupJobs()const;

			protected:
				void parse(const std::string &payload);
			private:
				AccessDeniedDetail accessDeniedDetail_;
				std::string instanceId_;
				std::vector<BackupJob> backupJobs_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEBACKUPTASKSRESULT_H_