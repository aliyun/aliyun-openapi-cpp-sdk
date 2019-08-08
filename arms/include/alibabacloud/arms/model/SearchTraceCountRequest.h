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

#ifndef ALIBABACLOUD_ARMS_MODEL_SEARCHTRACECOUNTREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_SEARCHTRACECOUNTREQUEST_H_

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
			class ALIBABACLOUD_ARMS_EXPORT SearchTraceCountRequest : public RpcServiceRequest
			{
				struct Tag
				{
					std::string value;
					std::string key;
				};

			public:
				SearchTraceCountRequest();
				~SearchTraceCountRequest();

				std::string getServiceIp()const;
				void setServiceIp(const std::string& serviceIp);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getOperationName()const;
				void setOperationName(const std::string& operationName);
				std::string getAppType()const;
				void setAppType(const std::string& appType);
				long getEndTime()const;
				void setEndTime(long endTime);
				std::string getServiceName()const;
				void setServiceName(const std::string& serviceName);
				long getStartTime()const;
				void setStartTime(long startTime);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				long getMinDuration()const;
				void setMinDuration(long minDuration);

            private:
				std::string serviceIp_;
				std::string regionId_;
				std::string operationName_;
				std::string appType_;
				long endTime_;
				std::string serviceName_;
				long startTime_;
				std::vector<Tag> tag_;
				long minDuration_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_SEARCHTRACECOUNTREQUEST_H_