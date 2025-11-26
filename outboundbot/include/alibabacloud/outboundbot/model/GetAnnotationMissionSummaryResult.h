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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_GETANNOTATIONMISSIONSUMMARYRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_GETANNOTATIONMISSIONSUMMARYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/outboundbot/OutboundBotExport.h>

namespace AlibabaCloud
{
	namespace OutboundBot
	{
		namespace Model
		{
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT GetAnnotationMissionSummaryResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct IntentSummaryInfo
					{
						int matchErrorCount;
						int chatTotalCount;
						int intentionNotCoveredCount;
						int intentUserSayCount;
						int noAnnotation;
						int annotationInvalid;
						int translationUnrecognizedCount;
						int annotationCorrectCount;
					};
					struct AsrSummaryInfo
					{
						int addCustomizationDataCount;
						int addVocabularyDataCount;
						int chatTotalCount;
						int wordErrorRate;
						int sentenceErrorRate;
						int noAnnotation;
						int characterCorrectRate;
						int characterErrorRate;
						int annotationInvalid;
					};
					struct TagSummaryInfo
					{
						struct TagSummaryInfoDetailListItem
						{
							int count;
							std::string name;
						};
						std::vector<TagSummaryInfoDetailListItem> tagSummaryInfoDetailList;
					};
					std::string message;
					AsrSummaryInfo asrSummaryInfo;
					std::string annotationMissionId;
					IntentSummaryInfo intentSummaryInfo;
					TagSummaryInfo tagSummaryInfo;
					bool success;
				};


				GetAnnotationMissionSummaryResult();
				explicit GetAnnotationMissionSummaryResult(const std::string &payload);
				~GetAnnotationMissionSummaryResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_GETANNOTATIONMISSIONSUMMARYRESULT_H_