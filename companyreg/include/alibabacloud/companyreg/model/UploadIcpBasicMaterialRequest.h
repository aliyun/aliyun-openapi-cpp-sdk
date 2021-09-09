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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_UPLOADICPBASICMATERIALREQUEST_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_UPLOADICPBASICMATERIALREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/companyreg/CompanyregExport.h>

namespace AlibabaCloud
{
	namespace Companyreg
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPANYREG_EXPORT UploadIcpBasicMaterialRequest : public RpcServiceRequest
			{

			public:
				UploadIcpBasicMaterialRequest();
				~UploadIcpBasicMaterialRequest();

				std::string getSocialCreditCode()const;
				void setSocialCreditCode(const std::string& socialCreditCode);
				std::string getBusinessLicense()const;
				void setBusinessLicense(const std::string& businessLicense);
				std::string getCorporateIdCard()const;
				void setCorporateIdCard(const std::string& corporateIdCard);
				std::string getIdCardList()const;
				void setIdCardList(const std::string& idCardList);
				std::string getCompanyAddress()const;
				void setCompanyAddress(const std::string& companyAddress);
				std::string getCompanyName()const;
				void setCompanyName(const std::string& companyName);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				std::string getCorporateName()const;
				void setCorporateName(const std::string& corporateName);

            private:
				std::string socialCreditCode_;
				std::string businessLicense_;
				std::string corporateIdCard_;
				std::string idCardList_;
				std::string companyAddress_;
				std::string companyName_;
				std::string bizId_;
				std::string corporateName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_UPLOADICPBASICMATERIALREQUEST_H_