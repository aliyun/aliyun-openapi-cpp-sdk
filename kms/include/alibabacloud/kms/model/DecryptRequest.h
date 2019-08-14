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

#ifndef ALIBABACLOUD_KMS_MODEL_DECRYPTREQUEST_H_
#define ALIBABACLOUD_KMS_MODEL_DECRYPTREQUEST_H_

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
			class ALIBABACLOUD_KMS_EXPORT DecryptRequest : public RpcServiceRequest
			{

			public:
				DecryptRequest();
				~DecryptRequest();

				std::string getEncryptionContext()const;
				void setEncryptionContext(const std::string& encryptionContext);
				std::string getCiphertextBlob()const;
				void setCiphertextBlob(const std::string& ciphertextBlob);

            private:
				std::string encryptionContext_;
				std::string ciphertextBlob_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_KMS_MODEL_DECRYPTREQUEST_H_