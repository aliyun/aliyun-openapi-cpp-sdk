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

#ifndef ALIBABACLOUD_IOT_MODEL_BATCHPUBREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_BATCHPUBREQUEST_H_

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
			class ALIBABACLOUD_IOT_EXPORT BatchPubRequest : public RpcServiceRequest
			{
			public:
				struct UserProp
				{
					std::string value;
					std::string key;
				};

			public:
				BatchPubRequest();
				~BatchPubRequest();

				std::vector<UserProp> getUserProp()const;
				void setUserProp(const std::vector<UserProp>& userProp);
				std::string getResponseTopicTemplateName()const;
				void setResponseTopicTemplateName(const std::string& responseTopicTemplateName);
				std::string getMessageContent()const;
				void setMessageContent(const std::string& messageContent);
				std::string getTopicTemplateName()const;
				void setTopicTemplateName(const std::string& topicTemplateName);
				int getQos()const;
				void setQos(int qos);
				std::string getCorrelationData()const;
				void setCorrelationData(const std::string& correlationData);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				long getMessageExpiryInterval()const;
				void setMessageExpiryInterval(long messageExpiryInterval);
				std::string getTopicShortName()const;
				void setTopicShortName(const std::string& topicShortName);
				int getPayloadFormatIndicator()const;
				void setPayloadFormatIndicator(int payloadFormatIndicator);
				std::string getProductKey()const;
				void setProductKey(const std::string& productKey);
				std::string getContentType()const;
				void setContentType(const std::string& contentType);
				bool getRetained()const;
				void setRetained(bool retained);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);
				std::vector<std::string> getDeviceName()const;
				void setDeviceName(const std::vector<std::string>& deviceName);

            private:
				std::vector<UserProp> userProp_;
				std::string responseTopicTemplateName_;
				std::string messageContent_;
				std::string topicTemplateName_;
				int qos_;
				std::string correlationData_;
				std::string iotInstanceId_;
				long messageExpiryInterval_;
				std::string topicShortName_;
				int payloadFormatIndicator_;
				std::string productKey_;
				std::string contentType_;
				bool retained_;
				std::string apiProduct_;
				std::string apiRevision_;
				std::vector<std::string> deviceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_BATCHPUBREQUEST_H_