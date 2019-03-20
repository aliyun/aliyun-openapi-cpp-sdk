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

#ifndef ALIBABACLOUD_CMS_MODEL_PUTMETRICALARMREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_PUTMETRICALARMREQUEST_H_

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
			class ALIBABACLOUD_CMS_EXPORT PutMetricAlarmRequest : public RpcServiceRequest
			{

			public:
				PutMetricAlarmRequest();
				~PutMetricAlarmRequest();

				std::string getPeriod()const;
				void setPeriod(const std::string& period);
				std::string getWebhook()const;
				void setWebhook(const std::string& webhook);
				std::string getContactGroups()const;
				void setContactGroups(const std::string& contactGroups);
				int getLevel()const;
				void setLevel(int level);
				std::string getSubject()const;
				void setSubject(const std::string& subject);
				std::string getAlertName()const;
				void setAlertName(const std::string& alertName);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getResources()const;
				void setResources(const std::string& resources);
				std::string getThreshold()const;
				void setThreshold(const std::string& threshold);
				std::string getEffectiveInterval()const;
				void setEffectiveInterval(const std::string& effectiveInterval);
				std::string getGroupName()const;
				void setGroupName(const std::string& groupName);
				std::string getFilter()const;
				void setFilter(const std::string& filter);
				std::string getNoEffectiveInterval()const;
				void setNoEffectiveInterval(const std::string& noEffectiveInterval);
				std::string getDisplayName()const;
				void setDisplayName(const std::string& displayName);
				std::string get_Namespace()const;
				void set_Namespace(const std::string& _namespace);
				int getEvaluationCount()const;
				void setEvaluationCount(int evaluationCount);
				int getSilenceTime()const;
				void setSilenceTime(int silenceTime);
				std::string getInterval()const;
				void setInterval(const std::string& interval);
				std::string getMetricName()const;
				void setMetricName(const std::string& metricName);
				std::string getDeepDive()const;
				void setDeepDive(const std::string& deepDive);
				std::string getComparisonOperator()const;
				void setComparisonOperator(const std::string& comparisonOperator);
				std::string getDimensions()const;
				void setDimensions(const std::string& dimensions);
				std::string getStatistics()const;
				void setStatistics(const std::string& statistics);

            private:
				std::string period_;
				std::string webhook_;
				std::string contactGroups_;
				int level_;
				std::string subject_;
				std::string alertName_;
				std::string groupId_;
				std::string description_;
				std::string resources_;
				std::string threshold_;
				std::string effectiveInterval_;
				std::string groupName_;
				std::string filter_;
				std::string noEffectiveInterval_;
				std::string displayName_;
				std::string _namespace_;
				int evaluationCount_;
				int silenceTime_;
				std::string interval_;
				std::string metricName_;
				std::string deepDive_;
				std::string comparisonOperator_;
				std::string dimensions_;
				std::string statistics_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_PUTMETRICALARMREQUEST_H_