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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEOSSDOWNLOADSFORSQLSERVERRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEOSSDOWNLOADSFORSQLSERVERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeOssDownloadsForSQLServerResult : public ServiceResult
			{
			public:
				struct OssDownload
				{
					std::string status;
					std::string desc;
					std::string createTime1;
					std::string fileName;
					std::string createTime;
					std::string isAvail;
					std::string bakType;
					std::string fileSize;
				};


				DescribeOssDownloadsForSQLServerResult();
				explicit DescribeOssDownloadsForSQLServerResult(const std::string &payload);
				~DescribeOssDownloadsForSQLServerResult();
				std::vector<OssDownload> getItems()const;
				void setItems(const std::vector<OssDownload>& items);
				std::string getMigrateIaskId()const;
				void setMigrateIaskId(const std::string& migrateIaskId);
				std::string getDBInstanceName()const;
				void setDBInstanceName(const std::string& dBInstanceName);

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<OssDownload> items_;
				std::string migrateIaskId_;
				std::string dBInstanceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEOSSDOWNLOADSFORSQLSERVERRESULT_H_