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

#ifndef ALIBABACLOUD_GA_MODEL_LISTBASICACCELERATORSRESULT_H_
#define ALIBABACLOUD_GA_MODEL_LISTBASICACCELERATORSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ga/GaExport.h>

namespace AlibabaCloud
{
	namespace Ga
	{
		namespace Model
		{
			class ALIBABACLOUD_GA_EXPORT ListBasicAcceleratorsResult : public ServiceResult
			{
			public:
				struct AcceleratorsItem
				{
					struct BasicBandwidthPackage
					{
						std::string bandwidthType;
						std::string instanceId;
						int bandwidth;
					};
					struct CrossDomainBandwidthPackage
					{
						std::string instanceId;
						int bandwidth;
					};
					struct TagsItem
					{
						std::string value;
						std::string key;
					};
					std::string description;
					std::string resourceGroupId;
					std::string instanceChargeType;
					long createTime;
					CrossDomainBandwidthPackage crossDomainBandwidthPackage;
					std::string name;
					std::string bandwidthBillingType;
					std::string type;
					BasicBandwidthPackage basicBandwidthPackage;
					std::string state;
					long expiredTime;
					std::string basicIpSetId;
					std::string regionId;
					std::string basicEndpointGroupId;
					std::string acceleratorId;
					std::vector<AcceleratorsItem::TagsItem> tags;
					bool crossBorderStatus;
				};


				ListBasicAcceleratorsResult();
				explicit ListBasicAcceleratorsResult(const std::string &payload);
				~ListBasicAcceleratorsResult();
				int getTotalCount()const;
				std::vector<AcceleratorsItem> getAccelerators()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<AcceleratorsItem> accelerators_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_LISTBASICACCELERATORSRESULT_H_