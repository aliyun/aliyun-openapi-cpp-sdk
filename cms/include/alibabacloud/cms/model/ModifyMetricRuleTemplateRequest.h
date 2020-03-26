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

#ifndef ALIBABACLOUD_CMS_MODEL_MODIFYMETRICRULETEMPLATEREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_MODIFYMETRICRULETEMPLATEREQUEST_H_

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
			class ALIBABACLOUD_CMS_EXPORT ModifyMetricRuleTemplateRequest : public RpcServiceRequest
			{
			public:
				struct AlertTemplates
				{
					int period;
					std::string escalationsWarnThreshold;
					std::string webhook;
					std::string escalationsWarnComparisonOperator;
					std::string escalationsCriticalStatistics;
					int escalationsInfoTimes;
					std::string ruleName;
					std::string escalationsInfoStatistics;
					int escalationsCriticalTimes;
					std::string escalationsInfoComparisonOperator;
					std::string escalationsWarnStatistics;
					std::string escalationsInfoThreshold;
					std::string _namespace;
					std::string selector;
					std::string metricName;
					std::string category;
					std::string escalationsCriticalComparisonOperator;
					int escalationsWarnTimes;
					std::string escalationsCriticalThreshold;
				};

			public:
				ModifyMetricRuleTemplateRequest();
				~ModifyMetricRuleTemplateRequest();

				long getRestVersion()const;
				void setRestVersion(long restVersion);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getTemplateId()const;
				void setTemplateId(long templateId);
				std::string getName()const;
				void setName(const std::string& name);
				std::vector<AlertTemplates> getAlertTemplates()const;
				void setAlertTemplates(const std::vector<AlertTemplates>& alertTemplates);

            private:
				long restVersion_;
				std::string description_;
				long templateId_;
				std::string name_;
				std::vector<AlertTemplates> alertTemplates_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_MODIFYMETRICRULETEMPLATEREQUEST_H_