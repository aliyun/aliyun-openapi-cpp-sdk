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

#include <alibabacloud/ivpd/model/PreviewModelForPackageDesignRequest.h>

using AlibabaCloud::Ivpd::Model::PreviewModelForPackageDesignRequest;

PreviewModelForPackageDesignRequest::PreviewModelForPackageDesignRequest() :
	RpcServiceRequest("ivpd", "2019-06-25", "PreviewModelForPackageDesign")
{
	setMethod(HttpRequest::Method::Post);
}

PreviewModelForPackageDesignRequest::~PreviewModelForPackageDesignRequest()
{}

std::string PreviewModelForPackageDesignRequest::getMaterialName()const
{
	return materialName_;
}

void PreviewModelForPackageDesignRequest::setMaterialName(const std::string& materialName)
{
	materialName_ = materialName;
	setBodyParameter("MaterialName", materialName);
}

std::vector<PreviewModelForPackageDesignRequest::ElementList> PreviewModelForPackageDesignRequest::getElementList()const
{
	return elementList_;
}

void PreviewModelForPackageDesignRequest::setElementList(const std::vector<ElementList>& elementList)
{
	elementList_ = elementList;
	for(int dep1 = 0; dep1!= elementList.size(); dep1++) {
		auto elementListObj = elementList.at(dep1);
		std::string elementListObjStr = "ElementList." + std::to_string(dep1 + 1);
		setParameter(elementListObjStr + ".ImageUrl", elementListObj.imageUrl);
		setParameter(elementListObjStr + ".SideName", elementListObj.sideName);
	}
}

std::string PreviewModelForPackageDesignRequest::getDataId()const
{
	return dataId_;
}

void PreviewModelForPackageDesignRequest::setDataId(const std::string& dataId)
{
	dataId_ = dataId;
	setBodyParameter("DataId", dataId);
}

std::string PreviewModelForPackageDesignRequest::getMaterialType()const
{
	return materialType_;
}

void PreviewModelForPackageDesignRequest::setMaterialType(const std::string& materialType)
{
	materialType_ = materialType;
	setBodyParameter("MaterialType", materialType);
}

std::string PreviewModelForPackageDesignRequest::getModelType()const
{
	return modelType_;
}

void PreviewModelForPackageDesignRequest::setModelType(const std::string& modelType)
{
	modelType_ = modelType;
	setBodyParameter("ModelType", modelType);
}

std::string PreviewModelForPackageDesignRequest::getCategory()const
{
	return category_;
}

void PreviewModelForPackageDesignRequest::setCategory(const std::string& category)
{
	category_ = category;
	setBodyParameter("Category", category);
}

