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

#ifndef ALIBABACLOUD_GOVERNANCE_MODEL_LISTEVALUATIONRESULTSRESULT_H_
#define ALIBABACLOUD_GOVERNANCE_MODEL_LISTEVALUATIONRESULTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/governance/GovernanceExport.h>

namespace AlibabaCloud
{
	namespace Governance
	{
		namespace Model
		{
			class ALIBABACLOUD_GOVERNANCE_EXPORT ListEvaluationResultsResult : public ServiceResult
			{
			public:
				struct Results
				{
					struct CategoryResultsItem
					{
						std::string id;
						double result;
					};
					struct GroupResultsItem
					{
						double potentialScoreIncrease;
						std::string id;
					};
					struct MetricResult
					{
						struct ErrorInfo
						{
							std::string message;
							std::string code;
						};
						struct ResourcesSummary
						{
							int nonCompliant;
						};
						std::string status;
						ResourcesSummary resourcesSummary;
						std::string evaluationTime;
						ErrorInfo errorInfo;
						std::string risk;
						std::string id;
						double result;
					};
					std::string status;
					std::vector<GroupResultsItem> groupResults;
					std::string evaluationTime;
					std::vector<MetricResult> metricResults;
					std::vector<CategoryResultsItem> categoryResults;
					double totalScore;
				};


				ListEvaluationResultsResult();
				explicit ListEvaluationResultsResult(const std::string &payload);
				~ListEvaluationResultsResult();
				long getAccountId()const;
				Results getResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				long accountId_;
				Results results_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GOVERNANCE_MODEL_LISTEVALUATIONRESULTSRESULT_H_