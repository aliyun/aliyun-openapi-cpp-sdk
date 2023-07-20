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

#ifndef ALIBABACLOUD_EHPC_MODEL_DESCRIBESERVERLESSJOBSRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_DESCRIBESERVERLESSJOBSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT DescribeServerlessJobsResult : public ServiceResult
			{
			public:
				struct JobInfo
				{
					struct ArrayProperties
					{
						long indexStart;
						long indexEnd;
						long indexStep;
					};
					struct ContainerGroup
					{
						struct DnsConfig
						{
							struct Option
							{
								std::string value;
								std::string name;
							};
							std::vector<Option> options;
							std::vector<std::string> searches;
							std::vector<std::string> nameServers;
						};
						struct EciSecurityContext
						{
							struct Sysctl
							{
								std::string value;
								std::string name;
							};
							std::vector<Sysctl> sysctls;
						};
						struct Container
						{
							struct CurrentState
							{
								long signal;
								std::string finishTime;
								std::string message;
								std::string state;
								long exitCode;
								std::string startTime;
								std::string detailStatus;
								std::string reason;
							};
							struct LivenessProbe
							{
								struct HttpGet
								{
									std::string path;
									std::string scheme;
									long port;
								};
								struct TcpSocket
								{
									long port;
									std::string host;
								};
								long initialDelaySeconds;
								long timeoutSeconds;
								std::vector<std::string> execs;
								HttpGet httpGet;
								long periodSeconds;
								TcpSocket tcpSocket;
								long failureThreshold;
								long successThreshold;
							};
							struct PreviousState
							{
								long signal;
								std::string finishTime;
								std::string message;
								std::string state;
								long exitCode;
								std::string startTime;
								std::string detailStatus;
								std::string reason;
							};
							struct ReadinessProbe
							{
								struct HttpGet2
								{
									std::string path;
									std::string scheme;
									long port;
								};
								struct TcpSocket3
								{
									long port;
									std::string host;
								};
								long initialDelaySeconds;
								long timeoutSeconds;
								HttpGet2 httpGet2;
								TcpSocket3 tcpSocket3;
								std::vector<std::string> execs1;
								long periodSeconds;
								long failureThreshold;
								long successThreshold;
							};
							struct SecurityContext
							{
								struct Capability
								{
									std::vector<std::string> adds;
								};
								long runAsUser;
								Capability capability;
								bool readOnlyRootFilesystem;
							};
							struct EnvironmentVar
							{
								struct ValueFrom
								{
									struct FieldRef
									{
										std::string fieldPath;
									};
									FieldRef fieldRef;
								};
								ValueFrom valueFrom;
								std::string value;
								std::string key;
							};
							struct Port
							{
								long port;
								std::string protocol;
							};
							struct VolumeMount
							{
								std::string mountPath;
								bool readOnly;
								std::string subPath;
								std::string mountPropagation;
								std::string name;
							};
							ReadinessProbe readinessProbe;
							std::vector<Container::EnvironmentVar> environmentVars;
							std::vector<std::string> args;
							LivenessProbe livenessProbe;
							float memory;
							std::vector<Container::Port> ports;
							float cpu;
							std::string image;
							int gpu;
							PreviousState previousState;
							bool stdinOnce;
							std::string name;
							bool stdin;
							int restartCount;
							bool ready;
							std::string workingDir;
							std::vector<Container::VolumeMount> volumeMounts;
							std::string imagePullPolicy;
							CurrentState currentState;
							SecurityContext securityContext;
							bool tty;
							std::vector<std::string> commands;
						};
						struct Volume
						{
							struct ConfigFileVolumeConfigFileToPath
							{
								std::string path;
								std::string content;
							};
							std::string emptyDirVolumeSizeLimit;
							std::string flexVolumeFsType;
							std::string nFSVolumeServer;
							std::vector<Volume::ConfigFileVolumeConfigFileToPath> configFileVolumeConfigFileToPaths;
							bool nFSVolumeReadOnly;
							std::string name;
							std::string nFSVolumePath;
							std::string type;
							std::string flexVolumeDriver;
							std::string diskVolumeDiskId;
							std::string flexVolumeOptions;
							std::string emptyDirVolumeMedium;
							std::string diskVolumeFsType;
						};
						struct Event
						{
							std::string type;
							std::string lastTimestamp;
							std::string message;
							int count;
							std::string firstTimestamp;
							std::string reason;
							std::string name;
						};
						struct HostAlias
						{
							std::string ip;
							std::vector<std::string> hostnames;
						};
						struct InitContainer
						{
							struct CurrentState5
							{
								long signal;
								std::string finishTime;
								std::string message;
								std::string state;
								long exitCode;
								std::string startTime;
								std::string detailStatus;
								std::string reason;
							};
							struct PreviousState6
							{
								long signal;
								std::string finishTime;
								std::string message;
								std::string state;
								long exitCode;
								std::string startTime;
								std::string detailStatus;
								std::string reason;
							};
							struct SecurityContext7
							{
								struct Capability16
								{
									std::vector<std::string> adds17;
								};
								long runAsUser;
								bool readOnlyRootFilesystem;
								Capability16 capability16;
							};
							struct EnvironmentVar11
							{
								struct ValueFrom12
								{
									struct FieldRef13
									{
										std::string fieldPath;
									};
									FieldRef13 fieldRef13;
								};
								std::string value;
								std::string key;
								ValueFrom12 valueFrom12;
							};
							struct Port14
							{
								long port;
								std::string protocol;
							};
							struct VolumeMount15
							{
								std::string mountPath;
								bool readOnly;
								std::string mountPropagation;
								std::string name;
							};
							PreviousState6 previousState6;
							long memory;
							long cpu;
							std::string image;
							long gpu;
							std::string name;
							CurrentState5 currentState5;
							long restartCount;
							std::vector<InitContainer::EnvironmentVar11> environmentVars8;
							bool ready;
							std::string workingDir;
							std::vector<InitContainer::Port14> ports9;
							std::vector<InitContainer::VolumeMount15> volumeMounts10;
							std::string imagePullPolicy;
							std::vector<std::string> command;
							SecurityContext7 securityContext7;
							std::vector<std::string> args4;
						};
						struct Tag
						{
							std::string value;
							std::string key;
						};
						long discount;
						std::string resourceGroupId;
						float memory;
						std::vector<ContainerGroup::Container> containers;
						float cpu;
						EciSecurityContext eciSecurityContext;
						std::string tenantSecurityGroupId;
						std::string failedTime;
						std::string containerGroupName;
						std::string intranetIp;
						std::vector<ContainerGroup::Volume> volumes;
						std::string ramRoleName;
						DnsConfig dnsConfig;
						std::string internetIp;
						std::vector<ContainerGroup::Event> events;
						std::string expiredTime;
						float spotPriceLimit;
						std::string instanceType;
						std::vector<ContainerGroup::Tag> tags;
						std::string spotStrategy;
						std::string ipv6Address;
						std::string status;
						std::string tenantEniIp;
						std::vector<ContainerGroup::InitContainer> initContainers;
						std::string zoneId;
						std::string succeededTime;
						std::string securityGroupId;
						std::string vSwitchId;
						std::string restartPolicy;
						std::string tenantEniInstanceId;
						std::vector<ContainerGroup::HostAlias> hostAliases;
						std::string tenantVSwitchId;
						std::string vpcId;
						std::string creationTime;
						std::string eniInstanceId;
						std::string containerGroupId;
						std::string regionId;
						long ephemeralStorage;
					};
					std::string user;
					std::vector<JobInfo::ContainerGroup> containerGroups;
					long endTime;
					long priority;
					std::string jobName;
					long startTime;
					long lastModifyTime;
					long submitTime;
					ArrayProperties arrayProperties;
					std::string state;
					bool isArrayJob;
					std::string queue;
					std::string jobId;
				};


				DescribeServerlessJobsResult();
				explicit DescribeServerlessJobsResult(const std::string &payload);
				~DescribeServerlessJobsResult();
				int getTotalCount()const;
				std::vector<JobInfo> getJobInfos()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<JobInfo> jobInfos_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_DESCRIBESERVERLESSJOBSRESULT_H_