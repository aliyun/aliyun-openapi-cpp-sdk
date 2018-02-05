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

#ifndef ALIBABACLOUD_CMS_MODEL_UPDATEALARMREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_UPDATEALARMREQUEST_H_

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
			class ALIBABACLOUD_CMS_EXPORT UpdateAlarmRequest : public RpcServiceRequest
			{

			public:
				UpdateAlarmRequest();
				~UpdateAlarmRequest();

				std::string getCallby_cms_owner()const;
				void setCallby_cms_owner(const std::string& callby_cms_owner);
				int getPeriod()const;
				void setPeriod(int period);
				std::string getWebhook()const;
				void setWebhook(const std::string& webhook);
				std::string getContactGroups()const;
				void setContactGroups(const std::string& contactGroups);
				int getEndTime()const;
				void setEndTime(int endTime);
				std::string getThreshold()const;
				void setThreshold(const std::string& threshold);
				int getStartTime()const;
				void setStartTime(int startTime);
				std::string getName()const;
				void setName(const std::string& name);
				int getEvaluationCount()const;
				void setEvaluationCount(int evaluationCount);
				int getSilenceTime()const;
				void setSilenceTime(int silenceTime);
				std::string getId()const;
				void setId(const std::string& id);
				int getNotifyType()const;
				void setNotifyType(int notifyType);
				std::string getComparisonOperator()const;
				void setComparisonOperator(const std::string& comparisonOperator);
				std::string getStatistics()const;
				void setStatistics(const std::string& statistics);

            private:
				std::string callby_cms_owner_;
				int period_;
				std::string webhook_;
				std::string contactGroups_;
				int endTime_;
				std::string threshold_;
				int startTime_;
				std::string name_;
				int evaluationCount_;
				int silenceTime_;
				std::string id_;
				int notifyType_;
				std::string comparisonOperator_;
				std::string statistics_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_UPDATEALARMREQUEST_H_