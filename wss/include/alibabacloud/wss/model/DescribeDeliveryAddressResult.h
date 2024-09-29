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

#ifndef ALIBABACLOUD_WSS_MODEL_DESCRIBEDELIVERYADDRESSRESULT_H_
#define ALIBABACLOUD_WSS_MODEL_DESCRIBEDELIVERYADDRESSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/wss/WssExport.h>

namespace AlibabaCloud
{
	namespace Wss
	{
		namespace Model
		{
			class ALIBABACLOUD_WSS_EXPORT DescribeDeliveryAddressResult : public ServiceResult
			{
			public:
				struct Address
				{
					struct Province
					{
						std::string provinceName;
						long provinceId;
					};
					struct City
					{
						long cityId;
						std::string cityName;
					};
					struct Area
					{
						std::string areaName;
						long areaId;
					};
					struct Town
					{
						long townId;
						std::string townName;
					};
					bool defaultAddress;
					Area area;
					std::string contacts;
					Town town;
					std::string postalCode;
					City city;
					std::string mobile;
					Province province;
					std::string detail;
				};


				DescribeDeliveryAddressResult();
				explicit DescribeDeliveryAddressResult(const std::string &payload);
				~DescribeDeliveryAddressResult();
				std::vector<Address> getAddresses()const;
				int getTotalCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Address> addresses_;
				int totalCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_WSS_MODEL_DESCRIBEDELIVERYADDRESSRESULT_H_