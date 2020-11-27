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

#ifndef ALIBABACLOUD_KMS_MODEL_IMPORTENCRYPTIONCERTIFICATEREQUEST_H_
#define ALIBABACLOUD_KMS_MODEL_IMPORTENCRYPTIONCERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/kms/KmsExport.h>

namespace AlibabaCloud
{
	namespace Kms
	{
		namespace Model
		{
			class ALIBABACLOUD_KMS_EXPORT ImportEncryptionCertificateRequest : public RpcServiceRequest
			{

			public:
				ImportEncryptionCertificateRequest();
				~ImportEncryptionCertificateRequest();

				std::string getAsymmetricAlgorithm()const;
				void setAsymmetricAlgorithm(const std::string& asymmetricAlgorithm);
				std::string getSymmetricAlgorithm()const;
				void setSymmetricAlgorithm(const std::string& symmetricAlgorithm);
				std::string getEncryptedPrivateKey()const;
				void setEncryptedPrivateKey(const std::string& encryptedPrivateKey);
				std::string getEncryptedSymmetricKey()const;
				void setEncryptedSymmetricKey(const std::string& encryptedSymmetricKey);
				std::string getCertificateId()const;
				void setCertificateId(const std::string& certificateId);
				std::string getCertificate()const;
				void setCertificate(const std::string& certificate);
				std::string getCertificateChain()const;
				void setCertificateChain(const std::string& certificateChain);

            private:
				std::string asymmetricAlgorithm_;
				std::string symmetricAlgorithm_;
				std::string encryptedPrivateKey_;
				std::string encryptedSymmetricKey_;
				std::string certificateId_;
				std::string certificate_;
				std::string certificateChain_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_KMS_MODEL_IMPORTENCRYPTIONCERTIFICATEREQUEST_H_