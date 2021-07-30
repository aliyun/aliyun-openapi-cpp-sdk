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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_SUBMITHOTLINETRANSFERREGISTERREQUEST_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_SUBMITHOTLINETRANSFERREGISTERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dyvmsapi/DyvmsapiExport.h>

namespace AlibabaCloud
{
	namespace Dyvmsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYVMSAPI_EXPORT SubmitHotlineTransferRegisterRequest : public RpcServiceRequest
			{
			public:
				struct TransferPhoneNumberInfos
				{
					std::string phoneNumber;
					std::string phoneNumberOwnerName;
					std::string identityCard;
				};

			public:
				SubmitHotlineTransferRegisterRequest();
				~SubmitHotlineTransferRegisterRequest();

				std::string getOperatorIdentityCard()const;
				void setOperatorIdentityCard(const std::string& operatorIdentityCard);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getOperatorMail()const;
				void setOperatorMail(const std::string& operatorMail);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getHotlineNumber()const;
				void setHotlineNumber(const std::string& hotlineNumber);
				std::vector<TransferPhoneNumberInfos> getTransferPhoneNumberInfos()const;
				void setTransferPhoneNumberInfos(const std::vector<TransferPhoneNumberInfos>& transferPhoneNumberInfos);
				std::string getOperatorMobileVerifyCode()const;
				void setOperatorMobileVerifyCode(const std::string& operatorMobileVerifyCode);
				std::string getAgreement()const;
				void setAgreement(const std::string& agreement);
				std::string getQualificationId()const;
				void setQualificationId(const std::string& qualificationId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getOperatorMobile()const;
				void setOperatorMobile(const std::string& operatorMobile);
				std::string getOperatorMailVerifyCode()const;
				void setOperatorMailVerifyCode(const std::string& operatorMailVerifyCode);
				std::string getOperatorName()const;
				void setOperatorName(const std::string& operatorName);

            private:
				std::string operatorIdentityCard_;
				long resourceOwnerId_;
				std::string operatorMail_;
				std::string accessKeyId_;
				std::string hotlineNumber_;
				std::vector<TransferPhoneNumberInfos> transferPhoneNumberInfos_;
				std::string operatorMobileVerifyCode_;
				std::string agreement_;
				std::string qualificationId_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string operatorMobile_;
				std::string operatorMailVerifyCode_;
				std::string operatorName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_SUBMITHOTLINETRANSFERREGISTERREQUEST_H_