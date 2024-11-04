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

#ifndef ALIBABACLOUD_ALB_MODEL_LISTHEALTHCHECKTEMPLATESRESULT_H_
#define ALIBABACLOUD_ALB_MODEL_LISTHEALTHCHECKTEMPLATESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alb/AlbExport.h>

namespace AlibabaCloud
{
	namespace Alb
	{
		namespace Model
		{
			class ALIBABACLOUD_ALB_EXPORT ListHealthCheckTemplatesResult : public ServiceResult
			{
			public:
				struct HealthCheckTemplate
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string healthCheckTemplateId;
					bool serviceManagedEnabled;
					int healthCheckInterval;
					int unhealthyThreshold;
					std::string healthCheckHost;
					std::string healthCheckPath;
					std::string healthCheckTemplateName;
					std::string healthCheckHttpVersion;
					int healthCheckTimeout;
					bool healthCheckTcpFastCloseEnabled;
					int healthCheckConnectPort;
					std::vector<std::string> healthCheckHttpCodes;
					std::vector<std::string> healthCheckCodes;
					std::string healthCheckMethod;
					int healthyThreshold;
					std::string serviceManagedMode;
					std::string healthCheckProtocol;
					std::vector<HealthCheckTemplate::Tag> tags;
				};


				ListHealthCheckTemplatesResult();
				explicit ListHealthCheckTemplatesResult(const std::string &payload);
				~ListHealthCheckTemplatesResult();
				int getTotalCount()const;
				std::vector<HealthCheckTemplate> getHealthCheckTemplates()const;
				std::string getNextToken()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<HealthCheckTemplate> healthCheckTemplates_;
				std::string nextToken_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALB_MODEL_LISTHEALTHCHECKTEMPLATESRESULT_H_