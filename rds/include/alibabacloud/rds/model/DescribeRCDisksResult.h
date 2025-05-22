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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERCDISKSRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERCDISKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeRCDisksResult : public ServiceResult
			{
			public:
				struct Disk
				{
					struct TagItem
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string category;
					std::string description;
					std::string resourceGroupId;
					bool encrypted;
					long size;
					bool deleteAutoSnapshot;
					std::string diskChargeType;
					long iOPS;
					std::string expiredTime;
					std::string imageId;
					std::string storageSetId;
					std::string status;
					std::string storageClusterId;
					std::string zoneId;
					std::string instanceId;
					std::string sourceSnapshotId;
					std::string device;
					std::string performanceLevel;
					bool deleteWithInstance;
					std::string diskName;
					std::string type;
					std::string serialNumber;
					std::string creationTime;
					std::vector<Disk::TagItem> tag;
					std::string regionId;
					std::string diskId;
				};


				DescribeRCDisksResult();
				explicit DescribeRCDisksResult(const std::string &payload);
				~DescribeRCDisksResult();
				long getTotalCount()const;
				long getPageSize()const;
				long getPageNumber()const;
				std::vector<Disk> getDisks()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				long pageSize_;
				long pageNumber_;
				std::vector<Disk> disks_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERCDISKSRESULT_H_