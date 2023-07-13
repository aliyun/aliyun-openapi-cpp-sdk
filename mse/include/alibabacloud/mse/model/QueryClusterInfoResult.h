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

#ifndef ALIBABACLOUD_MSE_MODEL_QUERYCLUSTERINFORESULT_H_
#define ALIBABACLOUD_MSE_MODEL_QUERYCLUSTERINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mse/MseExport.h>

namespace AlibabaCloud
{
	namespace Mse
	{
		namespace Model
		{
			class ALIBABACLOUD_MSE_EXPORT QueryClusterInfoResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct InstanceModel
					{
						std::string role;
						std::string podName;
						std::string internetIp;
						std::string creationTimestamp;
						std::string singleTunnelVip;
						std::string zone;
						std::string ip;
						std::string healthStatus;
					};
					std::string internetAddress;
					std::string aclEntryList;
					int cpu;
					std::string internetPort;
					std::string intranetPort;
					std::string diskType;
					std::string appVersion;
					std::string payInfo;
					long initCostTime;
					std::string clusterName;
					std::string intranetDomain;
					std::string netType;
					std::string tags;
					std::string mseVersion;
					std::string clusterVersion;
					std::string connectionType;
					std::string clusterId;
					std::string instanceId;
					std::string internetDomain;
					std::string createTime;
					std::string aclId;
					std::string clusterSpecification;
					std::string vSwitchId;
					std::string healthStatus;
					long memoryCapacity;
					std::string clusterType;
					std::vector<InstanceModel> instanceModels;
					std::string clusterAliasName;
					int instanceCount;
					std::string intranetAddress;
					long diskCapacity;
					std::string vpcId;
					std::vector<std::string> expectZones;
					std::string pubNetworkFlow;
					std::string chargeType;
					std::string regionId;
					std::string initStatus;
				};


				QueryClusterInfoResult();
				explicit QueryClusterInfoResult(const std::string &payload);
				~QueryClusterInfoResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getErrorCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string errorCode_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MSE_MODEL_QUERYCLUSTERINFORESULT_H_