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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEMARKMONITORRESULTSREQUEST_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEMARKMONITORRESULTSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/trademark/TrademarkExport.h>

namespace AlibabaCloud
{
	namespace Trademark
	{
		namespace Model
		{
			class ALIBABACLOUD_TRADEMARK_EXPORT QueryTrademarkMonitorResultsRequest : public RpcServiceRequest
			{

			public:
				QueryTrademarkMonitorResultsRequest();
				~QueryTrademarkMonitorResultsRequest();

				int getActionType()const;
				void setActionType(int actionType);
				std::string getTmName()const;
				void setTmName(const std::string& tmName);
				std::string getClassification()const;
				void setClassification(const std::string& classification);
				int getPageNum()const;
				void setPageNum(int pageNum);
				std::string getRegistrationNumber()const;
				void setRegistrationNumber(const std::string& registrationNumber);
				std::string getApplyYear()const;
				void setApplyYear(const std::string& applyYear);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getProcedureStatus()const;
				void setProcedureStatus(int procedureStatus);
				long getRuleId()const;
				void setRuleId(long ruleId);

            private:
				int actionType_;
				std::string tmName_;
				std::string classification_;
				int pageNum_;
				std::string registrationNumber_;
				std::string applyYear_;
				int pageSize_;
				int procedureStatus_;
				long ruleId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEMARKMONITORRESULTSREQUEST_H_