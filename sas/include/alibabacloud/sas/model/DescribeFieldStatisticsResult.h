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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEFIELDSTATISTICSRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEFIELDSTATISTICSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeFieldStatisticsResult : public ServiceResult
			{
			public:
				struct GroupedFields
				{
					int huaweiInstanceCount;
					int unKnowStatusInstanceCount;
					int exposedInstanceCount;
					int groupCount;
					int tencentInstanceCount;
					int instanceSyncTaskCount;
					int riskInstanceCount;
					int awsInstanceCount;
					int importantAssetCount;
					int generalAssetCount;
					int idcInstanceCount;
					int testAssetCount;
					int outMachineInstanceCount;
					int unprotectedInstanceCount;
					int instanceCount;
					int offlineInstanceCount;
					int vpcCount;
					int aliYunInstanceCount;
					int tripartiteInstanceCount;
					int regionCount;
					int notRunningStatusCount;
					int newInstanceCount;
					int noRiskInstanceCount;
					int pauseInstanceCount;
				};


				DescribeFieldStatisticsResult();
				explicit DescribeFieldStatisticsResult(const std::string &payload);
				~DescribeFieldStatisticsResult();
				GroupedFields getGroupedFields()const;

			protected:
				void parse(const std::string &payload);
			private:
				GroupedFields groupedFields_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEFIELDSTATISTICSRESULT_H_