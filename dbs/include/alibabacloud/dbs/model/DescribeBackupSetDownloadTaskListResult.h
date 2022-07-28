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

#ifndef ALIBABACLOUD_DBS_MODEL_DESCRIBEBACKUPSETDOWNLOADTASKLISTRESULT_H_
#define ALIBABACLOUD_DBS_MODEL_DESCRIBEBACKUPSETDOWNLOADTASKLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dbs/DbsExport.h>

namespace AlibabaCloud
{
	namespace Dbs
	{
		namespace Model
		{
			class ALIBABACLOUD_DBS_EXPORT DescribeBackupSetDownloadTaskListResult : public ServiceResult
			{
			public:
				struct BackupSetDownloadTaskDetail
				{
					std::string backupSetDbType;
					long backupSetDownloadCreateTime;
					std::string backupSetDownloadDir;
					std::string backupSetDownloadTaskName;
					std::string backupSetDownloadWay;
					std::string backupSetCode;
					std::string errMessage;
					std::string backupSetId;
					std::string backupSetDownloadTargetType;
					std::string backupSetDownloadStatus;
					std::string backupSetDownloadIntranetUrl;
					std::string backupSetDownloadInternetUrl;
					std::string backupSetDownloadTaskId;
					long backupSetDownloadFinishTime;
					std::string backupSetJobType;
					std::string backupSetDataFormat;
					std::string backupPlanId;
					long backupGatewayId;
					long backupSetDataSize;
				};


				DescribeBackupSetDownloadTaskListResult();
				explicit DescribeBackupSetDownloadTaskListResult(const std::string &payload);
				~DescribeBackupSetDownloadTaskListResult();
				int getPageNum()const;
				int getPageSize()const;
				int getHttpStatusCode()const;
				int getTotalElements()const;
				std::vector<BackupSetDownloadTaskDetail> getItems()const;
				int getTotalPages()const;
				std::string getErrMessage()const;
				bool getSuccess()const;
				std::string getErrCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageNum_;
				int pageSize_;
				int httpStatusCode_;
				int totalElements_;
				std::vector<BackupSetDownloadTaskDetail> items_;
				int totalPages_;
				std::string errMessage_;
				bool success_;
				std::string errCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DBS_MODEL_DESCRIBEBACKUPSETDOWNLOADTASKLISTRESULT_H_