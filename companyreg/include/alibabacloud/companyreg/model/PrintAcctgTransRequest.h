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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_PRINTACCTGTRANSREQUEST_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_PRINTACCTGTRANSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/companyreg/CompanyregExport.h>

namespace AlibabaCloud
{
	namespace Companyreg
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPANYREG_EXPORT PrintAcctgTransRequest : public RpcServiceRequest
			{

			public:
				PrintAcctgTransRequest();
				~PrintAcctgTransRequest();

				bool getShowCustomComments()const;
				void setShowCustomComments(bool showCustomComments);
				std::string getPrintStyle()const;
				void setPrintStyle(const std::string& printStyle);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				std::string getPrintCount()const;
				void setPrintCount(const std::string& printCount);
				std::string getVoucherIds()const;
				void setVoucherIds(const std::string& voucherIds);

            private:
				bool showCustomComments_;
				std::string printStyle_;
				std::string bizId_;
				std::string printCount_;
				std::string voucherIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_PRINTACCTGTRANSREQUEST_H_