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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBEDTSJOBLOGSREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBEDTSJOBLOGSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT DescribeDtsJobLogsRequest : public RpcServiceRequest
			{

			public:
				DescribeDtsJobLogsRequest();
				~DescribeDtsJobLogsRequest();

				long getEndTime()const;
				void setEndTime(long endTime);
				long getStartTime()const;
				void setStartTime(long startTime);
				std::string getType()const;
				void setType(const std::string& type);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getDtsJobId()const;
				void setDtsJobId(const std::string& dtsJobId);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long endTime_;
				long startTime_;
				std::string type_;
				int pageNumber_;
				std::string regionId_;
				int pageSize_;
				std::string dtsJobId_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBEDTSJOBLOGSREQUEST_H_