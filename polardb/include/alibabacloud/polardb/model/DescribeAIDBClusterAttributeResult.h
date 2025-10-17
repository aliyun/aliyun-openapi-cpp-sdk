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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEAIDBCLUSTERATTRIBUTERESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEAIDBCLUSTERATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT DescribeAIDBClusterAttributeResult : public ServiceResult
			{
			public:
				struct DBNode
				{
					struct Volumes
					{
						std::string mountPath;
						std::string storageType;
						std::string storageCategory;
						std::string sizeGB;
						std::string name;
					};
					std::string memorySize;
					std::string dBNodeStatus;
					std::string zoneId;
					std::string vPCId;
					std::string vSwitchId;
					std::string linkIP;
					std::string dBNodeId;
					std::string gPU;
					std::string dBNodeClass;
					std::string vNodeId;
					std::vector<DBNode::Volumes> childVolumes;
					std::string cpuCores;
					std::string dBNodeDescription;
				};
				struct VolumesItem
				{
					std::string mountPath;
					std::string storageType;
					std::string storageCategory;
					std::string sizeGB;
					std::string name;
				};
				struct EndpointListItem
				{
					struct NetInfoItemsItem
					{
						std::string port;
						std::string connectionString;
						std::string netType;
					};
					std::vector<EndpointListItem::NetInfoItemsItem> netInfoItems;
				};


				DescribeAIDBClusterAttributeResult();
				explicit DescribeAIDBClusterAttributeResult(const std::string &payload);
				~DescribeAIDBClusterAttributeResult();
				std::string getAiNodeType()const;
				std::string getDBClusterId()const;
				std::string getDBVersion()const;
				std::vector<VolumesItem> getVolumes()const;
				std::vector<DBNode> getDBNodes()const;
				std::string getRunType()const;
				std::string getZoneIds()const;
				std::string getInternalIp()const;
				std::vector<EndpointListItem> getEndpointList()const;
				std::string getKubeClusterId()const;
				std::string getStorageType()const;
				std::string getModelName()const;
				std::string getZoneId()const;
				std::string getVPCId()const;
				std::string getPublicIp()const;
				std::string getDBClusterStatus()const;
				std::string getVSwitchId()const;
				std::string getDBClusterDescription()const;
				bool getExpired()const;
				std::string getLockMode()const;
				std::string getPayType()const;
				std::string getCreationTime()const;
				std::string getMaxQPM()const;
				std::string getRegionId()const;
				std::string getExpireTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string aiNodeType_;
				std::string dBClusterId_;
				std::string dBVersion_;
				std::vector<VolumesItem> volumes_;
				std::vector<DBNode> dBNodes_;
				std::string runType_;
				std::string zoneIds_;
				std::string internalIp_;
				std::vector<EndpointListItem> endpointList_;
				std::string kubeClusterId_;
				std::string storageType_;
				std::string modelName_;
				std::string zoneId_;
				std::string vPCId_;
				std::string publicIp_;
				std::string dBClusterStatus_;
				std::string vSwitchId_;
				std::string dBClusterDescription_;
				bool expired_;
				std::string lockMode_;
				std::string payType_;
				std::string creationTime_;
				std::string maxQPM_;
				std::string regionId_;
				std::string expireTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEAIDBCLUSTERATTRIBUTERESULT_H_