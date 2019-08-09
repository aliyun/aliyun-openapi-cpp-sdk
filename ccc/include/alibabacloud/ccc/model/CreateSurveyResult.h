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

#ifndef ALIBABACLOUD_CCC_MODEL_CREATESURVEYRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_CREATESURVEYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT CreateSurveyResult : public ServiceResult
			{
			public:
				struct Survey
				{
					struct Flow
					{
						std::string flowId;
						bool isPublished;
						std::string flowJson;
					};
					struct AsrCustomModel
					{
						int customModelStatus;
						std::string corpora;
					};
					std::string role;
					std::string description;
					std::string hotWords;
					AsrCustomModel asrCustomModel;
					int round;
					std::string speechOptimizationParam;
					std::string id;
					std::string globalQuestions;
					Flow flow;
					std::string scenarioUuid;
					std::string name;
				};


				CreateSurveyResult();
				explicit CreateSurveyResult(const std::string &payload);
				~CreateSurveyResult();
				Survey getSurvey()const;
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Survey survey_;
				std::string message_;
				int httpStatusCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_CREATESURVEYRESULT_H_