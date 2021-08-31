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

#ifndef ALIBABACLOUD_EDAS_MODEL_DEPLOYK8SAPPLICATIONREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_DEPLOYK8SAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT DeployK8sApplicationRequest : public RoaServiceRequest
			{

			public:
				DeployK8sApplicationRequest();
				~DeployK8sApplicationRequest();

				std::string getNasId()const;
				void setNasId(const std::string& nasId);
				std::string getWebContainer()const;
				void setWebContainer(const std::string& webContainer);
				bool getEnableAhas()const;
				void setEnableAhas(bool enableAhas);
				std::string getSlsConfigs()const;
				void setSlsConfigs(const std::string& slsConfigs);
				std::string getReadiness()const;
				void setReadiness(const std::string& readiness);
				std::string getPackageVersionId()const;
				void setPackageVersionId(const std::string& packageVersionId);
				int getBatchWaitTime()const;
				void setBatchWaitTime(int batchWaitTime);
				std::string getLiveness()const;
				void setLiveness(const std::string& liveness);
				std::string getEnvs()const;
				void setEnvs(const std::string& envs);
				int getCpuLimit()const;
				void setCpuLimit(int cpuLimit);
				std::string getPackageVersion()const;
				void setPackageVersion(const std::string& packageVersion);
				std::string getStorageType()const;
				void setStorageType(const std::string& storageType);
				std::string getEnvFroms()const;
				void setEnvFroms(const std::string& envFroms);
				std::string getConfigMountDescs()const;
				void setConfigMountDescs(const std::string& configMountDescs);
				std::string getEdasContainerVersion()const;
				void setEdasContainerVersion(const std::string& edasContainerVersion);
				std::string getPackageUrl()const;
				void setPackageUrl(const std::string& packageUrl);
				int getMemoryLimit()const;
				void setMemoryLimit(int memoryLimit);
				std::string getImageTag()const;
				void setImageTag(const std::string& imageTag);
				std::string getDeployAcrossZones()const;
				void setDeployAcrossZones(const std::string& deployAcrossZones);
				std::string getDeployAcrossNodes()const;
				void setDeployAcrossNodes(const std::string& deployAcrossNodes);
				int getMemoryRequest()const;
				void setMemoryRequest(int memoryRequest);
				std::string getImage()const;
				void setImage(const std::string& image);
				std::string getPreStop()const;
				void setPreStop(const std::string& preStop);
				std::string getMountDescs()const;
				void setMountDescs(const std::string& mountDescs);
				int getReplicas()const;
				void setReplicas(int replicas);
				int getCpuRequest()const;
				void setCpuRequest(int cpuRequest);
				std::string getWebContainerConfig()const;
				void setWebContainerConfig(const std::string& webContainerConfig);
				std::string getLocalVolume()const;
				void setLocalVolume(const std::string& localVolume);
				std::string getCommand()const;
				void setCommand(const std::string& command);
				std::string getUpdateStrategy()const;
				void setUpdateStrategy(const std::string& updateStrategy);
				std::string getArgs()const;
				void setArgs(const std::string& args);
				std::string getJDK()const;
				void setJDK(const std::string& jDK);
				bool getUseBodyEncoding()const;
				void setUseBodyEncoding(bool useBodyEncoding);
				std::string getChangeOrderDesc()const;
				void setChangeOrderDesc(const std::string& changeOrderDesc);
				std::string getUriEncoding()const;
				void setUriEncoding(const std::string& uriEncoding);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				int getBatchTimeout()const;
				void setBatchTimeout(int batchTimeout);
				std::string getPvcMountDescs()const;
				void setPvcMountDescs(const std::string& pvcMountDescs);
				std::string getEmptyDirs()const;
				void setEmptyDirs(const std::string& emptyDirs);
				int getMcpuRequest()const;
				void setMcpuRequest(int mcpuRequest);
				int getMcpuLimit()const;
				void setMcpuLimit(int mcpuLimit);
				std::string getVolumesStr()const;
				void setVolumesStr(const std::string& volumesStr);
				std::string getRuntimeClassName()const;
				void setRuntimeClassName(const std::string& runtimeClassName);
				std::string getTrafficControlStrategy()const;
				void setTrafficControlStrategy(const std::string& trafficControlStrategy);
				std::string getPostStart()const;
				void setPostStart(const std::string& postStart);
				std::string getJavaStartUpConfig()const;
				void setJavaStartUpConfig(const std::string& javaStartUpConfig);

            private:
				std::string nasId_;
				std::string webContainer_;
				bool enableAhas_;
				std::string slsConfigs_;
				std::string readiness_;
				std::string packageVersionId_;
				int batchWaitTime_;
				std::string liveness_;
				std::string envs_;
				int cpuLimit_;
				std::string packageVersion_;
				std::string storageType_;
				std::string envFroms_;
				std::string configMountDescs_;
				std::string edasContainerVersion_;
				std::string packageUrl_;
				int memoryLimit_;
				std::string imageTag_;
				std::string deployAcrossZones_;
				std::string deployAcrossNodes_;
				int memoryRequest_;
				std::string image_;
				std::string preStop_;
				std::string mountDescs_;
				int replicas_;
				int cpuRequest_;
				std::string webContainerConfig_;
				std::string localVolume_;
				std::string command_;
				std::string updateStrategy_;
				std::string args_;
				std::string jDK_;
				bool useBodyEncoding_;
				std::string changeOrderDesc_;
				std::string uriEncoding_;
				std::string appId_;
				int batchTimeout_;
				std::string pvcMountDescs_;
				std::string emptyDirs_;
				int mcpuRequest_;
				int mcpuLimit_;
				std::string volumesStr_;
				std::string runtimeClassName_;
				std::string trafficControlStrategy_;
				std::string postStart_;
				std::string javaStartUpConfig_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_DEPLOYK8SAPPLICATIONREQUEST_H_