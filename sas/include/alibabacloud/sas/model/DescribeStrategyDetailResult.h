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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBESTRATEGYDETAILRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBESTRATEGYDETAILRESULT_H_

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
			class ALIBABACLOUD_SAS_EXPORT DescribeStrategyDetailResult : public ServiceResult
			{
			public:
				struct Strategy
				{
					struct RiskTypeWhiteListQueryResult
					{
						struct SubType
						{
							struct CheckDetail
							{
								struct Rule
								{
									struct Param
									{
										std::string enumValue;
										std::string value;
										int minValue;
										std::string paramDefaultValue;
										int maxValue;
										std::string paramName;
										int paramType;
										std::string paramDesc;
									};
									int defaultValue;
									int optional;
									std::string ruleId;
									std::string ruleDesc;
									std::vector<Rule::Param> paramList;
								};
								long checkId;
								std::string checkItem;
								std::string checkDesc;
								std::vector<CheckDetail::Rule> rules;
							};
							std::string typeName;
							std::string alias;
							std::vector<SubType::CheckDetail> checkDetails;
							bool on;
						};
						std::string typeName;
						std::vector<RiskTypeWhiteListQueryResult::SubType> subTypes;
						std::string alias;
						bool on;
					};
					int cycleStartTime;
					std::string customType;
					int type;
					std::string endTime;
					int cycleDays;
					std::string startTime;
					std::string targetType;
					std::string riskSubTypeName;
					int id;
					std::vector<RiskTypeWhiteListQueryResult> riskTypeWhiteListQueryResultList;
					std::string name;
				};


				DescribeStrategyDetailResult();
				explicit DescribeStrategyDetailResult(const std::string &payload);
				~DescribeStrategyDetailResult();
				Strategy getStrategy()const;

			protected:
				void parse(const std::string &payload);
			private:
				Strategy strategy_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBESTRATEGYDETAILRESULT_H_