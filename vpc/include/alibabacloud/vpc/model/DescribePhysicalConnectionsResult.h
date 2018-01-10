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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEPHYSICALCONNECTIONSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEPHYSICALCONNECTIONSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribePhysicalConnectionsResult : public ServiceResult
			{
			public:
				struct PhysicalConnectionType
				{
					std::string status;
					std::string description;
					std::string lineOperator;
					std::string circuitCode;
					std::string physicalConnectionId;
					std::string peerLocation;
					std::string redundantPhysicalConnectionId;
					std::string businessStatus;
					std::string name;
					std::string type;
					std::string adLocation;
					long bandwidth;
					std::string accessPointId;
					std::string creationTime;
					std::string enabledTime;
					std::string spec;
					std::string portNumber;
					std::string portType;
				};


				DescribePhysicalConnectionsResult();
				explicit DescribePhysicalConnectionsResult(const std::string &payload);
				~DescribePhysicalConnectionsResult();
				std::vector<PhysicalConnectionType> getPhysicalConnectionSet()const;
				void setPhysicalConnectionSet(const std::vector<PhysicalConnectionType>& physicalConnectionSet);
				int getTotalCount()const;
				void setTotalCount(int totalCount);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<PhysicalConnectionType> physicalConnectionSet_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEPHYSICALCONNECTIONSRESULT_H_