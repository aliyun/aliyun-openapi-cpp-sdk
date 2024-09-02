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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEINSTANCESUMMARYRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEINSTANCESUMMARYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>

namespace AlibabaCloud
{
	namespace OceanBasePro
	{
		namespace Model
		{
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeInstanceSummaryResult : public ServiceResult
			{
			public:
				struct InstanceSummary
				{
					struct RegionalInstanceSummaryLis
					{
						std::string immediatelyExpiredInstancesCount;
						std::string recentCreatedInstancesCount;
						std::string expiredInstancesCount;
						std::string region;
						std::string runningInstancesCount;
						std::string totalInstancesCount;
					};
					long immediatelyExpiredInstancesCount;
					long tenantInstancesCount;
					long alarmSummaryCount;
					std::vector<RegionalInstanceSummaryLis> regionalInstanceSummaryList;
					long insufficientDiskInstancesCount;
					long anomalySQLCount;
					long expiredInstancesCount;
					long totalOmsInstancesCount;
					long overLoadInstancesCount;
					long clusterInstancesCount;
					long runningInstancesCount;
					long totalInstancesCount;
				};


				DescribeInstanceSummaryResult();
				explicit DescribeInstanceSummaryResult(const std::string &payload);
				~DescribeInstanceSummaryResult();
				InstanceSummary getInstanceSummary()const;

			protected:
				void parse(const std::string &payload);
			private:
				InstanceSummary instanceSummary_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEINSTANCESUMMARYRESULT_H_