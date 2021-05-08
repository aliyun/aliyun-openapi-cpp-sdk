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

#ifndef ALIBABACLOUD_IOT_MODEL_CREATEEDGEINSTANCEMESSAGEROUTINGREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_CREATEEDGEINSTANCEMESSAGEROUTINGREQUEST_H_

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
			class ALIBABACLOUD_IOT_EXPORT CreateEdgeInstanceMessageRoutingRequest : public RpcServiceRequest
			{

			public:
				CreateEdgeInstanceMessageRoutingRequest();
				~CreateEdgeInstanceMessageRoutingRequest();

				std::string getSourceData()const;
				void setSourceData(const std::string& sourceData);
				std::string getTargetType()const;
				void setTargetType(const std::string& targetType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				std::string getSourceType()const;
				void setSourceType(const std::string& sourceType);
				std::string getTopicFilter()const;
				void setTopicFilter(const std::string& topicFilter);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getTargetData()const;
				void setTargetData(const std::string& targetData);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);
				int getTargetIotHubQos()const;
				void setTargetIotHubQos(int targetIotHubQos);

            private:
				std::string sourceData_;
				std::string targetType_;
				std::string accessKeyId_;
				std::string iotInstanceId_;
				std::string sourceType_;
				std::string topicFilter_;
				std::string instanceId_;
				std::string targetData_;
				std::string apiProduct_;
				std::string name_;
				std::string apiRevision_;
				int targetIotHubQos_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_CREATEEDGEINSTANCEMESSAGEROUTINGREQUEST_H_