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

#ifndef ALIBABACLOUD_SAE_MODEL_DESCRIBEPIPELINERESULT_H_
#define ALIBABACLOUD_SAE_MODEL_DESCRIBEPIPELINERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sae/SaeExport.h>

namespace AlibabaCloud
{
	namespace Sae
	{
		namespace Model
		{
			class ALIBABACLOUD_SAE_EXPORT DescribePipelineResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Stage
					{
						struct Task
						{
							int status;
							int errorIgnore;
							std::string taskId;
							std::string message;
							std::string taskName;
							bool showManualIgnore;
							std::string stageId;
							long createTime;
							long startTime;
							long updateTime;
							std::string errorCode;
							std::string errorMessage;
						};
						int status;
						std::string stageName;
						std::vector<Stage::Task> taskList;
						std::string stageId;
						int executorType;
					};
					int pipelineStatus;
					bool showBatch;
					int currentPoint;
					std::string pipelineName;
					std::vector<Stage> stageList;
					std::string currentStageId;
					std::string pipelineId;
					std::string coStatus;
					std::string nextPipelineId;
				};


				DescribePipelineResult();
				explicit DescribePipelineResult(const std::string &payload);
				~DescribePipelineResult();
				std::string getMessage()const;
				std::string getTraceId()const;
				Data getData()const;
				std::string getErrorCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string traceId_;
				Data data_;
				std::string errorCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAE_MODEL_DESCRIBEPIPELINERESULT_H_