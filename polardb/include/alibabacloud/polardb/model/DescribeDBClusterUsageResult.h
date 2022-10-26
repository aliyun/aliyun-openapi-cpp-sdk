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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERUSAGERESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERUSAGERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeDBClusterUsageResult : public ServiceResult
			{
			public:


				DescribeDBClusterUsageResult();
				explicit DescribeDBClusterUsageResult(const std::string &payload);
				~DescribeDBClusterUsageResult();
				long getBlktagTotal()const;
				long getDataLevel1BackupChainSize()const;
				long getSQLSize()const;
				long getInodeUsed()const;
				long getStorageUsed()const;
				long getInodeTotal()const;
				long getBlktagUsed()const;

			protected:
				void parse(const std::string &payload);
			private:
				long blktagTotal_;
				long dataLevel1BackupChainSize_;
				long sQLSize_;
				long inodeUsed_;
				long storageUsed_;
				long inodeTotal_;
				long blktagUsed_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERUSAGERESULT_H_