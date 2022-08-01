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

#ifndef ALIBABACLOUD_KMS_MODEL_DESCRIBESECRETRESULT_H_
#define ALIBABACLOUD_KMS_MODEL_DESCRIBESECRETRESULT_H_

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
			class ALIBABACLOUD_KMS_EXPORT DescribeSecretResult : public ServiceResult
			{
			public:
				struct Tag
				{
					std::string tagKey;
					std::string tagValue;
				};


				DescribeSecretResult();
				explicit DescribeSecretResult(const std::string &payload);
				~DescribeSecretResult();
				std::string getDescription()const;
				std::string getRotationInterval()const;
				std::string getLastRotationDate()const;
				std::string getSecretType()const;
				std::string getCreateTime()const;
				std::string getDKMSInstanceId()const;
				std::string getAutomaticRotation()const;
				std::string getSecretName()const;
				std::string getNextRotationDate()const;
				std::string getUpdateTime()const;
				std::string getExtendedConfig()const;
				std::string getPlannedDeleteTime()const;
				std::string getArn()const;
				std::vector<Tag> getTags()const;
				std::string getEncryptionKeyId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string description_;
				std::string rotationInterval_;
				std::string lastRotationDate_;
				std::string secretType_;
				std::string createTime_;
				std::string dKMSInstanceId_;
				std::string automaticRotation_;
				std::string secretName_;
				std::string nextRotationDate_;
				std::string updateTime_;
				std::string extendedConfig_;
				std::string plannedDeleteTime_;
				std::string arn_;
				std::vector<Tag> tags_;
				std::string encryptionKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_KMS_MODEL_DESCRIBESECRETRESULT_H_