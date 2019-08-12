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

				int getDataFormat()const;
				void setDataFormat(int dataFormat);
				int getNodeType()const;
				void setNodeType(int nodeType);
				bool getId2()const;
				void setId2(bool id2);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				std::string getNetType()const;
				void setNetType(const std::string& netType);
				std::string getProductName()const;
				void setProductName(const std::string& productName);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getProtocolType()const;
				void setProtocolType(const std::string& protocolType);
				std::string getAliyunCommodityCode()const;
				void setAliyunCommodityCode(const std::string& aliyunCommodityCode);
				std::string getJoinPermissionId()const;
				void setJoinPermissionId(const std::string& joinPermissionId);
				long getCategoryId()const;
				void setCategoryId(long categoryId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				int dataFormat_;
				int nodeType_;
				bool id2_;
				std::string iotInstanceId_;
				std::string netType_;
				std::string productName_;
				std::string description_;
				std::string protocolType_;
				std::string aliyunCommodityCode_;
				std::string joinPermissionId_;
				long categoryId_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_CREATEPRODUCTREQUEST_H_