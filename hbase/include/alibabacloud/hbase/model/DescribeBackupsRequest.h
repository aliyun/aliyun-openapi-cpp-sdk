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

#ifndef ALIBABACLOUD_HBASE_MODEL_DESCRIBEBACKUPSREQUEST_H_
#define ALIBABACLOUD_HBASE_MODEL_DESCRIBEBACKUPSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/hbase/HBaseExport.h>

namespace AlibabaCloud
{
	namespace HBase
	{
		namespace Model
		{
			class ALIBABACLOUD_HBASE_EXPORT DescribeBackupsRequest : public RpcServiceRequest
			{

			public:
				DescribeBackupsRequest();
				~DescribeBackupsRequest();

				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getPageNumber()const;
				void setPageNumber(const std::string& pageNumber);
				std::string getPageSize()const;
				void setPageSize(const std::string& pageSize);
				std::string getStartTimeUTC()const;
				void setStartTimeUTC(const std::string& startTimeUTC);
				std::string getBackupId()const;
				void setBackupId(const std::string& backupId);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getEndTimeUTC()const;
				void setEndTimeUTC(const std::string& endTimeUTC);

            private:
				std::string startTime_;
				std::string pageNumber_;
				std::string pageSize_;
				std::string startTimeUTC_;
				std::string backupId_;
				std::string endTime_;
				std::string clusterId_;
				std::string endTimeUTC_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_DESCRIBEBACKUPSREQUEST_H_