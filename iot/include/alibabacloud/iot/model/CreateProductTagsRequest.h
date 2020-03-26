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

#ifndef ALIBABACLOUD_IOT_MODEL_CREATEPRODUCTTAGSREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_CREATEPRODUCTTAGSREQUEST_H_

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
			class ALIBABACLOUD_IOT_EXPORT CreateProductTagsRequest : public RpcServiceRequest
			{
			public:
				struct ProductTag
				{
					std::string tagValue;
					std::string tagKey;
				};

			public:
				CreateProductTagsRequest();
				~CreateProductTagsRequest();

				std::string getProductKey()const;
				void setProductKey(const std::string& productKey);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::vector<ProductTag> getProductTag()const;
				void setProductTag(const std::vector<ProductTag>& productTag);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);

            private:
				std::string productKey_;
				std::string accessKeyId_;
				std::vector<ProductTag> productTag_;
				std::string iotInstanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_CREATEPRODUCTTAGSREQUEST_H_