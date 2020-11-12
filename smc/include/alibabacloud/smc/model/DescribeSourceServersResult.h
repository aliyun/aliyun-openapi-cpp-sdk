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

#ifndef ALIBABACLOUD_SMC_MODEL_DESCRIBESOURCESERVERSRESULT_H_
#define ALIBABACLOUD_SMC_MODEL_DESCRIBESOURCESERVERSRESULT_H_

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
			class ALIBABACLOUD_SMC_EXPORT DescribeSourceServersResult : public ServiceResult
			{
			public:
				struct SourceServer
				{
					struct DataDisk
					{
						struct Part
						{
							std::string path;
							bool need;
							std::string device;
							bool canBlock;
							long sizeBytes;
						};
						std::string path;
						std::vector<DataDisk::Part> parts;
						int size;
						int index;
					};
					struct SystemDiskPart
					{
						std::string path;
						bool need;
						std::string device;
						bool canBlock;
						long sizeBytes;
					};
					std::string description;
					std::string systemInfo;
					std::vector<SourceServer::DataDisk> dataDisks;
					std::string platform;
					std::string architecture;
					std::string agentVersion;
					int systemDiskSize;
					std::vector<SourceServer::SystemDiskPart> systemDiskParts;
					std::string sourceId;
					std::string name;
					int kernelLevel;
					std::string replicationDriver;
					std::string statusInfo;
					std::string state;
					std::string creationTime;
					int heartbeatRate;
					std::string errorCode;
					std::string jobId;
				};


				DescribeSourceServersResult();
				explicit DescribeSourceServersResult(const std::string &payload);
				~DescribeSourceServersResult();
				std::vector<SourceServer> getSourceServers()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<SourceServer> sourceServers_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMC_MODEL_DESCRIBESOURCESERVERSRESULT_H_