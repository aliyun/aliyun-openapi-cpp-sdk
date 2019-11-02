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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_BATCHROBOTSMARTCALLREQUEST_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_BATCHROBOTSMARTCALLREQUEST_H_

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
			class ALIBABACLOUD_DYVMSAPI_EXPORT BatchRobotSmartCallRequest : public RpcServiceRequest
			{

			public:
				BatchRobotSmartCallRequest();
				~BatchRobotSmartCallRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				bool getEarlyMediaAsr()const;
				void setEarlyMediaAsr(bool earlyMediaAsr);
				std::string getTtsParamHead()const;
				void setTtsParamHead(const std::string& ttsParamHead);
				std::string getTaskName()const;
				void setTaskName(const std::string& taskName);
				std::string getTtsParam()const;
				void setTtsParam(const std::string& ttsParam);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getCalledNumber()const;
				void setCalledNumber(const std::string& calledNumber);
				std::string getCalledShowNumber()const;
				void setCalledShowNumber(const std::string& calledShowNumber);
				bool getIsSelfLine()const;
				void setIsSelfLine(bool isSelfLine);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getDialogId()const;
				void setDialogId(const std::string& dialogId);
				long getScheduleTime()const;
				void setScheduleTime(long scheduleTime);
				std::string getCorpName()const;
				void setCorpName(const std::string& corpName);
				bool getScheduleCall()const;
				void setScheduleCall(bool scheduleCall);

            private:
				long resourceOwnerId_;
				bool earlyMediaAsr_;
				std::string ttsParamHead_;
				std::string taskName_;
				std::string ttsParam_;
				std::string accessKeyId_;
				std::string calledNumber_;
				std::string calledShowNumber_;
				bool isSelfLine_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string dialogId_;
				long scheduleTime_;
				std::string corpName_;
				bool scheduleCall_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_BATCHROBOTSMARTCALLREQUEST_H_