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

#ifndef ALIBABACLOUD_IOT_MODEL_GETSHARESPEECHMODELAUDIOREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_GETSHARESPEECHMODELAUDIOREQUEST_H_

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
			class ALIBABACLOUD_IOT_EXPORT GetShareSpeechModelAudioRequest : public RpcServiceRequest
			{

			public:
				GetShareSpeechModelAudioRequest();
				~GetShareSpeechModelAudioRequest();

				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				std::string getShareTaskId()const;
				void setShareTaskId(const std::string& shareTaskId);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);
				std::vector<std::string> getSpeechModelCodeList()const;
				void setSpeechModelCodeList(const std::vector<std::string>& speechModelCodeList);

            private:
				std::string iotInstanceId_;
				std::string shareTaskId_;
				std::string apiProduct_;
				std::string apiRevision_;
				std::vector<std::string> speechModelCodeList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_GETSHARESPEECHMODELAUDIOREQUEST_H_