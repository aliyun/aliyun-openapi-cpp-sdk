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

#ifndef ALIBABACLOUD_VOD_MODEL_GETJOBDETAILRESULT_H_
#define ALIBABACLOUD_VOD_MODEL_GETJOBDETAILRESULT_H_

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
			class ALIBABACLOUD_VOD_EXPORT GetJobDetailResult : public ServiceResult
			{
			public:
				struct TranscodeJobDetail
				{
					std::string status;
					std::string videoId;
					long userId;
					std::string createTime;
					std::string definition;
					std::string completeTime;
					std::string jobId;
					std::string templateId;
				};
				struct SnapshotJobDetail
				{
					std::string status;
					std::string normalConfig;
					std::string videoId;
					std::string trigger;
					long userId;
					std::string createTime;
					std::string spriteConfig;
					std::string completeTime;
					std::string jobId;
				};
				struct AIJobDetail
				{
					std::string status;
					std::string jobType;
					std::string trigger;
					std::string mediaId;
					long userId;
					std::string createTime;
					std::string templateConfig;
					std::string completeTime;
					std::string jobId;
				};


				GetJobDetailResult();
				explicit GetJobDetailResult(const std::string &payload);
				~GetJobDetailResult();
				std::string getJobType()const;
				SnapshotJobDetail getSnapshotJobDetail()const;
				TranscodeJobDetail getTranscodeJobDetail()const;
				AIJobDetail getAIJobDetail()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string jobType_;
				SnapshotJobDetail snapshotJobDetail_;
				TranscodeJobDetail transcodeJobDetail_;
				AIJobDetail aIJobDetail_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETJOBDETAILRESULT_H_