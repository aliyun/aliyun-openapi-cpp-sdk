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

#include <alibabacloud/linkwan/model/CreateGatewayRequest.h>

using AlibabaCloud::LinkWAN::Model::CreateGatewayRequest;

CreateGatewayRequest::CreateGatewayRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "CreateGateway")
{
	setMethod(HttpRequest::Method::Post);
}

CreateGatewayRequest::~CreateGatewayRequest()
{}

std::string CreateGatewayRequest::getCity()const
{
	return city_;
}

void CreateGatewayRequest::setCity(const std::string& city)
{
	city_ = city;
	setParameter("City", city);
}

float CreateGatewayRequest::getLatitude()const
{
	return latitude_;
}

void CreateGatewayRequest::setLatitude(float latitude)
{
	latitude_ = latitude;
	setParameter("Latitude", std::to_string(latitude));
}

std::string CreateGatewayRequest::getDescription()const
{
	return description_;
}

void CreateGatewayRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

long CreateGatewayRequest::getAddressCode()const
{
	return addressCode_;
}

void CreateGatewayRequest::setAddressCode(long addressCode)
{
	addressCode_ = addressCode;
	setParameter("AddressCode", std::to_string(addressCode));
}

std::string CreateGatewayRequest::getGisCoordinateSystem()const
{
	return gisCoordinateSystem_;
}

void CreateGatewayRequest::setGisCoordinateSystem(const std::string& gisCoordinateSystem)
{
	gisCoordinateSystem_ = gisCoordinateSystem;
	setParameter("GisCoordinateSystem", gisCoordinateSystem);
}

std::string CreateGatewayRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateGatewayRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

float CreateGatewayRequest::getLongitude()const
{
	return longitude_;
}

void CreateGatewayRequest::setLongitude(float longitude)
{
	longitude_ = longitude;
	setParameter("Longitude", std::to_string(longitude));
}

std::string CreateGatewayRequest::getPinCode()const
{
	return pinCode_;
}

void CreateGatewayRequest::setPinCode(const std::string& pinCode)
{
	pinCode_ = pinCode;
	setParameter("PinCode", pinCode);
}

std::string CreateGatewayRequest::getAddress()const
{
	return address_;
}

void CreateGatewayRequest::setAddress(const std::string& address)
{
	address_ = address;
	setParameter("Address", address);
}

std::string CreateGatewayRequest::getGwEui()const
{
	return gwEui_;
}

void CreateGatewayRequest::setGwEui(const std::string& gwEui)
{
	gwEui_ = gwEui;
	setParameter("GwEui", gwEui);
}

long CreateGatewayRequest::getFreqBandPlanGroupId()const
{
	return freqBandPlanGroupId_;
}

void CreateGatewayRequest::setFreqBandPlanGroupId(long freqBandPlanGroupId)
{
	freqBandPlanGroupId_ = freqBandPlanGroupId;
	setParameter("FreqBandPlanGroupId", std::to_string(freqBandPlanGroupId));
}

std::string CreateGatewayRequest::getDistrict()const
{
	return district_;
}

void CreateGatewayRequest::setDistrict(const std::string& district)
{
	district_ = district;
	setParameter("District", district);
}

std::string CreateGatewayRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateGatewayRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateGatewayRequest::getName()const
{
	return name_;
}

void CreateGatewayRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateGatewayRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateGatewayRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string CreateGatewayRequest::getCommunicationMode()const
{
	return communicationMode_;
}

void CreateGatewayRequest::setCommunicationMode(const std::string& communicationMode)
{
	communicationMode_ = communicationMode;
	setParameter("CommunicationMode", communicationMode);
}

