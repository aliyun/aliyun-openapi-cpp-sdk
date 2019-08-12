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

#ifndef ALIBABACLOUD_KMS_MODEL_CREATEKEYRESULT_H_
#define ALIBABACLOUD_KMS_MODEL_CREATEKEYRESULT_H_

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
			class ALIBABACLOUD_KMS_EXPORT CreateKeyResult : public ServiceResult
			{
			public:
				struct KeyMetadata
				{
					std::string origin;
					std::string creationDate;
					std::string protectionLevel;
					std::string description;
					std::string materialExpireTime;
					std::string keyUsage;
					std::string keyId;
					std::string creator;
					std::string arn;
					std::string keyState;
					std::string deleteDate;
				};


				CreateKeyResult();
				explicit CreateKeyResult(const std::string &payload);
				~CreateKeyResult();
				KeyMetadata getKeyMetadata()const;

			protected:
				void parse(const std::string &payload);
			private:
				KeyMetadata keyMetadata_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_KMS_MODEL_CREATEKEYRESULT_H_