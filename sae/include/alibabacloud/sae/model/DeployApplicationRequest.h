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

#ifndef ALIBABACLOUD_SAE_MODEL_DEPLOYAPPLICATIONREQUEST_H_
#define ALIBABACLOUD_SAE_MODEL_DEPLOYAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/sae/SaeExport.h>

namespace AlibabaCloud
{
	namespace Sae
	{
		namespace Model
		{
			class ALIBABACLOUD_SAE_EXPORT DeployApplicationRequest : public RoaServiceRequest
			{

			public:
				DeployApplicationRequest();
				~DeployApplicationRequest();

				std::string getNasId()const;
				void setNasId(const std::string& nasId);
				std::string getWebContainer()const;
				void setWebContainer(const std::string& webContainer);
				std::string getJarStartArgs()const;
				void setJarStartArgs(const std::string& jarStartArgs);
				std::string getEnableAhas()const;
				void setEnableAhas(const std::string& enableAhas);
				std::string getSlsConfigs()const;
				void setSlsConfigs(const std::string& slsConfigs);
				std::string getCommandArgs()const;
				void setCommandArgs(const std::string& commandArgs);
				std::string getAcrAssumeRoleArn()const;
				void setAcrAssumeRoleArn(const std::string& acrAssumeRoleArn);
				std::string getReadiness()const;
				void setReadiness(const std::string& readiness);
				std::string getTimezone()const;
				void setTimezone(const std::string& timezone);
				std::string getMountHost()const;
				void setMountHost(const std::string& mountHost);
				int getBatchWaitTime()const;
				void setBatchWaitTime(int batchWaitTime);
				std::string getLiveness()const;
				void setLiveness(const std::string& liveness);
				std::string getEnvs()const;
				void setEnvs(const std::string& envs);
				std::string getPhpArmsConfigLocation()const;
				void setPhpArmsConfigLocation(const std::string& phpArmsConfigLocation);
				std::string getPackageVersion()const;
				void setPackageVersion(const std::string& packageVersion);
				std::string getTomcatConfig()const;
				void setTomcatConfig(const std::string& tomcatConfig);
				std::string getCustomHostAlias()const;
				void setCustomHostAlias(const std::string& customHostAlias);
				std::string getWarStartOptions()const;
				void setWarStartOptions(const std::string& warStartOptions);
				std::string getJarStartOptions()const;
				void setJarStartOptions(const std::string& jarStartOptions);
				std::string getEdasContainerVersion()const;
				void setEdasContainerVersion(const std::string& edasContainerVersion);
				std::string getPackageUrl()const;
				void setPackageUrl(const std::string& packageUrl);
				int getTerminationGracePeriodSeconds()const;
				void setTerminationGracePeriodSeconds(int terminationGracePeriodSeconds);
				std::string getConfigMapMountDesc()const;
				void setConfigMapMountDesc(const std::string& configMapMountDesc);
				std::string getPhpConfig()const;
				void setPhpConfig(const std::string& phpConfig);
				std::string getPreStop()const;
				void setPreStop(const std::string& preStop);
				std::string getCommand()const;
				void setCommand(const std::string& command);
				std::string getUpdateStrategy()const;
				void setUpdateStrategy(const std::string& updateStrategy);
				std::string getMountDesc()const;
				void setMountDesc(const std::string& mountDesc);
				std::string getJdk()const;
				void setJdk(const std::string& jdk);
				int getMinReadyInstances()const;
				void setMinReadyInstances(int minReadyInstances);
				std::string getChangeOrderDesc()const;
				void setChangeOrderDesc(const std::string& changeOrderDesc);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string getImageUrl()const;
				void setImageUrl(const std::string& imageUrl);
				bool getAutoEnableApplicationScalingRule()const;
				void setAutoEnableApplicationScalingRule(bool autoEnableApplicationScalingRule);
				std::string getPhpConfigLocation()const;
				void setPhpConfigLocation(const std::string& phpConfigLocation);
				std::string getPostStart()const;
				void setPostStart(const std::string& postStart);

            private:
				std::string nasId_;
				std::string webContainer_;
				std::string jarStartArgs_;
				std::string enableAhas_;
				std::string slsConfigs_;
				std::string commandArgs_;
				std::string acrAssumeRoleArn_;
				std::string readiness_;
				std::string timezone_;
				std::string mountHost_;
				int batchWaitTime_;
				std::string liveness_;
				std::string envs_;
				std::string phpArmsConfigLocation_;
				std::string packageVersion_;
				std::string tomcatConfig_;
				std::string customHostAlias_;
				std::string warStartOptions_;
				std::string jarStartOptions_;
				std::string edasContainerVersion_;
				std::string packageUrl_;
				int terminationGracePeriodSeconds_;
				std::string configMapMountDesc_;
				std::string phpConfig_;
				std::string preStop_;
				std::string command_;
				std::string updateStrategy_;
				std::string mountDesc_;
				std::string jdk_;
				int minReadyInstances_;
				std::string changeOrderDesc_;
				std::string appId_;
				std::string imageUrl_;
				bool autoEnableApplicationScalingRule_;
				std::string phpConfigLocation_;
				std::string postStart_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAE_MODEL_DEPLOYAPPLICATIONREQUEST_H_