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

#include <alibabacloud/geoip/model/DescribeIpv6LocationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Geoip;
using namespace AlibabaCloud::Geoip::Model;

DescribeIpv6LocationResult::DescribeIpv6LocationResult() :
	ServiceResult()
{}

DescribeIpv6LocationResult::DescribeIpv6LocationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIpv6LocationResult::~DescribeIpv6LocationResult()
{}

void DescribeIpv6LocationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Ip"].isNull())
		ip_ = value["Ip"].asString();
	if(!value["Country"].isNull())
		country_ = value["Country"].asString();
	if(!value["Province"].isNull())
		province_ = value["Province"].asString();
	if(!value["City"].isNull())
		city_ = value["City"].asString();
	if(!value["County"].isNull())
		county_ = value["County"].asString();
	if(!value["Isp"].isNull())
		isp_ = value["Isp"].asString();
	if(!value["CountryCode"].isNull())
		countryCode_ = value["CountryCode"].asString();
	if(!value["CountryEn"].isNull())
		countryEn_ = value["CountryEn"].asString();
	if(!value["ProvinceEn"].isNull())
		provinceEn_ = value["ProvinceEn"].asString();
	if(!value["CityEn"].isNull())
		cityEn_ = value["CityEn"].asString();
	if(!value["Longitude"].isNull())
		longitude_ = value["Longitude"].asString();
	if(!value["Latitude"].isNull())
		latitude_ = value["Latitude"].asString();

}

std::string DescribeIpv6LocationResult::getProvinceEn()const
{
	return provinceEn_;
}

std::string DescribeIpv6LocationResult::getCityEn()const
{
	return cityEn_;
}

std::string DescribeIpv6LocationResult::getIp()const
{
	return ip_;
}

std::string DescribeIpv6LocationResult::getIsp()const
{
	return isp_;
}

std::string DescribeIpv6LocationResult::getCountry()const
{
	return country_;
}

std::string DescribeIpv6LocationResult::getLatitude()const
{
	return latitude_;
}

std::string DescribeIpv6LocationResult::getCity()const
{
	return city_;
}

std::string DescribeIpv6LocationResult::getCountryCode()const
{
	return countryCode_;
}

std::string DescribeIpv6LocationResult::getCounty()const
{
	return county_;
}

std::string DescribeIpv6LocationResult::getLongitude()const
{
	return longitude_;
}

std::string DescribeIpv6LocationResult::getProvince()const
{
	return province_;
}

std::string DescribeIpv6LocationResult::getCountryEn()const
{
	return countryEn_;
}

