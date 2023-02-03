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

#ifndef ALIBABACLOUD_MSE_MODEL_GETGATEWAYSERVICEDETAILRESULT_H_
#define ALIBABACLOUD_MSE_MODEL_GETGATEWAYSERVICEDETAILRESULT_H_

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
			class ALIBABACLOUD_MSE_EXPORT GetGatewayServiceDetailResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct GatewayTrafficPolicy
					{
						struct TlsSetting1
						{
							std::string certId;
							std::string caCertContent;
							std::string tlsMode;
							std::string sni;
						};
						struct LoadBalancerSettings2
						{
							struct ConsistentHashLBConfig3
							{
								struct HttpCookie4
								{
									std::string path;
									std::string tTL;
									std::string name;
								};
								HttpCookie4 httpCookie4;
								std::string consistentHashLBType;
								std::string parameterName;
							};
							long warmupDuration;
							ConsistentHashLBConfig3 consistentHashLBConfig3;
							std::string loadbalancerType;
						};
						LoadBalancerSettings2 loadBalancerSettings2;
						TlsSetting1 tlsSetting1;
					};
					struct VersionsItem
					{
						std::string type;
						std::string label;
						std::string value;
					};
					struct LabelDetailsItem
					{
						std::vector<std::string> values;
						std::string key;
					};
					struct VersionDetailsItem
					{
						struct ServiceVersion
						{
							struct LabelsItem
							{
								std::string value;
								std::string key;
							};
							std::vector<LabelsItem> labels;
							std::string name;
						};
						int endpointNum;
						ServiceVersion serviceVersion;
						std::string endpointNumPercent;
					};
					struct PortTrafficPolicyListItem
					{
						struct TrafficPolicy
						{
							struct TlsSetting
							{
								std::string certId;
								std::string caCertContent;
								std::string tlsMode;
								std::string sni;
							};
							struct LoadBalancerSettings
							{
								struct ConsistentHashLBConfig
								{
									struct HttpCookie
									{
										std::string path;
										std::string tTL;
										std::string name;
									};
									std::string consistentHashLBType;
									std::string parameterName;
									HttpCookie httpCookie;
								};
								long warmupDuration;
								ConsistentHashLBConfig consistentHashLBConfig;
								std::string loadbalancerType;
							};
							TlsSetting tlsSetting;
							LoadBalancerSettings loadBalancerSettings;
						};
						TrafficPolicy trafficPolicy;
						int servicePort;
						std::string gatewayUniqueId;
						std::string gmtCreate;
						std::string gmtModified;
						long id;
						long serviceId;
					};
					std::string groupName;
					std::vector<VersionDetailsItem> versionDetails;
					std::string sourceType;
					long sourceId;
					std::string metaInfo;
					std::string gmtModified;
					std::string healthStatus;
					std::string healthCheck;
					std::vector<std::string> ports;
					std::string _namespace;
					long gatewayId;
					std::vector<std::string> ips;
					std::string name;
					std::string gatewayUniqueId;
					std::string gmtCreate;
					std::vector<VersionsItem> versions;
					std::string serviceNameInRegistry;
					std::string serviceProtocol;
					long id;
					std::vector<LabelDetailsItem> labelDetails;
					GatewayTrafficPolicy gatewayTrafficPolicy;
					std::vector<PortTrafficPolicyListItem> portTrafficPolicyList;
				};


				GetGatewayServiceDetailResult();
				explicit GetGatewayServiceDetailResult(const std::string &payload);
				~GetGatewayServiceDetailResult();
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
#endif // !ALIBABACLOUD_MSE_MODEL_GETGATEWAYSERVICEDETAILRESULT_H_