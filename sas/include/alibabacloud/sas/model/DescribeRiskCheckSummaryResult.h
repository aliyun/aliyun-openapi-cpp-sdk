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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBERISKCHECKSUMMARYRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBERISKCHECKSUMMARYRESULT_H_

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
			class ALIBABACLOUD_SAS_EXPORT DescribeRiskCheckSummaryResult : public ServiceResult
			{
			public:
				struct RiskCheckSummary
				{
					struct LevelCount
					{
						int count;
						std::string key;
					};
					struct Group
					{
						struct StatusCount
						{
							std::string status;
							int count;
						};
						std::string status;
						std::vector<Group::StatusCount> countByStatus;
						int remainingTime;
						std::string title;
						int sort;
						long id;
					};
					std::vector<LevelCount> riskLevelCount;
					int disabledRiskCount;
					std::vector<Group> groups;
					long previousTime;
					int previousCount;
					int itemCount;
					float riskRate;
					int enabledRiskCount;
					int affectedAssetCount;
					int riskCount;
				};


				DescribeRiskCheckSummaryResult();
				explicit DescribeRiskCheckSummaryResult(const std::string &payload);
				~DescribeRiskCheckSummaryResult();
				RiskCheckSummary getRiskCheckSummary()const;

			protected:
				void parse(const std::string &payload);
			private:
				RiskCheckSummary riskCheckSummary_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBERISKCHECKSUMMARYRESULT_H_