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

#ifndef ALIBABACLOUD_EHPCINSTANT_MODEL_CREATEJOBREQUEST_H_
#define ALIBABACLOUD_EHPCINSTANT_MODEL_CREATEJOBREQUEST_H_

#include <alibabacloud/ehpcinstant/EhpcInstantExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EhpcInstant {
namespace Model {
class ALIBABACLOUD_EHPCINSTANT_EXPORT CreateJobRequest : public RpcServiceRequest {
public:
	struct MonitorPolicy {
		struct NotificationSpec {
			struct MNSTopicItem {
				std::string string;
				std::vector<std::string> event;
				std::string topicLocation;
			};
			MNSTopicItem mNSTopicItem;
			std::vector<MNSTopicItem> mNSTopic;
		};
		NotificationSpec notificationSpec;
	};
	struct DeploymentPolicy {
		std::string allocationSpec;
		struct Network {
			bool enableERI;
			std::string string;
			std::vector<std::string> vswitch;
			bool enableENIMapping;
		};
		Network network;
	};
	struct Tasks {
		bool taskSustainable;
		std::string taskName;
		struct ExecutorPolicy {
			int maxCount;
			struct ArraySpec {
				int indexStart;
				int indexStep;
				int indexEnd;
			};
			ArraySpec arraySpec;
		};
		ExecutorPolicy executorPolicy;
		struct TaskSpec {
			struct VolumeMountItem {
				std::string mountOptions;
				std::string volumeDriver;
				std::string mountPath;
			};
			VolumeMountItem volumeMountItem;
			std::vector<VolumeMountItem> volumeMount;
			struct RetryPolicy {
				int retryCount;
				struct ExitCodeActionsItem {
					std::string action;
					std::string exitCode;
				};
				ExitCodeActionsItem exitCodeActionsItem;
				std::vector<ExitCodeActionsItem> exitCodeActions;
			};
			RetryPolicy retryPolicy;
			struct Resource {
				float cores;
				float memory;
				struct DisksItem {
					int size;
					std::string type;
				};
				DisksItem disksItem;
				std::vector<DisksItem> disks;
				bool enableHT;
			};
			Resource resource;
			std::string taskDuration;
			struct TaskExecutorItem {
				struct Container {
					std::string image;
					struct EnvironmentVarsItem {
						std::string name;
						std::string value;
					};
					EnvironmentVarsItem environmentVarsItem;
					std::vector<EnvironmentVarsItem> environmentVars;
					std::string workingDir;
					std::string string;
					std::vector<std::string> command;
				};
				Container container;
				struct VM {
					std::string image;
					std::string prologScript;
					struct EnvironmentVarsItem {
						std::string name;
						std::string value;
					};
					EnvironmentVarsItem environmentVarsItem;
					std::vector<EnvironmentVarsItem> environmentVars;
					std::string script;
				};
				VM vM;
			};
			TaskExecutorItem taskExecutorItem;
			std::vector<TaskExecutorItem> taskExecutor;
		};
		TaskSpec taskSpec;
	};
	CreateJobRequest();
	~CreateJobRequest();
	MonitorPolicy getMonitorPolicy() const;
	void setMonitorPolicy(const MonitorPolicy &monitorPolicy);
	std::string getJobDescription() const;
	void setJobDescription(const std::string &jobDescription);
	DeploymentPolicy getDeploymentPolicy() const;
	void setDeploymentPolicy(const DeploymentPolicy &deploymentPolicy);
	std::string getJobName() const;
	void setJobName(const std::string &jobName);
	std::vector<Tasks> getTasks() const;
	void setTasks(const std::vector<Tasks> &tasks);

private:
	MonitorPolicy monitorPolicy_;
	std::string jobDescription_;
	DeploymentPolicy deploymentPolicy_;
	std::string jobName_;
	std::vector<Tasks> tasks_;
};
} // namespace Model
} // namespace EhpcInstant
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPCINSTANT_MODEL_CREATEJOBREQUEST_H_
