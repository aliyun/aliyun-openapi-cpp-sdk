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

#ifndef ALIBABACLOUD_EDAS_MODEL_GETK8SAPPLICATIONRESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_GETK8SAPPLICATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT GetK8sApplicationResult : public ServiceResult
			{
			public:
				struct Applcation
				{
					struct ImageInfo
					{
						std::string repoNamespace;
						std::string repoOriginType;
						std::string repoName;
						std::string imageUrl;
						std::string regionId;
						std::string tag;
						std::string repoId;
					};
					struct App
					{
						struct Env
						{
							std::string value;
							std::string name;
						};
						std::string deployType;
						int requestMem;
						std::string applicationName;
						int limitCpuM;
						std::string clusterId;
						int buildpackId;
						int instancesBeforeScaling;
						std::string csClusterId;
						std::vector<Env> envList;
						int instances;
						std::string k8sNamespace;
						std::string applicationType;
						std::string appId;
						std::string edasContainerVersion;
						std::vector<std::string> cmdArgs;
						int requestCpuM;
						std::string cmd;
						std::string tomcatVersion;
						std::string regionId;
						int limitMem;
					};
					struct Conf
					{
						std::string liveness;
						std::string postStart;
						std::string deployAcrossZones;
						std::string jarStartOptions;
						std::string k8sLocalvolumeInfo;
						bool ahasEnabled;
						std::string k8sNasInfo;
						std::string jarStartArgs;
						std::string k8sCmd;
						std::string k8sVolumeInfo;
						std::string k8sCmdArgs;
						std::string preStop;
						std::string readiness;
						std::string deployAcrossNodes;
						std::string runtimeClassName;
					};
					struct LatestVersion
					{
						std::string warUrl;
						std::string packageVersion;
						std::string url;
					};
					struct DeployGroup
					{
						struct ComponentsItem
						{
							std::string type;
							std::string componentKey;
							std::string componentId;
						};
						std::vector<DeployGroup::ComponentsItem> components;
					};
					App app;
					Conf conf;
					std::string appId;
					LatestVersion latestVersion;
					std::vector<DeployGroup> deployGroups;
					ImageInfo imageInfo;
				};


				GetK8sApplicationResult();
				explicit GetK8sApplicationResult(const std::string &payload);
				~GetK8sApplicationResult();
				std::string getMessage()const;
				Applcation getApplcation()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Applcation applcation_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_GETK8SAPPLICATIONRESULT_H_