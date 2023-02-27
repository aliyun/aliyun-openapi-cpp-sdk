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

#ifndef ALIBABACLOUD_ICE_MODEL_GETMEDIAPRODUCINGJOBRESULT_H_
#define ALIBABACLOUD_ICE_MODEL_GETMEDIAPRODUCINGJOBRESULT_H_

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
			class ALIBABACLOUD_ICE_EXPORT GetMediaProducingJobResult : public ServiceResult
			{
			public:
				struct MediaProducingJob
				{
					std::string status;
					std::string mediaURL;
					std::string message;
					std::string createTime;
					std::string projectId;
					float duration;
					std::string code;
					std::string vodMediaId;
					std::string timeline;
					std::string mediaId;
					std::string modifiedTime;
					std::string clipsParam;
					std::string completeTime;
					std::string jobId;
					std::string templateId;
				};


				GetMediaProducingJobResult();
				explicit GetMediaProducingJobResult(const std::string &payload);
				~GetMediaProducingJobResult();
				MediaProducingJob getMediaProducingJob()const;

			protected:
				void parse(const std::string &payload);
			private:
				MediaProducingJob mediaProducingJob_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_GETMEDIAPRODUCINGJOBRESULT_H_