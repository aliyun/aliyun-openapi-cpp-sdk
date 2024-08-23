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

#ifndef ALIBABACLOUD_GOVERNANCE_MODEL_LISTEVALUATIONSCOREHISTORYRESULT_H_
#define ALIBABACLOUD_GOVERNANCE_MODEL_LISTEVALUATIONSCOREHISTORYRESULT_H_

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
			class ALIBABACLOUD_GOVERNANCE_EXPORT ListEvaluationScoreHistoryResult : public ServiceResult
			{
			public:
				struct ScoreDiff
				{
					struct CategoryScoreDiff
					{
						std::string currentEvaluationTime;
						std::string scoreDiff;
						std::string id;
						std::string previousEvaluationTime;
					};
					struct MetricScoreDiff
					{
						std::string currentEvaluationTime;
						std::string category;
						std::string scoreDiff;
						std::string id;
						std::string previousEvaluationTime;
					};
					std::vector<MetricScoreDiff> metricScoreDiffs;
					std::vector<CategoryScoreDiff> categoryScoreDiffs;
				};
				struct ScoreHistory
				{
					struct TotalScoreHistoryItem
					{
						double score;
						std::string evaluationTime;
					};
					std::vector<TotalScoreHistoryItem> totalScoreHistory;
				};


				ListEvaluationScoreHistoryResult();
				explicit ListEvaluationScoreHistoryResult(const std::string &payload);
				~ListEvaluationScoreHistoryResult();
				ScoreDiff getScoreDiff()const;
				ScoreHistory getScoreHistory()const;

			protected:
				void parse(const std::string &payload);
			private:
				ScoreDiff scoreDiff_;
				ScoreHistory scoreHistory_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GOVERNANCE_MODEL_LISTEVALUATIONSCOREHISTORYRESULT_H_