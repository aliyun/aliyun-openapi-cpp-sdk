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

#ifndef ALIBABACLOUD_SCHEDULERX2_MODEL_LISTJOBSRESULT_H_
#define ALIBABACLOUD_SCHEDULERX2_MODEL_LISTJOBSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/schedulerx2/Schedulerx2Export.h>

namespace AlibabaCloud
{
	namespace Schedulerx2
	{
		namespace Model
		{
			class ALIBABACLOUD_SCHEDULERX2_EXPORT ListJobsResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Job
					{
						struct MapTaskXAttrs
						{
							int taskAttemptInterval;
							int queueSize;
							int pageSize;
							int dispatcherSize;
							int taskMaxAttempt;
							int consumerSize;
						};
						struct TimeConfig
						{
							std::string calendar;
							std::string timeExpression;
							int dataOffset;
							int timeType;
						};
						struct JobMonitorInfo
						{
							struct MonitorConfig
							{
								bool timeoutEnable;
								long timeout;
								bool failEnable;
								std::string sendChannel;
								bool timeoutKillEnable;
							};
							struct ContactInfoItem
							{
								std::string userName;
								std::string userPhone;
							};
							std::vector<ContactInfoItem> contactInfo;
							MonitorConfig monitorConfig;
						};
						int status;
						int maxAttempt;
						std::string description;
						std::string parameters;
						std::string jarUrl;
						std::string maxConcurrency;
						TimeConfig timeConfig;
						MapTaskXAttrs mapTaskXAttrs;
						std::string name;
						JobMonitorInfo jobMonitorInfo;
						std::string content;
						std::string className;
						int attemptInterval;
						std::string executeMode;
						long jobId;
					};
					std::vector<Job> jobs;
				};


				ListJobsResult();
				explicit ListJobsResult(const std::string &payload);
				~ListJobsResult();
				std::string getMessage()const;
				Data getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCHEDULERX2_MODEL_LISTJOBSRESULT_H_