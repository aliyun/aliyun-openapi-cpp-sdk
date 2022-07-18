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

#include <alibabacloud/cloudesl/model/UnbindEslDeviceRequest.h>

using AlibabaCloud::Cloudesl::Model::UnbindEslDeviceRequest;

UnbindEslDeviceRequest::UnbindEslDeviceRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "UnbindEslDevice")
{
	setMethod(HttpRequest::Method::Post);
}

UnbindEslDeviceRequest::~UnbindEslDeviceRequest()
{}

std::string UnbindEslDeviceRequest::getExtraParams()const
{
	return extraParams_;
}

void UnbindEslDeviceRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

std::string UnbindEslDeviceRequest::getContainerName()const
{
	return containerName_;
}

void UnbindEslDeviceRequest::setContainerName(const std::string& containerName)
{
	containerName_ = containerName;
	setBodyParameter("ContainerName", containerName);
}

std::string UnbindEslDeviceRequest::getStoreId()const
{
	return storeId_;
}

void UnbindEslDeviceRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

int UnbindEslDeviceRequest::getLayer()const
{
	return layer_;
}

void UnbindEslDeviceRequest::setLayer(int layer)
{
	layer_ = layer;
	setBodyParameter("Layer", std::to_string(layer));
}

std::string UnbindEslDeviceRequest::getEslBarCode()const
{
	return eslBarCode_;
}

void UnbindEslDeviceRequest::setEslBarCode(const std::string& eslBarCode)
{
	eslBarCode_ = eslBarCode;
	setBodyParameter("EslBarCode", eslBarCode);
}

std::string UnbindEslDeviceRequest::getItemBarCode()const
{
	return itemBarCode_;
}

void UnbindEslDeviceRequest::setItemBarCode(const std::string& itemBarCode)
{
	itemBarCode_ = itemBarCode;
	setBodyParameter("ItemBarCode", itemBarCode);
}

std::string UnbindEslDeviceRequest::getColumn()const
{
	return column_;
}

void UnbindEslDeviceRequest::setColumn(const std::string& column)
{
	column_ = column;
	setBodyParameter("Column", column);
}

std::string UnbindEslDeviceRequest::getShelf()const
{
	return shelf_;
}

void UnbindEslDeviceRequest::setShelf(const std::string& shelf)
{
	shelf_ = shelf;
	setBodyParameter("Shelf", shelf);
}

