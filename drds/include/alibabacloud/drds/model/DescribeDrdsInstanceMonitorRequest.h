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

#ifndef ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSINSTANCEMONITORREQUEST_H_
#define ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSINSTANCEMONITORREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/drds/DrdsExport.h>

namespace AlibabaCloud
{
	namespace Drds
	{
		namespace Model
		{
			class ALIBABACLOUD_DRDS_EXPORT DescribeDrdsInstanceMonitorRequest : public RpcServiceRequest
			{

			public:
				DescribeDrdsInstanceMonitorRequest();
				~DescribeDrdsInstanceMonitorRequest();

				long getEndTime()const;
				void setEndTime(long endTime);
				long getStartTime()const;
				void setStartTime(long startTime);
				std::string getDrdsInstanceId()const;
				void setDrdsInstanceId(const std::string& drdsInstanceId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getKey()const;
				void setKey(const std::string& key);
				int getPeriodMultiple()const;
				void setPeriodMultiple(int periodMultiple);

            private:
				long endTime_;
				long startTime_;
				std::string drdsInstanceId_;
				std::string accessKeyId_;
				std::string key_;
				int periodMultiple_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSINSTANCEMONITORREQUEST_H_