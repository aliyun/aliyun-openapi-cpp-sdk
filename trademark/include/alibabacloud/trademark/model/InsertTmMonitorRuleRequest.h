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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_INSERTTMMONITORRULEREQUEST_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_INSERTTMMONITORRULEREQUEST_H_

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
			class ALIBABACLOUD_TRADEMARK_EXPORT InsertTmMonitorRuleRequest : public RpcServiceRequest
			{

			public:
				InsertTmMonitorRuleRequest();
				~InsertTmMonitorRuleRequest();

				std::string getStartApplyDate()const;
				void setStartApplyDate(const std::string& startApplyDate);
				int getRuleType()const;
				void setRuleType(int ruleType);
				std::string getRuleSource()const;
				void setRuleSource(const std::string& ruleSource);
				std::string getRuleName()const;
				void setRuleName(const std::string& ruleName);
				std::string getClassification()const;
				void setClassification(const std::string& classification);
				std::string getNotifyStatus()const;
				void setNotifyStatus(const std::string& notifyStatus);
				std::string getEndApplyDate()const;
				void setEndApplyDate(const std::string& endApplyDate);
				std::string getRuleKeyword()const;
				void setRuleKeyword(const std::string& ruleKeyword);

            private:
				std::string startApplyDate_;
				int ruleType_;
				std::string ruleSource_;
				std::string ruleName_;
				std::string classification_;
				std::string notifyStatus_;
				std::string endApplyDate_;
				std::string ruleKeyword_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_INSERTTMMONITORRULEREQUEST_H_