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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATESCRIPTWAVEFORMREQUEST_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATESCRIPTWAVEFORMREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/outboundbot/OutboundBotExport.h>

namespace AlibabaCloud
{
	namespace OutboundBot
	{
		namespace Model
		{
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT CreateScriptWaveformRequest : public RpcServiceRequest
			{

			public:
				CreateScriptWaveformRequest();
				~CreateScriptWaveformRequest();

				std::string getScriptId()const;
				void setScriptId(const std::string& scriptId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getFileName()const;
				void setFileName(const std::string& fileName);
				std::string getScriptContent()const;
				void setScriptContent(const std::string& scriptContent);
				std::string getFileId()const;
				void setFileId(const std::string& fileId);

            private:
				std::string scriptId_;
				std::string instanceId_;
				std::string fileName_;
				std::string scriptContent_;
				std::string fileId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATESCRIPTWAVEFORMREQUEST_H_