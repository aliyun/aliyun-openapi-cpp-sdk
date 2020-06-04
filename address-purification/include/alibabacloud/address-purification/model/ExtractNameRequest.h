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

#ifndef ALIBABACLOUD_ADDRESS_PURIFICATION_MODEL_EXTRACTNAMEREQUEST_H_
#define ALIBABACLOUD_ADDRESS_PURIFICATION_MODEL_EXTRACTNAMEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/address-purification/Address_purificationExport.h>

namespace AlibabaCloud
{
	namespace Address_purification
	{
		namespace Model
		{
			class ALIBABACLOUD_ADDRESS_PURIFICATION_EXPORT ExtractNameRequest : public RpcServiceRequest
			{

			public:
				ExtractNameRequest();
				~ExtractNameRequest();

				std::string getDefaultProvince()const;
				void setDefaultProvince(const std::string& defaultProvince);
				std::string getServiceCode()const;
				void setServiceCode(const std::string& serviceCode);
				std::string getDefaultCity()const;
				void setDefaultCity(const std::string& defaultCity);
				std::string getDefaultDistrict()const;
				void setDefaultDistrict(const std::string& defaultDistrict);
				std::string getAppKey()const;
				void setAppKey(const std::string& appKey);
				std::string getText()const;
				void setText(const std::string& text);

            private:
				std::string defaultProvince_;
				std::string serviceCode_;
				std::string defaultCity_;
				std::string defaultDistrict_;
				std::string appKey_;
				std::string text_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ADDRESS_PURIFICATION_MODEL_EXTRACTNAMEREQUEST_H_