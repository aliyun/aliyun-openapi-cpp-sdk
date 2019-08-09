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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTDATASOURCERESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTDATASOURCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListDataSourceResult : public ServiceResult
			{
			public:
				struct DataSource
				{
					std::string status;
					long gmtCreate;
					std::string description;
					std::string conf;
					std::string clusterId;
					std::string sourceType;
					long gmtModified;
					std::string id;
					std::string creator;
					std::string modifier;
					std::string createFrom;
					std::string name;
				};


				ListDataSourceResult();
				explicit ListDataSourceResult(const std::string &payload);
				~ListDataSourceResult();
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<DataSource> getDataSourceList()const;
				int getTotal()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageNumber_;
				std::vector<DataSource> dataSourceList_;
				int total_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTDATASOURCERESULT_H_