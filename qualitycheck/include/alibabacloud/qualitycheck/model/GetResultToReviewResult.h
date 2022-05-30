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

#ifndef ALIBABACLOUD_QUALITYCHECK_MODEL_GETRESULTTOREVIEWRESULT_H_
#define ALIBABACLOUD_QUALITYCHECK_MODEL_GETRESULTTOREVIEWRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/qualitycheck/QualitycheckExport.h>

namespace AlibabaCloud
{
	namespace Qualitycheck
	{
		namespace Model
		{
			class ALIBABACLOUD_QUALITYCHECK_EXPORT GetResultToReviewResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Dialogue
					{
						std::string role;
						std::string hourMinSec;
						std::string words;
						int silenceDuration;
						long begin;
						std::string beginTime;
						long end;
						std::string identity;
						int speechRate;
						int emotionValue;
					};
					struct ScorePo
					{
						struct ScoreParam
						{
							std::string scoreSubName;
							int hit;
							long scoreSubId;
							int scoreType;
							int scoreNum;
						};
						std::vector<ScorePo::ScoreParam> scoreInfos;
						std::string scoreName;
						long scoreId;
					};
					struct HitRuleReviewInfo
					{
						struct ReviewInfo
						{
							std::string hitId;
							std::string reviewTime;
							int reviewResult;
							long rid;
							std::string reviewer;
						};
						struct ConditionHitInfo
						{
							struct Phrase
							{
								std::string role;
								std::string words;
								long begin;
								int pid;
								long end;
								std::string identity;
								int emotionValue;
							};
							struct KeyWord
							{
								std::string val;
								std::string customizeCode;
								int pid;
								int from;
								int to;
								std::string tid;
								std::string cid;
							};
							Phrase phrase;
							std::vector<ConditionHitInfo::KeyWord> keyWords;
							std::vector<std::string> cid;
						};
						struct ComplainHistoriesItem
						{
							std::string operatorName;
							std::string comments;
							long _operator;
							int operationType;
							std::string operationTime;
						};
						bool complainable;
						std::vector<HitRuleReviewInfo::ConditionHitInfo> conditionHitInfoList;
						int ruleScoreType;
						int ruleType;
						long scoreId;
						long rid;
						ReviewInfo reviewInfo;
						std::vector<HitRuleReviewInfo::ComplainHistoriesItem> complainHistories;
						std::string scoreSubName;
						long scoreSubId;
						int totalNumber;
						int autoReview;
						int scoreNum;
						std::string ruleName;
					};
					struct ManualScoreInfo
					{
						struct ComplainHistoriesItem2
						{
							std::string operatorName;
							std::string comments;
							long _operator;
							int operationType;
							std::string operationTime;
						};
						std::string scoreSubName;
						bool complainable;
						std::vector<ManualScoreInfo::ComplainHistoriesItem2> complainHistories1;
						long scoreSubId;
						long scoreId;
						int scoreNum;
					};
					struct ReviewHistory
					{
						int type;
						std::string operatorName;
						int score;
						std::string timeStr;
						int complainResult;
						int reviewResult;
						int oldScore;
					};
					int status;
					std::vector<Dialogue> dialogues;
					std::string comments;
					int reviewNumber;
					std::vector<ManualScoreInfo> manualScoreInfoList;
					int businessType;
					std::string fileMergeName;
					std::string audioScheme;
					std::vector<HitRuleReviewInfo> hitRuleReviewInfoList;
					std::vector<ReviewHistory> reviewHistoryList;
					std::string vid;
					int hitNumber;
					std::string fileId;
					int totalScore;
					bool deleted;
					std::vector<ScorePo> handScoreInfoList;
					std::string audioURL;
					bool audio;
				};


				GetResultToReviewResult();
				explicit GetResultToReviewResult(const std::string &payload);
				~GetResultToReviewResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUALITYCHECK_MODEL_GETRESULTTOREVIEWRESULT_H_