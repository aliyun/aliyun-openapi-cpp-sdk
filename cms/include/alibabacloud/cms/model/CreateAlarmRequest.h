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

#ifndef ALIBABACLOUD_CMS_MODEL_CREATEALARMREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_CREATEALARMREQUEST_H_

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
			class ALIBABACLOUD_CMS_EXPORT CreateAlarmRequest : public RpcServiceRequest
			{

			public:
				CreateAlarmRequest();
				~CreateAlarmRequest();

				std::string getWebhook()const;
				void setWebhook(const std::string& webhook);
				std::string getThreshold()const;
				void setThreshold(const std::string& threshold);
				int getStartTime()const;
				void setStartTime(int startTime);
				int getEvaluationCount()const;
				void setEvaluationCount(int evaluationCount);
				int getSilenceTime()const;
				void setSilenceTime(int silenceTime);
				std::string getMetricName()const;
				void setMetricName(const std::string& metricName);
				int getNotifyType()const;
				void setNotifyType(int notifyType);
				int getPeriod()const;
				void setPeriod(int period);
				bool getDryRun()const;
				void setDryRun(bool dryRun);
				std::string getContactGroups()const;
				void setContactGroups(const std::string& contactGroups);
				int getEndTime()const;
				void setEndTime(int endTime);
				std::string getName()const;
				void setName(const std::string& name);
				std::string get_Namespace()const;
				void set_Namespace(const std::string& _namespace);
				std::string getComparisonOperator()const;
				void setComparisonOperator(const std::string& comparisonOperator);
				std::string getDimensions()const;
				void setDimensions(const std::string& dimensions);
				std::string getStatistics()const;
				void setStatistics(const std::string& statistics);

            private:
				std::string webhook_;
				std::string threshold_;
				int startTime_;
				int evaluationCount_;
				int silenceTime_;
				std::string metricName_;
				int notifyType_;
				int period_;
				bool dryRun_;
				std::string contactGroups_;
				int endTime_;
				std::string name_;
				std::string _namespace_;
				std::string comparisonOperator_;
				std::string dimensions_;
				std::string statistics_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_CREATEALARMREQUEST_H_