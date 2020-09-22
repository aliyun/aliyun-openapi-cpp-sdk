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

#ifndef ALIBABACLOUD_VS_MODEL_CREATEDEVICEREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_CREATEDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT CreateDeviceRequest : public RpcServiceRequest
			{

			public:
				CreateDeviceRequest();
				~CreateDeviceRequest();

				std::string getGbId()const;
				void setGbId(const std::string& gbId);
				std::string getLatitude()const;
				void setLatitude(const std::string& latitude);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getType()const;
				void setType(const std::string& type);
				bool getAutoStart()const;
				void setAutoStart(bool autoStart);
				std::string getParentId()const;
				void setParentId(const std::string& parentId);
				std::string getPassword()const;
				void setPassword(const std::string& password);
				std::string getVendor()const;
				void setVendor(const std::string& vendor);
				std::string getAlarmMethod()const;
				void setAlarmMethod(const std::string& alarmMethod);
				std::string getDirectoryId()const;
				void setDirectoryId(const std::string& directoryId);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				std::string getLongitude()const;
				void setLongitude(const std::string& longitude);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getIp()const;
				void setIp(const std::string& ip);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getParams()const;
				void setParams(const std::string& params);
				std::string getUrl()const;
				void setUrl(const std::string& url);
				long getPort()const;
				void setPort(long port);
				std::string getName()const;
				void setName(const std::string& name);
				long getPosInterval()const;
				void setPosInterval(long posInterval);
				std::string getDsn()const;
				void setDsn(const std::string& dsn);
				std::string getUsername()const;
				void setUsername(const std::string& username);
				bool getAutoPos()const;
				void setAutoPos(bool autoPos);

            private:
				std::string gbId_;
				std::string latitude_;
				std::string description_;
				std::string type_;
				bool autoStart_;
				std::string parentId_;
				std::string password_;
				std::string vendor_;
				std::string alarmMethod_;
				std::string directoryId_;
				std::string showLog_;
				std::string longitude_;
				std::string groupId_;
				std::string ip_;
				long ownerId_;
				std::string params_;
				std::string url_;
				long port_;
				std::string name_;
				long posInterval_;
				std::string dsn_;
				std::string username_;
				bool autoPos_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_CREATEDEVICEREQUEST_H_