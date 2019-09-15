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

#ifndef ALIBABACLOUD_AEGIS_MODEL_CREATEORUPDATEJOINRULEREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_CREATEORUPDATEJOINRULEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT CreateOrUpdateJoinRuleRequest : public RpcServiceRequest
			{

			public:
				CreateOrUpdateJoinRuleRequest();
				~CreateOrUpdateJoinRuleRequest();

				std::string getWarnLevel()const;
				void setWarnLevel(const std::string& warnLevel);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getRuleName()const;
				void setRuleName(const std::string& ruleName);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getStatisticsRules()const;
				void setStatisticsRules(const std::string& statisticsRules);
				std::string getJoinRelation()const;
				void setJoinRelation(const std::string& joinRelation);
				long getDataSourceId2()const;
				void setDataSourceId2(long dataSourceId2);
				long getDataSourceId1()const;
				void setDataSourceId1(long dataSourceId1);
				long getTimeWindow()const;
				void setTimeWindow(long timeWindow);
				std::string getExpression2()const;
				void setExpression2(const std::string& expression2);
				std::string getExpression1()const;
				void setExpression1(const std::string& expression1);
				long getRuleId()const;
				void setRuleId(long ruleId);
				std::string getActions()const;
				void setActions(const std::string& actions);

            private:
				std::string warnLevel_;
				std::string description_;
				std::string ruleName_;
				std::string sourceIp_;
				std::string statisticsRules_;
				std::string joinRelation_;
				long dataSourceId2_;
				long dataSourceId1_;
				long timeWindow_;
				std::string expression2_;
				std::string expression1_;
				long ruleId_;
				std::string actions_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_CREATEORUPDATEJOINRULEREQUEST_H_