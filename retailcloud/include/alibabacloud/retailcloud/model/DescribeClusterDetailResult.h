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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_DESCRIBECLUSTERDETAILRESULT_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_DESCRIBECLUSTERDETAILRESULT_H_

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
			class ALIBABACLOUD_RETAILCLOUD_EXPORT DescribeClusterDetailResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct BasicInfo
					{
						std::string clusterInstanceId;
						std::string mainUserId;
						bool installLogInProcess;
						long clusterId;
						bool hasInstallLogController;
						std::vector<std::string> ecsIds;
						std::string businessCode;
						std::vector<std::string> vswitchs;
						bool hasInstallArmsPilot;
						std::string envType;
						std::string vpcId;
						bool installArmsInProcess;
						std::string regionName;
						std::string clusterName;
						std::string regionId;
						std::string userNick;
					};
					struct InstanceInfo
					{
						struct AllocatedPodInstanceInfo
						{
							int podCount;
							long appId;
							std::string memRequest;
							long envId;
							std::string cupRequest;
							std::string envName;
							std::string appName;
						};
						struct AvailablePodInstanceInfo
						{
							int availablePodCount;
							std::string memRequest;
							std::string cupRequest;
						};
						std::vector<AllocatedPodInstanceInfo> allocatedPodInfoList;
						int allocatePodCount;
						int appCount;
						std::vector<AvailablePodInstanceInfo> availablePodInfoList;
					};
					struct NetInfo
					{
						std::string prodCIDR;
						std::string netPlugType;
						std::string serviceCIDR;
					};
					struct WorkLoad
					{
						std::string memLevel;
						int allocateAppPodCount;
						std::string cpuRequestPercent;
						std::string memRequest;
						std::string memUsePercent;
						std::string cpuUsePercent;
						std::string cpuUse;
						std::string memTotal;
						std::string cpuLevel;
						std::string memUse;
						std::string memRequestPercent;
						int allNodeCount;
						int allocateAllPodCount;
						std::string cpuCapacityTotal;
						std::string memCapacityTotal;
						std::string cpuRequest;
						std::string cpuTotal;
					};
					struct ClusterNodeWorkLoad
					{
						int podCount;
						bool ready;
						std::string memRequest;
						int appPodCount;
						std::string instanceId;
						std::string memUse;
						std::string nodeName;
						std::string cpuUse;
						std::string memTotal;
						std::string cpuRequest;
						bool unschedulable;
						std::string cpuTotal;
					};
					BasicInfo basicInfo;
					InstanceInfo instanceInfo;
					WorkLoad workLoad;
					NetInfo netInfo;
					std::vector<ClusterNodeWorkLoad> nodeWorkLoadList;
				};


				DescribeClusterDetailResult();
				explicit DescribeClusterDetailResult(const std::string &payload);
				~DescribeClusterDetailResult();
				std::string getErrMsg()const;
				int getCode()const;
				bool getSuccess()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errMsg_;
				int code_;
				bool success_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_DESCRIBECLUSTERDETAILRESULT_H_