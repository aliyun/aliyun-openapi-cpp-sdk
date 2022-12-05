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

#ifndef ALIBABACLOUD_SAE_MODEL_UPDATEJOBREQUEST_H_
#define ALIBABACLOUD_SAE_MODEL_UPDATEJOBREQUEST_H_

#include <alibabacloud/sae/SaeExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sae {
namespace Model {
class ALIBABACLOUD_SAE_EXPORT UpdateJobRequest : public RoaServiceRequest {
public:
	UpdateJobRequest();
	~UpdateJobRequest();
	std::string getNasId() const;
	void setNasId(const std::string &nasId);
	std::string getJarStartArgs() const;
	void setJarStartArgs(const std::string &jarStartArgs);
	std::string getConcurrencyPolicy() const;
	void setConcurrencyPolicy(const std::string &concurrencyPolicy);
	std::string getTriggerConfig() const;
	void setTriggerConfig(const std::string &triggerConfig);
	std::string getOssAkSecret() const;
	void setOssAkSecret(const std::string &ossAkSecret);
	std::string getMountHost() const;
	void setMountHost(const std::string &mountHost);
	int getBatchWaitTime() const;
	void setBatchWaitTime(int batchWaitTime);
	std::string getEnvs() const;
	void setEnvs(const std::string &envs);
	std::string getPhpPECLExtensions() const;
	void setPhpPECLExtensions(const std::string &phpPECLExtensions);
	std::string getPhpArmsConfigLocation() const;
	void setPhpArmsConfigLocation(const std::string &phpArmsConfigLocation);
	std::string getProgrammingLanguage() const;
	void setProgrammingLanguage(const std::string &programmingLanguage);
	std::string getCustomHostAlias() const;
	void setCustomHostAlias(const std::string &customHostAlias);
	std::string getJarStartOptions() const;
	void setJarStartOptions(const std::string &jarStartOptions);
	bool getSlice() const;
	void setSlice(bool slice);
	std::string getConfigMapMountDesc() const;
	void setConfigMapMountDesc(const std::string &configMapMountDesc);
	std::string getOssMountDescs() const;
	void setOssMountDescs(const std::string &ossMountDescs);
	std::string getImagePullSecrets() const;
	void setImagePullSecrets(const std::string &imagePullSecrets);
	std::string getPreStop() const;
	void setPreStop(const std::string &preStop);
	std::string getPython() const;
	void setPython(const std::string &python);
	long getBackoffLimit() const;
	void setBackoffLimit(long backoffLimit);
	std::string getUpdateStrategy() const;
	void setUpdateStrategy(const std::string &updateStrategy);
	std::string getChangeOrderDesc() const;
	void setChangeOrderDesc(const std::string &changeOrderDesc);
	bool getAutoEnableApplicationScalingRule() const;
	void setAutoEnableApplicationScalingRule(bool autoEnableApplicationScalingRule);
	std::string getPostStart() const;
	void setPostStart(const std::string &postStart);
	std::string getPhpExtensions() const;
	void setPhpExtensions(const std::string &phpExtensions);
	bool getAssociateEip() const;
	void setAssociateEip(bool associateEip);
	std::string getWebContainer() const;
	void setWebContainer(const std::string &webContainer);
	std::string getEnableAhas() const;
	void setEnableAhas(const std::string &enableAhas);
	std::string getSlsConfigs() const;
	void setSlsConfigs(const std::string &slsConfigs);
	std::string getCommandArgs() const;
	void setCommandArgs(const std::string &commandArgs);
	std::string getAcrAssumeRoleArn() const;
	void setAcrAssumeRoleArn(const std::string &acrAssumeRoleArn);
	std::string getReadiness() const;
	void setReadiness(const std::string &readiness);
	std::string getTimezone() const;
	void setTimezone(const std::string &timezone);
	std::string getOssAkId() const;
	void setOssAkId(const std::string &ossAkId);
	std::string getLiveness() const;
	void setLiveness(const std::string &liveness);
	std::string getPackageVersion() const;
	void setPackageVersion(const std::string &packageVersion);
	std::string getTomcatConfig() const;
	void setTomcatConfig(const std::string &tomcatConfig);
	long getTimeout() const;
	void setTimeout(long timeout);
	std::string getWarStartOptions() const;
	void setWarStartOptions(const std::string &warStartOptions);
	std::string getPackageRuntimeCustomBuild() const;
	void setPackageRuntimeCustomBuild(const std::string &packageRuntimeCustomBuild);
	std::string getEdasContainerVersion() const;
	void setEdasContainerVersion(const std::string &edasContainerVersion);
	std::string getPackageUrl() const;
	void setPackageUrl(const std::string &packageUrl);
	int getTerminationGracePeriodSeconds() const;
	void setTerminationGracePeriodSeconds(int terminationGracePeriodSeconds);
	std::string getPhpConfig() const;
	void setPhpConfig(const std::string &phpConfig);
	std::string getSliceEnvs() const;
	void setSliceEnvs(const std::string &sliceEnvs);
	bool getEnableImageAccl() const;
	void setEnableImageAccl(bool enableImageAccl);
	bool getEnableGreyTagRoute() const;
	void setEnableGreyTagRoute(bool enableGreyTagRoute);
	std::string getReplicas() const;
	void setReplicas(const std::string &replicas);
	std::string getCommand() const;
	void setCommand(const std::string &command);
	std::string getMountDesc() const;
	void setMountDesc(const std::string &mountDesc);
	std::string getJdk() const;
	void setJdk(const std::string &jdk);
	int getMinReadyInstances() const;
	void setMinReadyInstances(int minReadyInstances);
	std::string getAcrInstanceId() const;
	void setAcrInstanceId(const std::string &acrInstanceId);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getImageUrl() const;
	void setImageUrl(const std::string &imageUrl);
	std::string getPhp() const;
	void setPhp(const std::string &php);
	std::string getRefAppId() const;
	void setRefAppId(const std::string &refAppId);
	std::string getPythonModules() const;
	void setPythonModules(const std::string &pythonModules);
	std::string getPhpConfigLocation() const;
	void setPhpConfigLocation(const std::string &phpConfigLocation);

private:
	std::string nasId_;
	std::string jarStartArgs_;
	std::string concurrencyPolicy_;
	std::string triggerConfig_;
	std::string ossAkSecret_;
	std::string mountHost_;
	int batchWaitTime_;
	std::string envs_;
	std::string phpPECLExtensions_;
	std::string phpArmsConfigLocation_;
	std::string programmingLanguage_;
	std::string customHostAlias_;
	std::string jarStartOptions_;
	bool slice_;
	std::string configMapMountDesc_;
	std::string ossMountDescs_;
	std::string imagePullSecrets_;
	std::string preStop_;
	std::string python_;
	long backoffLimit_;
	std::string updateStrategy_;
	std::string changeOrderDesc_;
	bool autoEnableApplicationScalingRule_;
	std::string postStart_;
	std::string phpExtensions_;
	bool associateEip_;
	std::string webContainer_;
	std::string enableAhas_;
	std::string slsConfigs_;
	std::string commandArgs_;
	std::string acrAssumeRoleArn_;
	std::string readiness_;
	std::string timezone_;
	std::string ossAkId_;
	std::string liveness_;
	std::string packageVersion_;
	std::string tomcatConfig_;
	long timeout_;
	std::string warStartOptions_;
	std::string packageRuntimeCustomBuild_;
	std::string edasContainerVersion_;
	std::string packageUrl_;
	int terminationGracePeriodSeconds_;
	std::string phpConfig_;
	std::string sliceEnvs_;
	bool enableImageAccl_;
	bool enableGreyTagRoute_;
	std::string replicas_;
	std::string command_;
	std::string mountDesc_;
	std::string jdk_;
	int minReadyInstances_;
	std::string acrInstanceId_;
	std::string appId_;
	std::string imageUrl_;
	std::string php_;
	std::string refAppId_;
	std::string pythonModules_;
	std::string phpConfigLocation_;
};
} // namespace Model
} // namespace Sae
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAE_MODEL_UPDATEJOBREQUEST_H_
