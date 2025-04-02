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

#ifndef ALIBABACLOUD_AIPODCAST_MODEL_PODCASTTASKSUBMITRESULT_H_
#define ALIBABACLOUD_AIPODCAST_MODEL_PODCASTTASKSUBMITRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aipodcast/AIPodcastExport.h>

namespace AlibabaCloud
{
	namespace AIPodcast
	{
		namespace Model
		{
			class ALIBABACLOUD_AIPODCAST_EXPORT PodcastTaskSubmitResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string taskId;
					std::string taskStatus;
				};


				PodcastTaskSubmitResult();
				explicit PodcastTaskSubmitResult(const std::string &payload);
				~PodcastTaskSubmitResult();
				std::string getMessage()const;
				std::string getRequestId()const;
				std::string getHttpStatusCode()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string requestId_;
				std::string httpStatusCode_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AIPODCAST_MODEL_PODCASTTASKSUBMITRESULT_H_