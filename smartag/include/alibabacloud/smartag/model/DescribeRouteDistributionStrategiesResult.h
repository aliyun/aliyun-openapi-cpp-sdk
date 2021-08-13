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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_DESCRIBEROUTEDISTRIBUTIONSTRATEGIESRESULT_H_
#define ALIBABACLOUD_SMARTAG_MODEL_DESCRIBEROUTEDISTRIBUTIONSTRATEGIESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT DescribeRouteDistributionStrategiesResult : public ServiceResult
			{
			public:
				struct Strategy
				{
					std::string status;
					std::string instanceId;
					std::string hcInstanceId;
					long createTime;
					std::string sourceType;
					std::string routeSource;
					std::string routeDistribution;
					bool isConflict;
					std::string strategyPublishStatus;
					std::string smartAGId;
					std::string conflictInfo;
					std::string destCidrBlock;
				};


				DescribeRouteDistributionStrategiesResult();
				explicit DescribeRouteDistributionStrategiesResult(const std::string &payload);
				~DescribeRouteDistributionStrategiesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Strategy> getStrategies()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Strategy> strategies_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_DESCRIBEROUTEDISTRIBUTIONSTRATEGIESRESULT_H_