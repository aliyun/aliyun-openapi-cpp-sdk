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

#ifndef ALIBABACLOUD_GEOIP_MODEL_DESCRIBEIPV4LOCATIONREQUEST_H_
#define ALIBABACLOUD_GEOIP_MODEL_DESCRIBEIPV4LOCATIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/geoip/GeoipExport.h>

namespace AlibabaCloud
{
	namespace Geoip
	{
		namespace Model
		{
			class ALIBABACLOUD_GEOIP_EXPORT DescribeIpv4LocationRequest : public RpcServiceRequest
			{

			public:
				DescribeIpv4LocationRequest();
				~DescribeIpv4LocationRequest();

				std::string getIp()const;
				void setIp(const std::string& ip);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				std::string getLang()const;
				void setLang(const std::string& lang);

            private:
				std::string ip_;
				std::string userClientIp_;
				std::string lang_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GEOIP_MODEL_DESCRIBEIPV4LOCATIONREQUEST_H_