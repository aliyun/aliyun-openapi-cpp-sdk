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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_PROCESSCOMPANYREGORDERREQUEST_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_PROCESSCOMPANYREGORDERREQUEST_H_

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
			class ALIBABACLOUD_COMPANYREG_EXPORT ProcessCompanyRegOrderRequest : public RpcServiceRequest
			{

			public:
				ProcessCompanyRegOrderRequest();
				~ProcessCompanyRegOrderRequest();

				std::string getActionType()const;
				void setActionType(const std::string& actionType);
				std::string getActionRequestId()const;
				void setActionRequestId(const std::string& actionRequestId);
				int getOperatorType()const;
				void setOperatorType(int operatorType);
				std::string getActionInfo()const;
				void setActionInfo(const std::string& actionInfo);
				std::string getBizCode()const;
				void setBizCode(const std::string& bizCode);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				std::string getBizSubCode()const;
				void setBizSubCode(const std::string& bizSubCode);

            private:
				std::string actionType_;
				std::string actionRequestId_;
				int operatorType_;
				std::string actionInfo_;
				std::string bizCode_;
				std::string bizId_;
				std::string bizSubCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_PROCESSCOMPANYREGORDERREQUEST_H_