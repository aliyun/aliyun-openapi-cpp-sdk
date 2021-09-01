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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYIPRODUCTIONJOBRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYIPRODUCTIONJOBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>

namespace AlibabaCloud
{
	namespace Mts
	{
		namespace Model
		{
			class ALIBABACLOUD_MTS_EXPORT QueryIProductionJobResult : public ServiceResult
			{
			public:


				QueryIProductionJobResult();
				explicit QueryIProductionJobResult(const std::string &payload);
				~QueryIProductionJobResult();
				std::string getFunctionName()const;
				std::string getInput()const;
				std::string getUserData()const;
				std::string getState()const;
				std::string getOutput()const;
				std::string getPipelineId()const;
				std::string getJobParams()const;
				std::string getJobId()const;
				std::string getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string functionName_;
				std::string input_;
				std::string userData_;
				std::string state_;
				std::string output_;
				std::string pipelineId_;
				std::string jobParams_;
				std::string jobId_;
				std::string result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYIPRODUCTIONJOBRESULT_H_