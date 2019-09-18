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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBESPECIFICATIONRESULT_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBESPECIFICATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/gpdb/GpdbExport.h>

namespace AlibabaCloud
{
	namespace Gpdb
	{
		namespace Model
		{
			class ALIBABACLOUD_GPDB_EXPORT DescribeSpecificationResult : public ServiceResult
			{
			public:
				struct DBInstanceClassItem
				{
					std::string value;
					std::string text;
				};
				struct DBInstanceGroupCountItem
				{
					std::string value;
					std::string text;
				};
				struct StorageNoticeItem
				{
					std::string value;
					std::string text;
				};


				DescribeSpecificationResult();
				explicit DescribeSpecificationResult(const std::string &payload);
				~DescribeSpecificationResult();
				std::vector<StorageNoticeItem> getStorageNotice()const;
				std::vector<DBInstanceClassItem> getDBInstanceClass()const;
				std::vector<DBInstanceGroupCountItem> getDBInstanceGroupCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<StorageNoticeItem> storageNotice_;
				std::vector<DBInstanceClassItem> dBInstanceClass_;
				std::vector<DBInstanceGroupCountItem> dBInstanceGroupCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBESPECIFICATIONRESULT_H_