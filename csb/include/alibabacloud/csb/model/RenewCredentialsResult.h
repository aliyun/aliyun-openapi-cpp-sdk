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

#ifndef ALIBABACLOUD_CSB_MODEL_RENEWCREDENTIALSRESULT_H_
#define ALIBABACLOUD_CSB_MODEL_RENEWCREDENTIALSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/csb/CSBExport.h>

namespace AlibabaCloud
{
	namespace CSB
	{
		namespace Model
		{
			class ALIBABACLOUD_CSB_EXPORT RenewCredentialsResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Credentials
					{
						struct CurrentCredential
						{
							std::string secretKey;
							std::string accessKey;
						};
						struct NewCredential
						{
							std::string secretKey;
							std::string accessKey;
						};
						NewCredential newCredential;
						long gmtCreate;
						CurrentCredential currentCredential;
						std::string userId;
						long id;
						std::string name;
					};
					Credentials credentials;
				};


				RenewCredentialsResult();
				explicit RenewCredentialsResult(const std::string &payload);
				~RenewCredentialsResult();
				std::string getMessage()const;
				Data getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CSB_MODEL_RENEWCREDENTIALSRESULT_H_