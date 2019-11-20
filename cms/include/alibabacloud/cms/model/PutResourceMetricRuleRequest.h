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

#ifndef ALIBABACLOUD_CMS_MODEL_PUTRESOURCEMETRICRULEREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_PUTRESOURCEMETRICRULEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT PutResourceMetricRuleRequest : public RpcServiceRequest
			{

			public:
				PutResourceMetricRuleRequest();
				~PutResourceMetricRuleRequest();

				std::string getWebhook()const;
				void setWebhook(const std::string& webhook);
				std::string getEscalationsWarnComparisonOperator()const;
				void setEscalationsWarnComparisonOperator(const std::string& escalationsWarnComparisonOperator);
				std::string getRuleName()const;
				void setRuleName(const std::string& ruleName);
				std::string getEscalationsInfoStatistics()const;
				void setEscalationsInfoStatistics(const std::string& escalationsInfoStatistics);
				std::string getEffectiveInterval()const;
				void setEffectiveInterval(const std::string& effectiveInterval);
				std::string getTargetUserId()const;
				void setTargetUserId(const std::string& targetUserId);
				std::string getEscalationsInfoComparisonOperator()const;
				void setEscalationsInfoComparisonOperator(const std::string& escalationsInfoComparisonOperator);
				bool getIsS2SDispatch()const;
				void setIsS2SDispatch(bool isS2SDispatch);
				std::string getNoEffectiveInterval()const;
				void setNoEffectiveInterval(const std::string& noEffectiveInterval);
				std::string getEmailSubject()const;
				void setEmailSubject(const std::string& emailSubject);
				int getSilenceTime()const;
				void setSilenceTime(int silenceTime);
				std::string getMetricName()const;
				void setMetricName(const std::string& metricName);
				int getEscalationsWarnTimes()const;
				void setEscalationsWarnTimes(int escalationsWarnTimes);
				std::string getPeriod()const;
				void setPeriod(const std::string& period);
				std::string getEscalationsWarnThreshold()const;
				void setEscalationsWarnThreshold(const std::string& escalationsWarnThreshold);
				std::string getContactGroups()const;
				void setContactGroups(const std::string& contactGroups);
				std::string getEscalationsCriticalStatistics()const;
				void setEscalationsCriticalStatistics(const std::string& escalationsCriticalStatistics);
				std::string getResources()const;
				void setResources(const std::string& resources);
				int getEscalationsInfoTimes()const;
				void setEscalationsInfoTimes(int escalationsInfoTimes);
				int getEscalationsCriticalTimes()const;
				void setEscalationsCriticalTimes(int escalationsCriticalTimes);
				std::string getEscalationsWarnStatistics()const;
				void setEscalationsWarnStatistics(const std::string& escalationsWarnStatistics);
				std::string getEscalationsInfoThreshold()const;
				void setEscalationsInfoThreshold(const std::string& escalationsInfoThreshold);
				std::string get_Namespace()const;
				void set_Namespace(const std::string& _namespace);
				std::string getInterval()const;
				void setInterval(const std::string& interval);
				std::string getRuleId()const;
				void setRuleId(const std::string& ruleId);
				std::string getEscalationsCriticalComparisonOperator()const;
				void setEscalationsCriticalComparisonOperator(const std::string& escalationsCriticalComparisonOperator);
				std::string getEscalationsCriticalThreshold()const;
				void setEscalationsCriticalThreshold(const std::string& escalationsCriticalThreshold);

            private:
				std::string webhook_;
				std::string escalationsWarnComparisonOperator_;
				std::string ruleName_;
				std::string escalationsInfoStatistics_;
				std::string effectiveInterval_;
				std::string targetUserId_;
				std::string escalationsInfoComparisonOperator_;
				bool isS2SDispatch_;
				std::string noEffectiveInterval_;
				std::string emailSubject_;
				int silenceTime_;
				std::string metricName_;
				int escalationsWarnTimes_;
				std::string period_;
				std::string escalationsWarnThreshold_;
				std::string contactGroups_;
				std::string escalationsCriticalStatistics_;
				std::string resources_;
				int escalationsInfoTimes_;
				int escalationsCriticalTimes_;
				std::string escalationsWarnStatistics_;
				std::string escalationsInfoThreshold_;
				std::string _namespace_;
				std::string interval_;
				std::string ruleId_;
				std::string escalationsCriticalComparisonOperator_;
				std::string escalationsCriticalThreshold_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_PUTRESOURCEMETRICRULEREQUEST_H_