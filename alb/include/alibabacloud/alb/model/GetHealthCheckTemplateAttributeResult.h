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

#ifndef ALIBABACLOUD_ALB_MODEL_GETHEALTHCHECKTEMPLATEATTRIBUTERESULT_H_
#define ALIBABACLOUD_ALB_MODEL_GETHEALTHCHECKTEMPLATEATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_ALB_EXPORT GetHealthCheckTemplateAttributeResult : public ServiceResult
			{
			public:
				struct Tag
				{
					std::string value;
					std::string key;
				};


				GetHealthCheckTemplateAttributeResult();
				explicit GetHealthCheckTemplateAttributeResult(const std::string &payload);
				~GetHealthCheckTemplateAttributeResult();
				std::string getHealthCheckTemplateId()const;
				bool getServiceManagedEnabled()const;
				int getHealthCheckInterval()const;
				int getUnhealthyThreshold()const;
				std::string getHealthCheckHost()const;
				std::string getHealthCheckPath()const;
				std::string getHealthCheckTemplateName()const;
				std::string getHealthCheckHttpVersion()const;
				int getHealthCheckTimeout()const;
				bool getHealthCheckTcpFastCloseEnabled()const;
				std::vector<std::string> getHealthCheckHttpCodes()const;
				std::vector<std::string> getHealthCheckCodes()const;
				int getHealthCheckConnectPort()const;
				std::string getHealthCheckMethod()const;
				int getHealthyThreshold()const;
				std::string getServiceManagedMode()const;
				std::string getHealthCheckProtocol()const;
				std::vector<Tag> getTags()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string healthCheckTemplateId_;
				bool serviceManagedEnabled_;
				int healthCheckInterval_;
				int unhealthyThreshold_;
				std::string healthCheckHost_;
				std::string healthCheckPath_;
				std::string healthCheckTemplateName_;
				std::string healthCheckHttpVersion_;
				int healthCheckTimeout_;
				bool healthCheckTcpFastCloseEnabled_;
				std::vector<std::string> healthCheckHttpCodes_;
				std::vector<std::string> healthCheckCodes_;
				int healthCheckConnectPort_;
				std::string healthCheckMethod_;
				int healthyThreshold_;
				std::string serviceManagedMode_;
				std::string healthCheckProtocol_;
				std::vector<Tag> tags_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALB_MODEL_GETHEALTHCHECKTEMPLATEATTRIBUTERESULT_H_