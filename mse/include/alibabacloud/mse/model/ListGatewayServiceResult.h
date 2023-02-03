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

#ifndef ALIBABACLOUD_MSE_MODEL_LISTGATEWAYSERVICERESULT_H_
#define ALIBABACLOUD_MSE_MODEL_LISTGATEWAYSERVICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mse/MseExport.h>

namespace AlibabaCloud
{
	namespace Mse
	{
		namespace Model
		{
			class ALIBABACLOUD_MSE_EXPORT ListGatewayServiceResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Services
					{
						struct HealthCheckInfo
						{
							std::string httpPath;
							int unhealthyThreshold;
							int timeout;
							std::string httpHost;
							int healthyThreshold;
							bool check;
							std::vector<std::string> expectedStatuses;
							std::string protocol;
							int interval;
						};
						struct GatewayTrafficPolicy
						{
							struct Tls
							{
								std::string certId;
								std::string mode;
								std::string caCertContent;
								std::vector<std::string> subjectAltNames;
								std::string caCertId;
								std::string sni;
							};
							struct LoadBalancerSettings
							{
								struct ConsistentHashLBConfig
								{
									struct HttpCookie
									{
										std::string path;
										std::string ttl;
										std::string name;
									};
									std::string consistentHashLBType;
									long minimumRingSize;
									std::string parameterName;
									HttpCookie httpCookie;
								};
								int warmupDuration;
								ConsistentHashLBConfig consistentHashLBConfig;
								std::string loadbalancerType;
							};
							LoadBalancerSettings loadBalancerSettings;
							Tls tls;
						};
						struct VersionsItem
						{
							std::string name;
						};
						std::string groupName;
						long servicePort;
						std::string sourceType;
						long sourceId;
						std::vector<std::string> unhealthyEndpoints;
						std::string metaInfo;
						std::string gmtModified;
						std::string healehStatus;
						std::string healthStatus;
						bool healthCheck;
						HealthCheckInfo healthCheckInfo;
						std::vector<std::string> ports;
						std::string _namespace;
						long gatewayId;
						std::vector<std::string> ips;
						std::string name;
						std::string gatewayUniqueId;
						std::string gmtCreate;
						std::vector<Services::VersionsItem> versions;
						std::string serviceNameInRegistry;
						std::string serviceProtocol;
						long id;
						GatewayTrafficPolicy gatewayTrafficPolicy;
					};
					int pageSize;
					int pageNumber;
					long totalSize;
					std::vector<Services> result;
				};


				ListGatewayServiceResult();
				explicit ListGatewayServiceResult(const std::string &payload);
				~ListGatewayServiceResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				Data getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				Data data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MSE_MODEL_LISTGATEWAYSERVICERESULT_H_