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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEFILESYSTEMSRESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEFILESYSTEMSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT DescribeFileSystemsResult : public ServiceResult
			{
			public:
				struct FileSystemsItem
				{
					struct MountTargetsItem
					{
						std::string status;
						std::string netWorkId;
						std::string mountTargetName;
						std::string mountTargetDomain;
					};
					std::string status;
					std::string storageType;
					long capacity;
					std::string protocolType;
					std::vector<FileSystemsItem::MountTargetsItem> mountTargets;
					std::string creationTime;
					std::string fileSystemId;
					std::string fileSystemName;
					std::string payType;
					std::string ensRegionId;
					long meteredSize;
				};


				DescribeFileSystemsResult();
				explicit DescribeFileSystemsResult(const std::string &payload);
				~DescribeFileSystemsResult();
				std::vector<FileSystemsItem> getFileSystems()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<FileSystemsItem> fileSystems_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEFILESYSTEMSRESULT_H_