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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_GETCURRENTCONCURRENCYRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_GETCURRENTCONCURRENCYRESULT_H_

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
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT GetCurrentConcurrencyResult : public ServiceResult
			{
			public:


				GetCurrentConcurrencyResult();
				explicit GetCurrentConcurrencyResult(const std::string &payload);
				~GetCurrentConcurrencyResult();
				std::string getMessage()const;
				int getMaxConcurrentConversation()const;
				std::string getInstanceId()const;
				int getCurrentConcurrency()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int maxConcurrentConversation_;
				std::string instanceId_;
				int currentConcurrency_;
				int httpStatusCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_GETCURRENTCONCURRENCYRESULT_H_