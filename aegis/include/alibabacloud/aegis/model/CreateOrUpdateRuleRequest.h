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

#ifndef ALIBABACLOUD_AEGIS_MODEL_CREATEORUPDATERULEREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_CREATEORUPDATERULEREQUEST_H_

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
			class ALIBABACLOUD_AEGIS_EXPORT CreateOrUpdateRuleRequest : public RpcServiceRequest
			{

			public:
				CreateOrUpdateRuleRequest();
				~CreateOrUpdateRuleRequest();

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
				long getId()const;
				void setId(long id);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getRuleGroupIds()const;
				void setRuleGroupIds(const std::string& ruleGroupIds);
				std::string getExpressions()const;
				void setExpressions(const std::string& expressions);
				long getDataSourceId()const;
				void setDataSourceId(long dataSourceId);
				std::string getActions()const;
				void setActions(const std::string& actions);

            private:
				std::string warnLevel_;
				std::string description_;
				std::string ruleName_;
				std::string sourceIp_;
				std::string statisticsRules_;
				long id_;
				std::string lang_;
				std::string ruleGroupIds_;
				std::string expressions_;
				long dataSourceId_;
				std::string actions_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_CREATEORUPDATERULEREQUEST_H_