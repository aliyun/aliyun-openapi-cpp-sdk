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

#ifndef ALIBABACLOUD_WORKORDER_MODEL_LISTPRODUCTSRESULT_H_
#define ALIBABACLOUD_WORKORDER_MODEL_LISTPRODUCTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/workorder/WorkorderExport.h>

namespace AlibabaCloud
{
	namespace Workorder
	{
		namespace Model
		{
			class ALIBABACLOUD_WORKORDER_EXPORT ListProductsResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct TechMoreItem
					{
						struct ProductListItem
						{
							std::string description;
							std::string productCode;
							std::string name;
						};
						std::vector<TechMoreItem::ProductListItem> productList;
						std::string groupName;
					};
					struct HotConsultationItem
					{
						std::string description;
						std::string productCode;
						std::string name;
					};
					struct ConsultationMoreItem
					{
						std::string description;
						std::string productCode;
						std::string name;
					};
					struct HotTechItem
					{
						std::string description;
						std::string productCode;
						std::string name;
					};
					std::vector<ConsultationMoreItem> consultationMore;
					std::vector<HotTechItem> hotTech;
					std::vector<HotConsultationItem> hotConsultation;
					std::vector<TechMoreItem> techMore;
				};


				ListProductsResult();
				explicit ListProductsResult(const std::string &payload);
				~ListProductsResult();
				std::string getMessage()const;
				Data getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_WORKORDER_MODEL_LISTPRODUCTSRESULT_H_