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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBECLUSTERUSEDUTILIZATIONRESULT_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBECLUSTERUSEDUTILIZATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT DescribeClusterUsedUtilizationResult : public ServiceResult
			{
			public:


				DescribeClusterUsedUtilizationResult();
				explicit DescribeClusterUsedUtilizationResult(const std::string &payload);
				~DescribeClusterUsedUtilizationResult();
				std::string getDedicatedClusterId()const;
				std::string getDynamicMessage()const;
				int getDuUsed()const;
				std::string getErrMessage()const;
				std::string getCode()const;
				bool getSuccess()const;
				std::string getErrCode()const;
				int getDuTotal()const;
				float getDiskTotal()const;
				int getHttpStatusCode()const;
				float getMemoryUsedPercentage()const;
				float getMemoryUsed()const;
				int getTaskRunning()const;
				float getDiskUsed()const;
				float getMemoryTotal()const;
				float getCpuTotal()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string dedicatedClusterId_;
				std::string dynamicMessage_;
				int duUsed_;
				std::string errMessage_;
				std::string code_;
				bool success_;
				std::string errCode_;
				int duTotal_;
				float diskTotal_;
				int httpStatusCode_;
				float memoryUsedPercentage_;
				float memoryUsed_;
				int taskRunning_;
				float diskUsed_;
				float memoryTotal_;
				float cpuTotal_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBECLUSTERUSEDUTILIZATIONRESULT_H_