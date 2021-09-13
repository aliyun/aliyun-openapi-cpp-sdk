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

#ifndef ALIBABACLOUD_LINKWAN_MODEL_UPDATEDATADISPATCHCONFIGREQUEST_H_
#define ALIBABACLOUD_LINKWAN_MODEL_UPDATEDATADISPATCHCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/linkwan/LinkWANExport.h>

namespace AlibabaCloud
{
	namespace LinkWAN
	{
		namespace Model
		{
			class ALIBABACLOUD_LINKWAN_EXPORT UpdateDataDispatchConfigRequest : public RpcServiceRequest
			{

			public:
				UpdateDataDispatchConfigRequest();
				~UpdateDataDispatchConfigRequest();

				std::string getUplinkTopic()const;
				void setUplinkTopic(const std::string& uplinkTopic);
				bool getDebugSwitch()const;
				void setDebugSwitch(bool debugSwitch);
				std::string getProductType()const;
				void setProductType(const std::string& productType);
				std::string getProductName()const;
				void setProductName(const std::string& productName);
				std::string getDataDispatchDestination()const;
				void setDataDispatchDestination(const std::string& dataDispatchDestination);
				std::string getUplinkRegionName()const;
				void setUplinkRegionName(const std::string& uplinkRegionName);
				std::string getProductKey()const;
				void setProductKey(const std::string& productKey);
				std::string getNodeGroupId()const;
				void setNodeGroupId(const std::string& nodeGroupId);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);

            private:
				std::string uplinkTopic_;
				bool debugSwitch_;
				std::string productType_;
				std::string productName_;
				std::string dataDispatchDestination_;
				std::string uplinkRegionName_;
				std::string productKey_;
				std::string nodeGroupId_;
				std::string apiProduct_;
				std::string apiRevision_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LINKWAN_MODEL_UPDATEDATADISPATCHCONFIGREQUEST_H_