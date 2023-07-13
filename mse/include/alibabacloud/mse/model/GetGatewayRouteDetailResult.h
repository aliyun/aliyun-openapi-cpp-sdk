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

#ifndef ALIBABACLOUD_MSE_MODEL_GETGATEWAYROUTEDETAILRESULT_H_
#define ALIBABACLOUD_MSE_MODEL_GETGATEWAYROUTEDETAILRESULT_H_

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
			class ALIBABACLOUD_MSE_EXPORT GetGatewayRouteDetailResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct RoutePredicates
					{
						struct PathPredicates
						{
							std::string path;
							std::string type;
							bool ignoreCase;
						};
						struct HeaderPredicatesItem
						{
							std::string type;
							std::string value;
							std::string key;
						};
						struct QueryPredicatesItem
						{
							std::string type;
							std::string value;
							std::string key;
						};
						std::vector<HeaderPredicatesItem> headerPredicates;
						std::vector<std::string> methodPredicates;
						std::vector<QueryPredicatesItem> queryPredicates;
						PathPredicates pathPredicates;
					};
					struct HTTPRewrite
					{
						std::string status;
						std::string path;
						std::string pathType;
						std::string pattern;
						std::string substitution;
						std::string host;
					};
					struct HeaderOp
					{
						struct HeaderOpItemsItem
						{
							std::string directionType;
							std::string value;
							std::string opType;
							std::string key;
						};
						std::string status;
						std::vector<HeaderOpItemsItem> headerOpItems;
					};
					struct DirectResponse
					{
						int code;
						std::string body;
					};
					struct Cors
					{
						std::string status;
						std::string allowOrigins;
						bool allowCredentials;
						std::string exposeHeaders;
						long unitNum;
						std::string allowHeaders;
						std::string timeUnit;
						std::string allowMethods;
					};
					struct Timeout
					{
						std::string status;
						int unitNum;
						std::string timeUnit;
					};
					struct Retry
					{
						std::string status;
						std::vector<std::string> httpCodes;
						int attempts;
						std::vector<std::string> retryOn;
					};
					struct Redirect
					{
						std::string path;
						std::string host;
						int code;
					};
					struct RouteServicesItem
					{
						std::string groupName;
						std::string agreementType;
						int servicePort;
						std::string serviceName;
						int percent;
						std::string version;
						std::string sourceType;
						std::string _namespace;
						long serviceId;
						std::string name;
					};
					struct FallbackServicesItem
					{
						std::string groupName;
						std::string agreementType;
						int servicePort;
						std::string serviceName;
						int percent;
						std::string version;
						std::string sourceType;
						std::string _namespace;
						long serviceId;
						std::string name;
					};
					std::string policies;
					std::string gmtModified;
					std::string destinationType;
					HeaderOp headerOp;
					std::string name;
					std::vector<std::string> domainIdList;
					std::vector<FallbackServicesItem> fallbackServices;
					std::vector<std::string> domainNameList;
					DirectResponse directResponse;
					std::string defaultServiceName;
					int status;
					std::string domainName;
					Timeout timeout;
					long defaultServiceId;
					RoutePredicates routePredicates;
					Redirect redirect;
					long gatewayId;
					Cors cors;
					int ahasStatus;
					std::string gatewayUniqueId;
					std::string services;
					std::string gmtCreate;
					bool enableWaf;
					int routeOrder;
					long domainId;
					bool fallback;
					Retry retry;
					long id;
					HTTPRewrite hTTPRewrite;
					std::string predicates;
					std::vector<RouteServicesItem> routeServices;
				};


				GetGatewayRouteDetailResult();
				explicit GetGatewayRouteDetailResult(const std::string &payload);
				~GetGatewayRouteDetailResult();
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
#endif // !ALIBABACLOUD_MSE_MODEL_GETGATEWAYROUTEDETAILRESULT_H_