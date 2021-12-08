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

#ifndef ALIBABACLOUD_DYPLSAPI_MODEL_CREATEPICKUPWAYBILLREQUEST_H_
#define ALIBABACLOUD_DYPLSAPI_MODEL_CREATEPICKUPWAYBILLREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dyplsapi/DyplsapiExport.h>

namespace AlibabaCloud
{
	namespace Dyplsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYPLSAPI_EXPORT CreatePickUpWaybillRequest : public RpcServiceRequest
			{

			public:
				CreatePickUpWaybillRequest();
				~CreatePickUpWaybillRequest();

				std::string getConsigneeName()const;
				void setConsigneeName(const std::string& consigneeName);
				std::string getOrderChannels()const;
				void setOrderChannels(const std::string& orderChannels);
				Struct getSendAddress()const;
				void setSendAddress(const Struct& sendAddress);
				std::string getOuterOrderCode()const;
				void setOuterOrderCode(const std::string& outerOrderCode);
				std::string getRemark()const;
				void setRemark(const std::string& remark);
				std::string getCpCode()const;
				void setCpCode(const std::string& cpCode);
				std::string getSendMobile()const;
				void setSendMobile(const std::string& sendMobile);
				std::string getConsigneeMobile()const;
				void setConsigneeMobile(const std::string& consigneeMobile);
				std::string getContentType()const;
				void setContentType(const std::string& contentType);
				Struct getConsigneeAddress()const;
				void setConsigneeAddress(const Struct& consigneeAddress);
				std::string getSendPhone()const;
				void setSendPhone(const std::string& sendPhone);
				Array getGoodsInfos()const;
				void setGoodsInfos(const Array& goodsInfos);
				std::string getSendName()const;
				void setSendName(const std::string& sendName);
				std::string getConsigneePhone()const;
				void setConsigneePhone(const std::string& consigneePhone);

            private:
				std::string consigneeName_;
				std::string orderChannels_;
				Struct sendAddress_;
				std::string outerOrderCode_;
				std::string remark_;
				std::string cpCode_;
				std::string sendMobile_;
				std::string consigneeMobile_;
				std::string contentType_;
				Struct consigneeAddress_;
				std::string sendPhone_;
				Array goodsInfos_;
				std::string sendName_;
				std::string consigneePhone_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYPLSAPI_MODEL_CREATEPICKUPWAYBILLREQUEST_H_