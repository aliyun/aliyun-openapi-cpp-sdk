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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBESCRIPTVOICECONFIGRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBESCRIPTVOICECONFIGRESULT_H_

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
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT DescribeScriptVoiceConfigResult : public ServiceResult
			{
			public:
				struct ScriptVoiceConfig
				{
					std::string type;
					std::string scriptContent;
					std::string instanceId;
					std::string scriptVoiceConfigId;
					std::string scriptId;
					std::string source;
					std::string scriptWaveformRelation;
				};


				DescribeScriptVoiceConfigResult();
				explicit DescribeScriptVoiceConfigResult(const std::string &payload);
				~DescribeScriptVoiceConfigResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;
				ScriptVoiceConfig getScriptVoiceConfig()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				std::string code_;
				bool success_;
				ScriptVoiceConfig scriptVoiceConfig_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBESCRIPTVOICECONFIGRESULT_H_