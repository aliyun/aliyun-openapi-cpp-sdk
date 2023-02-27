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

#ifndef ALIBABACLOUD_ICE_MODEL_LISTPACKAGEJOBSRESULT_H_
#define ALIBABACLOUD_ICE_MODEL_LISTPACKAGEJOBSRESULT_H_

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
			class ALIBABACLOUD_ICE_EXPORT ListPackageJobsResult : public ServiceResult
			{
			public:
				struct PackageJobList
				{
					struct PackageJob
					{
						struct Output
						{
							std::string type;
							std::string media;
						};
						struct Input
						{
							struct Input3
							{
								std::string type;
								std::string media;
							};
							struct PackageConfig
							{
								std::string codec;
								long bandwidth;
								float bitrate;
							};
							struct Audio
							{
								struct Input1
								{
									std::string type;
									std::string media;
								};
								std::string codec;
								Input1 input1;
								long bandwidth;
								float bitrate;
								std::string name;
							};
							struct Subtitle
							{
								struct Input2
								{
									std::string type;
									std::string media;
								};
								std::string language;
								Input2 input2;
								std::string name;
							};
							std::vector<Input::Audio> audios;
							std::vector<Input::Subtitle> subtitles;
							Input3 input3;
							PackageConfig packageConfig;
						};
						std::string status;
						std::string message;
						std::string userData;
						int priority;
						std::string createTime;
						std::string code;
						std::string submitTime;
						std::string name;
						std::string finishTime;
						std::string modifiedTime;
						Output output;
						std::string pipelineId;
						std::vector<PackageJob::Input> inputs;
						std::string triggerSource;
						std::string jobId;
						std::string templateId;
					};
					std::string nextPageToken;
					std::vector<PackageJob> packageJobs;
				};


				ListPackageJobsResult();
				explicit ListPackageJobsResult(const std::string &payload);
				~ListPackageJobsResult();
				PackageJobList getPackageJobList()const;

			protected:
				void parse(const std::string &payload);
			private:
				PackageJobList packageJobList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_LISTPACKAGEJOBSRESULT_H_