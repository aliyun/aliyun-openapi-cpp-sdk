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

#ifndef ALIBABACLOUD_CLOUDWF_MODEL_SHOPCREATEREQUEST_H_
#define ALIBABACLOUD_CLOUDWF_MODEL_SHOPCREATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudwf/CloudwfExport.h>

namespace AlibabaCloud
{
	namespace Cloudwf
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDWF_EXPORT ShopCreateRequest : public RpcServiceRequest
			{

			public:
				ShopCreateRequest();
				~ShopCreateRequest();

				std::string getShopCoordinate()const;
				void setShopCoordinate(const std::string& shopCoordinate);
				std::string getShopProvince()const;
				void setShopProvince(const std::string& shopProvince);
				int getShopTopType()const;
				void setShopTopType(int shopTopType);
				std::string getShopAddress()const;
				void setShopAddress(const std::string& shopAddress);
				int getShopType()const;
				void setShopType(int shopType);
				std::string getWarnEmail()const;
				void setWarnEmail(const std::string& warnEmail);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getShopTel()const;
				void setShopTel(const std::string& shopTel);
				std::string getWarnpHone()const;
				void setWarnpHone(const std::string& warnpHone);
				int getWarn()const;
				void setWarn(int warn);
				int getShopArea()const;
				void setShopArea(int shopArea);
				std::string getShopRemarks()const;
				void setShopRemarks(const std::string& shopRemarks);
				std::string getShopCity()const;
				void setShopCity(const std::string& shopCity);
				int getShopSubtype()const;
				void setShopSubtype(int shopSubtype);
				std::string getShopBrand()const;
				void setShopBrand(const std::string& shopBrand);
				std::string getShopName()const;
				void setShopName(const std::string& shopName);
				int getShopCloseWarn()const;
				void setShopCloseWarn(int shopCloseWarn);
				long getBid()const;
				void setBid(long bid);
				std::string getShopManager()const;
				void setShopManager(const std::string& shopManager);
				std::string getShopBusinessHours()const;
				void setShopBusinessHours(const std::string& shopBusinessHours);

            private:
				std::string shopCoordinate_;
				std::string shopProvince_;
				int shopTopType_;
				std::string shopAddress_;
				int shopType_;
				std::string warnEmail_;
				std::string accessKeyId_;
				std::string shopTel_;
				std::string warnpHone_;
				int warn_;
				int shopArea_;
				std::string shopRemarks_;
				std::string shopCity_;
				int shopSubtype_;
				std::string shopBrand_;
				std::string shopName_;
				int shopCloseWarn_;
				long bid_;
				std::string shopManager_;
				std::string shopBusinessHours_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDWF_MODEL_SHOPCREATEREQUEST_H_