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

#ifndef ALIBABACLOUD_CAS_MODEL_DESCRIBESIGNATURETRADEDETAILREQUEST_H_
#define ALIBABACLOUD_CAS_MODEL_DESCRIBESIGNATURETRADEDETAILREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cas/CasExport.h>

namespace AlibabaCloud
{
	namespace Cas
	{
		namespace Model
		{
			class ALIBABACLOUD_CAS_EXPORT DescribeSignatureTradeDetailRequest : public RpcServiceRequest
			{

			public:
				DescribeSignatureTradeDetailRequest();
				~DescribeSignatureTradeDetailRequest();

				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getTransactionId()const;
				void setTransactionId(const std::string& transactionId);

            private:
				std::string sourceIp_;
				std::string lang_;
				std::string transactionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_DESCRIBESIGNATURETRADEDETAILREQUEST_H_