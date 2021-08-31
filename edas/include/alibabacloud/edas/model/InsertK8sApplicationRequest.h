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

#ifndef ALIBABACLOUD_EDAS_MODEL_INSERTK8SAPPLICATIONREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_INSERTK8SAPPLICATIONREQUEST_H_

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
			class ALIBABACLOUD_EDAS_EXPORT InsertK8sApplicationRequest : public RoaServiceRequest
			{

			public:
				InsertK8sApplicationRequest();
				~InsertK8sApplicationRequest();

				std::string getNasId()const;
				void setNasId(const std::string& nasId);
				std::string getIntranetSlbId()const;
				void setIntranetSlbId(const std::string& intranetSlbId);
				std::string getEnvs()const;
				void setEnvs(const std::string& envs);
				int getRequestsMem()const;
				void setRequestsMem(int requestsMem);
				std::string getStorageType()const;
				void setStorageType(const std::string& storageType);
				std::string getConfigMountDescs()const;
				void setConfigMountDescs(const std::string& configMountDescs);
				std::string getAppName()const;
				void setAppName(const std::string& appName);
				int getRequestsmCpu()const;
				void setRequestsmCpu(int requestsmCpu);
				std::string getDeployAcrossZones()const;
				void setDeployAcrossZones(const std::string& deployAcrossZones);
				int getIntranetSlbPort()const;
				void setIntranetSlbPort(int intranetSlbPort);
				std::string getDeployAcrossNodes()const;
				void setDeployAcrossNodes(const std::string& deployAcrossNodes);
				std::string getPreStop()const;
				void setPreStop(const std::string& preStop);
				std::string getBuildPackId()const;
				void setBuildPackId(const std::string& buildPackId);
				std::string getLocalVolume()const;
				void setLocalVolume(const std::string& localVolume);
				bool getUseBodyEncoding()const;
				void setUseBodyEncoding(bool useBodyEncoding);
				std::string getEmptyDirs()const;
				void setEmptyDirs(const std::string& emptyDirs);
				std::string getPackageType()const;
				void setPackageType(const std::string& packageType);
				std::string getRuntimeClassName()const;
				void setRuntimeClassName(const std::string& runtimeClassName);
				std::string getPostStart()const;
				void setPostStart(const std::string& postStart);
				std::string getRepoId()const;
				void setRepoId(const std::string& repoId);
				int getInternetTargetPort()const;
				void setInternetTargetPort(int internetTargetPort);
				std::string getWebContainer()const;
				void setWebContainer(const std::string& webContainer);
				bool getEnableAsm()const;
				void setEnableAsm(bool enableAsm);
				bool getEnableAhas()const;
				void setEnableAhas(bool enableAhas);
				std::string getSlsConfigs()const;
				void setSlsConfigs(const std::string& slsConfigs);
				std::string getCommandArgs()const;
				void setCommandArgs(const std::string& commandArgs);
				std::string getReadiness()const;
				void setReadiness(const std::string& readiness);
				std::string getLiveness()const;
				void setLiveness(const std::string& liveness);
				std::string getCsClusterId()const;
				void setCsClusterId(const std::string& csClusterId);
				int getInternetSlbPort()const;
				void setInternetSlbPort(int internetSlbPort);
				std::string getPackageVersion()const;
				void setPackageVersion(const std::string& packageVersion);
				int getTimeout()const;
				void setTimeout(int timeout);
				std::string getEnvFroms()const;
				void setEnvFroms(const std::string& envFroms);
				int getLimitMem()const;
				void setLimitMem(int limitMem);
				int getLimitmCpu()const;
				void setLimitmCpu(int limitmCpu);
				std::string getEdasContainerVersion()const;
				void setEdasContainerVersion(const std::string& edasContainerVersion);
				std::string getInternetSlbId()const;
				void setInternetSlbId(const std::string& internetSlbId);
				std::string getLogicalRegionId()const;
				void setLogicalRegionId(const std::string& logicalRegionId);
				std::string getPackageUrl()const;
				void setPackageUrl(const std::string& packageUrl);
				std::string getInternetSlbProtocol()const;
				void setInternetSlbProtocol(const std::string& internetSlbProtocol);
				std::string getMountDescs()const;
				void setMountDescs(const std::string& mountDescs);
				int getReplicas()const;
				void setReplicas(int replicas);
				int getLimitCpu()const;
				void setLimitCpu(int limitCpu);
				std::string getWebContainerConfig()const;
				void setWebContainerConfig(const std::string& webContainerConfig);
				bool getIsMultilingualApp()const;
				void setIsMultilingualApp(bool isMultilingualApp);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				int getIntranetTargetPort()const;
				void setIntranetTargetPort(int intranetTargetPort);
				std::string getCommand()const;
				void setCommand(const std::string& command);
				std::string getJDK()const;
				void setJDK(const std::string& jDK);
				std::string getUriEncoding()const;
				void setUriEncoding(const std::string& uriEncoding);
				std::string getIntranetSlbProtocol()const;
				void setIntranetSlbProtocol(const std::string& intranetSlbProtocol);
				std::string getImageUrl()const;
				void setImageUrl(const std::string& imageUrl);
				std::string getPvcMountDescs()const;
				void setPvcMountDescs(const std::string& pvcMountDescs);
				std::string get_Namespace()const;
				void set_Namespace(const std::string& _namespace);
				std::string getApplicationDescription()const;
				void setApplicationDescription(const std::string& applicationDescription);
				int getRequestsCpu()const;
				void setRequestsCpu(int requestsCpu);
				std::string getJavaStartUpConfig()const;
				void setJavaStartUpConfig(const std::string& javaStartUpConfig);

            private:
				std::string nasId_;
				std::string intranetSlbId_;
				std::string envs_;
				int requestsMem_;
				std::string storageType_;
				std::string configMountDescs_;
				std::string appName_;
				int requestsmCpu_;
				std::string deployAcrossZones_;
				int intranetSlbPort_;
				std::string deployAcrossNodes_;
				std::string preStop_;
				std::string buildPackId_;
				std::string localVolume_;
				bool useBodyEncoding_;
				std::string emptyDirs_;
				std::string packageType_;
				std::string runtimeClassName_;
				std::string postStart_;
				std::string repoId_;
				int internetTargetPort_;
				std::string webContainer_;
				bool enableAsm_;
				bool enableAhas_;
				std::string slsConfigs_;
				std::string commandArgs_;
				std::string readiness_;
				std::string liveness_;
				std::string csClusterId_;
				int internetSlbPort_;
				std::string packageVersion_;
				int timeout_;
				std::string envFroms_;
				int limitMem_;
				int limitmCpu_;
				std::string edasContainerVersion_;
				std::string internetSlbId_;
				std::string logicalRegionId_;
				std::string packageUrl_;
				std::string internetSlbProtocol_;
				std::string mountDescs_;
				int replicas_;
				int limitCpu_;
				std::string webContainerConfig_;
				bool isMultilingualApp_;
				std::string clusterId_;
				int intranetTargetPort_;
				std::string command_;
				std::string jDK_;
				std::string uriEncoding_;
				std::string intranetSlbProtocol_;
				std::string imageUrl_;
				std::string pvcMountDescs_;
				std::string _namespace_;
				std::string applicationDescription_;
				int requestsCpu_;
				std::string javaStartUpConfig_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_INSERTK8SAPPLICATIONREQUEST_H_