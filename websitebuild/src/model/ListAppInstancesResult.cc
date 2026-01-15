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

#include <alibabacloud/websitebuild/model/ListAppInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::WebsiteBuild;
using namespace AlibabaCloud::WebsiteBuild::Model;

ListAppInstancesResult::ListAppInstancesResult() :
	ServiceResult()
{}

ListAppInstancesResult::ListAppInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppInstancesResult::~ListAppInstancesResult()
{}

void ListAppInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["CreateTime"].isNull())
			dataObject.createTime = valueDataDataItem["CreateTime"].asString();
		if(!valueDataDataItem["GmtModified"].isNull())
			dataObject.gmtModified = valueDataDataItem["GmtModified"].asString();
		if(!valueDataDataItem["BizId"].isNull())
			dataObject.bizId = valueDataDataItem["BizId"].asString();
		if(!valueDataDataItem["Name"].isNull())
			dataObject.name = valueDataDataItem["Name"].asString();
		if(!valueDataDataItem["UserId"].isNull())
			dataObject.userId = valueDataDataItem["UserId"].asString();
		if(!valueDataDataItem["AppType"].isNull())
			dataObject.appType = valueDataDataItem["AppType"].asString();
		if(!valueDataDataItem["AppSubType"].isNull())
			dataObject.appSubType = valueDataDataItem["AppSubType"].asString();
		if(!valueDataDataItem["BuildType"].isNull())
			dataObject.buildType = valueDataDataItem["BuildType"].asString();
		if(!valueDataDataItem["Description"].isNull())
			dataObject.description = valueDataDataItem["Description"].asString();
		if(!valueDataDataItem["IconUrl"].isNull())
			dataObject.iconUrl = valueDataDataItem["IconUrl"].asString();
		if(!valueDataDataItem["ThumbnailUrl"].isNull())
			dataObject.thumbnailUrl = valueDataDataItem["ThumbnailUrl"].asString();
		if(!valueDataDataItem["Slug"].isNull())
			dataObject.slug = valueDataDataItem["Slug"].asString();
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = valueDataDataItem["Status"].asString();
		if(!valueDataDataItem["StatusText"].isNull())
			dataObject.statusText = valueDataDataItem["StatusText"].asString();
		if(!valueDataDataItem["DesignSpecId"].isNull())
			dataObject.designSpecId = valueDataDataItem["DesignSpecId"].asString();
		if(!valueDataDataItem["GmtPublish"].isNull())
			dataObject.gmtPublish = valueDataDataItem["GmtPublish"].asString();
		if(!valueDataDataItem["GmtDelete"].isNull())
			dataObject.gmtDelete = valueDataDataItem["GmtDelete"].asString();
		if(!valueDataDataItem["StartTime"].isNull())
			dataObject.startTime = valueDataDataItem["StartTime"].asString();
		if(!valueDataDataItem["EndTime"].isNull())
			dataObject.endTime = valueDataDataItem["EndTime"].asString();
		if(!valueDataDataItem["Domain"].isNull())
			dataObject.domain = valueDataDataItem["Domain"].asString();
		if(!valueDataDataItem["SiteHost"].isNull())
			dataObject.siteHost = valueDataDataItem["SiteHost"].asString();
		if(!valueDataDataItem["EspBizId"].isNull())
			dataObject.espBizId = valueDataDataItem["EspBizId"].asString();
		if(!valueDataDataItem["Deleted"].isNull())
			dataObject.deleted = std::stoi(valueDataDataItem["Deleted"].asString());
		if(!valueDataDataItem["DesignSpecBizId"].isNull())
			dataObject.designSpecBizId = valueDataDataItem["DesignSpecBizId"].asString();
		if(!valueDataDataItem["SourceType"].isNull())
			dataObject.sourceType = valueDataDataItem["SourceType"].asString();
		auto allAiStaffListNode = valueDataDataItem["AiStaffList"]["AiStaffListItem"];
		for (auto valueDataDataItemAiStaffListAiStaffListItem : allAiStaffListNode)
		{
			DataItem::AiStaffListItem aiStaffListObject;
			if(!valueDataDataItemAiStaffListAiStaffListItem["StaffId"].isNull())
				aiStaffListObject.staffId = valueDataDataItemAiStaffListAiStaffListItem["StaffId"].asString();
			if(!valueDataDataItemAiStaffListAiStaffListItem["StaffName"].isNull())
				aiStaffListObject.staffName = valueDataDataItemAiStaffListAiStaffListItem["StaffName"].asString();
			if(!valueDataDataItemAiStaffListAiStaffListItem["StaffType"].isNull())
				aiStaffListObject.staffType = valueDataDataItemAiStaffListAiStaffListItem["StaffType"].asString();
			if(!valueDataDataItemAiStaffListAiStaffListItem["Status"].isNull())
				aiStaffListObject.status = valueDataDataItemAiStaffListAiStaffListItem["Status"].asString();
			dataObject.aiStaffList.push_back(aiStaffListObject);
		}
		auto allAppServiceListNode = valueDataDataItem["AppServiceList"]["AppServiceListItem"];
		for (auto valueDataDataItemAppServiceListAppServiceListItem : allAppServiceListNode)
		{
			DataItem::AppServiceListItem appServiceListObject;
			if(!valueDataDataItemAppServiceListAppServiceListItem["Name"].isNull())
				appServiceListObject.name = valueDataDataItemAppServiceListAppServiceListItem["Name"].asString();
			if(!valueDataDataItemAppServiceListAppServiceListItem["GmtCreate"].isNull())
				appServiceListObject.gmtCreate = valueDataDataItemAppServiceListAppServiceListItem["GmtCreate"].asString();
			if(!valueDataDataItemAppServiceListAppServiceListItem["GmtModified"].isNull())
				appServiceListObject.gmtModified = valueDataDataItemAppServiceListAppServiceListItem["GmtModified"].asString();
			if(!valueDataDataItemAppServiceListAppServiceListItem["BizId"].isNull())
				appServiceListObject.bizId = valueDataDataItemAppServiceListAppServiceListItem["BizId"].asString();
			if(!valueDataDataItemAppServiceListAppServiceListItem["ServiceType"].isNull())
				appServiceListObject.serviceType = valueDataDataItemAppServiceListAppServiceListItem["ServiceType"].asString();
			if(!valueDataDataItemAppServiceListAppServiceListItem["ServiceTypeText"].isNull())
				appServiceListObject.serviceTypeText = valueDataDataItemAppServiceListAppServiceListItem["ServiceTypeText"].asString();
			if(!valueDataDataItemAppServiceListAppServiceListItem["UserId"].isNull())
				appServiceListObject.userId = valueDataDataItemAppServiceListAppServiceListItem["UserId"].asString();
			if(!valueDataDataItemAppServiceListAppServiceListItem["Status"].isNull())
				appServiceListObject.status = valueDataDataItemAppServiceListAppServiceListItem["Status"].asString();
			if(!valueDataDataItemAppServiceListAppServiceListItem["Deleted"].isNull())
				appServiceListObject.deleted = std::stoi(valueDataDataItemAppServiceListAppServiceListItem["Deleted"].asString());
			if(!valueDataDataItemAppServiceListAppServiceListItem["StartTime"].isNull())
				appServiceListObject.startTime = valueDataDataItemAppServiceListAppServiceListItem["StartTime"].asString();
			if(!valueDataDataItemAppServiceListAppServiceListItem["EndTime"].isNull())
				appServiceListObject.endTime = valueDataDataItemAppServiceListAppServiceListItem["EndTime"].asString();
			if(!valueDataDataItemAppServiceListAppServiceListItem["Slug"].isNull())
				appServiceListObject.slug = valueDataDataItemAppServiceListAppServiceListItem["Slug"].asString();
			if(!valueDataDataItemAppServiceListAppServiceListItem["InstanceBizId"].isNull())
				appServiceListObject.instanceBizId = valueDataDataItemAppServiceListAppServiceListItem["InstanceBizId"].asString();
			if(!valueDataDataItemAppServiceListAppServiceListItem["EspBizId"].isNull())
				appServiceListObject.espBizId = valueDataDataItemAppServiceListAppServiceListItem["EspBizId"].asString();
			auto profile1Node = value["Profile"];
			if(!profile1Node["BizId"].isNull())
				appServiceListObject.profile1.bizId = profile1Node["BizId"].asString();
			if(!profile1Node["DesignType"].isNull())
				appServiceListObject.profile1.designType = profile1Node["DesignType"].asString();
			if(!profile1Node["DesignTypeText"].isNull())
				appServiceListObject.profile1.designTypeText = profile1Node["DesignTypeText"].asString();
			if(!profile1Node["ServiceSpec"].isNull())
				appServiceListObject.profile1.serviceSpec = profile1Node["ServiceSpec"].asString();
			if(!profile1Node["ServiceSpecText"].isNull())
				appServiceListObject.profile1.serviceSpecText = profile1Node["ServiceSpecText"].asString();
			if(!profile1Node["OrderId"].isNull())
				appServiceListObject.profile1.orderId = profile1Node["OrderId"].asString();
			if(!profile1Node["InstanceId"].isNull())
				appServiceListObject.profile1.instanceId = profile1Node["InstanceId"].asString();
			auto operationAddressNode = value["OperationAddress"];
			auto allActionsNode = operationAddressNode["Actions"]["ActionsItem"];
			for (auto operationAddressNodeActionsActionsItem : allActionsNode)
			{
				DataItem::AppServiceListItem::OperationAddress::ActionsItem actionsItemObject;
				if(!operationAddressNodeActionsActionsItem["ActionKey"].isNull())
					actionsItemObject.actionKey = operationAddressNodeActionsActionsItem["ActionKey"].asString();
				if(!operationAddressNodeActionsActionsItem["ActionText"].isNull())
					actionsItemObject.actionText = operationAddressNodeActionsActionsItem["ActionText"].asString();
				if(!operationAddressNodeActionsActionsItem["Href"].isNull())
					actionsItemObject.href = operationAddressNodeActionsActionsItem["Href"].asString();
				if(!operationAddressNodeActionsActionsItem["Enable"].isNull())
					actionsItemObject.enable = operationAddressNodeActionsActionsItem["Enable"].asString() == "true";
				appServiceListObject.operationAddress.actions.push_back(actionsItemObject);
			}
			dataObject.appServiceList.push_back(appServiceListObject);
		}
		auto profileNode = value["Profile"];
		if(!profileNode["CommodityCode"].isNull())
			dataObject.profile.commodityCode = profileNode["CommodityCode"].asString();
		if(!profileNode["PayTime"].isNull())
			dataObject.profile.payTime = profileNode["PayTime"].asString();
		if(!profileNode["BizId"].isNull())
			dataObject.profile.bizId = profileNode["BizId"].asString();
		if(!profileNode["TemplateId"].isNull())
			dataObject.profile.templateId = profileNode["TemplateId"].asString();
		if(!profileNode["TemplateEtag"].isNull())
			dataObject.profile.templateEtag = profileNode["TemplateEtag"].asString();
		if(!profileNode["OrderId"].isNull())
			dataObject.profile.orderId = profileNode["OrderId"].asString();
		if(!profileNode["SeoSite"].isNull())
			dataObject.profile.seoSite = profileNode["SeoSite"].asString();
		if(!profileNode["CustomerService"].isNull())
			dataObject.profile.customerService = profileNode["CustomerService"].asString();
		if(!profileNode["ApplicationType"].isNull())
			dataObject.profile.applicationType = profileNode["ApplicationType"].asString();
		if(!profileNode["ApplicationTypeText"].isNull())
			dataObject.profile.applicationTypeText = profileNode["ApplicationTypeText"].asString();
		if(!profileNode["DeployArea"].isNull())
			dataObject.profile.deployArea = profileNode["DeployArea"].asString();
		if(!profileNode["SiteVersion"].isNull())
			dataObject.profile.siteVersion = profileNode["SiteVersion"].asString();
		if(!profileNode["SiteVersionText"].isNull())
			dataObject.profile.siteVersionText = profileNode["SiteVersionText"].asString();
		if(!profileNode["OrdTime"].isNull())
			dataObject.profile.ordTime = profileNode["OrdTime"].asString();
		if(!profileNode["Source"].isNull())
			dataObject.profile.source = profileNode["Source"].asString();
		if(!profileNode["InstanceId"].isNull())
			dataObject.profile.instanceId = profileNode["InstanceId"].asString();
		auto appOperationAddressNode = value["AppOperationAddress"];
		auto allActions2Node = appOperationAddressNode["Actions"]["ActionsItem"];
		for (auto appOperationAddressNodeActionsActionsItem : allActions2Node)
		{
			DataItem::AppOperationAddress::ActionsItem3 actionsItem3Object;
			if(!appOperationAddressNodeActionsActionsItem["ActionKey"].isNull())
				actionsItem3Object.actionKey = appOperationAddressNodeActionsActionsItem["ActionKey"].asString();
			if(!appOperationAddressNodeActionsActionsItem["ActionText"].isNull())
				actionsItem3Object.actionText = appOperationAddressNodeActionsActionsItem["ActionText"].asString();
			if(!appOperationAddressNodeActionsActionsItem["Href"].isNull())
				actionsItem3Object.href = appOperationAddressNodeActionsActionsItem["Href"].asString();
			if(!appOperationAddressNodeActionsActionsItem["Enable"].isNull())
				actionsItem3Object.enable = appOperationAddressNodeActionsActionsItem["Enable"].asString() == "true";
			dataObject.appOperationAddress.actions2.push_back(actionsItem3Object);
		}
		data_.push_back(dataObject);
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
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());
	if(!value["PrePage"].isNull())
		prePage_ = value["PrePage"].asString() == "true";
	if(!value["NextPage"].isNull())
		nextPage_ = value["NextPage"].asString() == "true";
	if(!value["ResultLimit"].isNull())
		resultLimit_ = value["ResultLimit"].asString() == "true";
	if(!value["AllowRetry"].isNull())
		allowRetry_ = value["AllowRetry"].asString() == "true";
	if(!value["AppName"].isNull())
		appName_ = value["AppName"].asString();
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::string ListAppInstancesResult::getRootErrorMsg()const
{
	return rootErrorMsg_;
}

std::string ListAppInstancesResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

bool ListAppInstancesResult::getPrePage()const
{
	return prePage_;
}

int ListAppInstancesResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int ListAppInstancesResult::getPageSize()const
{
	return pageSize_;
}

bool ListAppInstancesResult::getAllowRetry()const
{
	return allowRetry_;
}

std::string ListAppInstancesResult::getNextToken()const
{
	return nextToken_;
}

int ListAppInstancesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<std::string> ListAppInstancesResult::getErrorArgs()const
{
	return errorArgs_;
}

int ListAppInstancesResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<ListAppInstancesResult::DataItem> ListAppInstancesResult::getData()const
{
	return data_;
}

std::string ListAppInstancesResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

bool ListAppInstancesResult::getResultLimit()const
{
	return resultLimit_;
}

std::string ListAppInstancesResult::getRootErrorCode()const
{
	return rootErrorCode_;
}

std::string ListAppInstancesResult::getAppName()const
{
	return appName_;
}

bool ListAppInstancesResult::getSynchro()const
{
	return synchro_;
}

std::string ListAppInstancesResult::getDynamicCode()const
{
	return dynamicCode_;
}

bool ListAppInstancesResult::getNextPage()const
{
	return nextPage_;
}

