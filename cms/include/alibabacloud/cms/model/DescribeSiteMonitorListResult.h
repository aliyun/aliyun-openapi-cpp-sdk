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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBESITEMONITORLISTRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBESITEMONITORLISTRESULT_H_

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
			class ALIBABACLOUD_CMS_EXPORT DescribeSiteMonitorListResult : public ServiceResult
			{
			public:
				struct SiteMonitor
				{
					struct OptionsJson
					{
						std::string cookie;
						int ping_num;
						bool enable_operator_dns;
						std::string dns_match_rule;
						long traceroute;
						float failure_rate;
						int port;
						int match_rule;
						std::string response_format;
						std::string expect_value;
						std::string http_method;
						long time_out;
						std::string group_id;
						std::string header;
						std::string response_content;
						std::string username;
						long attempts;
						int authentication;
						std::string request_content;
						std::string dns_server;
						std::string dns_type;
						std::string request_format;
						std::string protocol;
						std::string password;
					};
					std::string taskId;
					std::string endTime;
					std::string address;
					OptionsJson optionsJson;
					std::string taskName;
					std::string taskType;
					std::string createTime;
					std::string updateTime;
					std::string taskState;
					std::string interval;
				};


				DescribeSiteMonitorListResult();
				explicit DescribeSiteMonitorListResult(const std::string &payload);
				~DescribeSiteMonitorListResult();
				int getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::string getCode()const;
				std::vector<SiteMonitor> getSiteMonitors()const;
				std::string getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				std::string code_;
				std::vector<SiteMonitor> siteMonitors_;
				std::string success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBESITEMONITORLISTRESULT_H_