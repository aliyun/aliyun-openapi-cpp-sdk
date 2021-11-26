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

#ifndef ALIBABACLOUD_QUALITYCHECK_MODEL_REVIEWSINGLERESULTBYIDRESULT_H_
#define ALIBABACLOUD_QUALITYCHECK_MODEL_REVIEWSINGLERESULTBYIDRESULT_H_

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
			class ALIBABACLOUD_QUALITYCHECK_EXPORT ReviewSingleResultByIdResult : public ServiceResult
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
						long beginTime;
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
							long rid;
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
								int pid;
								int to;
								int from;
								std::string tid;
							};
							Phrase phrase;
							std::vector<ConditionHitInfo::KeyWord> keyWords;
							std::vector<std::string> cid;
						};
						std::vector<HitRuleReviewInfo::ConditionHitInfo> conditionHitInfoList;
						int ruleScoreType;
						std::string comments;
						long scoreSubId;
						int totalNumber;
						int ruleType;
						int autoReview;
						long scoreId;
						long rid;
						ReviewInfo reviewInfo;
						std::string ruleName;
					};
					bool isAudio;
					bool isDeleted;
					std::vector<Dialogue> dialogues;
					int reviewNumber;
					int asrWordsCount;
					int businessType;
					std::string fileMergeName;
					std::vector<std::string> manualScoreMappingList;
					std::vector<HitRuleReviewInfo> hitRuleReviewInfoList;
					std::string nextVid;
					int vid;
					int hitNumber;
					std::string preVid;
					int totalScore;
					bool deleted;
					std::vector<ScorePo> handScoreInfoList;
					std::string audioURL;
					bool audio;
				};


				ReviewSingleResultByIdResult();
				explicit ReviewSingleResultByIdResult(const std::string &payload);
				~ReviewSingleResultByIdResult();
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
#endif // !ALIBABACLOUD_QUALITYCHECK_MODEL_REVIEWSINGLERESULTBYIDRESULT_H_