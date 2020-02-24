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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_DESCRIBESTATISTICALDATARESULT_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_DESCRIBESTATISTICALDATARESULT_H_

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
			class ALIBABACLOUD_VOICENAVIGATOR_EXPORT DescribeStatisticalDataResult : public ServiceResult
			{
			public:
				struct StatisticalDataReport
				{
					std::string dialoguePassRate;
					std::string validAnswerRate;
					std::string resolutionRate;
					std::string statisticalDate;
					int resolvedQuestionNum;
					std::string knowledgeHitRate;
					int totalConversationNum;
				};


				DescribeStatisticalDataResult();
				explicit DescribeStatisticalDataResult(const std::string &payload);
				~DescribeStatisticalDataResult();
				std::string getTotalDialoguePassRate()const;
				std::string getTotalKnowledgeHitRate()const;
				std::string getTotalResolutionRate()const;
				std::string getTotalValidAnswerRate()const;
				long getResolvedQuestionTotalNum()const;
				long getConversationTotalNum()const;
				std::vector<StatisticalDataReport> getStatisticalDataReports()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalDialoguePassRate_;
				std::string totalKnowledgeHitRate_;
				std::string totalResolutionRate_;
				std::string totalValidAnswerRate_;
				long resolvedQuestionTotalNum_;
				long conversationTotalNum_;
				std::vector<StatisticalDataReport> statisticalDataReports_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_DESCRIBESTATISTICALDATARESULT_H_