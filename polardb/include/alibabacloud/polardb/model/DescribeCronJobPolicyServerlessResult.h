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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBECRONJOBPOLICYSERVERLESSRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBECRONJOBPOLICYSERVERLESSRESULT_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT DescribeCronJobPolicyServerlessResult : public ServiceResult
			{
			public:
				struct DriverCronJobAttrbute
				{
					std::string status;
					std::string action;
					std::string scaleApRoNumMin;
					std::string endTime;
					std::string scaleRoNumMax;
					std::string dBClusterId;
					std::string startTime;
					std::string scaleMax;
					std::string orderId;
					std::string serverlessRuleCpuShrinkThreshold;
					std::string scaleRoNumMin;
					std::string serverlessRuleCpuEnlargeThreshold;
					std::string allowShutDown;
					std::string scaleApRoNumMax;
					std::string scaleMin;
					std::string serverlessRuleMode;
					std::string regionId;
					std::string cronExpression;
					std::string secondsUntilAutoPause;
					std::string jobId;
				};


				DescribeCronJobPolicyServerlessResult();
				explicit DescribeCronJobPolicyServerlessResult(const std::string &payload);
				~DescribeCronJobPolicyServerlessResult();
				int getTotalRecordCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<DriverCronJobAttrbute> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<DriverCronJobAttrbute> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBECRONJOBPOLICYSERVERLESSRESULT_H_