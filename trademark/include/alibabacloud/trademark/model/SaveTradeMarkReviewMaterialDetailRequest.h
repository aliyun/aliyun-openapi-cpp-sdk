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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_SAVETRADEMARKREVIEWMATERIALDETAILREQUEST_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_SAVETRADEMARKREVIEWMATERIALDETAILREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/trademark/TrademarkExport.h>

namespace AlibabaCloud
{
	namespace Trademark
	{
		namespace Model
		{
			class ALIBABACLOUD_TRADEMARK_EXPORT SaveTradeMarkReviewMaterialDetailRequest : public RpcServiceRequest
			{

			public:
				SaveTradeMarkReviewMaterialDetailRequest();
				~SaveTradeMarkReviewMaterialDetailRequest();

				std::string getContactEmail()const;
				void setContactEmail(const std::string& contactEmail);
				std::string getEngName()const;
				void setEngName(const std::string& engName);
				std::string getCountry()const;
				void setCountry(const std::string& country);
				std::string getLegalNoticeOssKey()const;
				void setLegalNoticeOssKey(const std::string& legalNoticeOssKey);
				std::string getContactNumber()const;
				void setContactNumber(const std::string& contactNumber);
				std::string getEngAddress()const;
				void setEngAddress(const std::string& engAddress);
				int getType()const;
				void setType(int type);
				std::string getContactName()const;
				void setContactName(const std::string& contactName);
				std::string getPassportOssKey()const;
				void setPassportOssKey(const std::string& passportOssKey);
				std::string getProvince()const;
				void setProvince(const std::string& province);
				int getSubmitType()const;
				void setSubmitType(int submitType);
				std::string getLoaOssKey()const;
				void setLoaOssKey(const std::string& loaOssKey);
				std::string getContactAddress()const;
				void setContactAddress(const std::string& contactAddress);
				std::string getAddress()const;
				void setAddress(const std::string& address);
				std::string getIdCardOssKey()const;
				void setIdCardOssKey(const std::string& idCardOssKey);
				std::string getApplicationOssKey()const;
				void setApplicationOssKey(const std::string& applicationOssKey);
				std::string getBusinessLicenceOssKey()const;
				void setBusinessLicenceOssKey(const std::string& businessLicenceOssKey);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getAdditionalOssKeyList()const;
				void setAdditionalOssKeyList(const std::string& additionalOssKeyList);
				std::string getCardNumber()const;
				void setCardNumber(const std::string& cardNumber);
				int getRegion()const;
				void setRegion(int region);

            private:
				std::string contactEmail_;
				std::string engName_;
				std::string country_;
				std::string legalNoticeOssKey_;
				std::string contactNumber_;
				std::string engAddress_;
				int type_;
				std::string contactName_;
				std::string passportOssKey_;
				std::string province_;
				int submitType_;
				std::string loaOssKey_;
				std::string contactAddress_;
				std::string address_;
				std::string idCardOssKey_;
				std::string applicationOssKey_;
				std::string businessLicenceOssKey_;
				std::string bizId_;
				std::string name_;
				std::string additionalOssKeyList_;
				std::string cardNumber_;
				int region_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_SAVETRADEMARKREVIEWMATERIALDETAILREQUEST_H_