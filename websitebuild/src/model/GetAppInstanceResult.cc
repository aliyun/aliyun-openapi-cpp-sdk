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

#include <alibabacloud/websitebuild/model/GetAppInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::WebsiteBuild;
using namespace AlibabaCloud::WebsiteBuild::Model;

GetAppInstanceResult::GetAppInstanceResult() :
	ServiceResult()
{}

GetAppInstanceResult::GetAppInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAppInstanceResult::~GetAppInstanceResult()
{}

void GetAppInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto moduleNode = value["Module"];
	if(!moduleNode["CreateTime"].isNull())
		module_.createTime = moduleNode["CreateTime"].asString();
	if(!moduleNode["GmtModified"].isNull())
		module_.gmtModified = moduleNode["GmtModified"].asString();
	if(!moduleNode["BizId"].isNull())
		module_.bizId = moduleNode["BizId"].asString();
	if(!moduleNode["Name"].isNull())
		module_.name = moduleNode["Name"].asString();
	if(!moduleNode["UserId"].isNull())
		module_.userId = moduleNode["UserId"].asString();
	if(!moduleNode["AppType"].isNull())
		module_.appType = moduleNode["AppType"].asString();
	if(!moduleNode["AppSubType"].isNull())
		module_.appSubType = moduleNode["AppSubType"].asString();
	if(!moduleNode["BuildType"].isNull())
		module_.buildType = moduleNode["BuildType"].asString();
	if(!moduleNode["Description"].isNull())
		module_.description = moduleNode["Description"].asString();
	if(!moduleNode["IconUrl"].isNull())
		module_.iconUrl = moduleNode["IconUrl"].asString();
	if(!moduleNode["ThumbnailUrl"].isNull())
		module_.thumbnailUrl = moduleNode["ThumbnailUrl"].asString();
	if(!moduleNode["Slug"].isNull())
		module_.slug = moduleNode["Slug"].asString();
	if(!moduleNode["Status"].isNull())
		module_.status = moduleNode["Status"].asString();
	if(!moduleNode["StatusText"].isNull())
		module_.statusText = moduleNode["StatusText"].asString();
	if(!moduleNode["DesignSpecId"].isNull())
		module_.designSpecId = moduleNode["DesignSpecId"].asString();
	if(!moduleNode["GmtPublish"].isNull())
		module_.gmtPublish = moduleNode["GmtPublish"].asString();
	if(!moduleNode["GmtDelete"].isNull())
		module_.gmtDelete = moduleNode["GmtDelete"].asString();
	if(!moduleNode["StartTime"].isNull())
		module_.startTime = moduleNode["StartTime"].asString();
	if(!moduleNode["EndTime"].isNull())
		module_.endTime = moduleNode["EndTime"].asString();
	if(!moduleNode["Domain"].isNull())
		module_.domain = moduleNode["Domain"].asString();
	if(!moduleNode["SiteHost"].isNull())
		module_.siteHost = moduleNode["SiteHost"].asString();
	if(!moduleNode["EspBizId"].isNull())
		module_.espBizId = moduleNode["EspBizId"].asString();
	if(!moduleNode["Deleted"].isNull())
		module_.deleted = std::stoi(moduleNode["Deleted"].asString());
	if(!moduleNode["DesignSpecBizId"].isNull())
		module_.designSpecBizId = moduleNode["DesignSpecBizId"].asString();
	if(!moduleNode["SourceType"].isNull())
		module_.sourceType = moduleNode["SourceType"].asString();
	auto allAiStaffListNode = moduleNode["AiStaffList"]["AiStaffListItem"];
	for (auto moduleNodeAiStaffListAiStaffListItem : allAiStaffListNode)
	{
		Module::AiStaffListItem aiStaffListItemObject;
		if(!moduleNodeAiStaffListAiStaffListItem["StaffId"].isNull())
			aiStaffListItemObject.staffId = moduleNodeAiStaffListAiStaffListItem["StaffId"].asString();
		if(!moduleNodeAiStaffListAiStaffListItem["StaffName"].isNull())
			aiStaffListItemObject.staffName = moduleNodeAiStaffListAiStaffListItem["StaffName"].asString();
		if(!moduleNodeAiStaffListAiStaffListItem["StaffType"].isNull())
			aiStaffListItemObject.staffType = moduleNodeAiStaffListAiStaffListItem["StaffType"].asString();
		if(!moduleNodeAiStaffListAiStaffListItem["Status"].isNull())
			aiStaffListItemObject.status = moduleNodeAiStaffListAiStaffListItem["Status"].asString();
		module_.aiStaffList.push_back(aiStaffListItemObject);
	}
	auto allAppServiceListNode = moduleNode["AppServiceList"]["AppServiceListItem"];
	for (auto moduleNodeAppServiceListAppServiceListItem : allAppServiceListNode)
	{
		Module::AppServiceListItem appServiceListItemObject;
		if(!moduleNodeAppServiceListAppServiceListItem["Name"].isNull())
			appServiceListItemObject.name = moduleNodeAppServiceListAppServiceListItem["Name"].asString();
		if(!moduleNodeAppServiceListAppServiceListItem["GmtCreate"].isNull())
			appServiceListItemObject.gmtCreate = moduleNodeAppServiceListAppServiceListItem["GmtCreate"].asString();
		if(!moduleNodeAppServiceListAppServiceListItem["GmtModified"].isNull())
			appServiceListItemObject.gmtModified = moduleNodeAppServiceListAppServiceListItem["GmtModified"].asString();
		if(!moduleNodeAppServiceListAppServiceListItem["BizId"].isNull())
			appServiceListItemObject.bizId = moduleNodeAppServiceListAppServiceListItem["BizId"].asString();
		if(!moduleNodeAppServiceListAppServiceListItem["ServiceType"].isNull())
			appServiceListItemObject.serviceType = moduleNodeAppServiceListAppServiceListItem["ServiceType"].asString();
		if(!moduleNodeAppServiceListAppServiceListItem["ServiceTypeText"].isNull())
			appServiceListItemObject.serviceTypeText = moduleNodeAppServiceListAppServiceListItem["ServiceTypeText"].asString();
		if(!moduleNodeAppServiceListAppServiceListItem["UserId"].isNull())
			appServiceListItemObject.userId = moduleNodeAppServiceListAppServiceListItem["UserId"].asString();
		if(!moduleNodeAppServiceListAppServiceListItem["Status"].isNull())
			appServiceListItemObject.status = moduleNodeAppServiceListAppServiceListItem["Status"].asString();
		if(!moduleNodeAppServiceListAppServiceListItem["Deleted"].isNull())
			appServiceListItemObject.deleted = std::stoi(moduleNodeAppServiceListAppServiceListItem["Deleted"].asString());
		if(!moduleNodeAppServiceListAppServiceListItem["StartTime"].isNull())
			appServiceListItemObject.startTime = moduleNodeAppServiceListAppServiceListItem["StartTime"].asString();
		if(!moduleNodeAppServiceListAppServiceListItem["EndTime"].isNull())
			appServiceListItemObject.endTime = moduleNodeAppServiceListAppServiceListItem["EndTime"].asString();
		if(!moduleNodeAppServiceListAppServiceListItem["Slug"].isNull())
			appServiceListItemObject.slug = moduleNodeAppServiceListAppServiceListItem["Slug"].asString();
		if(!moduleNodeAppServiceListAppServiceListItem["InstanceBizId"].isNull())
			appServiceListItemObject.instanceBizId = moduleNodeAppServiceListAppServiceListItem["InstanceBizId"].asString();
		if(!moduleNodeAppServiceListAppServiceListItem["EspBizId"].isNull())
			appServiceListItemObject.espBizId = moduleNodeAppServiceListAppServiceListItem["EspBizId"].asString();
		auto profile1Node = value["Profile"];
		if(!profile1Node["BizId"].isNull())
			appServiceListItemObject.profile1.bizId = profile1Node["BizId"].asString();
		if(!profile1Node["DesignType"].isNull())
			appServiceListItemObject.profile1.designType = profile1Node["DesignType"].asString();
		if(!profile1Node["DesignTypeText"].isNull())
			appServiceListItemObject.profile1.designTypeText = profile1Node["DesignTypeText"].asString();
		if(!profile1Node["ServiceSpec"].isNull())
			appServiceListItemObject.profile1.serviceSpec = profile1Node["ServiceSpec"].asString();
		if(!profile1Node["ServiceSpecText"].isNull())
			appServiceListItemObject.profile1.serviceSpecText = profile1Node["ServiceSpecText"].asString();
		if(!profile1Node["OrderId"].isNull())
			appServiceListItemObject.profile1.orderId = profile1Node["OrderId"].asString();
		if(!profile1Node["InstanceId"].isNull())
			appServiceListItemObject.profile1.instanceId = profile1Node["InstanceId"].asString();
		auto operationAddressNode = value["OperationAddress"];
		auto allActionsNode = operationAddressNode["Actions"]["ActionsItem"];
		for (auto operationAddressNodeActionsActionsItem : allActionsNode)
		{
			Module::AppServiceListItem::OperationAddress::ActionsItem actionsItemObject;
			if(!operationAddressNodeActionsActionsItem["ActionKey"].isNull())
				actionsItemObject.actionKey = operationAddressNodeActionsActionsItem["ActionKey"].asString();
			if(!operationAddressNodeActionsActionsItem["ActionText"].isNull())
				actionsItemObject.actionText = operationAddressNodeActionsActionsItem["ActionText"].asString();
			if(!operationAddressNodeActionsActionsItem["Href"].isNull())
				actionsItemObject.href = operationAddressNodeActionsActionsItem["Href"].asString();
			if(!operationAddressNodeActionsActionsItem["Enable"].isNull())
				actionsItemObject.enable = operationAddressNodeActionsActionsItem["Enable"].asString() == "true";
			appServiceListItemObject.operationAddress.actions.push_back(actionsItemObject);
		}
		module_.appServiceList.push_back(appServiceListItemObject);
	}
	auto profileNode = moduleNode["Profile"];
	if(!profileNode["CommodityCode"].isNull())
		module_.profile.commodityCode = profileNode["CommodityCode"].asString();
	if(!profileNode["PayTime"].isNull())
		module_.profile.payTime = profileNode["PayTime"].asString();
	if(!profileNode["BizId"].isNull())
		module_.profile.bizId = profileNode["BizId"].asString();
	if(!profileNode["TemplateId"].isNull())
		module_.profile.templateId = profileNode["TemplateId"].asString();
	if(!profileNode["TemplateEtag"].isNull())
		module_.profile.templateEtag = profileNode["TemplateEtag"].asString();
	if(!profileNode["OrderId"].isNull())
		module_.profile.orderId = profileNode["OrderId"].asString();
	if(!profileNode["SeoSite"].isNull())
		module_.profile.seoSite = profileNode["SeoSite"].asString();
	if(!profileNode["CustomerService"].isNull())
		module_.profile.customerService = profileNode["CustomerService"].asString();
	if(!profileNode["ApplicationType"].isNull())
		module_.profile.applicationType = profileNode["ApplicationType"].asString();
	if(!profileNode["ApplicationTypeText"].isNull())
		module_.profile.applicationTypeText = profileNode["ApplicationTypeText"].asString();
	if(!profileNode["DeployArea"].isNull())
		module_.profile.deployArea = profileNode["DeployArea"].asString();
	if(!profileNode["SiteVersion"].isNull())
		module_.profile.siteVersion = profileNode["SiteVersion"].asString();
	if(!profileNode["SiteVersionText"].isNull())
		module_.profile.siteVersionText = profileNode["SiteVersionText"].asString();
	if(!profileNode["OrdTime"].isNull())
		module_.profile.ordTime = profileNode["OrdTime"].asString();
	if(!profileNode["Source"].isNull())
		module_.profile.source = profileNode["Source"].asString();
	if(!profileNode["InstanceId"].isNull())
		module_.profile.instanceId = profileNode["InstanceId"].asString();
	auto appOperationAddressNode = moduleNode["AppOperationAddress"];
	auto allActions2Node = appOperationAddressNode["Actions"]["ActionsItem"];
	for (auto appOperationAddressNodeActionsActionsItem : allActions2Node)
	{
		Module::AppOperationAddress::ActionsItem3 actionsItem3Object;
		if(!appOperationAddressNodeActionsActionsItem["ActionKey"].isNull())
			actionsItem3Object.actionKey = appOperationAddressNodeActionsActionsItem["ActionKey"].asString();
		if(!appOperationAddressNodeActionsActionsItem["ActionText"].isNull())
			actionsItem3Object.actionText = appOperationAddressNodeActionsActionsItem["ActionText"].asString();
		if(!appOperationAddressNodeActionsActionsItem["Href"].isNull())
			actionsItem3Object.href = appOperationAddressNodeActionsActionsItem["Href"].asString();
		if(!appOperationAddressNodeActionsActionsItem["Enable"].isNull())
			actionsItem3Object.enable = appOperationAddressNodeActionsActionsItem["Enable"].asString() == "true";
		module_.appOperationAddress.actions2.push_back(actionsItem3Object);
	}
	auto allErrorArgs = value["ErrorArgs"]["ErrorArg"];
	for (const auto &item : allErrorArgs)
		errorArgs_.push_back(item.asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["Synchro"].isNull())
		synchro_ = value["Synchro"].asString() == "true";
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();
	if(!value["RootErrorMsg"].isNull())
		rootErrorMsg_ = value["RootErrorMsg"].asString();
	if(!value["RootErrorCode"].isNull())
		rootErrorCode_ = value["RootErrorCode"].asString();
	if(!value["AllowRetry"].isNull())
		allowRetry_ = value["AllowRetry"].asString() == "true";
	if(!value["AppName"].isNull())
		appName_ = value["AppName"].asString();

}

std::string GetAppInstanceResult::getRootErrorMsg()const
{
	return rootErrorMsg_;
}

std::string GetAppInstanceResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

bool GetAppInstanceResult::getAllowRetry()const
{
	return allowRetry_;
}

bool GetAppInstanceResult::getSynchro()const
{
	return synchro_;
}

std::vector<std::string> GetAppInstanceResult::getErrorArgs()const
{
	return errorArgs_;
}

std::string GetAppInstanceResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string GetAppInstanceResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

GetAppInstanceResult::Module GetAppInstanceResult::getModule()const
{
	return module_;
}

std::string GetAppInstanceResult::getRootErrorCode()const
{
	return rootErrorCode_;
}

std::string GetAppInstanceResult::getAppName()const
{
	return appName_;
}

