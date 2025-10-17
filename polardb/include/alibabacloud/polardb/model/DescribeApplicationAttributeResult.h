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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEAPPLICATIONATTRIBUTERESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEAPPLICATIONATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeApplicationAttributeResult : public ServiceResult
			{
			public:
				struct SecurityGroup
				{
					std::string securityGroupName;
					std::string securityGroupId;
					std::string regionId;
					std::string netType;
				};
				struct SecurityIPArray
				{
					std::string securityIPArrayTag;
					std::string securityIPType;
					std::string securityIPList;
					std::string securityIPArrayName;
					std::string securityIPNetType;
				};
				struct Component
				{
					struct Topology
					{
						std::vector<std::string> parents;
						std::vector<std::string> children;
						std::string layer;
					};
					struct SecurityGroup3
					{
						std::string securityGroupName;
						std::string securityGroupId;
						std::string regionId;
						std::string netType;
					};
					struct SecurityIPArray4
					{
						std::string securityIPArrayTag;
						std::string securityIPType;
						std::string securityIPList;
						std::string securityIPArrayName;
						std::string securityIPNetType;
					};
					std::vector<Component::SecurityGroup3> securityGroups1;
					std::string status;
					std::string componentType;
					std::vector<Component::SecurityIPArray4> securityIPArrays2;
					long componentReplica;
					Topology topology;
					std::string componentClassDescription;
					std::string componentReplicaGroupName;
					std::string componentId;
					long componentMaxReplica;
					std::string componentClass;
				};
				struct Endpoint
				{
					std::string description;
					std::string endpointId;
					std::string iP;
					std::string port;
					std::string netType;
				};


				DescribeApplicationAttributeResult();
				explicit DescribeApplicationAttributeResult(const std::string &payload);
				~DescribeApplicationAttributeResult();
				std::vector<SecurityGroup> getSecurityGroups()const;
				std::string getDescription()const;
				std::string getDBClusterId()const;
				std::string getPolarFSInstanceId()const;
				std::vector<Component> getComponents()const;
				std::vector<Endpoint> getEndpoints()const;
				std::string getMaintainEndTime()const;
				std::string getVersion()const;
				std::string getMaintainStartTime()const;
				std::string getStatus()const;
				std::string getArchitecture()const;
				std::string getZoneId()const;
				std::string getVPCId()const;
				std::string getVSwitchId()const;
				bool getExpired()const;
				std::string getLockMode()const;
				std::string getPayType()const;
				std::string getApplicationType()const;
				std::string getServerlessType()const;
				std::string getCreationTime()const;
				std::string getUpgradeAvailable()const;
				std::vector<SecurityIPArray> getSecurityIPArrays()const;
				std::string getRegionId()const;
				std::string getApplicationId()const;
				std::string getExpireTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<SecurityGroup> securityGroups_;
				std::string description_;
				std::string dBClusterId_;
				std::string polarFSInstanceId_;
				std::vector<Component> components_;
				std::vector<Endpoint> endpoints_;
				std::string maintainEndTime_;
				std::string version_;
				std::string maintainStartTime_;
				std::string status_;
				std::string architecture_;
				std::string zoneId_;
				std::string vPCId_;
				std::string vSwitchId_;
				bool expired_;
				std::string lockMode_;
				std::string payType_;
				std::string applicationType_;
				std::string serverlessType_;
				std::string creationTime_;
				std::string upgradeAvailable_;
				std::vector<SecurityIPArray> securityIPArrays_;
				std::string regionId_;
				std::string applicationId_;
				std::string expireTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEAPPLICATIONATTRIBUTERESULT_H_