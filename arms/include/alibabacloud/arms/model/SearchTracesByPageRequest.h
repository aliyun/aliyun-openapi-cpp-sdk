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

#ifndef ALIBABACLOUD_ARMS_MODEL_SEARCHTRACESBYPAGEREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_SEARCHTRACESBYPAGEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT SearchTracesByPageRequest : public RpcServiceRequest
			{
			public:
				struct ExclusionFilters
				{
					std::string value;
					std::string key;
				};

			public:
				SearchTracesByPageRequest();
				~SearchTracesByPageRequest();

				long getEndTime()const;
				void setEndTime(long endTime);
				long getStartTime()const;
				void setStartTime(long startTime);
				bool getReverse()const;
				void setReverse(bool reverse);
				long getMinDuration()const;
				void setMinDuration(long minDuration);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getServiceIp()const;
				void setServiceIp(const std::string& serviceIp);
				std::vector<ExclusionFilters> getExclusionFilters()const;
				void setExclusionFilters(const std::vector<ExclusionFilters>& exclusionFilters);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getOperationName()const;
				void setOperationName(const std::string& operationName);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getServiceName()const;
				void setServiceName(const std::string& serviceName);

            private:
				long endTime_;
				long startTime_;
				bool reverse_;
				long minDuration_;
				int pageNumber_;
				std::string serviceIp_;
				std::vector<ExclusionFilters> exclusionFilters_;
				std::string regionId_;
				std::string operationName_;
				int pageSize_;
				std::string serviceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_SEARCHTRACESBYPAGEREQUEST_H_