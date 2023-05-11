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

#ifndef ALIBABACLOUD_IOT_MODEL_CREATETOPICCONFIGREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_CREATETOPICCONFIGREQUEST_H_

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
			class ALIBABACLOUD_IOT_EXPORT CreateTopicConfigRequest : public RpcServiceRequest
			{

			public:
				CreateTopicConfigRequest();
				~CreateTopicConfigRequest();

				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				std::string getTopicFullName()const;
				void setTopicFullName(const std::string& topicFullName);
				bool getEnableBroadcast()const;
				void setEnableBroadcast(bool enableBroadcast);
				bool getEnableProxySubscribe()const;
				void setEnableProxySubscribe(bool enableProxySubscribe);
				std::string getProductKey()const;
				void setProductKey(const std::string& productKey);
				std::string getCodec()const;
				void setCodec(const std::string& codec);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);
				std::string getOperation()const;
				void setOperation(const std::string& operation);

            private:
				std::string description_;
				std::string iotInstanceId_;
				std::string topicFullName_;
				bool enableBroadcast_;
				bool enableProxySubscribe_;
				std::string productKey_;
				std::string codec_;
				std::string apiProduct_;
				std::string apiRevision_;
				std::string operation_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_CREATETOPICCONFIGREQUEST_H_