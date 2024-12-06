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

#ifndef ALIBABACLOUD_VOD_MODEL_GETTRANSCODETASKRESULT_H_
#define ALIBABACLOUD_VOD_MODEL_GETTRANSCODETASKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT GetTranscodeTaskResult : public ServiceResult
			{
			public:
				struct TranscodeTask
				{
					struct TranscodeJobInfo2
					{
						struct OutputFile3
						{
							std::string outputFileUrl;
							std::string fps;
							std::string videoStreamList;
							std::string duration;
							std::string encryption;
							std::string audioStreamList;
							long filesize;
							std::string bitrate;
							std::vector<std::string> watermarkIdList4;
							std::string format;
							std::string height;
							std::string subtitleStreamList;
							std::string width;
						};
						std::string transcodeTemplateId;
						OutputFile3 outputFile3;
						std::string inputFileUrl;
						std::string priority;
						std::string definition;
						std::string creationTime;
						std::string transcodeJobStatus;
						std::string transcodeJobId;
						std::string errorCode;
						long transcodeProgress;
						std::string errorMessage;
						std::string completeTime;
					};
					std::string trigger;
					std::string videoId;
					std::string transcodeTemplateGroupId;
					std::vector<TranscodeJobInfo2> transcodeJobInfoList1;
					std::string creationTime;
					std::string taskStatus;
					std::string completeTime;
					std::string transcodeTaskId;
				};
				struct TranscodeJobInfo
				{
					struct OutputFile
					{
						std::string outputFileUrl;
						std::string fps;
						std::string videoStreamList;
						std::string duration;
						std::string encryption;
						std::string audioStreamList;
						long filesize;
						std::string bitrate;
						std::vector<std::string> watermarkIdList;
						std::string format;
						std::string height;
						std::string subtitleStreamList;
						std::string width;
					};
					OutputFile outputFile;
					std::string transcodeTemplateId;
					std::string inputFileUrl;
					std::string priority;
					std::string definition;
					std::string creationTime;
					std::string transcodeJobStatus;
					std::string transcodeJobId;
					std::string errorCode;
					long transcodeProgress;
					std::string errorMessage;
					std::string completeTime;
				};


				GetTranscodeTaskResult();
				explicit GetTranscodeTaskResult(const std::string &payload);
				~GetTranscodeTaskResult();
				std::vector<std::string> getNonExistJobIds()const;
				std::vector<TranscodeJobInfo> getTranscodeJobInfoList()const;
				TranscodeTask getTranscodeTask()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> nonExistJobIds_;
				std::vector<TranscodeJobInfo> transcodeJobInfoList_;
				TranscodeTask transcodeTask_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETTRANSCODETASKRESULT_H_