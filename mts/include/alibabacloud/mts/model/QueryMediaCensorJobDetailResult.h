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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYMEDIACENSORJOBDETAILRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYMEDIACENSORJOBDETAILRESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT QueryMediaCensorJobDetailResult : public ServiceResult
			{
			public:
				struct MediaCensorJobDetail
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
					struct AudioCensorResult
					{
						struct AudioDetailResult
						{
							int endTime;
							int startTime;
							std::string label;
							std::string text;
						};
						std::string suggestion;
						std::string label;
						std::vector<AudioDetailResult> audioDetailResultList;
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
					std::vector<CoverImageCensorResult> coverImageCensorResults;
					std::string code;
					std::string suggestion;
					Input input;
					AudioCensorResult audioCensorResult;
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


				QueryMediaCensorJobDetailResult();
				explicit QueryMediaCensorJobDetailResult(const std::string &payload);
				~QueryMediaCensorJobDetailResult();
				MediaCensorJobDetail getMediaCensorJobDetail()const;

			protected:
				void parse(const std::string &payload);
			private:
				MediaCensorJobDetail mediaCensorJobDetail_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYMEDIACENSORJOBDETAILRESULT_H_