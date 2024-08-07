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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTPROMETHEUSINSTANCEBYTAGANDRESOURCEGROUPIDRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTPROMETHEUSINSTANCEBYTAGANDRESOURCEGROUPIDRESULT_H_

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
			class ALIBABACLOUD_ARMS_EXPORT ListPrometheusInstanceByTagAndResourceGroupIdResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct PrometheusInstancesItem
					{
						struct TagsItem
						{
							std::string tagKey;
							std::string tagValue;
						};
						std::string pushGatewayIntraUrl;
						std::string resourceGroupId;
						std::string clusterId;
						std::string remoteReadIntraUrl;
						std::string vSwitchId;
						std::string securityGroupId;
						std::string resourceType;
						std::string clusterType;
						std::string remoteWriteIntraUrl;
						std::string subClustersJson;
						std::string httpApiInterUrl;
						std::string vpcId;
						std::string userId;
						std::string remoteReadInterUrl;
						std::string pushGatewayInterUrl;
						std::string clusterName;
						std::string httpApiIntraUrl;
						std::string authToken;
						std::string paymentType;
						std::string regionId;
						std::string remoteWriteInterUrl;
						std::vector<PrometheusInstancesItem::TagsItem> tags;
						std::string grafanaInstanceId;
					};
					std::vector<PrometheusInstancesItem> prometheusInstances;
				};


				ListPrometheusInstanceByTagAndResourceGroupIdResult();
				explicit ListPrometheusInstanceByTagAndResourceGroupIdResult(const std::string &payload);
				~ListPrometheusInstanceByTagAndResourceGroupIdResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTPROMETHEUSINSTANCEBYTAGANDRESOURCEGROUPIDRESULT_H_