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

#ifndef ALIBABACLOUD_GEOIP_MODEL_DESCRIBEIPV4LOCATIONRESULT_H_
#define ALIBABACLOUD_GEOIP_MODEL_DESCRIBEIPV4LOCATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/geoip/GeoipExport.h>

namespace AlibabaCloud
{
	namespace Geoip
	{
		namespace Model
		{
			class ALIBABACLOUD_GEOIP_EXPORT DescribeIpv4LocationResult : public ServiceResult
			{
			public:


				DescribeIpv4LocationResult();
				explicit DescribeIpv4LocationResult(const std::string &payload);
				~DescribeIpv4LocationResult();
				std::string getProvinceEn()const;
				std::string getCityEn()const;
				std::string getIp()const;
				std::string getIsp()const;
				std::string getCountry()const;
				std::string getLatitude()const;
				std::string getCity()const;
				std::string getCountryCode()const;
				std::string getCounty()const;
				std::string getLongitude()const;
				std::string getProvince()const;
				std::string getCountryEn()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string provinceEn_;
				std::string cityEn_;
				std::string ip_;
				std::string isp_;
				std::string country_;
				std::string latitude_;
				std::string city_;
				std::string countryCode_;
				std::string county_;
				std::string longitude_;
				std::string province_;
				std::string countryEn_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GEOIP_MODEL_DESCRIBEIPV4LOCATIONRESULT_H_