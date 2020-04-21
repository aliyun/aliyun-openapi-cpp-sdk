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

#include <alibabacloud/ivpd/model/RenderImageForPackageDesignRequest.h>

using AlibabaCloud::Ivpd::Model::RenderImageForPackageDesignRequest;

RenderImageForPackageDesignRequest::RenderImageForPackageDesignRequest() :
	RpcServiceRequest("ivpd", "2019-06-25", "RenderImageForPackageDesign")
{
	setMethod(HttpRequest::Method::Post);
}

RenderImageForPackageDesignRequest::~RenderImageForPackageDesignRequest()
{}

std::string RenderImageForPackageDesignRequest::getDisplayType()const
{
	return displayType_;
}

void RenderImageForPackageDesignRequest::setDisplayType(const std::string& displayType)
{
	displayType_ = displayType;
	setBodyParameter("DisplayType", displayType);
}

std::string RenderImageForPackageDesignRequest::getMaterialName()const
{
	return materialName_;
}

void RenderImageForPackageDesignRequest::setMaterialName(const std::string& materialName)
{
	materialName_ = materialName;
	setBodyParameter("MaterialName", materialName);
}

std::string RenderImageForPackageDesignRequest::getJobId()const
{
	return jobId_;
}

void RenderImageForPackageDesignRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setBodyParameter("JobId", jobId);
}

std::string RenderImageForPackageDesignRequest::getMaterialType()const
{
	return materialType_;
}

void RenderImageForPackageDesignRequest::setMaterialType(const std::string& materialType)
{
	materialType_ = materialType;
	setBodyParameter("MaterialType", materialType);
}

std::string RenderImageForPackageDesignRequest::getModelType()const
{
	return modelType_;
}

void RenderImageForPackageDesignRequest::setModelType(const std::string& modelType)
{
	modelType_ = modelType;
	setBodyParameter("ModelType", modelType);
}

int RenderImageForPackageDesignRequest::getTargetWidth()const
{
	return targetWidth_;
}

void RenderImageForPackageDesignRequest::setTargetWidth(int targetWidth)
{
	targetWidth_ = targetWidth;
	setBodyParameter("TargetWidth", std::to_string(targetWidth));
}

std::vector<RenderImageForPackageDesignRequest::ElementList> RenderImageForPackageDesignRequest::getElementList()const
{
	return elementList_;
}

void RenderImageForPackageDesignRequest::setElementList(const std::vector<ElementList>& elementList)
{
	elementList_ = elementList;
	for(int dep1 = 0; dep1!= elementList.size(); dep1++) {
		auto elementListObj = elementList.at(dep1);
		std::string elementListObjStr = "ElementList." + std::to_string(dep1 + 1);
		setParameter(elementListObjStr + ".ImageUrl", elementListObj.imageUrl);
		setParameter(elementListObjStr + ".SideName", elementListObj.sideName);
	}
}

std::string RenderImageForPackageDesignRequest::getCategory()const
{
	return category_;
}

void RenderImageForPackageDesignRequest::setCategory(const std::string& category)
{
	category_ = category;
	setBodyParameter("Category", category);
}

int RenderImageForPackageDesignRequest::getTargetHeight()const
{
	return targetHeight_;
}

void RenderImageForPackageDesignRequest::setTargetHeight(int targetHeight)
{
	targetHeight_ = targetHeight;
	setBodyParameter("TargetHeight", std::to_string(targetHeight));
}

