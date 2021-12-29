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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATESCRIPTRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATESCRIPTRESULT_H_

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
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT CreateScriptResult : public ServiceResult
			{
			public:
				struct Script
				{
					std::string status;
					std::string industry;
					bool isDrafted;
					std::string scriptName;
					long updateTime;
					std::string scriptDescription;
					std::string scriptId;
					std::string debugStatus;
					std::string scene;
					bool isDebugDrafted;
				};


				CreateScriptResult();
				explicit CreateScriptResult(const std::string &payload);
				~CreateScriptResult();
				Script getScript()const;
				std::string getChatbotId()const;
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Script script_;
				std::string chatbotId_;
				std::string message_;
				int httpStatusCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATESCRIPTRESULT_H_