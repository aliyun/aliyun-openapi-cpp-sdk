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

#ifndef ALIBABACLOUD_CCC_MODEL_MODIFYSURVEYREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_MODIFYSURVEYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT ModifySurveyRequest : public RpcServiceRequest
			{

			public:
				ModifySurveyRequest();
				~ModifySurveyRequest();

				std::string getRole()const;
				void setRole(const std::string& role);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getFlowJson()const;
				void setFlowJson(const std::string& flowJson);
				std::string getGlobalQuestions()const;
				void setGlobalQuestions(const std::string& globalQuestions);
				std::string getCorpora()const;
				void setCorpora(const std::string& corpora);
				std::string getScenarioId()const;
				void setScenarioId(const std::string& scenarioId);
				std::string getSurveyId()const;
				void setSurveyId(const std::string& surveyId);
				std::string getSpeechOptimizationParam()const;
				void setSpeechOptimizationParam(const std::string& speechOptimizationParam);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				int getRound()const;
				void setRound(int round);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getFlowId()const;
				void setFlowId(const std::string& flowId);

            private:
				std::string role_;
				std::string description_;
				std::string flowJson_;
				std::string globalQuestions_;
				std::string corpora_;
				std::string scenarioId_;
				std::string surveyId_;
				std::string speechOptimizationParam_;
				std::string instanceId_;
				int round_;
				std::string name_;
				std::string flowId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_MODIFYSURVEYREQUEST_H_