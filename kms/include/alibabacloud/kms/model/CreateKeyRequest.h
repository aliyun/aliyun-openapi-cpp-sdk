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

#ifndef ALIBABACLOUD_KMS_MODEL_CREATEKEYREQUEST_H_
#define ALIBABACLOUD_KMS_MODEL_CREATEKEYREQUEST_H_

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
			class ALIBABACLOUD_KMS_EXPORT CreateKeyRequest : public RpcServiceRequest
			{

			public:
				CreateKeyRequest();
				~CreateKeyRequest();

				std::string getKeyUsage()const;
				void setKeyUsage(const std::string& keyUsage);
				std::string getOrigin()const;
				void setOrigin(const std::string& origin);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getSTSToken()const;
				void setSTSToken(const std::string& sTSToken);

            private:
				std::string keyUsage_;
				std::string origin_;
				std::string description_;
				std::string sTSToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_KMS_MODEL_CREATEKEYREQUEST_H_