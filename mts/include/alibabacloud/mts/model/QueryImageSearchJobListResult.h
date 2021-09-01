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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYIMAGESEARCHJOBLISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYIMAGESEARCHJOBLISTRESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT QueryImageSearchJobListResult : public ServiceResult
			{
			public:
				struct ImageSearchJob
				{
					struct Result
					{
						struct ImageSearchShotsItem
						{
							std::string matchedFrame;
							std::string similarity;
							std::string matchedTimestamp;
						};
						std::vector<ImageSearchShotsItem> imageSearchShots;
					};
					struct InputImage
					{
						std::string bucket;
						std::string object;
						std::string location;
					};
					struct InputVideo
					{
						std::string bucket;
						std::string object;
						std::string location;
					};
					std::string finishTime;
					std::string message;
					InputVideo inputVideo;
					std::string userData;
					std::string state;
					std::string creationTime;
					std::string pipelineId;
					std::string id;
					std::string code;
					InputImage inputImage;
					Result result;
				};


				QueryImageSearchJobListResult();
				explicit QueryImageSearchJobListResult(const std::string &payload);
				~QueryImageSearchJobListResult();
				std::vector<ImageSearchJob> getImageSearchJobList()const;
				std::vector<std::string> getNonExistIds()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ImageSearchJob> imageSearchJobList_;
				std::vector<std::string> nonExistIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYIMAGESEARCHJOBLISTRESULT_H_