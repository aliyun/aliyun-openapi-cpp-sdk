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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERSERVERLESSCONFRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERSERVERLESSCONFRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeDBClusterServerlessConfResult : public ServiceResult
			{
			public:


				DescribeDBClusterServerlessConfResult();
				explicit DescribeDBClusterServerlessConfResult(const std::string &payload);
				~DescribeDBClusterServerlessConfResult();
				std::string getDBMaxscaleId()const;
				std::string getScaleApRoNumMin()const;
				std::string getScaleRoNumMax()const;
				std::string getTraditionalScaleMaxThreshold()const;
				std::string getDBClusterId()const;
				std::string getScaleMax()const;
				std::string getSwitchs()const;
				std::string getAgileScaleMax()const;
				std::string getServerlessRuleCpuShrinkThreshold()const;
				std::string getScaleRoNumMin()const;
				std::string getServerlessRuleCpuEnlargeThreshold()const;
				std::string getAllowShutDown()const;
				std::string getScaleApRoNumMax()const;
				std::string getScaleMin()const;
				std::string getServerlessRuleMode()const;
				std::string getSecondsUntilAutoPause()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string dBMaxscaleId_;
				std::string scaleApRoNumMin_;
				std::string scaleRoNumMax_;
				std::string traditionalScaleMaxThreshold_;
				std::string dBClusterId_;
				std::string scaleMax_;
				std::string switchs_;
				std::string agileScaleMax_;
				std::string serverlessRuleCpuShrinkThreshold_;
				std::string scaleRoNumMin_;
				std::string serverlessRuleCpuEnlargeThreshold_;
				std::string allowShutDown_;
				std::string scaleApRoNumMax_;
				std::string scaleMin_;
				std::string serverlessRuleMode_;
				std::string secondsUntilAutoPause_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERSERVERLESSCONFRESULT_H_