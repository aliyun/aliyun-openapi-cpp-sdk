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

#ifndef ALIBABACLOUD_SAE_MODEL_DESCRIBEAPPLICATIONCONFIGRESULT_H_
#define ALIBABACLOUD_SAE_MODEL_DESCRIBEAPPLICATIONCONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sae/SaeExport.h>

namespace AlibabaCloud
{
	namespace Sae
	{
		namespace Model
		{
			class ALIBABACLOUD_SAE_EXPORT DescribeApplicationConfigResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct ConfigMapMountDescItem
					{
						std::string mountPath;
						long configMapId;
						std::string configMapName;
						std::string key;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					struct MountDescItem
					{
						std::string mountPath;
						std::string nasPath;
					};
					struct OssMountDesc
					{
						std::string mountPath;
						bool readOnly;
						std::string bucketName;
						std::string bucketPath;
					};
					std::string timezone;
					std::string phpConfig;
					std::vector<MountDescItem> mountDesc;
					std::string liveness;
					std::string warStartOptions;
					int memory;
					std::string webContainer;
					int cpu;
					std::string nasConfigs;
					std::string jarStartArgs;
					std::string preStop;
					int minReadyInstances;
					std::string phpArmsConfigLocation;
					std::string packageType;
					std::vector<Tag> tags;
					std::string ossAkSecret;
					std::string python;
					std::string mseApplicationId;
					std::string vSwitchId;
					std::string imageUrl;
					std::string postStart;
					std::vector<ConfigMapMountDescItem> configMapMountDesc;
					std::string phpExtensions;
					std::string vpcId;
					std::string appId;
					std::string edasContainerVersion;
					std::string namespaceId;
					bool enableImageAccl;
					std::string tomcatConfig;
					std::string appDescription;
					std::string nasId;
					std::string acrInstanceId;
					std::string pythonModules;
					std::string kafkaConfigs;
					std::string slsConfigs;
					std::string updateStrategy;
					std::string ossAkId;
					std::string pvtzDiscovery;
					std::vector<OssMountDesc> ossMountDescs;
					std::string packageVersion;
					std::string appName;
					bool enableGreyTagRoute;
					std::string jdk;
					std::string readiness;
					std::string microRegistration;
					std::string php;
					std::string commandArgs;
					std::string acrAssumeRoleArn;
					std::string saeVersion;
					int terminationGracePeriodSeconds;
					std::string securityGroupId;
					std::string envs;
					std::string mseApplicationName;
					std::string jarStartOptions;
					std::string mountHost;
					std::string imagePullSecrets;
					int replicas;
					std::string customHostAlias;
					std::string appSource;
					std::string packageRuntimeCustomBuild;
					std::string command;
					bool associateEip;
					std::string packageUrl;
					std::string phpConfigLocation;
					int batchWaitTime;
					int minReadyInstanceRatio;
					std::string phpPECLExtensions;
					std::string regionId;
					std::string programmingLanguage;
					std::string enableAhas;
				};


				DescribeApplicationConfigResult();
				explicit DescribeApplicationConfigResult(const std::string &payload);
				~DescribeApplicationConfigResult();
				std::string getMessage()const;
				std::string getTraceId()const;
				Data getData()const;
				std::string getErrorCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string traceId_;
				Data data_;
				std::string errorCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAE_MODEL_DESCRIBEAPPLICATIONCONFIGRESULT_H_