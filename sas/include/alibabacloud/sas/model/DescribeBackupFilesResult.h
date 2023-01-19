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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEBACKUPFILESRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEBACKUPFILESRESULT_H_

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
			class ALIBABACLOUD_SAS_EXPORT DescribeBackupFilesResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					std::string nextToken;
					int currentPage;
					int count;
				};
				struct BrowseFile
				{
					std::string type;
					long size;
					std::string subtree;
					std::string name;
				};


				DescribeBackupFilesResult();
				explicit DescribeBackupFilesResult(const std::string &payload);
				~DescribeBackupFilesResult();
				PageInfo getPageInfo()const;
				std::vector<BrowseFile> getBackupFiles()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageInfo pageInfo_;
				std::vector<BrowseFile> backupFiles_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEBACKUPFILESRESULT_H_