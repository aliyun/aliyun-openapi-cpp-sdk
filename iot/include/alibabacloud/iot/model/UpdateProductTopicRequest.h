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

#ifndef ALIBABACLOUD_IOT_MODEL_UPDATEPRODUCTTOPICREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_UPDATEPRODUCTTOPICREQUEST_H_

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
			class ALIBABACLOUD_IOT_EXPORT UpdateProductTopicRequest : public RpcServiceRequest
			{

			public:
				UpdateProductTopicRequest();
				~UpdateProductTopicRequest();

				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getTopicId()const;
				void setTopicId(const std::string& topicId);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				std::string getTopicShortName()const;
				void setTopicShortName(const std::string& topicShortName);
				bool getEnableProxySubscribe()const;
				void setEnableProxySubscribe(bool enableProxySubscribe);
				std::string getCodec()const;
				void setCodec(const std::string& codec);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);
				std::string getOperation()const;
				void setOperation(const std::string& operation);
				std::string getDesc()const;
				void setDesc(const std::string& desc);

            private:
				std::string accessKeyId_;
				std::string topicId_;
				std::string iotInstanceId_;
				std::string topicShortName_;
				bool enableProxySubscribe_;
				std::string codec_;
				std::string apiProduct_;
				std::string apiRevision_;
				std::string operation_;
				std::string desc_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_UPDATEPRODUCTTOPICREQUEST_H_