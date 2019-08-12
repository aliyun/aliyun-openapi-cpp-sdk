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

#ifndef ALIBABACLOUD_MOPEN_MODEL_MOPENSENDMQTTMESSAGEREQUEST_H_
#define ALIBABACLOUD_MOPEN_MODEL_MOPENSENDMQTTMESSAGEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/mopen/MoPenExport.h>

namespace AlibabaCloud
{
	namespace MoPen
	{
		namespace Model
		{
			class ALIBABACLOUD_MOPEN_EXPORT MoPenSendMqttMessageRequest : public RpcServiceRequest
			{

			public:
				MoPenSendMqttMessageRequest();
				~MoPenSendMqttMessageRequest();

				std::string getPayload()const;
				void setPayload(const std::string& payload);
				std::string getDeviceName()const;
				void setDeviceName(const std::string& deviceName);

            private:
				std::string payload_;
				std::string deviceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MOPEN_MODEL_MOPENSENDMQTTMESSAGEREQUEST_H_