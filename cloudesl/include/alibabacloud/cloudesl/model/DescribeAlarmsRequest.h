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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEALARMSREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEALARMSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT DescribeAlarmsRequest : public RpcServiceRequest
			{

			public:
				DescribeAlarmsRequest();
				~DescribeAlarmsRequest();

				std::string getStoreId()const;
				void setStoreId(const std::string& storeId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getFromAlarmTime()const;
				void setFromAlarmTime(const std::string& fromAlarmTime);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getToAlarmTime()const;
				void setToAlarmTime(const std::string& toAlarmTime);
				std::string getAlarmType()const;
				void setAlarmType(const std::string& alarmType);
				std::string getAlarmStatus()const;
				void setAlarmStatus(const std::string& alarmStatus);
				std::string getErrorType()const;
				void setErrorType(const std::string& errorType);
				std::string getAlarmId()const;
				void setAlarmId(const std::string& alarmId);

            private:
				std::string storeId_;
				int pageNumber_;
				std::string fromAlarmTime_;
				int pageSize_;
				std::string toAlarmTime_;
				std::string alarmType_;
				std::string alarmStatus_;
				std::string errorType_;
				std::string alarmId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEALARMSREQUEST_H_