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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_SAVEBATCHTASKFORCREATINGORDERACTIVATEREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_SAVEBATCHTASKFORCREATINGORDERACTIVATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/domain/DomainExport.h>

namespace AlibabaCloud
{
	namespace Domain
	{
		namespace Model
		{
			class ALIBABACLOUD_DOMAIN_EXPORT SaveBatchTaskForCreatingOrderActivateRequest : public RpcServiceRequest
			{
				struct OrderActivateParam
				{
					std::string domainName;
					int subscriptionDuration;
					long registrantProfileId;
					bool enableDomainProxy;
					bool permitPremiumActivation;
					bool aliyunDns;
					std::string dns1;
					std::string dns2;
					std::string zhCity;
					std::string zhRegistrantOrganization;
					std::string country;
					std::string zhRegistrantName;
					std::string zhProvince;
					std::string zhAddress;
					std::string city;
					std::string registrantOrganization;
					std::string registrantName;
					std::string province;
					std::string address;
					std::string email;
					std::string postalCode;
					std::string telArea;
					std::string telephone;
					std::string telExt;
					std::string registrantType;
				};

			public:
				SaveBatchTaskForCreatingOrderActivateRequest();
				~SaveBatchTaskForCreatingOrderActivateRequest();

				std::vector<OrderActivateParam> getOrderActivateParam()const;
				void setOrderActivateParam(const std::vector<OrderActivateParam>& orderActivateParam);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				std::string getLang()const;
				void setLang(const std::string& lang);

            private:
				std::vector<OrderActivateParam> orderActivateParam_;
				std::string userClientIp_;
				std::string lang_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_SAVEBATCHTASKFORCREATINGORDERACTIVATEREQUEST_H_