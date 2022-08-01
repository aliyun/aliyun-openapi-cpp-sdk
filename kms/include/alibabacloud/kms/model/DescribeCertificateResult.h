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

#ifndef ALIBABACLOUD_KMS_MODEL_DESCRIBECERTIFICATERESULT_H_
#define ALIBABACLOUD_KMS_MODEL_DESCRIBECERTIFICATERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/kms/KmsExport.h>

namespace AlibabaCloud
{
	namespace Kms
	{
		namespace Model
		{
			class ALIBABACLOUD_KMS_EXPORT DescribeCertificateResult : public ServiceResult
			{
			public:


				DescribeCertificateResult();
				explicit DescribeCertificateResult(const std::string &payload);
				~DescribeCertificateResult();
				std::string getStatus()const;
				std::string getProtectionLevel()const;
				std::string getIssuer()const;
				std::string getCertificateId()const;
				std::string getCreatedAt()const;
				std::string getKeySpec()const;
				std::vector<std::string> getSubjectAlternativeNames()const;
				std::string getSignatureAlgorithm()const;
				std::string getSubjectKeyIdentifier()const;
				std::string getNotAfter()const;
				std::string getUpdatedAt()const;
				std::string getSubject()const;
				std::string getSerial()const;
				std::string getSubjectPublicKey()const;
				std::string getArn()const;
				std::string getNotBefore()const;
				std::string getTags()const;
				bool getExportablePrivateKey()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string protectionLevel_;
				std::string issuer_;
				std::string certificateId_;
				std::string createdAt_;
				std::string keySpec_;
				std::vector<std::string> subjectAlternativeNames_;
				std::string signatureAlgorithm_;
				std::string subjectKeyIdentifier_;
				std::string notAfter_;
				std::string updatedAt_;
				std::string subject_;
				std::string serial_;
				std::string subjectPublicKey_;
				std::string arn_;
				std::string notBefore_;
				std::string tags_;
				bool exportablePrivateKey_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_KMS_MODEL_DESCRIBECERTIFICATERESULT_H_