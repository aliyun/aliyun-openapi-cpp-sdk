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

#ifndef ALIBABACLOUD_VOD_MODEL_GETTRANSCODESUMMARYRESULT_H_
#define ALIBABACLOUD_VOD_MODEL_GETTRANSCODESUMMARYRESULT_H_

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
			class ALIBABACLOUD_VOD_EXPORT GetTranscodeSummaryResult : public ServiceResult
			{
			public:
				struct TranscodeSummary
				{
					struct TranscodeJobInfoSummary
					{
						std::string definition;
						std::string fps;
						std::string transcodeJobStatus;
						std::string duration;
						std::string encryption;
						long filesize;
						std::string bitrate;
						std::vector<std::string> watermarkIdList;
						std::string transcodeTemplateId;
						std::string format;
						std::string creationTime;
						std::string height;
						long transcodeProgress;
						std::string errorCode;
						std::string errorMessage;
						std::string completeTime;
						std::string width;
					};
					std::string trigger;
					std::string videoId;
					std::string transcodeTemplateGroupId;
					std::vector<TranscodeSummary::TranscodeJobInfoSummary> transcodeJobInfoSummaryList;
					std::string creationTime;
					std::string completeTime;
					std::string transcodeStatus;
				};


				GetTranscodeSummaryResult();
				explicit GetTranscodeSummaryResult(const std::string &payload);
				~GetTranscodeSummaryResult();
				std::vector<TranscodeSummary> getTranscodeSummaryList()const;
				std::vector<std::string> getNonExistVideoIds()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<TranscodeSummary> transcodeSummaryList_;
				std::vector<std::string> nonExistVideoIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETTRANSCODESUMMARYRESULT_H_