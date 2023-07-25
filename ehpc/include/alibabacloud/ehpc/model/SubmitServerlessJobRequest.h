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

#ifndef ALIBABACLOUD_EHPC_MODEL_SUBMITSERVERLESSJOBREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_SUBMITSERVERLESSJOBREQUEST_H_

#include <alibabacloud/ehpc/EHPCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT SubmitServerlessJobRequest : public RpcServiceRequest {
public:
	struct Container {
		struct VolumeMountItem {
			std::string flexVolumeDriver;
			std::string mountPath;
			bool readOnly;
			std::string mountPropagation;
			std::string subPath;
			std::string nFSVolumePath;
			std::string type;
			std::string flexVolumeOptions;
			bool nFSVolumeReadOnly;
			std::string nFSVolumeServer;
		};
		VolumeMountItem volumeMountItem;
		std::vector<VolumeMountItem> volumeMount;
		std::string image;
		struct PortItem {
			std::string protocol;
			int port;
		};
		PortItem portItem;
		std::vector<PortItem> port;
		struct EnvironmentVarItem {
			std::string value;
			std::string key;
		};
		EnvironmentVarItem environmentVarItem;
		std::vector<EnvironmentVarItem> environmentVar;
		std::string workingDir;
		std::string string;
		std::vector<std::string> arg;
		std::string name;
		int gpu;
		std::string string;
		std::vector<std::string> command;
	};
	struct DependsOn {
		std::string jobId;
		std::string type;
	};
	struct AcrRegistryInfo {
		std::string instanceName;
		std::string instanceId;
		std::string regionId;
		std::string string;
		std::vector<std::string> domain;
	};
	struct Volume {
		std::string flexVolumeDriver;
		std::string nFSVolumePath;
		std::string flexVolumeOptions;
		bool nFSVolumeReadOnly;
		std::string nFSVolumeServer;
	};
	struct RetryStrategy {
		struct EvaluateOnExitItem {
			std::string action;
			std::string onExitCode;
		};
		EvaluateOnExitItem evaluateOnExitItem;
		std::vector<EvaluateOnExitItem> evaluateOnExit;
		int attempts;
	};
	struct ArrayProperties {
		long indexStart;
		long indexStep;
		long indexEnd;
	};
	SubmitServerlessJobRequest();
	~SubmitServerlessJobRequest();
	Container getContainer() const;
	void setContainer(const Container &container);
	float getMemory() const;
	void setMemory(float memory);
	std::vector<DependsOn> getDependsOn() const;
	void setDependsOn(const std::vector<DependsOn> &dependsOn);
	float getSpotPriceLimit() const;
	void setSpotPriceLimit(float spotPriceLimit);
	std::string getJobQueue() const;
	void setJobQueue(const std::string &jobQueue);
	long getTimeout() const;
	void setTimeout(long timeout);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getJobUser() const;
	void setJobUser(const std::string &jobUser);
	std::vector<std::string> getInstanceType() const;
	void setInstanceType(const std::vector<std::string> &instanceType);
	std::string getJobName() const;
	void setJobName(const std::string &jobName);
	long getJobPriority() const;
	void setJobPriority(long jobPriority);
	float getCpu() const;
	void setCpu(float cpu);
	std::string getRamRoleName() const;
	void setRamRoleName(const std::string &ramRoleName);
	std::vector<AcrRegistryInfo> getAcrRegistryInfo() const;
	void setAcrRegistryInfo(const std::vector<AcrRegistryInfo> &acrRegistryInfo);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getSpotStrategy() const;
	void setSpotStrategy(const std::string &spotStrategy);
	std::vector<std::string> getVSwitchId() const;
	void setVSwitchId(const std::vector<std::string> &vSwitchId);
	std::vector<Volume> getVolume() const;
	void setVolume(const std::vector<Volume> &volume);
	RetryStrategy getRetryStrategy() const;
	void setRetryStrategy(const RetryStrategy &retryStrategy);
	int getEphemeralStorage() const;
	void setEphemeralStorage(int ephemeralStorage);
	ArrayProperties getArrayProperties() const;
	void setArrayProperties(const ArrayProperties &arrayProperties);

private:
	Container container_;
	float memory_;
	std::vector<DependsOn> dependsOn_;
	float spotPriceLimit_;
	std::string jobQueue_;
	long timeout_;
	std::string accessKeyId_;
	std::string jobUser_;
	std::vector<std::string> instanceType_;
	std::string jobName_;
	long jobPriority_;
	float cpu_;
	std::string ramRoleName_;
	std::vector<AcrRegistryInfo> acrRegistryInfo_;
	std::string clusterId_;
	std::string spotStrategy_;
	std::vector<std::string> vSwitchId_;
	std::vector<Volume> volume_;
	RetryStrategy retryStrategy_;
	int ephemeralStorage_;
	ArrayProperties arrayProperties_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_SUBMITSERVERLESSJOBREQUEST_H_
