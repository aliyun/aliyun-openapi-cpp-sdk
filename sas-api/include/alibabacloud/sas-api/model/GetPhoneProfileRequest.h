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

#ifndef ALIBABACLOUD_SAS_API_MODEL_GETPHONEPROFILEREQUEST_H_
#define ALIBABACLOUD_SAS_API_MODEL_GETPHONEPROFILEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sas-api/Sas_apiExport.h>

namespace AlibabaCloud
{
	namespace Sas_api
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_API_EXPORT GetPhoneProfileRequest : public RpcServiceRequest
			{

			public:
				GetPhoneProfileRequest();
				~GetPhoneProfileRequest();

				std::string getPhone()const;
				void setPhone(const std::string& phone);
				int getSensType()const;
				void setSensType(int sensType);
				std::string getDataVersion()const;
				void setDataVersion(const std::string& dataVersion);
				int getBusinessType()const;
				void setBusinessType(int businessType);

            private:
				std::string phone_;
				int sensType_;
				std::string dataVersion_;
				int businessType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_API_MODEL_GETPHONEPROFILEREQUEST_H_