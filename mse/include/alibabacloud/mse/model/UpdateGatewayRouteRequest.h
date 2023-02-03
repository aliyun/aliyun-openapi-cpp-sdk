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

#ifndef ALIBABACLOUD_MSE_MODEL_UPDATEGATEWAYROUTEREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_UPDATEGATEWAYROUTEREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT UpdateGatewayRouteRequest : public RpcServiceRequest {
public:
	struct Services {
		struct HttpDubboTranscoder {
			std::string dubboServiceName;
			struct MothedMapListItem {
				std::string httpMothed;
				struct ParamMapsListItem {
					std::string extractKeySpec;
					std::string extractKey;
					std::string mappingType;
				};
				ParamMapsListItem paramMapsListItem;
				std::vector<ParamMapsListItem> paramMapsList;
				std::string mothedpath;
				std::string dubboMothedName;
				std::string passThroughAllHeaders;
				std::string string;
				std::vector<std::string> passThroughList;
			};
			MothedMapListItem mothedMapListItem;
			std::vector<MothedMapListItem> mothedMapList;
			std::string dubboServiceVersion;
			std::string dubboServiceGroup;
		};
		HttpDubboTranscoder httpDubboTranscoder;
		std::string agreementType;
		std::string name;
		std::string _namespace;
		std::string sourceType;
		long serviceId;
		int percent;
		std::string version;
		std::string groupName;
		int servicePort;
	};
	struct Predicates {
		struct PathPredicates {
			std::string path;
			bool ignoreCase;
			std::string type;
		};
		PathPredicates pathPredicates;
		std::string string;
		std::vector<std::string> methodPredicates;
		struct HeaderPredicatesItem {
			std::string type;
			std::string value;
			std::string key;
		};
		HeaderPredicatesItem headerPredicatesItem;
		std::vector<HeaderPredicatesItem> headerPredicates;
		struct QueryPredicatesItem {
			std::string type;
			std::string value;
			std::string key;
		};
		QueryPredicatesItem queryPredicatesItem;
		std::vector<QueryPredicatesItem> queryPredicates;
	};
	struct RedirectJSON {
		std::string path;
		int code;
		std::string host;
	};
	struct DirectResponseJSON {
		long code;
		std::string body;
	};
	struct FallbackServices {
		std::string agreementType;
		std::string name;
		std::string _namespace;
		std::string sourceType;
		long serviceId;
		int percent;
		std::string version;
		std::string groupName;
		int servicePort;
	};
	UpdateGatewayRouteRequest();
	~UpdateGatewayRouteRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getGatewayUniqueId() const;
	void setGatewayUniqueId(const std::string &gatewayUniqueId);
	std::string getDestinationType() const;
	void setDestinationType(const std::string &destinationType);
	std::string getDomainIdListJSON() const;
	void setDomainIdListJSON(const std::string &domainIdListJSON);
	long getId() const;
	void setId(long id);
	long getGatewayId() const;
	void setGatewayId(long gatewayId);
	int getRouteOrder() const;
	void setRouteOrder(int routeOrder);
	bool getEnableWaf() const;
	void setEnableWaf(bool enableWaf);
	std::vector<Services> getServices() const;
	void setServices(const std::vector<Services> &services);
	Predicates getPredicates() const;
	void setPredicates(const Predicates &predicates);
	RedirectJSON getRedirectJSON() const;
	void setRedirectJSON(const RedirectJSON &redirectJSON);
	DirectResponseJSON getDirectResponseJSON() const;
	void setDirectResponseJSON(const DirectResponseJSON &directResponseJSON);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::vector<FallbackServices> getFallbackServices() const;
	void setFallbackServices(const std::vector<FallbackServices> &fallbackServices);
	bool getFallback() const;
	void setFallback(bool fallback);

private:
	std::string mseSessionId_;
	std::string gatewayUniqueId_;
	std::string destinationType_;
	std::string domainIdListJSON_;
	long id_;
	long gatewayId_;
	int routeOrder_;
	bool enableWaf_;
	std::vector<Services> services_;
	Predicates predicates_;
	RedirectJSON redirectJSON_;
	DirectResponseJSON directResponseJSON_;
	std::string name_;
	std::string acceptLanguage_;
	std::vector<FallbackServices> fallbackServices_;
	bool fallback_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_UPDATEGATEWAYROUTEREQUEST_H_
