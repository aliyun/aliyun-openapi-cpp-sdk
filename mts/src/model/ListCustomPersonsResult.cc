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

#include <alibabacloud/mts/model/ListCustomPersonsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

ListCustomPersonsResult::ListCustomPersonsResult() :
	ServiceResult()
{}

ListCustomPersonsResult::ListCustomPersonsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCustomPersonsResult::~ListCustomPersonsResult()
{}

void ListCustomPersonsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCategoriesNode = value["Categories"]["Category"];
	for (auto valueCategoriesCategory : allCategoriesNode)
	{
		Category categoriesObject;
		if(!valueCategoriesCategory["CategoryId"].isNull())
			categoriesObject.categoryId = valueCategoriesCategory["CategoryId"].asString();
		if(!valueCategoriesCategory["CategoryName"].isNull())
			categoriesObject.categoryName = valueCategoriesCategory["CategoryName"].asString();
		if(!valueCategoriesCategory["CategoryDescription"].isNull())
			categoriesObject.categoryDescription = valueCategoriesCategory["CategoryDescription"].asString();
		auto allPersonsNode = valueCategoriesCategory["Persons"]["Person"];
		for (auto valueCategoriesCategoryPersonsPerson : allPersonsNode)
		{
			Category::Person personsObject;
			if(!valueCategoriesCategoryPersonsPerson["PersonName"].isNull())
				personsObject.personName = valueCategoriesCategoryPersonsPerson["PersonName"].asString();
			if(!valueCategoriesCategoryPersonsPerson["PersonDescription"].isNull())
				personsObject.personDescription = valueCategoriesCategoryPersonsPerson["PersonDescription"].asString();
			if(!valueCategoriesCategoryPersonsPerson["PersonId"].isNull())
				personsObject.personId = valueCategoriesCategoryPersonsPerson["PersonId"].asString();
			auto allFacesNode = valueCategoriesCategoryPersonsPerson["Faces"]["Face"];
			for (auto valueCategoriesCategoryPersonsPersonFacesFace : allFacesNode)
			{
				Category::Person::Face facesObject;
				if(!valueCategoriesCategoryPersonsPersonFacesFace["ImageUrl"].isNull())
					facesObject.imageUrl = valueCategoriesCategoryPersonsPersonFacesFace["ImageUrl"].asString();
				if(!valueCategoriesCategoryPersonsPersonFacesFace["FaceId"].isNull())
					facesObject.faceId = valueCategoriesCategoryPersonsPersonFacesFace["FaceId"].asString();
				personsObject.faces.push_back(facesObject);
			}
			categoriesObject.persons.push_back(personsObject);
		}
		categories_.push_back(categoriesObject);
	}

}

std::vector<ListCustomPersonsResult::Category> ListCustomPersonsResult::getCategories()const
{
	return categories_;
}

