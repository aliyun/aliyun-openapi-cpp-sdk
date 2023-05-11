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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMMONITORAVAILABLECONFIGRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMMONITORAVAILABLECONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeDnsGtmMonitorAvailableConfigResult : public ServiceResult
			{
			public:
				struct Ipv4IspCityNode
				{
					std::string cityCode;
					std::string groupName;
					std::string ispName;
					std::string groupType;
					std::string cityName;
					std::string ispCode;
					bool defaultSelected;
					std::vector<std::string> ips;
				};
				struct DomainIpv4IspCityNode
				{
					std::string cityCode;
					std::string groupName;
					std::string ispName;
					std::string groupType;
					std::vector<std::string> ips1;
					std::string cityName;
					std::string ispCode;
					bool defaultSelected;
				};
				struct DomainIpv6IspCityNode
				{
					std::string cityCode;
					std::string groupName;
					std::string ispName;
					std::string groupType;
					std::vector<std::string> ips2;
					std::string cityName;
					std::string ispCode;
					bool defaultSelected;
				};
				struct Ipv6IspCityNode
				{
					std::string cityCode;
					std::string groupName;
					std::string ispName;
					std::string groupType;
					std::vector<std::string> ips3;
					std::string cityName;
					std::string ispCode;
					bool defaultSelected;
				};


				DescribeDnsGtmMonitorAvailableConfigResult();
				explicit DescribeDnsGtmMonitorAvailableConfigResult(const std::string &payload);
				~DescribeDnsGtmMonitorAvailableConfigResult();
				std::vector<Ipv4IspCityNode> getIpv4IspCityNodes()const;
				std::vector<DomainIpv4IspCityNode> getDomainIpv4IspCityNodes()const;
				std::vector<DomainIpv6IspCityNode> getDomainIpv6IspCityNodes()const;
				std::vector<Ipv6IspCityNode> getIpv6IspCityNodes()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Ipv4IspCityNode> ipv4IspCityNodes_;
				std::vector<DomainIpv4IspCityNode> domainIpv4IspCityNodes_;
				std::vector<DomainIpv6IspCityNode> domainIpv6IspCityNodes_;
				std::vector<Ipv6IspCityNode> ipv6IspCityNodes_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSGTMMONITORAVAILABLECONFIGRESULT_H_