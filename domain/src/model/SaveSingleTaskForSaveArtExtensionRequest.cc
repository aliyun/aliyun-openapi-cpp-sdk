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

#include <alibabacloud/domain/model/SaveSingleTaskForSaveArtExtensionRequest.h>

using AlibabaCloud::Domain::Model::SaveSingleTaskForSaveArtExtensionRequest;

SaveSingleTaskForSaveArtExtensionRequest::SaveSingleTaskForSaveArtExtensionRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveSingleTaskForSaveArtExtension")
{}

SaveSingleTaskForSaveArtExtensionRequest::~SaveSingleTaskForSaveArtExtensionRequest()
{}

std::string SaveSingleTaskForSaveArtExtensionRequest::getReference()const
{
	return reference_;
}

void SaveSingleTaskForSaveArtExtensionRequest::setReference(const std::string& reference)
{
	reference_ = reference;
	setCoreParameter("Reference", reference);
}

std::string SaveSingleTaskForSaveArtExtensionRequest::getFeatures()const
{
	return features_;
}

void SaveSingleTaskForSaveArtExtensionRequest::setFeatures(const std::string& features)
{
	features_ = features;
	setCoreParameter("Features", features);
}

std::string SaveSingleTaskForSaveArtExtensionRequest::getInscriptionsAndMarkings()const
{
	return inscriptionsAndMarkings_;
}

void SaveSingleTaskForSaveArtExtensionRequest::setInscriptionsAndMarkings(const std::string& inscriptionsAndMarkings)
{
	inscriptionsAndMarkings_ = inscriptionsAndMarkings;
	setCoreParameter("InscriptionsAndMarkings", inscriptionsAndMarkings);
}

std::string SaveSingleTaskForSaveArtExtensionRequest::getSubject()const
{
	return subject_;
}

void SaveSingleTaskForSaveArtExtensionRequest::setSubject(const std::string& subject)
{
	subject_ = subject;
	setCoreParameter("Subject", subject);
}

std::string SaveSingleTaskForSaveArtExtensionRequest::getDomainName()const
{
	return domainName_;
}

void SaveSingleTaskForSaveArtExtensionRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string SaveSingleTaskForSaveArtExtensionRequest::getMaker()const
{
	return maker_;
}

void SaveSingleTaskForSaveArtExtensionRequest::setMaker(const std::string& maker)
{
	maker_ = maker;
	setCoreParameter("Maker", maker);
}

std::string SaveSingleTaskForSaveArtExtensionRequest::getObjectType()const
{
	return objectType_;
}

void SaveSingleTaskForSaveArtExtensionRequest::setObjectType(const std::string& objectType)
{
	objectType_ = objectType;
	setCoreParameter("ObjectType", objectType);
}

std::string SaveSingleTaskForSaveArtExtensionRequest::getTitle()const
{
	return title_;
}

void SaveSingleTaskForSaveArtExtensionRequest::setTitle(const std::string& title)
{
	title_ = title;
	setCoreParameter("Title", title);
}

std::string SaveSingleTaskForSaveArtExtensionRequest::getLang()const
{
	return lang_;
}

void SaveSingleTaskForSaveArtExtensionRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string SaveSingleTaskForSaveArtExtensionRequest::getMaterialsAndTechniques()const
{
	return materialsAndTechniques_;
}

void SaveSingleTaskForSaveArtExtensionRequest::setMaterialsAndTechniques(const std::string& materialsAndTechniques)
{
	materialsAndTechniques_ = materialsAndTechniques;
	setCoreParameter("MaterialsAndTechniques", materialsAndTechniques);
}

std::string SaveSingleTaskForSaveArtExtensionRequest::getDateOrPeriod()const
{
	return dateOrPeriod_;
}

void SaveSingleTaskForSaveArtExtensionRequest::setDateOrPeriod(const std::string& dateOrPeriod)
{
	dateOrPeriod_ = dateOrPeriod;
	setCoreParameter("DateOrPeriod", dateOrPeriod);
}

std::string SaveSingleTaskForSaveArtExtensionRequest::getDimensions()const
{
	return dimensions_;
}

void SaveSingleTaskForSaveArtExtensionRequest::setDimensions(const std::string& dimensions)
{
	dimensions_ = dimensions;
	setCoreParameter("Dimensions", dimensions);
}

