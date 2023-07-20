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

#ifndef ALIBABACLOUD_SAS_MODEL_LISTCHECKINSTANCERESULTRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_LISTCHECKINSTANCERESULTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT ListCheckInstanceResultResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					std::string nextToken;
					int currentPage;
					int maxResults;
					std::string count;
				};
				struct BasicDataItem
				{
					std::string status;
					std::string instanceName;
					std::string instanceId;
					long id;
					std::string regionId;
					std::string statusMessage;
				};
				struct ColumnsItem
				{
					struct GridsItem
					{
						std::string type;
						std::string showName;
						std::string key;
					};
					std::vector<ColumnsItem::GridsItem> grids;
					std::string type;
					bool search;
					std::string searchKey;
					std::string showName;
					std::string key;
				};


				ListCheckInstanceResultResult();
				explicit ListCheckInstanceResultResult(const std::string &payload);
				~ListCheckInstanceResultResult();
				PageInfo getPageInfo()const;
				std::vector<std::string> getChecks()const;
				std::vector<ColumnsItem> getColumns()const;
				std::vector<BasicDataItem> getBasicData()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageInfo pageInfo_;
				std::vector<std::string> checks_;
				std::vector<ColumnsItem> columns_;
				std::vector<BasicDataItem> basicData_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_LISTCHECKINSTANCERESULTRESULT_H_