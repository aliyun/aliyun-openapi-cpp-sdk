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

#ifndef ALIBABACLOUD_IOT_MODEL_TESTSPEECHREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_TESTSPEECHREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT TestSpeechRequest : public RpcServiceRequest
			{

			public:
				TestSpeechRequest();
				~TestSpeechRequest();

				std::string getVoice()const;
				void setVoice(const std::string& voice);
				std::string getProjectCode()const;
				void setProjectCode(const std::string& projectCode);
				std::string getAudioFormat()const;
				void setAudioFormat(const std::string& audioFormat);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				std::string getText()const;
				void setText(const std::string& text);
				std::string getSoundCodeConfig()const;
				void setSoundCodeConfig(const std::string& soundCodeConfig);
				std::string getSpeechType()const;
				void setSpeechType(const std::string& speechType);
				bool getEnableSoundCode()const;
				void setEnableSoundCode(bool enableSoundCode);
				int getVolume()const;
				void setVolume(int volume);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);
				int getSpeechRate()const;
				void setSpeechRate(int speechRate);

            private:
				std::string voice_;
				std::string projectCode_;
				std::string audioFormat_;
				std::string iotInstanceId_;
				std::string text_;
				std::string soundCodeConfig_;
				std::string speechType_;
				bool enableSoundCode_;
				int volume_;
				std::string apiProduct_;
				std::string apiRevision_;
				int speechRate_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_TESTSPEECHREQUEST_H_