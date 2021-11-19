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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBESITEMONITORATTRIBUTERESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBESITEMONITORATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT DescribeSiteMonitorAttributeResult : public ServiceResult
			{
			public:
				struct SiteMonitors
				{
					struct OptionJson
					{
						std::string ipv6_task;
						int ping_num;
						bool unfollow_redirect;
						long traceroute;
						int port;
						std::string expect_value;
						std::string http_method;
						std::string response_content;
						long attempts;
						std::string dns_type;
						std::string protocol;
						std::string password;
						std::string cookie;
						bool enable_operator_dns;
						bool proxy_protocol;
						std::string dns_match_rule;
						float failure_rate;
						int match_rule;
						std::string acceptable_response_code;
						std::string response_format;
						long time_out;
						bool cert_verify;
						std::string header;
						std::string username;
						int authentication;
						std::string request_content;
						std::string dns_server;
						std::string request_format;
					};
					struct IspCity
					{
						std::string ispName;
						std::string isp;
						std::string city;
						std::string cityName;
					};
					OptionJson optionJson;
					std::string taskId;
					std::string endTime;
					std::string address;
					std::string taskName;
					std::string taskType;
					std::vector<IspCity> ispCities;
					std::string taskState;
					std::string interval;
				};
				struct MetricRule
				{
					std::string comparisonOperator;
					std::string ruleId;
					std::string evaluationCount;
					std::string period;
					std::string dimensions;
					std::string _namespace;
					std::string statistics;
					std::string alarmActions;
					std::string metricName;
					std::string okActions;
					std::string expression;
					std::string actionEnable;
					std::string stateValue;
					std::string level;
					std::string ruleName;
					std::string threshold;
				};


				DescribeSiteMonitorAttributeResult();
				explicit DescribeSiteMonitorAttributeResult(const std::string &payload);
				~DescribeSiteMonitorAttributeResult();
				std::vector<MetricRule> getMetricRules()const;
				std::string getMessage()const;
				std::string getCode()const;
				SiteMonitors getSiteMonitors()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<MetricRule> metricRules_;
				std::string message_;
				std::string code_;
				SiteMonitors siteMonitors_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBESITEMONITORATTRIBUTERESULT_H_