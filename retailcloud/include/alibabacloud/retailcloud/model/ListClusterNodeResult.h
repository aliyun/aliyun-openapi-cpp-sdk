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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_LISTCLUSTERNODERESULT_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_LISTCLUSTERNODERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT ListClusterNodeResult : public ServiceResult
			{
			public:
				struct ClusterNodeInfo
				{
					std::string ecsLocalStorageCapacity;
					std::string ecsPrivateIp;
					std::string instanceId;
					std::string businessCode;
					std::string oSName;
					std::string ecsMemory;
					std::string ecsOsType;
					std::string instanceNetworkType;
					std::string instanceName;
					std::string ecsEip;
					std::string internetMaxBandwidthOut;
					std::string internetMaxBandwidthIn;
					std::string vpcId;
					std::string ecsCpu;
					std::string ecsPublicIp;
					std::string ecsExpiredTime;
					std::string regionId;
					std::string instanceType;
					std::string ecsZone;
					std::string ecsConfiguration;
				};


				ListClusterNodeResult();
				explicit ListClusterNodeResult(const std::string &payload);
				~ListClusterNodeResult();
				long getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::string getErrorMsg()const;
				std::vector<ClusterNodeInfo> getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				int pageSize_;
				int pageNumber_;
				std::string errorMsg_;
				std::vector<ClusterNodeInfo> data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_LISTCLUSTERNODERESULT_H_