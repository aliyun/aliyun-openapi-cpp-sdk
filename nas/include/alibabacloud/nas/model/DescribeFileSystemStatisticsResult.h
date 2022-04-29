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

#ifndef ALIBABACLOUD_NAS_MODEL_DESCRIBEFILESYSTEMSTATISTICSRESULT_H_
#define ALIBABACLOUD_NAS_MODEL_DESCRIBEFILESYSTEMSTATISTICSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/nas/NASExport.h>

namespace AlibabaCloud
{
	namespace NAS
	{
		namespace Model
		{
			class ALIBABACLOUD_NAS_EXPORT DescribeFileSystemStatisticsResult : public ServiceResult
			{
			public:
				struct FileSystem
				{
					struct Package
					{
						long size;
						std::string expiredTime;
						std::string startTime;
						std::string packageId;
					};
					std::string status;
					std::string storageType;
					std::string description;
					std::string zoneId;
					long meteredIASize;
					std::string createTime;
					long meteredSize;
					long capacity;
					std::vector<FileSystem::Package> packages;
					std::string chargeType;
					std::string protocolType;
					std::string fileSystemType;
					std::string expiredTime;
					std::string fileSystemId;
					std::string regionId;
				};
				struct FileSystemStatistic
				{
					int totalCount;
					int expiredCount;
					std::string fileSystemType;
					long meteredSize;
					int expiringCount;
				};


				DescribeFileSystemStatisticsResult();
				explicit DescribeFileSystemStatisticsResult(const std::string &payload);
				~DescribeFileSystemStatisticsResult();
				std::vector<FileSystem> getFileSystems()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<FileSystemStatistic> getFileSystemStatistics()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<FileSystem> fileSystems_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<FileSystemStatistic> fileSystemStatistics_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NAS_MODEL_DESCRIBEFILESYSTEMSTATISTICSRESULT_H_