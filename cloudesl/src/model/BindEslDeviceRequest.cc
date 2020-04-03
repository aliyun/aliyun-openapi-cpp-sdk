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

#include <alibabacloud/cloudesl/model/BindEslDeviceRequest.h>

using AlibabaCloud::Cloudesl::Model::BindEslDeviceRequest;

BindEslDeviceRequest::BindEslDeviceRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "BindEslDevice")
{
	setMethod(HttpRequest::Method::Post);
}

BindEslDeviceRequest::~BindEslDeviceRequest()
{}

std::string BindEslDeviceRequest::getColumn()const
{
	return column_;
}

void BindEslDeviceRequest::setColumn(const std::string& column)
{
	column_ = column;
	setBodyParameter("Column", column);
}

std::string BindEslDeviceRequest::getStoreId()const
{
	return storeId_;
}

void BindEslDeviceRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

int BindEslDeviceRequest::getLayer()const
{
	return layer_;
}

void BindEslDeviceRequest::setLayer(int layer)
{
	layer_ = layer;
	setBodyParameter("Layer", std::to_string(layer));
}

std::string BindEslDeviceRequest::getShelf()const
{
	return shelf_;
}

void BindEslDeviceRequest::setShelf(const std::string& shelf)
{
	shelf_ = shelf;
	setBodyParameter("Shelf", shelf);
}

std::string BindEslDeviceRequest::getEslBarCode()const
{
	return eslBarCode_;
}

void BindEslDeviceRequest::setEslBarCode(const std::string& eslBarCode)
{
	eslBarCode_ = eslBarCode;
	setBodyParameter("EslBarCode", eslBarCode);
}

std::string BindEslDeviceRequest::getItemBarCode()const
{
	return itemBarCode_;
}

void BindEslDeviceRequest::setItemBarCode(const std::string& itemBarCode)
{
	itemBarCode_ = itemBarCode;
	setBodyParameter("ItemBarCode", itemBarCode);
}

