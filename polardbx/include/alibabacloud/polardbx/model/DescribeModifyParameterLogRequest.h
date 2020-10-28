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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEMODIFYPARAMETERLOGREQUEST_H_
#define ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEMODIFYPARAMETERLOGREQUEST_H_

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
			class ALIBABACLOUD_POLARDBX_EXPORT DescribeModifyParameterLogRequest : public RpcServiceRequest
			{

			public:
				DescribeModifyParameterLogRequest();
				~DescribeModifyParameterLogRequest();

				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getPageNumber()const;
				void setPageNumber(const std::string& pageNumber);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getPageSize()const;
				void setPageSize(const std::string& pageSize);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getParamLevel()const;
				void setParamLevel(const std::string& paramLevel);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);

            private:
				std::string startTime_;
				std::string pageNumber_;
				std::string regionId_;
				std::string pageSize_;
				std::string dBInstanceId_;
				std::string paramLevel_;
				std::string endTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEMODIFYPARAMETERLOGREQUEST_H_