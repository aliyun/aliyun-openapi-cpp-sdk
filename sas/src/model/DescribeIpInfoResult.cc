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

#include <alibabacloud/sas/model/DescribeIpInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeIpInfoResult::DescribeIpInfoResult() :
	ServiceResult()
{}

DescribeIpInfoResult::DescribeIpInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIpInfoResult::~DescribeIpInfoResult()
{}

void DescribeIpInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ip"].isNull())
		ip_ = value["ip"].asString();
	if(!value["geo"].isNull())
		geo_ = value["geo"].asString();
	if(!value["is_proxy"].isNull())
		is_proxy_ = value["is_proxy"].asString();
	if(!value["gmt_last_tor"].isNull())
		gmt_last_tor_ = value["gmt_last_tor"].asString();
	if(!value["tor_day_trace"].isNull())
		tor_day_trace_ = value["tor_day_trace"].asString();
	if(!value["total_day_cnt_tor"].isNull())
		total_day_cnt_tor_ = value["total_day_cnt_tor"].asString();
	if(!value["day_cnt_7d_tor"].isNull())
		day_cnt_7d_tor_ = value["day_cnt_7d_tor"].asString();
	if(!value["day_cnt_30d_tor"].isNull())
		day_cnt_30d_tor_ = value["day_cnt_30d_tor"].asString();
	if(!value["is_tor"].isNull())
		is_tor_ = value["is_tor"].asString();
	if(!value["gmt_last_web_attack"].isNull())
		gmt_last_web_attack_ = value["gmt_last_web_attack"].asString();
	if(!value["web_attack_day_trace"].isNull())
		web_attack_day_trace_ = value["web_attack_day_trace"].asString();
	if(!value["total_day_cnt_web_attack"].isNull())
		total_day_cnt_web_attack_ = value["total_day_cnt_web_attack"].asString();
	if(!value["day_cnt_7d_web_attack"].isNull())
		day_cnt_7d_web_attack_ = value["day_cnt_7d_web_attack"].asString();
	if(!value["day_cnt_30d_web_attack"].isNull())
		day_cnt_30d_web_attack_ = value["day_cnt_30d_web_attack"].asString();
	if(!value["is_web_attack"].isNull())
		is_web_attack_ = value["is_web_attack"].asString();
	if(!value["gmt_last_proxy"].isNull())
		gmt_last_proxy_ = value["gmt_last_proxy"].asString();
	if(!value["proxy_day_trace"].isNull())
		proxy_day_trace_ = value["proxy_day_trace"].asString();
	if(!value["is_proxy_1d"].isNull())
		is_proxy_1d_ = value["is_proxy_1d"].asString();
	if(!value["is_proxy_7d"].isNull())
		is_proxy_7d_ = value["is_proxy_7d"].asString();
	if(!value["is_tor_1d"].isNull())
		is_tor_1d_ = value["is_tor_1d"].asString();
	if(!value["is_tor_7d"].isNull())
		is_tor_7d_ = value["is_tor_7d"].asString();
	if(!value["is_web_attack_1d"].isNull())
		is_web_attack_1d_ = value["is_web_attack_1d"].asString();
	if(!value["is_web_attack_7d"].isNull())
		is_web_attack_7d_ = value["is_web_attack_7d"].asString();
	if(!value["is_web_attack_30d"].isNull())
		is_web_attack_30d_ = value["is_web_attack_30d"].asString();
	if(!value["province"].isNull())
		province_ = value["province"].asString();
	if(!value["city"].isNull())
		city_ = value["city"].asString();
	if(!value["isp"].isNull())
		isp_ = value["isp"].asString();
	if(!value["country"].isNull())
		country_ = value["country"].asString();
	if(!value["gmt_last_nat"].isNull())
		gmt_last_nat_ = value["gmt_last_nat"].asString();
	if(!value["nat_day_trace"].isNull())
		nat_day_trace_ = value["nat_day_trace"].asString();
	if(!value["is_nat"].isNull())
		is_nat_ = value["is_nat"].asString();
	if(!value["is_nat_1d"].isNull())
		is_nat_1d_ = value["is_nat_1d"].asString();
	if(!value["is_nat_7d"].isNull())
		is_nat_7d_ = value["is_nat_7d"].asString();
	if(!value["gmt_first_mining_pool"].isNull())
		gmt_first_mining_pool_ = value["gmt_first_mining_pool"].asString();
	if(!value["gmt_last_mining_pool"].isNull())
		gmt_last_mining_pool_ = value["gmt_last_mining_pool"].asString();
	if(!value["mining_pool_day_trace"].isNull())
		mining_pool_day_trace_ = value["mining_pool_day_trace"].asString();
	if(!value["is_mining_pool"].isNull())
		is_mining_pool_ = value["is_mining_pool"].asString();
	if(!value["is_mining_pool_1d"].isNull())
		is_mining_pool_1d_ = value["is_mining_pool_1d"].asString();
	if(!value["is_mining_pool_7d"].isNull())
		is_mining_pool_7d_ = value["is_mining_pool_7d"].asString();
	if(!value["gmt_first_c2"].isNull())
		gmt_first_c2_ = value["gmt_first_c2"].asString();
	if(!value["gmt_last_c2"].isNull())
		gmt_last_c2_ = value["gmt_last_c2"].asString();
	if(!value["c2_day_trace"].isNull())
		c2_day_trace_ = value["c2_day_trace"].asString();
	if(!value["is_c2"].isNull())
		is_c2_ = value["is_c2"].asString();
	if(!value["is_c2_1d"].isNull())
		is_c2_1d_ = value["is_c2_1d"].asString();
	if(!value["is_c2_7d"].isNull())
		is_c2_7d_ = value["is_c2_7d"].asString();
	if(!value["gmt_last_malicious_source"].isNull())
		gmt_last_malicious_source_ = value["gmt_last_malicious_source"].asString();
	if(!value["malicious_source_day_trace"].isNull())
		malicious_source_day_trace_ = value["malicious_source_day_trace"].asString();
	if(!value["is_malicious_source"].isNull())
		is_malicious_source_ = value["is_malicious_source"].asString();
	if(!value["is_malicious_source_1d"].isNull())
		is_malicious_source_1d_ = value["is_malicious_source_1d"].asString();
	if(!value["is_malicious_source_7d"].isNull())
		is_malicious_source_7d_ = value["is_malicious_source_7d"].asString();
	if(!value["is_malicious_source_30d"].isNull())
		is_malicious_source_30d_ = value["is_malicious_source_30d"].asString();
	if(!value["is_idc"].isNull())
		is_idc_ = value["is_idc"].asString();
	if(!value["idc_name"].isNull())
		idc_name_ = value["idc_name"].asString();
	if(!value["is_malicious_login"].isNull())
		is_malicious_login_ = value["is_malicious_login"].asString();
	if(!value["gmt_last_malicious_login"].isNull())
		gmt_last_malicious_login_ = value["gmt_last_malicious_login"].asString();
	if(!value["malicious_login_day_trace"].isNull())
		malicious_login_day_trace_ = value["malicious_login_day_trace"].asString();
	if(!value["is_malicious_login_1d"].isNull())
		is_malicious_login_1d_ = value["is_malicious_login_1d"].asString();
	if(!value["is_malicious_login_7d"].isNull())
		is_malicious_login_7d_ = value["is_malicious_login_7d"].asString();
	if(!value["malicious_score"].isNull())
		malicious_score_ = value["malicious_score"].asString();
	if(!value["tags"].isNull())
		tags_ = value["tags"].asString();
	if(!value["rdns"].isNull())
		rdns_ = value["rdns"].asString();

}

