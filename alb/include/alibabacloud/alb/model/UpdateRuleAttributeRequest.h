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

#ifndef ALIBABACLOUD_ALB_MODEL_UPDATERULEATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_ALB_MODEL_UPDATERULEATTRIBUTEREQUEST_H_

#include <alibabacloud/alb/AlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alb {
namespace Model {
class ALIBABACLOUD_ALB_EXPORT UpdateRuleAttributeRequest : public RpcServiceRequest {
public:
	struct RuleActions {
		struct FixedResponseConfig {
			std::string httpCode;
			std::string content;
			std::string contentType;
		};
		FixedResponseConfig fixedResponseConfig;
		struct TrafficMirrorConfig {
			struct MirrorGroupConfig {
				struct ServerGroupTuplesItem {
					std::string serverGroupId;
				};
				ServerGroupTuplesItem serverGroupTuplesItem;
				std::vector<ServerGroupTuplesItem> serverGroupTuples;
			};
			MirrorGroupConfig mirrorGroupConfig;
			std::string targetType;
		};
		TrafficMirrorConfig trafficMirrorConfig;
		struct ForwardGroupConfig {
			struct ServerGroupStickySession {
				bool enabled;
				int timeout;
			};
			ServerGroupStickySession serverGroupStickySession;
			struct ServerGroupTuplesItem {
				std::string serverGroupId;
				int weight;
			};
			ServerGroupTuplesItem serverGroupTuplesItem;
			std::vector<ServerGroupTuplesItem> serverGroupTuples;
		};
		ForwardGroupConfig forwardGroupConfig;
		struct RemoveHeaderConfig {
			std::string key;
		};
		RemoveHeaderConfig removeHeaderConfig;
		struct InsertHeaderConfig {
			std::string valueType;
			bool coverEnabled;
			std::string value;
			std::string key;
		};
		InsertHeaderConfig insertHeaderConfig;
		struct TrafficLimitConfig {
			int qPS;
			int perIpQps;
		};
		TrafficLimitConfig trafficLimitConfig;
		struct CorsConfig {
			std::string allowCredentials;
			std::string string;
			std::vector<std::string> allowOrigin;
			long maxAge;
			std::string string;
			std::vector<std::string> allowMethods;
			std::string string;
			std::vector<std::string> allowHeaders;
			std::string string;
			std::vector<std::string> exposeHeaders;
		};
		CorsConfig corsConfig;
		struct RedirectConfig {
			std::string path;
			std::string protocol;
			std::string port;
			std::string query;
			std::string host;
			std::string httpCode;
		};
		RedirectConfig redirectConfig;
		std::string type;
		int order;
		struct RewriteConfig {
			std::string path;
			std::string query;
			std::string host;
		};
		RewriteConfig rewriteConfig;
	};
	struct RuleConditions {
		struct MethodConfig {
			std::string string;
			std::vector<std::string> values;
		};
		MethodConfig methodConfig;
		struct SourceIpConfig {
			std::string string;
			std::vector<std::string> values;
		};
		SourceIpConfig sourceIpConfig;
		struct HostConfig {
			std::string string;
			std::vector<std::string> values;
		};
		HostConfig hostConfig;
		struct QueryStringConfig {
			struct ValuesItem {
				std::string value;
				std::string key;
			};
			ValuesItem valuesItem;
			std::vector<ValuesItem> values;
		};
		QueryStringConfig queryStringConfig;
		struct ResponseStatusCodeConfig {
			std::string string;
			std::vector<std::string> values;
		};
		ResponseStatusCodeConfig responseStatusCodeConfig;
		struct PathConfig {
			std::string string;
			std::vector<std::string> values;
		};
		PathConfig pathConfig;
		struct CookieConfig {
			struct ValuesItem {
				std::string value;
				std::string key;
			};
			ValuesItem valuesItem;
			std::vector<ValuesItem> values;
		};
		CookieConfig cookieConfig;
		std::string type;
		struct HeaderConfig {
			std::string string;
			std::vector<std::string> values;
			std::string key;
		};
		HeaderConfig headerConfig;
		struct ResponseHeaderConfig {
			std::string string;
			std::vector<std::string> values;
			std::string key;
		};
		ResponseHeaderConfig responseHeaderConfig;
	};
	UpdateRuleAttributeRequest();
	~UpdateRuleAttributeRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	std::vector<RuleActions> getRuleActions() const;
	void setRuleActions(const std::vector<RuleActions> &ruleActions);
	std::vector<RuleConditions> getRuleConditions() const;
	void setRuleConditions(const std::vector<RuleConditions> &ruleConditions);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	int getPriority() const;
	void setPriority(int priority);
	std::string getRuleId() const;
	void setRuleId(const std::string &ruleId);

private:
	std::string clientToken_;
	std::string ruleName_;
	std::vector<RuleActions> ruleActions_;
	std::vector<RuleConditions> ruleConditions_;
	bool dryRun_;
	int priority_;
	std::string ruleId_;
};
} // namespace Model
} // namespace Alb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALB_MODEL_UPDATERULEATTRIBUTEREQUEST_H_
