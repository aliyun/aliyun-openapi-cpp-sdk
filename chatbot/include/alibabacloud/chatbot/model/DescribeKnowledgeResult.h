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

#ifndef ALIBABACLOUD_CHATBOT_MODEL_DESCRIBEKNOWLEDGERESULT_H_
#define ALIBABACLOUD_CHATBOT_MODEL_DESCRIBEKNOWLEDGERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/chatbot/ChatbotExport.h>

namespace AlibabaCloud
{
	namespace Chatbot
	{
		namespace Model
		{
			class ALIBABACLOUD_CHATBOT_EXPORT DescribeKnowledgeResult : public ServiceResult
			{
			public:
				struct Outline
				{
					std::string title;
					long knowledgeId;
					long outlineId;
				};
				struct SimQuestion
				{
					std::string modifyTime;
					long simQuestionId;
					std::string createTime;
					std::string title;
				};
				struct Solution
				{
					std::string modifyTime;
					long solutionId;
					std::string content;
					std::string createTime;
					std::string plainText;
					std::vector<std::string> perspectiveIds;
					std::string summary;
				};


				DescribeKnowledgeResult();
				explicit DescribeKnowledgeResult(const std::string &payload);
				~DescribeKnowledgeResult();
				std::string getKnowledgeTitle()const;
				long getCategoryId()const;
				std::string getModifyTime()const;
				std::vector<std::string> getCoreWords()const;
				std::string getCreateTime()const;
				long getKnowledgeId()const;
				std::vector<std::string> getKeyWords()const;
				std::string getEndDate()const;
				std::string getCreateUserName()const;
				std::string getStartDate()const;
				std::vector<SimQuestion> getSimQuestions()const;
				std::vector<Solution> getSolutions()const;
				int getVersion()const;
				std::string getModifyUserName()const;
				std::vector<Outline> getOutlines()const;
				int getKnowledgeStatus()const;
				int getKnowledgeType()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string knowledgeTitle_;
				long categoryId_;
				std::string modifyTime_;
				std::vector<std::string> coreWords_;
				std::string createTime_;
				long knowledgeId_;
				std::vector<std::string> keyWords_;
				std::string endDate_;
				std::string createUserName_;
				std::string startDate_;
				std::vector<SimQuestion> simQuestions_;
				std::vector<Solution> solutions_;
				int version_;
				std::string modifyUserName_;
				std::vector<Outline> outlines_;
				int knowledgeStatus_;
				int knowledgeType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CHATBOT_MODEL_DESCRIBEKNOWLEDGERESULT_H_