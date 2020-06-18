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

#ifndef ALIBABACLOUD_DYPNSAPI_MODEL_GETAUTHTOKENRESULT_H_
#define ALIBABACLOUD_DYPNSAPI_MODEL_GETAUTHTOKENRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dypnsapi/DypnsapiExport.h>

namespace AlibabaCloud
{
	namespace Dypnsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYPNSAPI_EXPORT GetAuthTokenResult : public ServiceResult
			{
			public:
				struct TokenInfo
				{
					std::string jwtToken;
					std::string accessToken;
				};


				GetAuthTokenResult();
				explicit GetAuthTokenResult(const std::string &payload);
				~GetAuthTokenResult();
				std::string getMessage()const;
				TokenInfo getTokenInfo()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				TokenInfo tokenInfo_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYPNSAPI_MODEL_GETAUTHTOKENRESULT_H_