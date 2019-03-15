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

#ifndef ALIBABACLOUD_FINMALL_MODEL_GETAUTHORIZECREDITQUERYREQUEST_H_
#define ALIBABACLOUD_FINMALL_MODEL_GETAUTHORIZECREDITQUERYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/finmall/FinmallExport.h>

namespace AlibabaCloud
{
	namespace Finmall
	{
		namespace Model
		{
			class ALIBABACLOUD_FINMALL_EXPORT GetAuthorizeCreditQueryRequest : public RpcServiceRequest
			{

			public:
				GetAuthorizeCreditQueryRequest();
				~GetAuthorizeCreditQueryRequest();

				std::string getCreditId()const;
				void setCreditId(const std::string& creditId);
				std::string getFundPartyId()const;
				void setFundPartyId(const std::string& fundPartyId);
				std::string getReturnUrl()const;
				void setReturnUrl(const std::string& returnUrl);
				std::string getUserId()const;
				void setUserId(const std::string& userId);

            private:
				std::string creditId_;
				std::string fundPartyId_;
				std::string returnUrl_;
				std::string userId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FINMALL_MODEL_GETAUTHORIZECREDITQUERYREQUEST_H_