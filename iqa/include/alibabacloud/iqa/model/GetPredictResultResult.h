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

#ifndef ALIBABACLOUD_IQA_MODEL_GETPREDICTRESULTRESULT_H_
#define ALIBABACLOUD_IQA_MODEL_GETPREDICTRESULTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/iqa/IqaExport.h>

namespace AlibabaCloud
{
	namespace Iqa
	{
		namespace Model
		{
			class ALIBABACLOUD_IQA_EXPORT GetPredictResultResult : public ServiceResult
			{
			public:
				struct PredictResult
				{
					std::string answer;
					float score;
					std::string questionId;
					int rank;
					std::string question;
				};


				GetPredictResultResult();
				explicit GetPredictResultResult(const std::string &payload);
				~GetPredictResultResult();
				long getCostTime()const;
				std::string getTrace()const;
				int getTopK()const;
				std::string getTraceTag()const;
				std::string getProjectId()const;
				std::string getQuestion()const;
				std::vector<PredictResult> getPredictResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				long costTime_;
				std::string trace_;
				int topK_;
				std::string traceTag_;
				std::string projectId_;
				std::string question_;
				std::vector<PredictResult> predictResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IQA_MODEL_GETPREDICTRESULTRESULT_H_