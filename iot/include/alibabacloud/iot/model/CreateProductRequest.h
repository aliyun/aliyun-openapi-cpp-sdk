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

#ifndef ALIBABACLOUD_IOT_MODEL_CREATEPRODUCTREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_CREATEPRODUCTREQUEST_H_

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
			class ALIBABACLOUD_IOT_EXPORT CreateProductRequest : public RpcServiceRequest
			{

			public:
				CreateProductRequest();
				~CreateProductRequest();

				long getCatId()const;
				void setCatId(long catId);
				int getNodeType()const;
				void setNodeType(int nodeType);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				bool getId2()const;
				void setId2(bool id2);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getExtProps()const;
				void setExtProps(const std::string& extProps);
				std::string getSecurityPolicy()const;
				void setSecurityPolicy(const std::string& securityPolicy);
				int getPayType()const;
				void setPayType(int payType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getDesc()const;
				void setDesc(const std::string& desc);

            private:
				long catId_;
				int nodeType_;
				std::string regionId_;
				bool id2_;
				std::string name_;
				std::string extProps_;
				std::string securityPolicy_;
				int payType_;
				std::string accessKeyId_;
				std::string desc_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_CREATEPRODUCTREQUEST_H_