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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_SMARTCALLREQUEST_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_SMARTCALLREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dyvmsapi/DyvmsapiExport.h>

namespace AlibabaCloud
{
	namespace Dyvmsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYVMSAPI_EXPORT SmartCallRequest : public RpcServiceRequest
			{

			public:
				SmartCallRequest();
				~SmartCallRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getVoiceCodeParam()const;
				void setVoiceCodeParam(const std::string& voiceCodeParam);
				bool getEarlyMediaAsr()const;
				void setEarlyMediaAsr(bool earlyMediaAsr);
				int getBackgroundSpeed()const;
				void setBackgroundSpeed(int backgroundSpeed);
				int getBackgroundVolume()const;
				void setBackgroundVolume(int backgroundVolume);
				int getSpeed()const;
				void setSpeed(int speed);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getAsrBaseId()const;
				void setAsrBaseId(const std::string& asrBaseId);
				int getSessionTimeout()const;
				void setSessionTimeout(int sessionTimeout);
				std::string getDynamicId()const;
				void setDynamicId(const std::string& dynamicId);
				std::string getCalledNumber()const;
				void setCalledNumber(const std::string& calledNumber);
				int getTtsSpeed()const;
				void setTtsSpeed(int ttsSpeed);
				std::string getVoiceCode()const;
				void setVoiceCode(const std::string& voiceCode);
				std::string getCalledShowNumber()const;
				void setCalledShowNumber(const std::string& calledShowNumber);
				bool getEnableITN()const;
				void setEnableITN(bool enableITN);
				int getActionCodeTimeBreak()const;
				void setActionCodeTimeBreak(int actionCodeTimeBreak);
				bool getTtsConf()const;
				void setTtsConf(bool ttsConf);
				bool getActionCodeBreak()const;
				void setActionCodeBreak(bool actionCodeBreak);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				bool getRecordFlag()const;
				void setRecordFlag(bool recordFlag);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getTtsVolume()const;
				void setTtsVolume(int ttsVolume);
				int getStreamAsr()const;
				void setStreamAsr(int streamAsr);
				int getVolume()const;
				void setVolume(int volume);
				int getMuteTime()const;
				void setMuteTime(int muteTime);
				std::string getBackgroundFileCode()const;
				void setBackgroundFileCode(const std::string& backgroundFileCode);
				std::string getOutId()const;
				void setOutId(const std::string& outId);
				std::string getAsrModelId()const;
				void setAsrModelId(const std::string& asrModelId);
				int getPauseTime()const;
				void setPauseTime(int pauseTime);
				std::string getTtsStyle()const;
				void setTtsStyle(const std::string& ttsStyle);

            private:
				long resourceOwnerId_;
				std::string voiceCodeParam_;
				bool earlyMediaAsr_;
				int backgroundSpeed_;
				int backgroundVolume_;
				int speed_;
				std::string accessKeyId_;
				std::string asrBaseId_;
				int sessionTimeout_;
				std::string dynamicId_;
				std::string calledNumber_;
				int ttsSpeed_;
				std::string voiceCode_;
				std::string calledShowNumber_;
				bool enableITN_;
				int actionCodeTimeBreak_;
				bool ttsConf_;
				bool actionCodeBreak_;
				std::string resourceOwnerAccount_;
				bool recordFlag_;
				long ownerId_;
				int ttsVolume_;
				int streamAsr_;
				int volume_;
				int muteTime_;
				std::string backgroundFileCode_;
				std::string outId_;
				std::string asrModelId_;
				int pauseTime_;
				std::string ttsStyle_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_SMARTCALLREQUEST_H_