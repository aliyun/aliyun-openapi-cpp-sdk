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

#ifndef ALIBABACLOUD_ARMS_MODEL_GETPROMETHEUSINSTANCERESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_GETPROMETHEUSINSTANCERESULT_H_

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
			class ALIBABACLOUD_ARMS_EXPORT GetPrometheusInstanceResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct TagsItem
					{
						std::string tagKey;
						std::string tagValue;
					};
					int archiveDuration;
					std::vector<std::string> supportAuthTypes;
					std::string resourceGroupId;
					std::string remoteReadIntraUrl;
					std::string product;
					std::string remoteWriteIntraUrl;
					std::string subClustersJson;
					std::string httpApiInterUrl;
					std::string remoteReadInterUrl;
					std::string pushGatewayInterUrl;
					std::string clusterName;
					std::string paymentType;
					std::string remoteWriteInterUrl;
					std::vector<TagsItem> tags;
					std::string accessType;
					std::string grafanaInstanceId;
					std::string pushGatewayIntraUrl;
					std::string clusterId;
					std::string vSwitchId;
					std::string securityGroupId;
					std::string resourceType;
					std::string dbInstanceStatus;
					std::string clusterType;
					int storageDuration;
					std::string vpcId;
					std::string userId;
					std::string httpApiIntraUrl;
					std::string authToken;
					std::string enableAuthToken;
					std::string regionId;
				};


				GetPrometheusInstanceResult();
				explicit GetPrometheusInstanceResult(const std::string &payload);
				~GetPrometheusInstanceResult();
				std::string getMessage()const;
				Data getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_GETPROMETHEUSINSTANCERESULT_H_