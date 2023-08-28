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

#ifndef ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTLABELTABLESRESULT_H_
#define ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTLABELTABLESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/paifeaturestore/PaiFeatureStoreExport.h>

namespace AlibabaCloud
{
	namespace PaiFeatureStore
	{
		namespace Model
		{
			class ALIBABACLOUD_PAIFEATURESTORE_EXPORT ListLabelTablesResult : public ServiceResult
			{
			public:
				struct LabelTable
				{
					std::string owner;
					std::string datasourceId;
					std::string datasourceName;
					std::string projectName;
					std::string projectId;
					std::string labelTableId;
					std::string gmtCreateTime;
					std::string gmtModifiedTime;
					std::string name;
				};


				ListLabelTablesResult();
				explicit ListLabelTablesResult(const std::string &payload);
				~ListLabelTablesResult();
				long getTotalCount()const;
				std::vector<LabelTable> getLabelTables()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::vector<LabelTable> labelTables_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTLABELTABLESRESULT_H_