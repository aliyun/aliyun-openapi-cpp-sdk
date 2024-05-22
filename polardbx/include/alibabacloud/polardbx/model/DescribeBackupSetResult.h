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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEBACKUPSETRESULT_H_
#define ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEBACKUPSETRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardbx/PolardbxExport.h>

namespace AlibabaCloud
{
	namespace Polardbx
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDBX_EXPORT DescribeBackupSetResult : public ServiceResult
			{
			public:
				struct BackupSet
				{
					struct OSS
					{
						std::string downloadLink;
						std::string linkExpiredTime;
						std::string backupSetFile;
						std::string intranetDownloadLink;
					};
					int status;
					int backupModel;
					long endTime;
					std::vector<BackupSet::OSS> oSSList;
					int backupType;
					long beginTime;
					long backupSetSize;
					long backupSetId;
				};


				DescribeBackupSetResult();
				explicit DescribeBackupSetResult(const std::string &payload);
				~DescribeBackupSetResult();
				std::string getMessage()const;
				std::vector<BackupSet> getData()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<BackupSet> data_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEBACKUPSETRESULT_H_