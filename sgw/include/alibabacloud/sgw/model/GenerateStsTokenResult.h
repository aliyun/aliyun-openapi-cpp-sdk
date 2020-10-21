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

#ifndef ALIBABACLOUD_SGW_MODEL_GENERATESTSTOKENRESULT_H_
#define ALIBABACLOUD_SGW_MODEL_GENERATESTSTOKENRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sgw/SgwExport.h>

namespace AlibabaCloud
{
	namespace Sgw
	{
		namespace Model
		{
			class ALIBABACLOUD_SGW_EXPORT GenerateStsTokenResult : public ServiceResult
			{
			public:


				GenerateStsTokenResult();
				explicit GenerateStsTokenResult(const std::string &payload);
				~GenerateStsTokenResult();
				std::string getSecurityToken()const;
				std::string getMessage()const;
				std::string getSupportBundleTarget()const;
				std::string getAccessKeyId()const;
				std::string getAccessKeySecret()const;
				std::string getExpiration()const;
				std::string getEnvironment()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string securityToken_;
				std::string message_;
				std::string supportBundleTarget_;
				std::string accessKeyId_;
				std::string accessKeySecret_;
				std::string expiration_;
				std::string environment_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SGW_MODEL_GENERATESTSTOKENRESULT_H_