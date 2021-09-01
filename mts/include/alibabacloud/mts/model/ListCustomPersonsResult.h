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

#ifndef ALIBABACLOUD_MTS_MODEL_LISTCUSTOMPERSONSRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_LISTCUSTOMPERSONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>

namespace AlibabaCloud
{
	namespace Mts
	{
		namespace Model
		{
			class ALIBABACLOUD_MTS_EXPORT ListCustomPersonsResult : public ServiceResult
			{
			public:
				struct Category
				{
					struct Person
					{
						struct Face
						{
							std::string faceId;
							std::string imageUrl;
						};
						std::string personName;
						std::string personId;
						std::string personDescription;
						std::vector<Person::Face> faces;
					};
					std::string categoryId;
					std::vector<Category::Person> persons;
					std::string categoryName;
					std::string categoryDescription;
				};


				ListCustomPersonsResult();
				explicit ListCustomPersonsResult(const std::string &payload);
				~ListCustomPersonsResult();
				std::vector<Category> getCategories()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Category> categories_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_LISTCUSTOMPERSONSRESULT_H_