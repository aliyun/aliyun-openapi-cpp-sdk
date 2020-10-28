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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEINSTANCEDBPERFORMANCEREQUEST_H_
#define ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEINSTANCEDBPERFORMANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/polardbx/PolardbxExport.h>

namespace AlibabaCloud
{
	namespace Polardbx
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDBX_EXPORT DescribeInstanceDbPerformanceRequest : public RpcServiceRequest
			{

			public:
				DescribeInstanceDbPerformanceRequest();
				~DescribeInstanceDbPerformanceRequest();

				std::string getDbInstanceName()const;
				void setDbInstanceName(const std::string& dbInstanceName);
				std::string getKeys()const;
				void setKeys(const std::string& keys);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getDbName()const;
				void setDbName(const std::string& dbName);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);

            private:
				std::string dbInstanceName_;
				std::string keys_;
				std::string endTime_;
				std::string startTime_;
				std::string dbName_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEINSTANCEDBPERFORMANCEREQUEST_H_