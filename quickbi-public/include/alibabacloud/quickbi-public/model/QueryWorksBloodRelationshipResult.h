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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYWORKSBLOODRELATIONSHIPRESULT_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYWORKSBLOODRELATIONSHIPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>

namespace AlibabaCloud
{
	namespace Quickbi_public
	{
		namespace Model
		{
			class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT QueryWorksBloodRelationshipResult : public ServiceResult
			{
			public:
				struct Item
				{
					struct QueryParam
					{
						std::string areaName;
						std::string pathId;
						std::string uid;
						bool isMeasure;
						std::string expression;
						std::string areaId;
						std::string dataType;
						std::string caption;
					};
					int componentType;
					std::string componentTypeName;
					std::vector<Item::QueryParam> queryParams;
					std::string componentName;
					std::string componentTypeCnName;
					std::string componentId;
					std::string datasetId;
				};


				QueryWorksBloodRelationshipResult();
				explicit QueryWorksBloodRelationshipResult(const std::string &payload);
				~QueryWorksBloodRelationshipResult();
				bool getSuccess()const;
				std::vector<Item> getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool success_;
				std::vector<Item> result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYWORKSBLOODRELATIONSHIPRESULT_H_