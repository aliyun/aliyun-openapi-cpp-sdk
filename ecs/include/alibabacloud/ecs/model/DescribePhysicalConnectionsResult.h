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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEPHYSICALCONNECTIONSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEPHYSICALCONNECTIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribePhysicalConnectionsResult : public ServiceResult
			{
			public:
				struct PhysicalConnectionType
				{
					std::string status;
					std::string description;
					std::string lineOperator;
					std::string circuitCode;
					std::string physicalConnectionId;
					std::string redundantPhysicalConnectionId;
					std::string peerLocation;
					std::string businessStatus;
					std::string name;
					std::string type;
					std::string adLocation;
					long bandwidth;
					std::string creationTime;
					std::string accessPointId;
					std::string enabledTime;
					std::string portNumber;
					std::string spec;
					std::string portType;
				};


				DescribePhysicalConnectionsResult();
				explicit DescribePhysicalConnectionsResult(const std::string &payload);
				~DescribePhysicalConnectionsResult();
				std::vector<PhysicalConnectionType> getPhysicalConnectionSet()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

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
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEPHYSICALCONNECTIONSRESULT_H_