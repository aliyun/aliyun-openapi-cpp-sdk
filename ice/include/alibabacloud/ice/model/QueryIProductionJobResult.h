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

#ifndef ALIBABACLOUD_ICE_MODEL_QUERYIPRODUCTIONJOBRESULT_H_
#define ALIBABACLOUD_ICE_MODEL_QUERYIPRODUCTIONJOBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ice/ICEExport.h>

namespace AlibabaCloud
{
	namespace ICE
	{
		namespace Model
		{
			class ALIBABACLOUD_ICE_EXPORT QueryIProductionJobResult : public ServiceResult
			{
			public:
				struct Input
				{
					std::string type;
					std::string media;
				};
				struct Output
				{
					std::string type;
					std::string media;
				};
				struct ScheduleConfig
				{
					int priority;
					std::string pipelineId;
				};


				QueryIProductionJobResult();
				explicit QueryIProductionJobResult(const std::string &payload);
				~QueryIProductionJobResult();
				std::string getStatus()const;
				std::vector<std::string> getOutputUrls()const;
				std::string getUserData()const;
				std::string getCreateTime()const;
				std::string getName()const;
				std::string getResult()const;
				ScheduleConfig getScheduleConfig()const;
				std::string getFunctionName()const;
				Input getInput()const;
				std::string getFinishTime()const;
				std::vector<std::string> getOutputFiles()const;
				Output getOutput()const;
				std::string getJobId()const;
				std::string getTemplateId()const;
				std::string getJobParams()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::vector<std::string> outputUrls_;
				std::string userData_;
				std::string createTime_;
				std::string name_;
				std::string result_;
				ScheduleConfig scheduleConfig_;
				std::string functionName_;
				Input input_;
				std::string finishTime_;
				std::vector<std::string> outputFiles_;
				Output output_;
				std::string jobId_;
				std::string templateId_;
				std::string jobParams_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_QUERYIPRODUCTIONJOBRESULT_H_