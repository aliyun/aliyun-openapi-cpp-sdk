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

#ifndef ALIBABACLOUD_EHPC_MODEL_DESCRIBEAUTOSCALECONFIGRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_DESCRIBEAUTOSCALECONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT DescribeAutoScaleConfigResult : public ServiceResult
			{
			public:


				DescribeAutoScaleConfigResult();
				explicit DescribeAutoScaleConfigResult(const std::string &payload);
				~DescribeAutoScaleConfigResult();
				int getExtraNodesGrowRatio()const;
				bool getEnableAutoGrow()const;
				std::string getClusterId()const;
				int getShrinkIdleTimes()const;
				int getMaxNodesInCluster()const;
				std::string getClusterType()const;
				bool getEnableAutoShrink()const;
				int getGrowRatio()const;
				int getGrowIntervalInMinutes()const;
				std::string getUid()const;
				int getGrowTimeoutInMinutes()const;
				int getShrinkIntervalInMinutes()const;
				std::string getSpotPriceLimit()const;
				std::string getExcludeNodes()const;
				std::string getSpotStrategy()const;

			protected:
				void parse(const std::string &payload);
			private:
				int extraNodesGrowRatio_;
				bool enableAutoGrow_;
				std::string clusterId_;
				int shrinkIdleTimes_;
				int maxNodesInCluster_;
				std::string clusterType_;
				bool enableAutoShrink_;
				int growRatio_;
				int growIntervalInMinutes_;
				std::string uid_;
				int growTimeoutInMinutes_;
				int shrinkIntervalInMinutes_;
				std::string spotPriceLimit_;
				std::string excludeNodes_;
				std::string spotStrategy_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_DESCRIBEAUTOSCALECONFIGRESULT_H_