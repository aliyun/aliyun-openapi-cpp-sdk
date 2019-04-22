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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_SETUSERQUOTAREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_SETUSERQUOTAREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/bssopenapi/BssOpenApiExport.h>

namespace AlibabaCloud
{
	namespace BssOpenApi
	{
		namespace Model
		{
			class ALIBABACLOUD_BSSOPENAPI_EXPORT SetUserQuotaRequest : public RpcServiceRequest
			{

			public:
				SetUserQuotaRequest();
				~SetUserQuotaRequest();

				long getUid()const;
				void setUid(long uid);
				std::string getAmount()const;
				void setAmount(const std::string& amount);
				std::string getOutBizId()const;
				void setOutBizId(const std::string& outBizId);
				std::string getCurrency()const;
				void setCurrency(const std::string& currency);
				std::string getBid()const;
				void setBid(const std::string& bid);

            private:
				long uid_;
				std::string amount_;
				std::string outBizId_;
				std::string currency_;
				std::string bid_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_SETUSERQUOTAREQUEST_H_