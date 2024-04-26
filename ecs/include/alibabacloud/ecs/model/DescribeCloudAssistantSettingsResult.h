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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBECLOUDASSISTANTSETTINGSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBECLOUDASSISTANTSETTINGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeCloudAssistantSettingsResult : public ServiceResult
			{
			public:
				struct AgentUpgradeConfig
				{
					std::string timeZone;
					std::vector<std::string> allowedUpgradeWindows;
					bool enabled;
				};
				struct OssDeliveryConfig
				{
					std::string encryptionType;
					std::string bucketName;
					std::string encryptionAlgorithm;
					bool enabled;
					std::string prefix;
					std::string deliveryType;
					std::string encryptionKeyId;
				};
				struct SlsDeliveryConfig
				{
					std::string logstoreName;
					std::string projectName;
					bool enabled;
					std::string deliveryType;
				};


				DescribeCloudAssistantSettingsResult();
				explicit DescribeCloudAssistantSettingsResult(const std::string &payload);
				~DescribeCloudAssistantSettingsResult();
				std::vector<OssDeliveryConfig> getOssDeliveryConfigs()const;
				AgentUpgradeConfig getAgentUpgradeConfig()const;
				std::vector<SlsDeliveryConfig> getSlsDeliveryConfigs()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<OssDeliveryConfig> ossDeliveryConfigs_;
				AgentUpgradeConfig agentUpgradeConfig_;
				std::vector<SlsDeliveryConfig> slsDeliveryConfigs_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBECLOUDASSISTANTSETTINGSRESULT_H_