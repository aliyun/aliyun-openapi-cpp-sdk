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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEHAVIPSRESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEHAVIPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT DescribeHaVipsResult : public ServiceResult
			{
			public:
				struct HaVip
				{
					struct Eip
					{
						std::string eipId;
						std::string eip;
					};
					struct Relation
					{
						std::string status;
						std::string instanceId;
						std::string creationTime;
						std::string ipAddress;
						std::string instanceType;
					};
					std::vector<HaVip::Relation> associatedInstances;
					std::string status;
					std::string description;
					std::vector<HaVip::Eip> associatedEipAddresses;
					std::string vSwitchId;
					std::string creationTime;
					std::string ipAddress;
					std::string haVipId;
					std::string ensRegionId;
					std::string networkId;
					std::string name;
				};


				DescribeHaVipsResult();
				explicit DescribeHaVipsResult(const std::string &payload);
				~DescribeHaVipsResult();
				std::string getTotalCount()const;
				std::vector<HaVip> getHaVips()const;
				std::string getPageSize()const;
				std::string getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalCount_;
				std::vector<HaVip> haVips_;
				std::string pageSize_;
				std::string pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEHAVIPSRESULT_H_