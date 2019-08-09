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

#ifndef ALIBABACLOUD_EMR_MODEL_MODIFYEXECUTIONPLANREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_MODIFYEXECUTIONPLANREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ModifyExecutionPlanRequest : public RpcServiceRequest
			{
				struct BootstrapAction
				{
					std::string path;
					std::string arg;
					std::string name;
				};
				struct EcsOrder
				{
					std::string nodeType;
					int diskCount;
					int nodeCount;
					int diskCapacity;
					int index;
					std::string instanceType;
					std::string diskType;
				};
				struct Config
				{
					std::string configKey;
					std::string fileName;
					std::string encrypt;
					std::string replace;
					std::string configValue;
					std::string serviceName;
				};

			public:
				ModifyExecutionPlanRequest();
				~ModifyExecutionPlanRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getLogPath()const;
				void setLogPath(const std::string& logPath);
				int getTimeInterval()const;
				void setTimeInterval(int timeInterval);
				std::string getClusterName()const;
				void setClusterName(const std::string& clusterName);
				std::string getConfigurations()const;
				void setConfigurations(const std::string& configurations);
				bool getIoOptimized()const;
				void setIoOptimized(bool ioOptimized);
				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
				bool getEasEnable()const;
				void setEasEnable(bool easEnable);
				bool getCreateClusterOnDemand()const;
				void setCreateClusterOnDemand(bool createClusterOnDemand);
				long getStartTime()const;
				void setStartTime(long startTime);
				std::vector<std::string> getJobIdList()const;
				void setJobIdList(const std::vector<std::string>& jobIdList);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getDayOfMonth()const;
				void setDayOfMonth(const std::string& dayOfMonth);
				std::vector<BootstrapAction> getBootstrapAction()const;
				void setBootstrapAction(const std::vector<BootstrapAction>& bootstrapAction);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				bool getUseLocalMetaDb()const;
				void setUseLocalMetaDb(bool useLocalMetaDb);
				std::string getEmrVer()const;
				void setEmrVer(const std::string& emrVer);
				std::string getId()const;
				void setId(const std::string& id);
				std::string getUserDefinedEmrEcsRole()const;
				void setUserDefinedEmrEcsRole(const std::string& userDefinedEmrEcsRole);
				bool getIsOpenPublicIp()const;
				void setIsOpenPublicIp(bool isOpenPublicIp);
				long getExecutionPlanVersion()const;
				void setExecutionPlanVersion(long executionPlanVersion);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getTimeUnit()const;
				void setTimeUnit(const std::string& timeUnit);
				std::string getInstanceGeneration()const;
				void setInstanceGeneration(const std::string& instanceGeneration);
				std::string getClusterType()const;
				void setClusterType(const std::string& clusterType);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::vector<std::string> getOptionSoftWareList()const;
				void setOptionSoftWareList(const std::vector<std::string>& optionSoftWareList);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getNetType()const;
				void setNetType(const std::string& netType);
				std::string getWorkflowDefinition()const;
				void setWorkflowDefinition(const std::string& workflowDefinition);
				std::vector<EcsOrder> getEcsOrder()const;
				void setEcsOrder(const std::vector<EcsOrder>& ecsOrder);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getDayOfWeek()const;
				void setDayOfWeek(const std::string& dayOfWeek);
				bool getUseCustomHiveMetaDB()const;
				void setUseCustomHiveMetaDB(bool useCustomHiveMetaDB);
				std::string getStrategy()const;
				void setStrategy(const std::string& strategy);
				std::vector<Config> getConfig()const;
				void setConfig(const std::vector<Config>& config);
				bool getHighAvailabilityEnable()const;
				void setHighAvailabilityEnable(bool highAvailabilityEnable);
				bool getInitCustomHiveMetaDB()const;
				void setInitCustomHiveMetaDB(bool initCustomHiveMetaDB);
				bool getLogEnable()const;
				void setLogEnable(bool logEnable);

            private:
				long resourceOwnerId_;
				std::string logPath_;
				int timeInterval_;
				std::string clusterName_;
				std::string configurations_;
				bool ioOptimized_;
				std::string securityGroupId_;
				bool easEnable_;
				bool createClusterOnDemand_;
				long startTime_;
				std::vector<std::string> jobIdList_;
				std::string accessKeyId_;
				std::string dayOfMonth_;
				std::vector<BootstrapAction> bootstrapAction_;
				std::string regionId_;
				bool useLocalMetaDb_;
				std::string emrVer_;
				std::string id_;
				std::string userDefinedEmrEcsRole_;
				bool isOpenPublicIp_;
				long executionPlanVersion_;
				std::string clusterId_;
				std::string timeUnit_;
				std::string instanceGeneration_;
				std::string clusterType_;
				std::string vSwitchId_;
				std::vector<std::string> optionSoftWareList_;
				std::string vpcId_;
				std::string netType_;
				std::string workflowDefinition_;
				std::vector<EcsOrder> ecsOrder_;
				std::string name_;
				std::string zoneId_;
				std::string dayOfWeek_;
				bool useCustomHiveMetaDB_;
				std::string strategy_;
				std::vector<Config> config_;
				bool highAvailabilityEnable_;
				bool initCustomHiveMetaDB_;
				bool logEnable_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_MODIFYEXECUTIONPLANREQUEST_H_