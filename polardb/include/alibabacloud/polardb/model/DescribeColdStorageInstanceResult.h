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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBECOLDSTORAGEINSTANCERESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBECOLDSTORAGEINSTANCERESULT_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT DescribeColdStorageInstanceResult : public ServiceResult
			{
			public:
				struct TablesItem
				{
					struct ChildObjectsItem
					{
						std::string status;
						std::string objectType;
						std::string size;
						std::string objectName;
					};
					std::string partion;
					std::string status;
					std::string tableName;
					std::string table;
					std::string size;
					std::string dBName;
					std::string ossClusterId;
					std::string fieldName;
					std::string dB;
					std::vector<TablesItem::ChildObjectsItem> childObjects;
				};
				struct OssClusterInfoListItem
				{
					std::string createdTime;
					std::string size;
					std::string region;
					std::string ossClusterId;
				};


				DescribeColdStorageInstanceResult();
				explicit DescribeColdStorageInstanceResult(const std::string &payload);
				~DescribeColdStorageInstanceResult();
				std::string getOssClusterEnabled()const;
				std::string getObjectType()const;
				int getPageRecordCount()const;
				std::string getNextToken()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::string getDownLoadUrl()const;
				int getTotalRecord()const;
				int getMaxResults()const;
				std::vector<TablesItem> getTables()const;
				std::string getSupportOssCluster()const;
				std::vector<OssClusterInfoListItem> getOssClusterInfoList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string ossClusterEnabled_;
				std::string objectType_;
				int pageRecordCount_;
				std::string nextToken_;
				int pageSize_;
				int pageNumber_;
				std::string downLoadUrl_;
				int totalRecord_;
				int maxResults_;
				std::vector<TablesItem> tables_;
				std::string supportOssCluster_;
				std::vector<OssClusterInfoListItem> ossClusterInfoList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBECOLDSTORAGEINSTANCERESULT_H_