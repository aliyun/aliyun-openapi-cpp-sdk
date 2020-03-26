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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_QUERYMATERIALRESULT_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_QUERYMATERIALRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/trademark/TrademarkExport.h>

namespace AlibabaCloud
{
	namespace Trademark
	{
		namespace Model
		{
			class ALIBABACLOUD_TRADEMARK_EXPORT QueryMaterialResult : public ServiceResult
			{
			public:


				QueryMaterialResult();
				explicit QueryMaterialResult(const std::string &payload);
				~QueryMaterialResult();
				std::string getCardNumber()const;
				std::string getEName()const;
				std::string getAddress()const;
				std::string getLoaUrl()const;
				std::string getPassportUrl()const;
				std::string getName()const;
				int getLoaStatus()const;
				std::string getTown()const;
				std::vector<std::string> getReviewAdditionalFiles()const;
				std::string getContactNumber()const;
				std::string getLegalNoticeUrl()const;
				std::string getContactAddress()const;
				int getStatus()const;
				std::string getReviewApplicationFile()const;
				std::string getCity()const;
				std::string getProvince()const;
				std::string getEAddress()const;
				std::string getIdCardUrl()const;
				int getType()const;
				std::string getBusinessLicenceUrl()const;
				long getExpirationDate()const;
				std::string getContactZipcode()const;
				std::string getNote()const;
				int getRegion()const;
				std::string getContactEmail()const;
				std::string getCountry()const;
				long getId()const;
				std::string getContactName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string cardNumber_;
				std::string eName_;
				std::string address_;
				std::string loaUrl_;
				std::string passportUrl_;
				std::string name_;
				int loaStatus_;
				std::string town_;
				std::vector<std::string> reviewAdditionalFiles_;
				std::string contactNumber_;
				std::string legalNoticeUrl_;
				std::string contactAddress_;
				int status_;
				std::string reviewApplicationFile_;
				std::string city_;
				std::string province_;
				std::string eAddress_;
				std::string idCardUrl_;
				int type_;
				std::string businessLicenceUrl_;
				long expirationDate_;
				std::string contactZipcode_;
				std::string note_;
				int region_;
				std::string contactEmail_;
				std::string country_;
				long id_;
				std::string contactName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_QUERYMATERIALRESULT_H_