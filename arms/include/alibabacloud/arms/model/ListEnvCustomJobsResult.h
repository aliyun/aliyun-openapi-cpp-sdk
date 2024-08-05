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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTENVCUSTOMJOBSRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTENVCUSTOMJOBSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT ListEnvCustomJobsResult : public ServiceResult
			{
			public:
				struct Monitoring
				{
					struct ScrapeConfig
					{
						std::string jobName;
						std::vector<std::string> scrapeDiscoverys;
						std::string scrapeInterval;
						std::string metricsPath;
					};
					std::string status;
					std::string environmentId;
					std::string creationTimestamp;
					std::string addonVersion;
					std::string addonReleaseName;
					std::vector<Monitoring::ScrapeConfig> scrapeConfigs;
					std::string configYaml;
					std::string addonName;
					std::string regionId;
					std::string customJobName;
				};


				ListEnvCustomJobsResult();
				explicit ListEnvCustomJobsResult(const std::string &payload);
				~ListEnvCustomJobsResult();
				std::string getMessage()const;
				std::vector<Monitoring> getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<Monitoring> data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTENVCUSTOMJOBSRESULT_H_