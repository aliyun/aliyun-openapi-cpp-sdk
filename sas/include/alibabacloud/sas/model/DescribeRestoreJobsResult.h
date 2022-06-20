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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBERESTOREJOBSRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBERESTOREJOBSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeRestoreJobsResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
					int count;
				};
				struct RestoreJob
				{
					long createdTime;
					std::string message;
					std::string sourceClientId;
					std::string exitCode;
					std::string restoreName;
					std::string gmtModified;
					std::string vaultId;
					std::string excludes;
					long errorCount;
					std::string intranetIp;
					std::string source;
					long bytesTotal;
					std::string includes;
					std::string target;
					std::string internetIp;
					long itemsDone;
					std::string errorType;
					std::string errorFile;
					std::string snapshotVersion;
					std::string clientId;
					long bytesDone;
					long actualBytes;
					std::string restoreId;
					std::string restoreType;
					long completeTime;
					std::string status;
					long speed;
					std::string requestId;
					int percentage;
					std::string instanceId;
					long itemsTotal;
					std::string errorFileUrl;
					long duration;
					std::string snapshotHash;
					std::string instanceName;
					std::string snapshotId;
					std::string gmtCreate;
					std::string uuid;
					long eta;
					long updatedTime;
				};


				DescribeRestoreJobsResult();
				explicit DescribeRestoreJobsResult(const std::string &payload);
				~DescribeRestoreJobsResult();
				PageInfo getPageInfo()const;
				std::vector<RestoreJob> getRestoreJobs()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageInfo pageInfo_;
				std::vector<RestoreJob> restoreJobs_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBERESTOREJOBSRESULT_H_