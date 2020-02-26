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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_INITDEVICEREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_INITDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudauth/CloudauthExport.h>

namespace AlibabaCloud
{
	namespace Cloudauth
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAUTH_EXPORT InitDeviceRequest : public RpcServiceRequest
			{

			public:
				InitDeviceRequest();
				~InitDeviceRequest();

				std::string getChannel()const;
				void setChannel(const std::string& channel);
				std::string getBizData()const;
				void setBizData(const std::string& bizData);
				std::string getMerchant()const;
				void setMerchant(const std::string& merchant);
				std::string getAppVersion()const;
				void setAppVersion(const std::string& appVersion);
				std::string getCertifyId()const;
				void setCertifyId(const std::string& certifyId);
				std::string getOuterOrderNo()const;
				void setOuterOrderNo(const std::string& outerOrderNo);
				std::string getProduceNode()const;
				void setProduceNode(const std::string& produceNode);
				std::string getProductName()const;
				void setProductName(const std::string& productName);
				std::string getCertifyPrincipal()const;
				void setCertifyPrincipal(const std::string& certifyPrincipal);
				std::string getMetaInfo()const;
				void setMetaInfo(const std::string& metaInfo);

            private:
				std::string channel_;
				std::string bizData_;
				std::string merchant_;
				std::string appVersion_;
				std::string certifyId_;
				std::string outerOrderNo_;
				std::string produceNode_;
				std::string productName_;
				std::string certifyPrincipal_;
				std::string metaInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_INITDEVICEREQUEST_H_