std::string DescribeIpInfoResult::getGmt_first_c2()const
{
	return gmt_first_c2_;
}

std::string DescribeIpInfoResult::getIs_malicious_source_30d()const
{
	return is_malicious_source_30d_;
}

std::string DescribeIpInfoResult::getIs_tor_1d()const
{
	return is_tor_1d_;
}

std::string DescribeIpInfoResult::getC2_day_trace()const
{
	return c2_day_trace_;
}

std::string DescribeIpInfoResult::getGmt_last_c2()const
{
	return gmt_last_c2_;
}

std::string DescribeIpInfoResult::getDay_cnt_30d_tor()const
{
	return day_cnt_30d_tor_;
}

std::string DescribeIpInfoResult::getNat_day_trace()const
{
	return nat_day_trace_;
}

std::string DescribeIpInfoResult::getMining_pool_day_trace()const
{
	return mining_pool_day_trace_;
}

std::string DescribeIpInfoResult::getIs_nat_1d()const
{
	return is_nat_1d_;
}

std::string DescribeIpInfoResult::getMalicious_source_day_trace()const
{
	return malicious_source_day_trace_;
}

std::string DescribeIpInfoResult::getTags()const
{
	return tags_;
}

std::string DescribeIpInfoResult::getIs_idc()const
{
	return is_idc_;
}

std::string DescribeIpInfoResult::getIs_c2_7d()const
{
	return is_c2_7d_;
}

std::string DescribeIpInfoResult::getGmt_last_malicious_login()const
{
	return gmt_last_malicious_login_;
}

std::string DescribeIpInfoResult::getIs_proxy()const
{
	return is_proxy_;
}

std::string DescribeIpInfoResult::getDay_cnt_7d_web_attack()const
{
	return day_cnt_7d_web_attack_;
}

std::string DescribeIpInfoResult::getCity()const
{
	return city_;
}

std::string DescribeIpInfoResult::getProvince()const
{
	return province_;
}

