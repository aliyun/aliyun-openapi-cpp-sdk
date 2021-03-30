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

#ifndef ALIBABACLOUD_DBS_MODEL_DESCRIBEFULLBACKUPSETRESULT_H_
#define ALIBABACLOUD_DBS_MODEL_DESCRIBEFULLBACKUPSETRESULT_H_

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
			class ALIBABACLOUD_DBS_EXPORT DescribeFullBackupSetResult : public ServiceResult
			{
			public:


				DescribeFullBackupSetResult();
				explicit DescribeFullBackupSetResult(const std::string &payload);
				~DescribeFullBackupSetResult();
				std::string getStorageMethod()const;
				std::string getBackupObjects()const;
				long getEndTime()const;
				long getBackupSize()const;
				long getCreateTime()const;
				long getStartTime()const;
				long getBackupSetExpiredTime()const;
				std::string getErrMessage()const;
				std::string getBackupSetId()const;
				bool getSuccess()const;
				std::string getErrMessage1()const;
				std::string getErrCode()const;
				std::string getSourceEndpointIpPort()const;
				long getFinishTime()const;
				int getHttpStatusCode()const;
				std::string getBackupStatus()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string storageMethod_;
				std::string backupObjects_;
				long endTime_;
				long backupSize_;
				long createTime_;
				long startTime_;
				long backupSetExpiredTime_;
				std::string errMessage_;
				std::string backupSetId_;
				bool success_;
				std::string errMessage1_;
				std::string errCode_;
				std::string sourceEndpointIpPort_;
				long finishTime_;
				int httpStatusCode_;
				std::string backupStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DBS_MODEL_DESCRIBEFULLBACKUPSETRESULT_H_