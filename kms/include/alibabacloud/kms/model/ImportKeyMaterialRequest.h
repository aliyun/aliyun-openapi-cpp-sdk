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

#ifndef ALIBABACLOUD_KMS_MODEL_IMPORTKEYMATERIALREQUEST_H_
#define ALIBABACLOUD_KMS_MODEL_IMPORTKEYMATERIALREQUEST_H_

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
			class ALIBABACLOUD_KMS_EXPORT ImportKeyMaterialRequest : public RpcServiceRequest
			{

			public:
				ImportKeyMaterialRequest();
				~ImportKeyMaterialRequest();

				std::string getImportToken()const;
				void setImportToken(const std::string& importToken);
				std::string getEncryptedKeyMaterial()const;
				void setEncryptedKeyMaterial(const std::string& encryptedKeyMaterial);
				long getKeyMaterialExpireUnix()const;
				void setKeyMaterialExpireUnix(long keyMaterialExpireUnix);
				std::string getKeyId()const;
				void setKeyId(const std::string& keyId);
				std::string getSTSToken()const;
				void setSTSToken(const std::string& sTSToken);

            private:
				std::string importToken_;
				std::string encryptedKeyMaterial_;
				long keyMaterialExpireUnix_;
				std::string keyId_;
				std::string sTSToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_KMS_MODEL_IMPORTKEYMATERIALREQUEST_H_