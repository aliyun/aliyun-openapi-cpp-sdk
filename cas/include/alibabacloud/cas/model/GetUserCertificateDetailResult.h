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

#ifndef ALIBABACLOUD_CAS_MODEL_GETUSERCERTIFICATEDETAILRESULT_H_
#define ALIBABACLOUD_CAS_MODEL_GETUSERCERTIFICATEDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cas/CasExport.h>

namespace AlibabaCloud
{
	namespace Cas
	{
		namespace Model
		{
			class ALIBABACLOUD_CAS_EXPORT GetUserCertificateDetailResult : public ServiceResult
			{
			public:


				GetUserCertificateDetailResult();
				explicit GetUserCertificateDetailResult(const std::string &payload);
				~GetUserCertificateDetailResult();
				std::string getSignCert()const;
				std::string getFingerprint()const;
				std::string getResourceGroupId()const;
				std::string getIssuer()const;
				std::string getEncryptCert()const;
				std::string getOrgName()const;
				bool getExpired()const;
				std::string getCity()const;
				long getOrderId()const;
				std::string getEndDate()const;
				std::string getAlgorithm()const;
				std::string getProvince()const;
				std::string getName()const;
				std::string getCommon()const;
				bool getBuyInAliyun()const;
				std::string getStartDate()const;
				std::string getSans()const;
				std::string getCountry()const;
				std::string getSignPrivateKey()const;
				std::string getCert()const;
				std::string getEncryptPrivateKey()const;
				long getId()const;
				std::string getKey()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string signCert_;
				std::string fingerprint_;
				std::string resourceGroupId_;
				std::string issuer_;
				std::string encryptCert_;
				std::string orgName_;
				bool expired_;
				std::string city_;
				long orderId_;
				std::string endDate_;
				std::string algorithm_;
				std::string province_;
				std::string name_;
				std::string common_;
				bool buyInAliyun_;
				std::string startDate_;
				std::string sans_;
				std::string country_;
				std::string signPrivateKey_;
				std::string cert_;
				std::string encryptPrivateKey_;
				long id_;
				std::string key_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_GETUSERCERTIFICATEDETAILRESULT_H_