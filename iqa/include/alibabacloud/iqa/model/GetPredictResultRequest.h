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

#ifndef ALIBABACLOUD_IQA_MODEL_GETPREDICTRESULTREQUEST_H_
#define ALIBABACLOUD_IQA_MODEL_GETPREDICTRESULTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/iqa/IqaExport.h>

namespace AlibabaCloud
{
	namespace Iqa
	{
		namespace Model
		{
			class ALIBABACLOUD_IQA_EXPORT GetPredictResultRequest : public RpcServiceRequest
			{

			public:
				GetPredictResultRequest();
				~GetPredictResultRequest();

				int getTopK()const;
				void setTopK(int topK);
				std::string getTraceTag()const;
				void setTraceTag(const std::string& traceTag);
				std::string getQuestion()const;
				void setQuestion(const std::string& question);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);

            private:
				int topK_;
				std::string traceTag_;
				std::string question_;
				std::string projectId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IQA_MODEL_GETPREDICTRESULTREQUEST_H_