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

#ifndef ALIBABACLOUD_FINMALL_MODEL_UPDATEAUTHENTICATIONINFOREQUEST_H_
#define ALIBABACLOUD_FINMALL_MODEL_UPDATEAUTHENTICATIONINFOREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/finmall/FinmallExport.h>

namespace AlibabaCloud
{
	namespace Finmall
	{
		namespace Model
		{
			class ALIBABACLOUD_FINMALL_EXPORT UpdateAuthenticationInfoRequest : public RpcServiceRequest
			{

			public:
				UpdateAuthenticationInfoRequest();
				~UpdateAuthenticationInfoRequest();

				std::string getIdCardNumber()const;
				void setIdCardNumber(const std::string& idCardNumber);
				std::string getAddress()const;
				void setAddress(const std::string& address);
				std::string getEmployeeEmail()const;
				void setEmployeeEmail(const std::string& employeeEmail);
				std::string getEmployeePhoneNumber()const;
				void setEmployeePhoneNumber(const std::string& employeePhoneNumber);
				std::string getPhoneNumber()const;
				void setPhoneNumber(const std::string& phoneNumber);
				std::string getBusinessLicense()const;
				void setBusinessLicense(const std::string& businessLicense);
				std::string getLegalPersonName()const;
				void setLegalPersonName(const std::string& legalPersonName);
				std::string getUserId()const;
				void setUserId(const std::string& userId);
				std::string getSmsIvToken()const;
				void setSmsIvToken(const std::string& smsIvToken);
				std::string getBankCard()const;
				void setBankCard(const std::string& bankCard);
				std::string getEmail()const;
				void setEmail(const std::string& email);
				std::string getEmployeeName()const;
				void setEmployeeName(const std::string& employeeName);
				std::string getEmployeeIdCardNumber()const;
				void setEmployeeIdCardNumber(const std::string& employeeIdCardNumber);

            private:
				std::string idCardNumber_;
				std::string address_;
				std::string employeeEmail_;
				std::string employeePhoneNumber_;
				std::string phoneNumber_;
				std::string businessLicense_;
				std::string legalPersonName_;
				std::string userId_;
				std::string smsIvToken_;
				std::string bankCard_;
				std::string email_;
				std::string employeeName_;
				std::string employeeIdCardNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FINMALL_MODEL_UPDATEAUTHENTICATIONINFOREQUEST_H_