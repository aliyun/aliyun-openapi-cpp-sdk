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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYMEDIAWORKFLOWEXECUTIONLISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYMEDIAWORKFLOWEXECUTIONLISTRESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT QueryMediaWorkflowExecutionListResult : public ServiceResult
			{
			public:
				struct MediaWorkflowExecution
				{
					struct Input
					{
						struct InputFile
						{
							std::string bucket;
							std::string object;
							std::string location;
						};
						std::string userData;
						InputFile inputFile;
					};
					struct Activity
					{
						struct MNSMessageResult
						{
							std::string errorCode;
							std::string errorMessage;
							std::string messageId;
						};
						std::string type;
						std::string endTime;
						std::string message;
						std::string state;
						MNSMessageResult mNSMessageResult;
						std::string startTime;
						std::string code;
						std::string jobId;
						std::string name;
					};
					std::vector<MediaWorkflowExecution::Activity> activityList;
					Input input;
					std::string mediaId;
					std::string state;
					std::string mediaWorkflowId;
					std::string creationTime;
					std::string runId;
					std::string name;
				};


				QueryMediaWorkflowExecutionListResult();
				explicit QueryMediaWorkflowExecutionListResult(const std::string &payload);
				~QueryMediaWorkflowExecutionListResult();
				std::vector<std::string> getNonExistRunIds()const;
				std::vector<MediaWorkflowExecution> getMediaWorkflowExecutionList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> nonExistRunIds_;
				std::vector<MediaWorkflowExecution> mediaWorkflowExecutionList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYMEDIAWORKFLOWEXECUTIONLISTRESULT_H_