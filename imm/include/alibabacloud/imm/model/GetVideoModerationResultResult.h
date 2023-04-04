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

#ifndef ALIBABACLOUD_IMM_MODEL_GETVIDEOMODERATIONRESULTRESULT_H_
#define ALIBABACLOUD_IMM_MODEL_GETVIDEOMODERATIONRESULTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imm/ImmExport.h>

namespace AlibabaCloud
{
	namespace Imm
	{
		namespace Model
		{
			class ALIBABACLOUD_IMM_EXPORT GetVideoModerationResultResult : public ServiceResult
			{
			public:
				struct ModerationResult
				{
					struct Frames
					{
						struct BlockFramesItem
						{
							double rate;
							std::string label;
							int offset;
						};
						int totalCount;
						std::vector<BlockFramesItem> blockFrames;
					};
					Frames frames;
					std::string suggestion;
					std::vector<std::string> categories;
					std::string uRI;
				};


				GetVideoModerationResultResult();
				explicit GetVideoModerationResultResult(const std::string &payload);
				~GetVideoModerationResultResult();
				std::string getStatus()const;
				std::string getTaskId()const;
				std::string getMessage()const;
				std::string getEndTime()const;
				std::string getProjectName()const;
				std::string getUserData()const;
				ModerationResult getModerationResult()const;
				std::string getTaskType()const;
				std::string getStartTime()const;
				std::string getEventId()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string taskId_;
				std::string message_;
				std::string endTime_;
				std::string projectName_;
				std::string userData_;
				ModerationResult moderationResult_;
				std::string taskType_;
				std::string startTime_;
				std::string eventId_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMM_MODEL_GETVIDEOMODERATIONRESULTRESULT_H_