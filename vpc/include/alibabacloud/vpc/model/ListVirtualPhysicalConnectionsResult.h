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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTVIRTUALPHYSICALCONNECTIONSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_LISTVIRTUALPHYSICALCONNECTIONSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT ListVirtualPhysicalConnectionsResult : public ServiceResult
			{
			public:
				struct VirtualPhysicalConnection
				{
					struct TagsItem
					{
						std::string value;
						std::string key;
					};
					std::string description;
					std::string endTime;
					std::string resourceGroupId;
					std::string lineOperator;
					std::string physicalConnectionId;
					std::string parentPhysicalConnectionAliUid;
					std::string peerLocation;
					std::string redundantPhysicalConnectionId;
					std::string parentPhysicalConnectionId;
					std::string businessStatus;
					std::string name;
					std::string loaStatus;
					std::string adLocation;
					std::string virtualPhysicalConnectionStatus;
					long bandwidth;
					std::vector<VirtualPhysicalConnection::TagsItem> tags;
					std::string vlanId;
					std::string status;
					std::string circuitCode;
					std::string orderMode;
					std::string expectSpec;
					std::string productType;
					std::string type;
					std::string chargeType;
					std::string creationTime;
					std::string accessPointId;
					std::string enabledTime;
					std::string portNumber;
					std::string spec;
					std::string portType;
					std::string aliUid;
				};


				ListVirtualPhysicalConnectionsResult();
				explicit ListVirtualPhysicalConnectionsResult(const std::string &payload);
				~ListVirtualPhysicalConnectionsResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				std::vector<VirtualPhysicalConnection> getVirtualPhysicalConnections()const;
				int getCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				std::vector<VirtualPhysicalConnection> virtualPhysicalConnections_;
				int count_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_LISTVIRTUALPHYSICALCONNECTIONSRESULT_H_