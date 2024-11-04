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

#ifndef ALIBABACLOUD_ALB_MODEL_LISTRULESRESULT_H_
#define ALIBABACLOUD_ALB_MODEL_LISTRULESRESULT_H_

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
			class ALIBABACLOUD_ALB_EXPORT ListRulesResult : public ServiceResult
			{
			public:
				struct Rule
				{
					struct Action
					{
						struct FixedResponseConfig
						{
							std::string httpCode;
							std::string contentType;
							std::string content;
						};
						struct ForwardGroupConfig
						{
							struct ServerGroupStickySession
							{
								int timeout;
								bool enabled;
							};
							struct ServerGroupTuple
							{
								std::string serverGroupId;
								int weight;
							};
							ServerGroupStickySession serverGroupStickySession;
							std::vector<ServerGroupTuple> serverGroupTuples;
						};
						struct InsertHeaderConfig
						{
							bool coverEnabled;
							std::string valueType;
							std::string value;
							std::string key;
						};
						struct RedirectConfig
						{
							std::string path;
							std::string httpCode;
							std::string query;
							std::string port;
							std::string host;
							std::string protocol;
						};
						struct RemoveHeaderConfig
						{
							std::string key;
						};
						struct RewriteConfig
						{
							std::string path;
							std::string query;
							std::string host;
						};
						struct TrafficMirrorConfig
						{
							struct MirrorGroupConfig
							{
								struct ServerGroupTuple2
								{
									std::string serverGroupId;
									int weight;
								};
								std::vector<ServerGroupTuple2> serverGroupTuples1;
							};
							MirrorGroupConfig mirrorGroupConfig;
							std::string targetType;
						};
						struct TrafficLimitConfig
						{
							int perIpQps;
							int qPS;
						};
						struct CorsConfig
						{
							std::string allowCredentials;
							std::vector<std::string> exposeHeaders;
							std::vector<std::string> allowOrigin;
							std::vector<std::string> allowHeaders;
							long maxAge;
							std::vector<std::string> allowMethods;
						};
						int order;
						FixedResponseConfig fixedResponseConfig;
						std::string type;
						RedirectConfig redirectConfig;
						CorsConfig corsConfig;
						ForwardGroupConfig forwardGroupConfig;
						RemoveHeaderConfig removeHeaderConfig;
						InsertHeaderConfig insertHeaderConfig;
						RewriteConfig rewriteConfig;
						TrafficLimitConfig trafficLimitConfig;
						TrafficMirrorConfig trafficMirrorConfig;
					};
					struct Condition
					{
						struct CookieConfig
						{
							struct Value
							{
								std::string value;
								std::string key;
							};
							std::vector<Value> values;
						};
						struct HeaderConfig
						{
							std::vector<std::string> values3;
							std::string key;
						};
						struct HostConfig
						{
							std::vector<std::string> values4;
						};
						struct MethodConfig
						{
							std::vector<std::string> values5;
						};
						struct PathConfig
						{
							std::vector<std::string> values6;
						};
						struct QueryStringConfig
						{
							struct Value8
							{
								std::string value;
								std::string key;
							};
							std::vector<Value8> values7;
						};
						struct SourceIpConfig
						{
							std::vector<std::string> values9;
						};
						struct ResponseStatusCodeConfig
						{
							std::vector<std::string> values10;
						};
						struct ResponseHeaderConfig
						{
							std::string key;
							std::vector<std::string> values11;
						};
						MethodConfig methodConfig;
						PathConfig pathConfig;
						std::string type;
						ResponseHeaderConfig responseHeaderConfig;
						HostConfig hostConfig;
						QueryStringConfig queryStringConfig;
						CookieConfig cookieConfig;
						ResponseStatusCodeConfig responseStatusCodeConfig;
						HeaderConfig headerConfig;
						SourceIpConfig sourceIpConfig;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::vector<Rule::Action> ruleActions;
					bool serviceManagedEnabled;
					int priority;
					std::string ruleId;
					std::string serviceManagedMode;
					std::vector<Rule::Condition> ruleConditions;
					std::string loadBalancerId;
					std::string ruleStatus;
					std::string direction;
					std::vector<Rule::Tag> tags;
					std::string ruleName;
					std::string listenerId;
				};


				ListRulesResult();
				explicit ListRulesResult(const std::string &payload);
				~ListRulesResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;
				std::vector<Rule> getRules()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				int maxResults_;
				std::vector<Rule> rules_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALB_MODEL_LISTRULESRESULT_H_