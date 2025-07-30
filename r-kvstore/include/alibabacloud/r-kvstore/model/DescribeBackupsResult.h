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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEBACKUPSRESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEBACKUPSRESULT_H_

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
			class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeBackupsResult : public ServiceResult
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
				struct Backup
				{
					std::string backupMethod;
					std::string recoverConfigMode;
					std::string engineVersion;
					std::string backupIntranetDownloadURL;
					long backupSize;
					std::string backupMode;
					long backupId;
					std::string nodeInstanceId;
					long backupJobID;
					std::string expectExpireTime;
					std::string backupDBNames;
					std::string backupDownloadURL;
					std::string backupEndTime;
					std::string backupStartTime;
					std::string backupType;
					std::string backupStatus;
				};


				DescribeBackupsResult();
				explicit DescribeBackupsResult(const std::string &payload);
				~DescribeBackupsResult();
				AccessDeniedDetail getAccessDeniedDetail()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				long getFreeSize()const;
				std::vector<Backup> getBackups()const;
				long getFullStorageSize()const;
				long getLogStorageSize()const;

			protected:
				void parse(const std::string &payload);
			private:
				AccessDeniedDetail accessDeniedDetail_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				long freeSize_;
				std::vector<Backup> backups_;
				long fullStorageSize_;
				long logStorageSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEBACKUPSRESULT_H_