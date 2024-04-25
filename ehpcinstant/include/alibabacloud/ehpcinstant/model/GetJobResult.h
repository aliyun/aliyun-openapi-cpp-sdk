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

#ifndef ALIBABACLOUD_EHPCINSTANT_MODEL_GETJOBRESULT_H_
#define ALIBABACLOUD_EHPCINSTANT_MODEL_GETJOBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpcinstant/EhpcInstantExport.h>

namespace AlibabaCloud
{
	namespace EhpcInstant
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPCINSTANT_EXPORT GetJobResult : public ServiceResult
			{
			public:
				struct JobInfo
				{
					struct DeploymentPolicy
					{
						struct Network
						{
							bool enableERI;
							std::vector<std::string> vswitch;
						};
						struct Tag
						{
							std::string value;
							std::string name;
						};
						std::string allocationSpec;
						Network network;
						std::vector<Tag> tags;
					};
					struct SecurityPolicy
					{
						struct SecurityGroup
						{
							std::vector<std::string> securityGroupIds;
						};
						SecurityGroup securityGroup;
					};
					struct DependencyPolicy
					{
						struct JobDependencyItem
						{
							std::string type;
							std::string jobId;
						};
						std::vector<JobDependencyItem> jobDependency;
					};
					struct MonitorPolicy
					{
						struct NotificationSpec
						{
							struct MNSTopicItem
							{
								std::string topicLocation;
								std::vector<std::string> event;
							};
							std::vector<MNSTopicItem> mNSTopic;
						};
						struct LogSpec
						{
							std::string project;
							std::string machineGroup;
							std::string logstore;
							std::string shard;
							std::string expireTime;
						};
						NotificationSpec notificationSpec;
						LogSpec logSpec;
					};
					struct Task
					{
						struct TaskSpec
						{
							struct Resource
							{
								struct Disk
								{
									std::string type;
									int size;
								};
								float cores;
								bool enableHT;
								int memory;
								std::vector<Disk> disks;
							};
							struct RetryPolicy
							{
								struct ExitCodeAction
								{
									std::string action;
									std::string exitCode;
								};
								int retryCount;
								std::vector<ExitCodeAction> exitCodeActions;
							};
							struct TaskExecutorItem
							{
								struct Container
								{
									struct EnvironmentVar
									{
										std::string value;
										std::string name;
									};
									std::vector<EnvironmentVar> environmentVars;
									std::string workingDir;
									std::string appId;
									std::string command;
									std::string image;
								};
								struct VM
								{
									struct EnvironmentVar2
									{
										std::string value;
										std::string name;
									};
									std::string script;
									std::string prologScript;
									std::string appId;
									std::vector<EnvironmentVar2> environmentVars1;
									std::string image;
								};
								Container container;
								VM vM;
							};
							struct VolumeMountItem
							{
								std::string mountPath;
								std::string volumeDriver;
								std::string mountOptions;
							};
							std::string taskDuration;
							std::vector<TaskExecutorItem> taskExecutor;
							Resource resource;
							std::vector<VolumeMountItem> volumeMount;
							RetryPolicy retryPolicy;
						};
						struct ExecutorPolicy
						{
							struct ArraySpec
							{
								int indexStart;
								int indexEnd;
								int indexStep;
							};
							ArraySpec arraySpec;
							int parallelism;
							int maxCount;
						};
						struct ExecutorStatusItem
						{
							std::string status;
							std::string endTime;
							int arrayId;
							std::string statusReason;
							std::string createTime;
							std::string startTime;
						};
						std::string taskName;
						TaskSpec taskSpec;
						ExecutorPolicy executorPolicy;
						std::vector<Task::ExecutorStatusItem> executorStatus;
						bool taskSustainable;
					};
					std::string jobScheduler;
					std::string status;
					std::vector<Task> tasks;
					std::string endTime;
					std::string createTime;
					std::string jobName;
					std::string startTime;
					DependencyPolicy dependencyPolicy;
					std::string jobDescription;
					SecurityPolicy securityPolicy;
					MonitorPolicy monitorPolicy;
					DeploymentPolicy deploymentPolicy;
					std::string jobId;
				};


				GetJobResult();
				explicit GetJobResult(const std::string &payload);
				~GetJobResult();
				JobInfo getJobInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				JobInfo jobInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPCINSTANT_MODEL_GETJOBRESULT_H_