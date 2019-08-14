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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEVPNROUTEENTRIESRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEVPNROUTEENTRIESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT DescribeVpnRouteEntriesResult : public ServiceResult
			{
			public:
				struct VpnRouteEntry
				{
					std::string vpnInstanceId;
					std::string routeDest;
					std::string nextHop;
					std::string state;
					long createTime;
					int weight;
				};


				DescribeVpnRouteEntriesResult();
				explicit DescribeVpnRouteEntriesResult(const std::string &payload);
				~DescribeVpnRouteEntriesResult();
				int getTotalCount()const;
				std::vector<VpnRouteEntry> getVpnRouteEntries()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<VpnRouteEntry> vpnRouteEntries_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEVPNROUTEENTRIESRESULT_H_