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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_GETNOTARYORDERRESULT_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_GETNOTARYORDERRESULT_H_

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
			class ALIBABACLOUD_TRADEMARK_EXPORT GetNotaryOrderResult : public ServiceResult
			{
			public:


				GetNotaryOrderResult();
				explicit GetNotaryOrderResult(const std::string &payload);
				~GetNotaryOrderResult();
				std::string getTmImage()const;
				std::string getTmClassification()const;
				std::string getSellerFrontOfIdCard()const;
				int getNotaryType()const;
				std::string getNotaryPlatformName()const;
				int getApplyPostStatus()const;
				std::string getNotaryCertificate()const;
				bool getSuccess()const;
				std::string getName()const;
				std::string getLegalPersonName()const;
				std::string getBusinessLicenseId()const;
				std::string getAliyunOrderId()const;
				std::string getCompanyContactPhone()const;
				std::string getTmAcceptCertificate()const;
				std::string getReceiverPhone()const;
				std::string getPhone()const;
				std::string getTmRegisterCertificate()const;
				long getNotaryAcceptDate()const;
				long getNotaryOrderId()const;
				std::string getReceiverAddress()const;
				long getNotarySucceedDate()const;
				std::string getLegalPersonPhone()const;
				std::string getNotaryFailedReason()const;
				float getOrderPrice()const;
				long getNotaryFailedDate()const;
				std::string getErrorMsg()const;
				std::string getSellerBackOfIdCard()const;
				int getNotaryStatus()const;
				std::string getSellerCompanyName()const;
				long getOrderDate()const;
				std::string getType()const;
				std::string getBusinessLicense()const;
				std::string getReceiverPostalCode()const;
				std::string getNotaryPostReceipt()const;
				std::string getTmRegisterChangeCertificate()const;
				std::string getTmName()const;
				std::string getTmRegisterNo()const;
				std::string getErrorCode()const;
				std::string getLegalPersonIdCard()const;
				std::string getCompanyContactName()const;
				std::string getReceiverName()const;
				std::string getBizId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string tmImage_;
				std::string tmClassification_;
				std::string sellerFrontOfIdCard_;
				int notaryType_;
				std::string notaryPlatformName_;
				int applyPostStatus_;
				std::string notaryCertificate_;
				bool success_;
				std::string name_;
				std::string legalPersonName_;
				std::string businessLicenseId_;
				std::string aliyunOrderId_;
				std::string companyContactPhone_;
				std::string tmAcceptCertificate_;
				std::string receiverPhone_;
				std::string phone_;
				std::string tmRegisterCertificate_;
				long notaryAcceptDate_;
				long notaryOrderId_;
				std::string receiverAddress_;
				long notarySucceedDate_;
				std::string legalPersonPhone_;
				std::string notaryFailedReason_;
				float orderPrice_;
				long notaryFailedDate_;
				std::string errorMsg_;
				std::string sellerBackOfIdCard_;
				int notaryStatus_;
				std::string sellerCompanyName_;
				long orderDate_;
				std::string type_;
				std::string businessLicense_;
				std::string receiverPostalCode_;
				std::string notaryPostReceipt_;
				std::string tmRegisterChangeCertificate_;
				std::string tmName_;
				std::string tmRegisterNo_;
				std::string errorCode_;
				std::string legalPersonIdCard_;
				std::string companyContactName_;
				std::string receiverName_;
				std::string bizId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_GETNOTARYORDERRESULT_H_