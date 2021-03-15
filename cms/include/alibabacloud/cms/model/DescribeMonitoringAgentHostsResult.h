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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEMONITORINGAGENTHOSTSRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEMONITORINGAGENTHOSTSRESULT_H_

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
			class ALIBABACLOUD_CMS_EXPORT DescribeMonitoringAgentHostsResult : public ServiceResult
			{
			public:
				struct Host
				{
					std::string operatingSystem;
					std::string instanceId;
					std::string agentVersion;
					std::string instanceTypeFamily;
					bool isAliyunHost;
					std::string natIp;
					std::string serialNumber;
					std::string networkType;
					std::string eipAddress;
					std::string region;
					std::string eipId;
					std::string ipGroup;
					std::string hostName;
					long aliUid;
				};


				DescribeMonitoringAgentHostsResult();
				explicit DescribeMonitoringAgentHostsResult(const std::string &payload);
				~DescribeMonitoringAgentHostsResult();
				std::vector<Host> getHosts()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				int getPageTotal()const;
				int getTotal()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Host> hosts_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				int pageTotal_;
				int total_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEMONITORINGAGENTHOSTSRESULT_H_