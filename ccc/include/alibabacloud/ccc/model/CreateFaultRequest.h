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

#ifndef ALIBABACLOUD_CCC_MODEL_CREATEFAULTREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_CREATEFAULTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT CreateFaultRequest : public RpcServiceRequest
			{

			public:
				CreateFaultRequest();
				~CreateFaultRequest();

				std::string getSpeakerList()const;
				void setSpeakerList(const std::string& speakerList);
				long getAgentId()const;
				void setAgentId(long agentId);
				std::string getAgentOssFileName()const;
				void setAgentOssFileName(const std::string& agentOssFileName);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getEndTime()const;
				void setEndTime(long endTime);
				std::string getOperatingSystemVersion()const;
				void setOperatingSystemVersion(const std::string& operatingSystemVersion);
				long getStartTime()const;
				void setStartTime(long startTime);
				std::string getMicrophoneList()const;
				void setMicrophoneList(const std::string& microphoneList);
				std::string getSpeakerEquipment()const;
				void setSpeakerEquipment(const std::string& speakerEquipment);
				std::string getServicePort()const;
				void setServicePort(const std::string& servicePort);
				std::string getClientPort()const;
				void setClientPort(const std::string& clientPort);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getServiceIp()const;
				void setServiceIp(const std::string& serviceIp);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getCustomFilePath()const;
				void setCustomFilePath(const std::string& customFilePath);
				std::string getClientIp()const;
				void setClientIp(const std::string& clientIp);
				std::string getAgentFilePath()const;
				void setAgentFilePath(const std::string& agentFilePath);
				std::string getConnectId()const;
				void setConnectId(const std::string& connectId);
				std::string getCustomOssFileName()const;
				void setCustomOssFileName(const std::string& customOssFileName);
				std::string getMicrophoneEquipment()const;
				void setMicrophoneEquipment(const std::string& microphoneEquipment);
				std::string getBrowserVersion()const;
				void setBrowserVersion(const std::string& browserVersion);

            private:
				std::string speakerList_;
				long agentId_;
				std::string agentOssFileName_;
				std::string description_;
				long endTime_;
				std::string operatingSystemVersion_;
				long startTime_;
				std::string microphoneList_;
				std::string speakerEquipment_;
				std::string servicePort_;
				std::string clientPort_;
				std::string accessKeyId_;
				std::string serviceIp_;
				std::string instanceId_;
				std::string customFilePath_;
				std::string clientIp_;
				std::string agentFilePath_;
				std::string connectId_;
				std::string customOssFileName_;
				std::string microphoneEquipment_;
				std::string browserVersion_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_CREATEFAULTREQUEST_H_