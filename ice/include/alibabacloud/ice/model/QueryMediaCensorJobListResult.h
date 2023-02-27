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

#ifndef ALIBABACLOUD_ICE_MODEL_QUERYMEDIACENSORJOBLISTRESULT_H_
#define ALIBABACLOUD_ICE_MODEL_QUERYMEDIACENSORJOBLISTRESULT_H_

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
			class ALIBABACLOUD_ICE_EXPORT QueryMediaCensorJobListResult : public ServiceResult
			{
			public:
				struct MediaCensorJob
				{
					struct TitleCensorResult
					{
						std::string suggestion;
						std::string rate;
						std::string label;
						std::string scene;
					};
					struct Input
					{
						std::string bucket;
						std::string object;
						std::string location;
					};
					struct BarrageCensorResult
					{
						std::string suggestion;
						std::string rate;
						std::string label;
						std::string scene;
					};
					struct DescCensorResult
					{
						std::string suggestion;
						std::string rate;
						std::string label;
						std::string scene;
					};
					struct VideoCensorConfig
					{
						struct OutputFile
						{
							std::string bucket;
							std::string object;
							std::string location;
						};
						OutputFile outputFile;
						std::string videoCensor;
						std::string bizType;
					};
					struct VensorCensorResult
					{
						struct VideoTimeline
						{
							struct CensorResult
							{
								std::string suggestion;
								std::string rate;
								std::string label;
								std::string scene;
							};
							std::vector<VideoTimeline::CensorResult> censorResults1;
							std::string object;
							std::string timestamp;
						};
						struct CensorResult2
						{
							std::string suggestion;
							std::string rate;
							std::string label;
							std::string scene;
						};
						std::vector<CensorResult2> censorResults;
						std::string nextPageToken;
						std::vector<VideoTimeline> videoTimelines;
					};
					struct CoverImageCensorResult
					{
						struct Result
						{
							std::string suggestion;
							std::string rate;
							std::string label;
							std::string scene;
						};
						std::vector<CoverImageCensorResult::Result> results;
						std::string bucket;
						std::string object;
						std::string location;
					};
					std::string message;
					DescCensorResult descCensorResult;
					std::string userData;
					std::vector<MediaCensorJob::CoverImageCensorResult> coverImageCensorResults;
					std::string code;
					std::string suggestion;
					Input input;
					std::string finishTime;
					VensorCensorResult vensorCensorResult;
					std::string state;
					BarrageCensorResult barrageCensorResult;
					std::string creationTime;
					std::string pipelineId;
					VideoCensorConfig videoCensorConfig;
					std::string jobId;
					TitleCensorResult titleCensorResult;
				};


				QueryMediaCensorJobListResult();
				explicit QueryMediaCensorJobListResult(const std::string &payload);
				~QueryMediaCensorJobListResult();
				std::vector<MediaCensorJob> getMediaCensorJobList()const;
				std::string getNextPageToken()const;
				std::vector<std::string> getNonExistIds()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<MediaCensorJob> mediaCensorJobList_;
				std::string nextPageToken_;
				std::vector<std::string> nonExistIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_QUERYMEDIACENSORJOBLISTRESULT_H_