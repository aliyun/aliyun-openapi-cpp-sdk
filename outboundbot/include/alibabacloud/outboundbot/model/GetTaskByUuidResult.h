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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_GETTASKBYUUIDRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_GETTASKBYUUIDRESULT_H_

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
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT GetTaskByUuidResult : public ServiceResult
			{
			public:
				struct Task
				{
					std::string jobGroupId;
					std::string calledNumber;
					int endReason;
					long plannedTime;
					long endTime;
					std::string instanceId;
					long actualTime;
					std::string callId;
					std::string id;
					std::string jobId;
					std::string callingNumber;
				};


				GetTaskByUuidResult();
				explicit GetTaskByUuidResult(const std::string &payload);
				~GetTaskByUuidResult();
				Task getTask()const;

			protected:
				void parse(const std::string &payload);
			private:
				Task task_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_GETTASKBYUUIDRESULT_H_