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

#ifndef ALIBABACLOUD_FINMALL_MODEL_SIGNEDPAGERESULTREQUEST_H_
#define ALIBABACLOUD_FINMALL_MODEL_SIGNEDPAGERESULTREQUEST_H_

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
			class ALIBABACLOUD_FINMALL_EXPORT SignedPageResultRequest : public RpcServiceRequest
			{

			public:
				SignedPageResultRequest();
				~SignedPageResultRequest();

				std::string getDownloadUrl()const;
				void setDownloadUrl(const std::string& downloadUrl);
				std::string getDigest()const;
				void setDigest(const std::string& digest);
				std::string getViewUrl()const;
				void setViewUrl(const std::string& viewUrl);
				int getResultCode()const;
				void setResultCode(int resultCode);
				std::string getTransactionId()const;
				void setTransactionId(const std::string& transactionId);
				std::string getResultDesc()const;
				void setResultDesc(const std::string& resultDesc);
				std::string getTimestamp()const;
				void setTimestamp(const std::string& timestamp);

            private:
				std::string downloadUrl_;
				std::string digest_;
				std::string viewUrl_;
				int resultCode_;
				std::string transactionId_;
				std::string resultDesc_;
				std::string timestamp_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FINMALL_MODEL_SIGNEDPAGERESULTREQUEST_H_