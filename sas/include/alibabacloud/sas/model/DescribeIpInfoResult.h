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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEIPINFORESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEIPINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeIpInfoResult : public ServiceResult
			{
			public:


				DescribeIpInfoResult();
				explicit DescribeIpInfoResult(const std::string &payload);
				~DescribeIpInfoResult();
				std::string getGmt_first_c2()const;
				std::string getIs_malicious_source_30d()const;
				std::string getIs_tor_1d()const;
				std::string getC2_day_trace()const;
				std::string getGmt_last_c2()const;
				std::string getDay_cnt_30d_tor()const;
				std::string getNat_day_trace()const;
				std::string getMining_pool_day_trace()const;
				std::string getIs_nat_1d()const;
				std::string getMalicious_source_day_trace()const;
				std::string getTags()const;
				std::string getIs_idc()const;
				std::string getIs_c2_7d()const;
				std::string getGmt_last_malicious_login()const;
				std::string getIs_proxy()const;
				std::string getDay_cnt_7d_web_attack()const;
				std::string getCity()const;
				std::string getProvince()const;
				std::string getGeo()const;
				std::string getGmt_last_nat()const;
				std::string getIs_malicious_login_7d()const;
				std::string getMalicious_login_day_trace()const;
				std::string getRdns()const;
				std::string getIs_proxy_7d()const;
				std::string getIs_web_attack_7d()const;
				std::string getIs_web_attack_30d()const;
				std::string getIs_mining_pool_1d()const;
				std::string getTotal_day_cnt_web_attack()const;
				std::string getCountry()const;
				std::string getIs_malicious_source_7d()const;
				std::string getGmt_last_proxy()const;
				std::string getIs_nat()const;
				std::string getIs_web_attack()const;
				std::string getGmt_last_tor()const;
				std::string getIp()const;
				std::string getTotal_day_cnt_tor()const;
				std::string getIs_tor_7d()const;
				std::string getWeb_attack_day_trace()const;
				std::string getIs_nat_7d()const;
				std::string getIs_malicious_login()const;
				std::string getIs_mining_pool()const;
				std::string getIdc_name()const;
				std::string getIs_malicious_source()const;
				std::string getIs_c2_1d()const;
				std::string getProxy_day_trace()const;
				std::string getIsp()const;
				std::string getTor_day_trace()const;
				std::string getDay_cnt_30d_web_attack()const;
				std::string getDay_cnt_7d_tor()const;
				std::string getIs_tor()const;
				std::string getIs_malicious_source_1d()const;
				std::string getIs_malicious_login_1d()const;
				std::string getMalicious_score()const;
				std::string getIs_proxy_1d()const;
				std::string getGmt_last_malicious_source()const;
				std::string getGmt_first_mining_pool()const;
				std::string getGmt_last_web_attack()const;
				std::string getIs_web_attack_1d()const;
				std::string getGmt_last_mining_pool()const;
				std::string getIs_mining_pool_7d()const;
				std::string getIs_c2()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string gmt_first_c2_;
				std::string is_malicious_source_30d_;
				std::string is_tor_1d_;
				std::string c2_day_trace_;
				std::string gmt_last_c2_;
				std::string day_cnt_30d_tor_;
				std::string nat_day_trace_;
				std::string mining_pool_day_trace_;
				std::string is_nat_1d_;
				std::string malicious_source_day_trace_;
				std::string tags_;
				std::string is_idc_;
				std::string is_c2_7d_;
				std::string gmt_last_malicious_login_;
				std::string is_proxy_;
				std::string day_cnt_7d_web_attack_;
				std::string city_;
				std::string province_;
				std::string geo_;
				std::string gmt_last_nat_;
				std::string is_malicious_login_7d_;
				std::string malicious_login_day_trace_;
				std::string rdns_;
				std::string is_proxy_7d_;
				std::string is_web_attack_7d_;
				std::string is_web_attack_30d_;
				std::string is_mining_pool_1d_;
				std::string total_day_cnt_web_attack_;
				std::string country_;
				std::string is_malicious_source_7d_;
				std::string gmt_last_proxy_;
				std::string is_nat_;
				std::string is_web_attack_;
				std::string gmt_last_tor_;
				std::string ip_;
				std::string total_day_cnt_tor_;
				std::string is_tor_7d_;
				std::string web_attack_day_trace_;
				std::string is_nat_7d_;
				std::string is_malicious_login_;
				std::string is_mining_pool_;
				std::string idc_name_;
				std::string is_malicious_source_;
				std::string is_c2_1d_;
				std::string proxy_day_trace_;
				std::string isp_;
				std::string tor_day_trace_;
				std::string day_cnt_30d_web_attack_;
				std::string day_cnt_7d_tor_;
				std::string is_tor_;
				std::string is_malicious_source_1d_;
				std::string is_malicious_login_1d_;
				std::string malicious_score_;
				std::string is_proxy_1d_;
				std::string gmt_last_malicious_source_;
				std::string gmt_first_mining_pool_;
				std::string gmt_last_web_attack_;
				std::string is_web_attack_1d_;
				std::string gmt_last_mining_pool_;
				std::string is_mining_pool_7d_;
				std::string is_c2_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEIPINFORESULT_H_