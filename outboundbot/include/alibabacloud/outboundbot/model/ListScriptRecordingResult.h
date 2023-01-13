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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTSCRIPTRECORDINGRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTSCRIPTRECORDINGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/outboundbot/OutboundBotExport.h>

namespace AlibabaCloud
{
	namespace OutboundBot
	{
		namespace Model
		{
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT ListScriptRecordingResult : public ServiceResult
			{
			public:
				struct ScriptRecording
				{
					std::string storageUuid;
					std::string stateExtend;
					std::string instanceId;
					std::string recordingName;
					std::string recordingContent;
					long gmtModified;
					std::string innerId;
					std::string scriptId;
					long gmtCreate;
					std::string uuid;
					int state;
					long gmtUpload;
					int recordingDuration;
				};


				ListScriptRecordingResult();
				explicit ListScriptRecordingResult(const std::string &payload);
				~ListScriptRecordingResult();
				long getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				std::vector<ScriptRecording> getScriptRecordings()const;
				int getPageNumber()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string message_;
				int pageSize_;
				std::vector<ScriptRecording> scriptRecordings_;
				int pageNumber_;
				int httpStatusCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTSCRIPTRECORDINGRESULT_H_