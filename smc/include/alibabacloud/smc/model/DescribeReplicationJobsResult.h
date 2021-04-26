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

#ifndef ALIBABACLOUD_SMC_MODEL_DESCRIBEREPLICATIONJOBSRESULT_H_
#define ALIBABACLOUD_SMC_MODEL_DESCRIBEREPLICATIONJOBSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/smc/SmcExport.h>

namespace AlibabaCloud
{
	namespace Smc
	{
		namespace Model
		{
			class ALIBABACLOUD_SMC_EXPORT DescribeReplicationJobsResult : public ServiceResult
			{
			public:
				struct ReplicationJob
				{
					struct SystemDiskPart
					{
						std::string device;
						bool block;
						long sizeBytes;
					};
					struct DataDisk
					{
						struct Part
						{
							std::string device;
							bool block;
							long sizeBytes;
						};
						std::vector<DataDisk::Part> parts;
						int size;
						int index;
					};
					struct ReplicationJobRun
					{
						std::string type;
						std::string endTime;
						std::string imageId;
						std::string startTime;
					};
					std::string description;
					std::vector<ReplicationJob::DataDisk> dataDisks;
					std::string endTime;
					std::string transitionInstanceId;
					int systemDiskSize;
					int netMode;
					std::vector<ReplicationJob::SystemDiskPart> systemDiskParts;
					std::string sourceId;
					std::string containerTag;
					std::string businessStatus;
					std::string name;
					std::string validTime;
					std::string licenseType;
					int maxNumberOfImageToKeep;
					bool runOnce;
					std::string instanceRamRole;
					std::string containerRepository;
					std::string targetType;
					std::string imageId;
					std::string instanceType;
					std::vector<ReplicationJob::ReplicationJobRun> replicationJobRuns;
					std::string jobId;
					std::string status;
					float progress;
					std::string instanceId;
					std::string vSwitchId;
					std::string startTime;
					std::string launchTemplateId;
					std::string replicationParameters;
					std::string imageName;
					std::string vpcId;
					std::string statusInfo;
					std::string containerNamespace;
					std::string creationTime;
					std::string launchTemplateVersion;
					int frequency;
					std::string regionId;
					std::string scheduledStartTime;
					std::string errorCode;
				};


				DescribeReplicationJobsResult();
				explicit DescribeReplicationJobsResult(const std::string &payload);
				~DescribeReplicationJobsResult();
				int getTotalCount()const;
				std::vector<ReplicationJob> getReplicationJobs()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<ReplicationJob> replicationJobs_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMC_MODEL_DESCRIBEREPLICATIONJOBSRESULT_H_