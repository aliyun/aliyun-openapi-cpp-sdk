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

#ifndef ALIBABACLOUD_VCS_MODEL_GETDEVICECONFIGRESULT_H_
#define ALIBABACLOUD_VCS_MODEL_GETDEVICECONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vcs/VcsExport.h>

namespace AlibabaCloud
{
	namespace Vcs
	{
		namespace Model
		{
			class ALIBABACLOUD_VCS_EXPORT GetDeviceConfigResult : public ServiceResult
			{
			public:
				struct OSDListItem
				{
					std::string text;
					std::string leftTopY;
					std::string leftTopX;
				};


				GetDeviceConfigResult();
				explicit GetDeviceConfigResult(const std::string &payload);
				~GetDeviceConfigResult();
				std::string getEncodeFormat()const;
				std::string getMessage()const;
				std::string getDeviceId()const;
				std::string getLatitude()const;
				std::vector<OSDListItem> getOSDList()const;
				std::string getPassWord()const;
				std::string getOSDTimeY()const;
				std::string getOSDTimeEnable()const;
				std::string getServerId()const;
				std::string getDeviceAddress()const;
				std::string getOSDTimeX()const;
				int getGovLength()const;
				std::string getAudioFormat()const;
				std::string getProtocol()const;
				bool getAudioEnable()const;
				std::string getFrameRate()const;
				std::string getUserName()const;
				std::string getServerIp()const;
				std::string getCode()const;
				std::string getLongitude()const;
				std::string getRetryInterval()const;
				std::string getBitRate()const;
				std::string getServerPort()const;
				std::string getDeviceName()const;
				std::string getOSDTimeType()const;
				std::string getResolution()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string encodeFormat_;
				std::string message_;
				std::string deviceId_;
				std::string latitude_;
				std::vector<OSDListItem> oSDList_;
				std::string passWord_;
				std::string oSDTimeY_;
				std::string oSDTimeEnable_;
				std::string serverId_;
				std::string deviceAddress_;
				std::string oSDTimeX_;
				int govLength_;
				std::string audioFormat_;
				std::string protocol_;
				bool audioEnable_;
				std::string frameRate_;
				std::string userName_;
				std::string serverIp_;
				std::string code_;
				std::string longitude_;
				std::string retryInterval_;
				std::string bitRate_;
				std::string serverPort_;
				std::string deviceName_;
				std::string oSDTimeType_;
				std::string resolution_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_GETDEVICECONFIGRESULT_H_