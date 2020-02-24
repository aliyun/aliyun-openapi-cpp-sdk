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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_QUERYPERFORMANCEINDICATORSRESULT_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_QUERYPERFORMANCEINDICATORSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/voicenavigator/VoiceNavigatorExport.h>

namespace AlibabaCloud
{
	namespace VoiceNavigator
	{
		namespace Model
		{
			class ALIBABACLOUD_VOICENAVIGATOR_EXPORT QueryPerformanceIndicatorsResult : public ServiceResult
			{
			public:
				struct ResolutionRate
				{
					struct ValuePerDateUnit
					{
						float rateValue;
						long date;
					};
					std::vector<ValuePerDateUnit> valuePerDateUnits;
					float totalRateValue;
				};
				struct ValidAnswerRate
				{
					struct ValuePerDateUnit2
					{
						float rateValue;
						long date;
					};
					std::vector<ValuePerDateUnit2> valuePerDateUnits1;
					float totalRateValue;
				};
				struct DialoguePassRate
				{
					struct ValuePerDateUnit4
					{
						float rateValue;
						long date;
					};
					float totalRateValue;
					std::vector<ValuePerDateUnit4> valuePerDateUnits3;
				};
				struct KnowledgeHitRate
				{
					struct ValuePerDateUnit6
					{
						float rateValue;
						long date;
					};
					float totalRateValue;
					std::vector<ValuePerDateUnit6> valuePerDateUnits5;
				};


				QueryPerformanceIndicatorsResult();
				explicit QueryPerformanceIndicatorsResult(const std::string &payload);
				~QueryPerformanceIndicatorsResult();
				DialoguePassRate getDialoguePassRate()const;
				ValidAnswerRate getValidAnswerRate()const;
				ResolutionRate getResolutionRate()const;
				KnowledgeHitRate getKnowledgeHitRate()const;

			protected:
				void parse(const std::string &payload);
			private:
				DialoguePassRate dialoguePassRate_;
				ValidAnswerRate validAnswerRate_;
				ResolutionRate resolutionRate_;
				KnowledgeHitRate knowledgeHitRate_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_QUERYPERFORMANCEINDICATORSRESULT_H_