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

#ifndef ALIBABACLOUD_KMS_MODEL_CREATEPOLICYRESULT_H_
#define ALIBABACLOUD_KMS_MODEL_CREATEPOLICYRESULT_H_

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
			class ALIBABACLOUD_KMS_EXPORT CreatePolicyResult : public ServiceResult
			{
			public:


				CreatePolicyResult();
				explicit CreatePolicyResult(const std::string &payload);
				~CreatePolicyResult();
				std::string getKmsInstance()const;
				std::string getDescription()const;
				std::string getAccessControlRules()const;
				std::string getPermissions()const;
				std::string getResources()const;
				std::string getArn()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string kmsInstance_;
				std::string description_;
				std::string accessControlRules_;
				std::string permissions_;
				std::string resources_;
				std::string arn_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_KMS_MODEL_CREATEPOLICYRESULT_H_