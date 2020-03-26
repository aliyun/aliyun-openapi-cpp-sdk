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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBEALARMSREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBEALARMSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT DescribeAlarmsRequest : public RpcServiceRequest
			{

			public:
				DescribeAlarmsRequest();
				~DescribeAlarmsRequest();

				std::string getMetricType()const;
				void setMetricType(const std::string& metricType);
				std::string getScalingGroupId()const;
				void setScalingGroupId(const std::string& scalingGroupId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getState()const;
				void setState(const std::string& state);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAlarmTaskId()const;
				void setAlarmTaskId(const std::string& alarmTaskId);
				bool getIsEnable()const;
				void setIsEnable(bool isEnable);

            private:
				std::string metricType_;
				std::string scalingGroupId_;
				int pageNumber_;
				std::string accessKeyId_;
				std::string regionId_;
				int pageSize_;
				std::string state_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string alarmTaskId_;
				bool isEnable_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBEALARMSREQUEST_H_