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

#ifndef ALIBABACLOUD_EDAS_MODEL_CREATEAPPLICATIONTEMPLATEREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_CREATEAPPLICATIONTEMPLATEREQUEST_H_

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
			class ALIBABACLOUD_EDAS_EXPORT CreateApplicationTemplateRequest : public RoaServiceRequest
			{

			public:
				CreateApplicationTemplateRequest();
				~CreateApplicationTemplateRequest();

				std::string getNasId()const;
				void setNasId(const std::string& nasId);
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
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getEnvs()const;
				void setEnvs(const std::string& envs);
				std::string getEnvFroms()const;
				void setEnvFroms(const std::string& envFroms);
				std::string getRequestCpu()const;
				void setRequestCpu(const std::string& requestCpu);
				std::string getRequestMem()const;
				void setRequestMem(const std::string& requestMem);
				std::string getShowName()const;
				void setShowName(const std::string& showName);
				std::string getLimitMem()const;
				void setLimitMem(const std::string& limitMem);
				std::string getConfigMountDescs()const;
				void setConfigMountDescs(const std::string& configMountDescs);
				bool getDeployAcrossZones()const;
				void setDeployAcrossZones(bool deployAcrossZones);
				bool getDeployAcrossNodes()const;
				void setDeployAcrossNodes(bool deployAcrossNodes);
				std::string getPreStop()const;
				void setPreStop(const std::string& preStop);
				long getReplicas()const;
				void setReplicas(long replicas);
				std::string getLimitCpu()const;
				void setLimitCpu(const std::string& limitCpu);
				std::string getWebContainerConfig()const;
				void setWebContainerConfig(const std::string& webContainerConfig);
				std::string getPackageConfig()const;
				void setPackageConfig(const std::string& packageConfig);
				bool getIsMultilingualApp()const;
				void setIsMultilingualApp(bool isMultilingualApp);
				std::string getNasMountDescs()const;
				void setNasMountDescs(const std::string& nasMountDescs);
				std::string getLocalVolumes()const;
				void setLocalVolumes(const std::string& localVolumes);
				std::string getCommand()const;
				void setCommand(const std::string& command);
				std::string getNasStorageType()const;
				void setNasStorageType(const std::string& nasStorageType);
				std::string getImageConfig()const;
				void setImageConfig(const std::string& imageConfig);
				std::string getSourceConfig()const;
				void setSourceConfig(const std::string& sourceConfig);
				std::string getEmptyDirs()const;
				void setEmptyDirs(const std::string& emptyDirs);
				std::string getPvcMountDescs()const;
				void setPvcMountDescs(const std::string& pvcMountDescs);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getAttributes()const;
				void setAttributes(const std::string& attributes);
				std::string getRuntimeClassName()const;
				void setRuntimeClassName(const std::string& runtimeClassName);
				std::string getJavaStartUpConfig()const;
				void setJavaStartUpConfig(const std::string& javaStartUpConfig);
				std::string getPostStart()const;
				void setPostStart(const std::string& postStart);

            private:
				std::string nasId_;
				bool enableAhas_;
				std::string slsConfigs_;
				std::string commandArgs_;
				std::string readiness_;
				std::string liveness_;
				std::string description_;
				std::string envs_;
				std::string envFroms_;
				std::string requestCpu_;
				std::string requestMem_;
				std::string showName_;
				std::string limitMem_;
				std::string configMountDescs_;
				bool deployAcrossZones_;
				bool deployAcrossNodes_;
				std::string preStop_;
				long replicas_;
				std::string limitCpu_;
				std::string webContainerConfig_;
				std::string packageConfig_;
				bool isMultilingualApp_;
				std::string nasMountDescs_;
				std::string localVolumes_;
				std::string command_;
				std::string nasStorageType_;
				std::string imageConfig_;
				std::string sourceConfig_;
				std::string emptyDirs_;
				std::string pvcMountDescs_;
				std::string name_;
				std::string attributes_;
				std::string runtimeClassName_;
				std::string javaStartUpConfig_;
				std::string postStart_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_CREATEAPPLICATIONTEMPLATEREQUEST_H_