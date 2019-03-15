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

#ifndef ALIBABACLOUD_FINMALL_MODEL_SIGNRESULTNOTIFYREQUEST_H_
#define ALIBABACLOUD_FINMALL_MODEL_SIGNRESULTNOTIFYREQUEST_H_

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
			class ALIBABACLOUD_FINMALL_EXPORT SignResultNotifyRequest : public RpcServiceRequest
			{

			public:
				SignResultNotifyRequest();
				~SignResultNotifyRequest();

				std::string getDocId()const;
				void setDocId(const std::string& docId);
				std::string getDocContent()const;
				void setDocContent(const std::string& docContent);
				std::string getSign()const;
				void setSign(const std::string& sign);
				int getResultCode()const;
				void setResultCode(int resultCode);
				long getTime()const;
				void setTime(long time);
				std::string getTransactionId()const;
				void setTransactionId(const std::string& transactionId);
				std::string getResultDesc()const;
				void setResultDesc(const std::string& resultDesc);

            private:
				std::string docId_;
				std::string docContent_;
				std::string sign_;
				int resultCode_;
				long time_;
				std::string transactionId_;
				std::string resultDesc_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FINMALL_MODEL_SIGNRESULTNOTIFYREQUEST_H_