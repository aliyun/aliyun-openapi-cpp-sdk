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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYASRJOBLISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYASRJOBLISTRESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT QueryAsrJobListResult : public ServiceResult
			{
			public:
				struct Job
				{
					struct AsrConfig
					{
						std::string scene;
					};
					struct Input
					{
						std::string bucket;
						std::string object;
						std::string location;
					};
					struct AsrResult
					{
						struct AsrText
						{
							std::string endTime;
							int startTime;
							std::string text;
							std::string channelId;
							std::string speechRate;
						};
						std::vector<AsrText> asrTextList;
						std::string duration;
					};
					AsrConfig asrConfig;
					Input input;
					std::string message;
					std::string userData;
					std::string state;
					std::string creationTime;
					std::string pipelineId;
					std::string id;
					AsrResult asrResult;
					std::string code;
				};


				QueryAsrJobListResult();
				explicit QueryAsrJobListResult(const std::string &payload);
				~QueryAsrJobListResult();
				std::vector<Job> getJobList()const;
				std::vector<std::string> getNonExistIds()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Job> jobList_;
				std::vector<std::string> nonExistIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYASRJOBLISTRESULT_H_