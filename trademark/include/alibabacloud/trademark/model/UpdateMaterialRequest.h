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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_UPDATEMATERIALREQUEST_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_UPDATEMATERIALREQUEST_H_

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
			class ALIBABACLOUD_TRADEMARK_EXPORT UpdateMaterialRequest : public RpcServiceRequest
			{

			public:
				UpdateMaterialRequest();
				~UpdateMaterialRequest();

				std::string getContactEmail()const;
				void setContactEmail(const std::string& contactEmail);
				std::string getContactAddress()const;
				void setContactAddress(const std::string& contactAddress);
				std::string getEAddress()const;
				void setEAddress(const std::string& eAddress);
				std::string getLegalNoticeOssKey()const;
				void setLegalNoticeOssKey(const std::string& legalNoticeOssKey);
				std::string getAddress()const;
				void setAddress(const std::string& address);
				std::string getTown()const;
				void setTown(const std::string& town);
				std::string getContactNumber()const;
				void setContactNumber(const std::string& contactNumber);
				std::string getCity()const;
				void setCity(const std::string& city);
				std::string getIdCardOssKey()const;
				void setIdCardOssKey(const std::string& idCardOssKey);
				std::string getContactName()const;
				void setContactName(const std::string& contactName);
				std::string getPassportOssKey()const;
				void setPassportOssKey(const std::string& passportOssKey);
				std::string getContactZipcode()const;
				void setContactZipcode(const std::string& contactZipcode);
				std::string getEName()const;
				void setEName(const std::string& eName);
				std::string getProvince()const;
				void setProvince(const std::string& province);
				std::string getBusinessLicenceOssKey()const;
				void setBusinessLicenceOssKey(const std::string& businessLicenceOssKey);
				std::string getName()const;
				void setName(const std::string& name);
				long getId()const;
				void setId(long id);
				std::string getCardNumber()const;
				void setCardNumber(const std::string& cardNumber);
				long getLoaId()const;
				void setLoaId(long loaId);
				std::string getLoaOssKey()const;
				void setLoaOssKey(const std::string& loaOssKey);

            private:
				std::string contactEmail_;
				std::string contactAddress_;
				std::string eAddress_;
				std::string legalNoticeOssKey_;
				std::string address_;
				std::string town_;
				std::string contactNumber_;
				std::string city_;
				std::string idCardOssKey_;
				std::string contactName_;
				std::string passportOssKey_;
				std::string contactZipcode_;
				std::string eName_;
				std::string province_;
				std::string businessLicenceOssKey_;
				std::string name_;
				long id_;
				std::string cardNumber_;
				long loaId_;
				std::string loaOssKey_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_UPDATEMATERIALREQUEST_H_