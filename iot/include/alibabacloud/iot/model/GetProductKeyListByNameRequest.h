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

#ifndef ALIBABACLOUD_IOT_MODEL_GETPRODUCTKEYLISTBYNAMEREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_GETPRODUCTKEYLISTBYNAMEREQUEST_H_

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
			class ALIBABACLOUD_IOT_EXPORT GetProductKeyListByNameRequest : public RpcServiceRequest
			{

			public:
				GetProductKeyListByNameRequest();
				~GetProductKeyListByNameRequest();

				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				std::string getProductName()const;
				void setProductName(const std::string& productName);
				std::string getPage()const;
				void setPage(const std::string& page);

            private:
				std::string accessKeyId_;
				std::string resourceGroupId_;
				std::string iotInstanceId_;
				std::string productName_;
				std::string page_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_GETPRODUCTKEYLISTBYNAMEREQUEST_H_