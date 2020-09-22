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

#ifndef ALIBABACLOUD_VS_MODEL_CREATEDEVICEALARMREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_CREATEDEVICEALARMREQUEST_H_

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
			class ALIBABACLOUD_VS_EXPORT CreateDeviceAlarmRequest : public RpcServiceRequest
			{

			public:
				CreateDeviceAlarmRequest();
				~CreateDeviceAlarmRequest();

				long getStartTime()const;
				void setStartTime(long startTime);
				int getAlarm()const;
				void setAlarm(int alarm);
				std::string getId()const;
				void setId(const std::string& id);
				int getObjectType()const;
				void setObjectType(int objectType);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				long getEndTime()const;
				void setEndTime(long endTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getSubAlarm()const;
				void setSubAlarm(int subAlarm);
				long getExpire()const;
				void setExpire(long expire);
				int getChannelId()const;
				void setChannelId(int channelId);

            private:
				long startTime_;
				int alarm_;
				std::string id_;
				int objectType_;
				std::string showLog_;
				long endTime_;
				long ownerId_;
				int subAlarm_;
				long expire_;
				int channelId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_CREATEDEVICEALARMREQUEST_H_