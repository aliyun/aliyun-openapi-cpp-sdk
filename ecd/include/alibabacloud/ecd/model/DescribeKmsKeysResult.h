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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBEKMSKEYSRESULT_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBEKMSKEYSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecd/EcdExport.h>

namespace AlibabaCloud
{
	namespace Ecd
	{
		namespace Model
		{
			class ALIBABACLOUD_ECD_EXPORT DescribeKmsKeysResult : public ServiceResult
			{
			public:
				struct Key
				{
					std::string type;
					std::string alias;
					std::string keyId;
					std::string arn;
				};


				DescribeKmsKeysResult();
				explicit DescribeKmsKeysResult(const std::string &payload);
				~DescribeKmsKeysResult();
				std::vector<Key> getKeys()const;
				std::string getKmsServiceStatus()const;
				std::string getAuthorizeStatus()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Key> keys_;
				std::string kmsServiceStatus_;
				std::string authorizeStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBEKMSKEYSRESULT_H_