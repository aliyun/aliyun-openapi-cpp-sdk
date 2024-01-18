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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEENCRYPTIONKEYRESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEENCRYPTIONKEYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>

namespace AlibabaCloud
{
	namespace R_kvstore
	{
		namespace Model
		{
			class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeEncryptionKeyResult : public ServiceResult
			{
			public:


				DescribeEncryptionKeyResult();
				explicit DescribeEncryptionKeyResult(const std::string &payload);
				~DescribeEncryptionKeyResult();
				std::string getOrigin()const;
				std::string getDescription()const;
				std::string getEncryptionKeyStatus()const;
				std::string getMaterialExpireTime()const;
				std::string getEncryptionName()const;
				std::string getKeyUsage()const;
				std::string getEncryptionKey()const;
				std::string getCreator()const;
				std::string getDeleteDate()const;
				std::string getRoleArn()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string origin_;
				std::string description_;
				std::string encryptionKeyStatus_;
				std::string materialExpireTime_;
				std::string encryptionName_;
				std::string keyUsage_;
				std::string encryptionKey_;
				std::string creator_;
				std::string deleteDate_;
				std::string roleArn_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEENCRYPTIONKEYRESULT_H_