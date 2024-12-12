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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTDATALAKETABLEBASEINFORESULT_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTDATALAKETABLEBASEINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>

namespace AlibabaCloud
{
	namespace Dms_enterprise
	{
		namespace Model
		{
			class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT ListDataLakeTablebaseInfoResult : public ServiceResult
			{
			public:
				struct TablebaseInfo
				{
					struct Column
					{
						std::string comment;
						std::string type;
						std::string name;
					};
					std::string owner;
					std::string viewOriginalText;
					std::string tableType;
					std::string parameters;
					std::string description;
					long creatorId;
					int createTime;
					int lastAccessTime;
					int retention;
					std::string name;
					std::string ownerType;
					std::string viewExpandedText;
					long dbId;
					std::vector<TablebaseInfo::Column> partitionKeys;
					std::string dbName;
					std::string catalogName;
					long modifierId;
					std::string location;
				};


				ListDataLakeTablebaseInfoResult();
				explicit ListDataLakeTablebaseInfoResult(const std::string &payload);
				~ListDataLakeTablebaseInfoResult();
				std::vector<TablebaseInfo> getTablebaseInfoList()const;
				std::string getTotalCount()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<TablebaseInfo> tablebaseInfoList_;
				std::string totalCount_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTDATALAKETABLEBASEINFORESULT_H_