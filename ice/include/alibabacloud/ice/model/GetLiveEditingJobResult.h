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

#ifndef ALIBABACLOUD_ICE_MODEL_GETLIVEEDITINGJOBRESULT_H_
#define ALIBABACLOUD_ICE_MODEL_GETLIVEEDITINGJOBRESULT_H_

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
			class ALIBABACLOUD_ICE_EXPORT GetLiveEditingJobResult : public ServiceResult
			{
			public:
				struct LiveEditingJob
				{
					struct LiveStreamConfig
					{
						std::string streamName;
						std::string domainName;
						std::string appName;
					};
					struct MediaProduceConfig
					{
						std::string mode;
					};
					struct OutputMediaConfig
					{
						std::string mediaURL;
						std::string vodTemplateGroupId;
						std::string fileName;
						int height;
						std::string storageLocation;
						int width;
						long bitrate;
					};
					std::string status;
					std::string clips;
					std::string mediaURL;
					OutputMediaConfig outputMediaConfig;
					std::string message;
					std::string userData;
					std::string projectId;
					LiveStreamConfig liveStreamConfig;
					std::string code;
					std::string modifiedTime;
					std::string mediaId;
					std::string creationTime;
					MediaProduceConfig mediaProduceConfig;
					std::string completeTime;
					std::string jobId;
				};


				GetLiveEditingJobResult();
				explicit GetLiveEditingJobResult(const std::string &payload);
				~GetLiveEditingJobResult();
				LiveEditingJob getLiveEditingJob()const;

			protected:
				void parse(const std::string &payload);
			private:
				LiveEditingJob liveEditingJob_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_GETLIVEEDITINGJOBRESULT_H_