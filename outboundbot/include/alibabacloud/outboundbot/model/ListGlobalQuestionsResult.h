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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTGLOBALQUESTIONSRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTGLOBALQUESTIONSRESULT_H_

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
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT ListGlobalQuestionsResult : public ServiceResult
			{
			public:
				struct GlobalQuestions
				{
					struct GlobalQuestion
					{
						std::string answers;
						std::string globalQuestionType;
						std::string globalQuestionName;
						std::string scriptId;
						std::string questions;
						std::string globalQuestionId;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<GlobalQuestion> list;
				};


				ListGlobalQuestionsResult();
				explicit ListGlobalQuestionsResult(const std::string &payload);
				~ListGlobalQuestionsResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				GlobalQuestions getGlobalQuestions()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				GlobalQuestions globalQuestions_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTGLOBALQUESTIONSRESULT_H_