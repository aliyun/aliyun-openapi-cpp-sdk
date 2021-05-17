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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEBACKUPFILESREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEBACKUPFILESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeBackupFilesRequest : public RpcServiceRequest
			{

			public:
				DescribeBackupFilesRequest();
				~DescribeBackupFilesRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getUuid()const;
				void setUuid(const std::string& uuid);
				std::string getPath()const;
				void setPath(const std::string& path);
				std::string getSnapshotHash()const;
				void setSnapshotHash(const std::string& snapshotHash);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getPageSize()const;
				void setPageSize(const std::string& pageSize);
				std::string getCurrentPage()const;
				void setCurrentPage(const std::string& currentPage);

            private:
				long resourceOwnerId_;
				std::string uuid_;
				std::string path_;
				std::string snapshotHash_;
				std::string sourceIp_;
				std::string pageSize_;
				std::string currentPage_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEBACKUPFILESREQUEST_H_