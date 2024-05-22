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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEARMSERVERINSTANCESRESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEARMSERVERINSTANCESRESULT_H_

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
			class ALIBABACLOUD_ENS_EXPORT DescribeARMServerInstancesResult : public ServiceResult
			{
			public:
				struct ServersItem
				{
					struct AICInstancesItem
					{
						struct NetworkAttributes
						{
							std::string vSwitchId;
							std::string ipAddress;
							std::string networkId;
						};
						struct SdgDeployInfo
						{
							std::string sDGId;
							std::string status;
						};
						std::string status;
						NetworkAttributes networkAttributes;
						SdgDeployInfo sdgDeployInfo;
						std::string instanceId;
						std::string state;
						std::string latestAction;
						std::string imageId;
						long frequency;
						std::string spec;
						std::string resolution;
						std::string name;
					};
					std::string status;
					std::string serverId;
					std::string state;
					std::string expiredTime;
					std::string latestAction;
					std::string creationTime;
					std::string specName;
					std::string _namespace;
					std::vector<ServersItem::AICInstancesItem> aICInstances;
					std::string payType;
					std::string ensRegionId;
					std::string name;
				};


				DescribeARMServerInstancesResult();
				explicit DescribeARMServerInstancesResult(const std::string &payload);
				~DescribeARMServerInstancesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ServersItem> getServers()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<ServersItem> servers_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEARMSERVERINSTANCESRESULT_H_