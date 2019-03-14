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

#ifndef ALIBABACLOUD_STS_MODEL_GETCALLERIDENTITYRESULT_H_
#define ALIBABACLOUD_STS_MODEL_GETCALLERIDENTITYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sts/StsExport.h>

namespace AlibabaCloud
{
	namespace Sts
	{
		namespace Model
		{
			class ALIBABACLOUD_STS_EXPORT GetCallerIdentityResult : public ServiceResult
			{
			public:


				GetCallerIdentityResult();
				explicit GetCallerIdentityResult(const std::string &payload);
				~GetCallerIdentityResult();
				std::string getIdentityType()const;
				std::string getAccountId()const;
				std::string getPrincipalId()const;
				std::string getUserId()const;
				std::string getArn()const;
				std::string getRoleId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string identityType_;
				std::string accountId_;
				std::string principalId_;
				std::string userId_;
				std::string arn_;
				std::string roleId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_STS_MODEL_GETCALLERIDENTITYRESULT_H_