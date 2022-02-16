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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBECLUSTERV2RESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBECLUSTERV2RESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT DescribeClusterV2Result : public ServiceResult
			{
			public:
				struct ClusterInfo
				{
					struct RelateClusterInfo
					{
						std::string status;
						std::string clusterId;
						std::string clusterName;
						std::string clusterType;
					};
					struct HostPoolInfo
					{
						std::string hpBizId;
						std::string hpName;
					};
					struct FailReason
					{
						std::string requestId;
						std::string errorMsg;
						std::string errorCode;
					};
					struct SoftwareInfo
					{
						struct Software
						{
							int startTpe;
							std::string version;
							std::string displayName;
							bool onlyDisplay;
							std::string name;
						};
						std::vector<Software> softwares;
						std::string emrVer;
						std::string clusterType;
					};
					struct AccessInfo
					{
						struct ZKLink
						{
							std::string port;
							std::string link;
						};
						std::vector<ZKLink> zKLinks;
					};
					struct GatewayClusterInfo
					{
						std::string status;
						std::string clusterId;
						std::string clusterName;
					};
					struct HostGroup
					{
						struct Node
						{
							struct DaemonInfo
							{
								std::string name;
							};
							struct DiskInfo
							{
								std::string type;
								std::string device;
								int size;
								std::string diskName;
								std::string diskId;
							};
							std::string status;
							std::string zoneId;
							std::string innerIp;
							std::vector<Node::DaemonInfo> daemonInfos;
							std::string instanceId;
							std::string expiredTime;
							std::string createTime;
							std::string pubIp;
							std::string emrExpiredTime;
							bool supportIpV6;
							std::vector<Node::DiskInfo> diskInfos;
						};
						std::string hostGroupType;
						std::string hostGroupSubType;
						std::string hostGroupChangeType;
						int diskCount;
						std::string hostGroupChangeStatus;
						int nodeCount;
						std::string period;
						int memoryCapacity;
						std::string hostGroupName;
						std::string lockType;
						std::vector<HostGroup::Node> nodes;
						std::string diskType;
						std::string bandWidth;
						int diskCapacity;
						std::string hostGroupId;
						std::string chargeType;
						int cpuCore;
						std::string instanceType;
						std::string lockReason;
					};
					struct BootstrapAction
					{
						std::string path;
						std::string arg;
						std::string name;
					};
					int taskNodeInService;
					bool showSoftwareInterface;
					HostPoolInfo hostPoolInfo;
					int coreNodeInService;
					std::vector<BootstrapAction> bootstrapActionList;
					bool resizeDiskEnable;
					FailReason failReason;
					std::string k8sClusterId;
					std::string name;
					bool highAvailabilityEnable;
					std::string autoScalingVersion;
					long expiredTime;
					std::string createType;
					std::string imageId;
					bool autoScalingSpotWithLimitAllowed;
					std::string userDefinedEmrEcsRole;
					bool autoScalingAllowed;
					long stopTime;
					std::string status;
					std::string createResource;
					bool bootstrapFailed;
					std::string vSwitchId;
					std::string depositType;
					long startTime;
					std::vector<GatewayClusterInfo> gatewayClusterInfoList;
					int period;
					std::string metaStoreType;
					bool easEnable;
					std::string vpcId;
					std::vector<HostGroup> hostGroupList;
					std::string id;
					SoftwareInfo softwareInfo;
					std::string securityGroupName;
					bool logEnable;
					int masterNodeInService;
					RelateClusterInfo relateClusterInfo;
					std::string relateClusterId;
					bool autoScalingByLoadAllowed;
					bool autoScalingWithGraceAllowed;
					int coreNodeTotal;
					std::string configurations;
					std::string netType;
					bool localMetaDb;
					std::string gatewayClusterIds;
					bool ioOptimized;
					std::string zoneId;
					std::string securityGroupId;
					std::string machineType;
					int taskNodeTotal;
					bool dataDiskEncrypted;
					AccessInfo accessInfo;
					std::string extraInfo;
					int masterNodeTotal;
					std::string userId;
					std::string chargeType;
					std::string dataDiskKMSKeyId;
					bool autoScalingEnable;
					std::string instanceGeneration;
					std::string regionId;
					std::string logPath;
					int runningTime;
				};


				DescribeClusterV2Result();
				explicit DescribeClusterV2Result(const std::string &payload);
				~DescribeClusterV2Result();
				ClusterInfo getClusterInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				ClusterInfo clusterInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBECLUSTERV2RESULT_H_