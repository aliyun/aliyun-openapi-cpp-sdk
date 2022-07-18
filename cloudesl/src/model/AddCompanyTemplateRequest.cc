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

#include <alibabacloud/cloudesl/model/AddCompanyTemplateRequest.h>

using AlibabaCloud::Cloudesl::Model::AddCompanyTemplateRequest;

AddCompanyTemplateRequest::AddCompanyTemplateRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "AddCompanyTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

AddCompanyTemplateRequest::~AddCompanyTemplateRequest()
{}

std::string AddCompanyTemplateRequest::getExtraParams()const
{
	return extraParams_;
}

void AddCompanyTemplateRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

std::string AddCompanyTemplateRequest::getEslSize()const
{
	return eslSize_;
}

void AddCompanyTemplateRequest::setEslSize(const std::string& eslSize)
{
	eslSize_ = eslSize;
	setBodyParameter("EslSize", eslSize);
}

bool AddCompanyTemplateRequest::getIfPromotion()const
{
	return ifPromotion_;
}

void AddCompanyTemplateRequest::setIfPromotion(bool ifPromotion)
{
	ifPromotion_ = ifPromotion;
	setBodyParameter("IfPromotion", ifPromotion ? "true" : "false");
}

std::string AddCompanyTemplateRequest::getDeviceType()const
{
	return deviceType_;
}

void AddCompanyTemplateRequest::setDeviceType(const std::string& deviceType)
{
	deviceType_ = deviceType;
	setBodyParameter("DeviceType", deviceType);
}

std::string AddCompanyTemplateRequest::getScene()const
{
	return scene_;
}

void AddCompanyTemplateRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setBodyParameter("Scene", scene);
}

std::string AddCompanyTemplateRequest::getTemplateVersion()const
{
	return templateVersion_;
}

void AddCompanyTemplateRequest::setTemplateVersion(const std::string& templateVersion)
{
	templateVersion_ = templateVersion;
	setBodyParameter("TemplateVersion", templateVersion);
}

std::string AddCompanyTemplateRequest::getTemplateType()const
{
	return templateType_;
}

void AddCompanyTemplateRequest::setTemplateType(const std::string& templateType)
{
	templateType_ = templateType;
	setBodyParameter("TemplateType", templateType);
}

std::string AddCompanyTemplateRequest::getVendor()const
{
	return vendor_;
}

void AddCompanyTemplateRequest::setVendor(const std::string& vendor)
{
	vendor_ = vendor;
	setBodyParameter("Vendor", vendor);
}

bool AddCompanyTemplateRequest::getIfDefault()const
{
	return ifDefault_;
}

void AddCompanyTemplateRequest::setIfDefault(bool ifDefault)
{
	ifDefault_ = ifDefault;
	setBodyParameter("IfDefault", ifDefault ? "true" : "false");
}

std::string AddCompanyTemplateRequest::getTemplateName()const
{
	return templateName_;
}

void AddCompanyTemplateRequest::setTemplateName(const std::string& templateName)
{
	templateName_ = templateName;
	setBodyParameter("TemplateName", templateName);
}

std::string AddCompanyTemplateRequest::getTemplateSceneId()const
{
	return templateSceneId_;
}

void AddCompanyTemplateRequest::setTemplateSceneId(const std::string& templateSceneId)
{
	templateSceneId_ = templateSceneId;
	setBodyParameter("TemplateSceneId", templateSceneId);
}

bool AddCompanyTemplateRequest::getIfSourceCode()const
{
	return ifSourceCode_;
}

void AddCompanyTemplateRequest::setIfSourceCode(bool ifSourceCode)
{
	ifSourceCode_ = ifSourceCode;
	setBodyParameter("IfSourceCode", ifSourceCode ? "true" : "false");
}

std::string AddCompanyTemplateRequest::getGroupId()const
{
	return groupId_;
}

void AddCompanyTemplateRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setBodyParameter("GroupId", groupId);
}

bool AddCompanyTemplateRequest::getIfMember()const
{
	return ifMember_;
}

void AddCompanyTemplateRequest::setIfMember(bool ifMember)
{
	ifMember_ = ifMember;
	setBodyParameter("IfMember", ifMember ? "true" : "false");
}

int AddCompanyTemplateRequest::getLayout()const
{
	return layout_;
}

void AddCompanyTemplateRequest::setLayout(int layout)
{
	layout_ = layout;
	setBodyParameter("Layout", std::to_string(layout));
}

bool AddCompanyTemplateRequest::getIfOutOfInventory()const
{
	return ifOutOfInventory_;
}

void AddCompanyTemplateRequest::setIfOutOfInventory(bool ifOutOfInventory)
{
	ifOutOfInventory_ = ifOutOfInventory;
	setBodyParameter("IfOutOfInventory", ifOutOfInventory ? "true" : "false");
}