std::string DescribeIpInfoResult::getGeo()const
{
	return geo_;
}

std::string DescribeIpInfoResult::getGmt_last_nat()const
{
	return gmt_last_nat_;
}

std::string DescribeIpInfoResult::getIs_malicious_login_7d()const
{
	return is_malicious_login_7d_;
}

std::string DescribeIpInfoResult::getMalicious_login_day_trace()const
{
	return malicious_login_day_trace_;
}

std::string DescribeIpInfoResult::getRdns()const
{
	return rdns_;
}

std::string DescribeIpInfoResult::getIs_proxy_7d()const
{
	return is_proxy_7d_;
}

std::string DescribeIpInfoResult::getIs_web_attack_7d()const
{
	return is_web_attack_7d_;
}

std::string DescribeIpInfoResult::getIs_web_attack_30d()const
{
	return is_web_attack_30d_;
}

std::string DescribeIpInfoResult::getIs_mining_pool_1d()const
{
	return is_mining_pool_1d_;
}

std::string DescribeIpInfoResult::getTotal_day_cnt_web_attack()const
{
	return total_day_cnt_web_attack_;
}

std::string DescribeIpInfoResult::getCountry()const
{
	return country_;
}

std::string DescribeIpInfoResult::getIs_malicious_source_7d()const
{
	return is_malicious_source_7d_;
}

std::string DescribeIpInfoResult::getGmt_last_proxy()const
{
	return gmt_last_proxy_;
}

std::string DescribeIpInfoResult::getIs_nat()const
{
	return is_nat_;
}

std::string DescribeIpInfoResult::getIs_web_attack()const
{
	return is_web_attack_;
}

std::string DescribeIpInfoResult::getGmt_last_tor()const
{
	return gmt_last_tor_;
}

std::string DescribeIpInfoResult::getIp()const
{
	return ip_;
}

std::string DescribeIpInfoResult::getTotal_day_cnt_tor()const
{
	return total_day_cnt_tor_;
}

std::string DescribeIpInfoResult::getIs_tor_7d()const
{
	return is_tor_7d_;
}

std::string DescribeIpInfoResult::getWeb_attack_day_trace()const
{
	return web_attack_day_trace_;
}

std::string DescribeIpInfoResult::getIs_nat_7d()const
{
	return is_nat_7d_;
}

std::string DescribeIpInfoResult::getIs_malicious_login()const
{
	return is_malicious_login_;
}

std::string DescribeIpInfoResult::getIs_mining_pool()const
{
	return is_mining_pool_;
}

std::string DescribeIpInfoResult::getIdc_name()const
{
	return idc_name_;
}

std::string DescribeIpInfoResult::getIs_malicious_source()const
{
	return is_malicious_source_;
}

std::string DescribeIpInfoResult::getIs_c2_1d()const
{
	return is_c2_1d_;
}

std::string DescribeIpInfoResult::getProxy_day_trace()const
{
	return proxy_day_trace_;
}

std::string DescribeIpInfoResult::getIsp()const
{
	return isp_;
}

std::string DescribeIpInfoResult::getTor_day_trace()const
{
	return tor_day_trace_;
}

std::string DescribeIpInfoResult::getDay_cnt_30d_web_attack()const
{
	return day_cnt_30d_web_attack_;
}

std::string DescribeIpInfoResult::getDay_cnt_7d_tor()const
{
	return day_cnt_7d_tor_;
}

std::string DescribeIpInfoResult::getIs_tor()const
{
	return is_tor_;
}

std::string DescribeIpInfoResult::getIs_malicious_source_1d()const
{
	return is_malicious_source_1d_;
}

std::string DescribeIpInfoResult::getIs_malicious_login_1d()const
{
	return is_malicious_login_1d_;
}

std::string DescribeIpInfoResult::getMalicious_score()const
{
	return malicious_score_;
}

std::string DescribeIpInfoResult::getIs_proxy_1d()const
{
	return is_proxy_1d_;
}

std::string DescribeIpInfoResult::getGmt_last_malicious_source()const
{
	return gmt_last_malicious_source_;
}

std::string DescribeIpInfoResult::getGmt_first_mining_pool()const
{
	return gmt_first_mining_pool_;
}

std::string DescribeIpInfoResult::getGmt_last_web_attack()const
{
	return gmt_last_web_attack_;
}

std::string DescribeIpInfoResult::getIs_web_attack_1d()const
{
	return is_web_attack_1d_;
}

std::string DescribeIpInfoResult::getGmt_last_mining_pool()const
{
	return gmt_last_mining_pool_;
}

std::string DescribeIpInfoResult::getIs_mining_pool_7d()const
{
	return is_mining_pool_7d_;
}

std::string DescribeIpInfoResult::getIs_c2()const
{
	return is_c2_;
}

