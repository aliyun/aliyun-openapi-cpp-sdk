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

#ifndef ALIBABACLOUD_MARKET_MODEL_DESCRIBELICENSERESULT_H_
#define ALIBABACLOUD_MARKET_MODEL_DESCRIBELICENSERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/market/MarketExport.h>

namespace AlibabaCloud
{
	namespace Market
	{
		namespace Model
		{
			class ALIBABACLOUD_MARKET_EXPORT DescribeLicenseResult : public ServiceResult
			{
			public:
				struct License
				{
					struct ExtendInfo
					{
						std::string email;
						std::string mobile;
						long accountQuantity;
						long aliUid;
					};
					struct LicenseAttribute
					{
						std::string value;
						std::string code;
					};
					std::string licenseCode;
					std::string productName;
					std::string activateTime;
					std::string instanceId;
					std::string supplierName;
					std::string productCode;
					std::string licenseStatus;
					std::string expiredTime;
					std::string createTime;
					std::vector<LicenseAttribute> extendArray;
					ExtendInfo extendInfo;
					std::string productSkuId;
				};


				DescribeLicenseResult();
				explicit DescribeLicenseResult(const std::string &payload);
				~DescribeLicenseResult();
				License getLicense()const;

			protected:
				void parse(const std::string &payload);
			private:
				License license_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MARKET_MODEL_DESCRIBELICENSERESULT_H_