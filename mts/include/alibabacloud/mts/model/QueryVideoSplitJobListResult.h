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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYVIDEOSPLITJOBLISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYVIDEOSPLITJOBLISTRESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT QueryVideoSplitJobListResult : public ServiceResult
			{
			public:
				struct Job
				{
					struct Input
					{
						std::string bucket;
						std::string object;
						std::string location;
					};
					struct VideoSplitResult
					{
						struct VideoSplit
						{
							std::string path;
							std::string endTime;
							std::string startTime;
						};
						std::vector<VideoSplit> videoSplitList;
					};
					Input input;
					std::string message;
					std::string userData;
					std::string state;
					std::string creationTime;
					std::string pipelineId;
					std::string id;
					VideoSplitResult videoSplitResult;
					std::string code;
				};


				QueryVideoSplitJobListResult();
				explicit QueryVideoSplitJobListResult(const std::string &payload);
				~QueryVideoSplitJobListResult();
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
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYVIDEOSPLITJOBLISTRESULT_H_