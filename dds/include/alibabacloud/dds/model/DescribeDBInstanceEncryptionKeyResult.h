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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCEENCRYPTIONKEYRESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCEENCRYPTIONKEYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeDBInstanceEncryptionKeyResult : public ServiceResult
			{
			public:


				DescribeDBInstanceEncryptionKeyResult();
				explicit DescribeDBInstanceEncryptionKeyResult(const std::string &payload);
				~DescribeDBInstanceEncryptionKeyResult();
				std::string getOrigin()const;
				std::string getDescription()const;
				std::string getEncryptionKeyStatus()const;
				std::string getMaterialExpireTime()const;
				std::string getKeyUsage()const;
				std::string getEncryptionKey()const;
				std::string getCreator()const;
				std::string getDeleteDate()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string origin_;
				std::string description_;
				std::string encryptionKeyStatus_;
				std::string materialExpireTime_;
				std::string keyUsage_;
				std::string encryptionKey_;
				std::string creator_;
				std::string deleteDate_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCEENCRYPTIONKEYRESULT_H_