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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEALARMHISTORYREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEALARMHISTORYREQUEST_H_

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
			class ALIBABACLOUD_CMS_EXPORT DescribeAlarmHistoryRequest : public RpcServiceRequest
			{

			public:
				DescribeAlarmHistoryRequest();
				~DescribeAlarmHistoryRequest();

				std::string getAlertName()const;
				void setAlertName(const std::string& alertName);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getRuleName()const;
				void setRuleName(const std::string& ruleName);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				bool getAscending()const;
				void setAscending(bool ascending);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				bool getOnlyCount()const;
				void setOnlyCount(bool onlyCount);
				std::string get_Namespace()const;
				void set_Namespace(const std::string& _namespace);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getState()const;
				void setState(const std::string& state);
				int getPage()const;
				void setPage(int page);
				std::string getMetricName()const;
				void setMetricName(const std::string& metricName);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string alertName_;
				std::string groupId_;
				std::string endTime_;
				std::string ruleName_;
				std::string startTime_;
				bool ascending_;
				std::string accessKeyId_;
				bool onlyCount_;
				std::string _namespace_;
				int pageSize_;
				std::string state_;
				int page_;
				std::string metricName_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEALARMHISTORYREQUEST_H_